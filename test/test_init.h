#ifndef INC_SRT_TESTINIT_H
#define INC_SRT_TESTINIT_H

#include <gtest/gtest.h>

namespace srt
{
class TestInit
{

private:
    int srtStartupVal;

    void testInitSetup();
    int testTearDown();

public:
    
    TestInit();
    ~TestInit();

    // Exposes return value from srt_startup() call in testInitSetup() 
    int getSrtStartupVal();

};

} //namespace

#endif