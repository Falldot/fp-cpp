# fp-cpp
Игрушечная реализация фп идей на c++

# Требования

- bazelisk
```
go install github.com/bazelbuild/bazelisk@latest

export PATH=$PATH:$(go env GOPATH)/bin
```

# Setup

- Tests
```sh
make test
```

- Benchmark
```sh
make bench
```

- Bazel compile commands
```sh
make hedron
```