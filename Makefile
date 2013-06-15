targets := $(addprefix euler-,$(shell seq 1 100))
bins    := $(addprefix ./bin/,$(targets))
CC       = clang++ -stdlib=libc++ -std=c++0x

all: $(bins)

./bin/%: src/%.cpp
	$(CC) -o $@ $<

clean:
	rm bin/*
