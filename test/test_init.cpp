#include "gtest/gtest.h"
#include <iostream>

#include "srt.h"
#include "test_init.h"

void srt::TestInit::testInitSetup()
{
    srtStartupVal = srt_startup();
}

int srt::TestInit::testTearDown()
{
    return srt_cleanup();
}

srt::TestInit::TestInit()
{
    testInitSetup();
}

srt::TestInit::~TestInit()
{
    EXPECT_NE(testTearDown(), SRT_ERROR);
}

int srt::TestInit::getSrtStartupVal()
{
    return srtStartupVal;
}