#include "gtest/gtest.h"

#include "defs.h"
#include "message.h"

GTEST_API_ int main(int argc, char **argv)
{
  testing::InitGoogleTest(&argc, argv);
  Message::initMaxSize(MAX_PAYLOAD_SIZE);
  Message::initMaxSeqNo(UINT64_MAX);
  return RUN_ALL_TESTS();
}
