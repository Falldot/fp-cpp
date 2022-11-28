load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "fp-cpp",
    srcs = glob(["*.cpp", "*.h"]),
    deps = ["@com_google_benchmark//:benchmark_main", "//fp-cpp:core"],
)