run:
	bazelisk run //test:fp-cpp

bench:
	bazelisk run //benchmark:fp-cpp

hedron:
	bazelisk run @hedron_compile_commands//:refresh_all