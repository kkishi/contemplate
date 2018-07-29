#include <iostream>

#include "gflags/gflags.h"
#include "glog/logging.h"

DEFINE_string(message, "Hello", "");

int main(int argc, char* argv[]) {
  google::InitGoogleLogging(argv[0]);
  google::InstallFailureSignalHandler();

  gflags::ParseCommandLineFlags(&argc, &argv, true);

  LOG(INFO) << FLAGS_message;
}
