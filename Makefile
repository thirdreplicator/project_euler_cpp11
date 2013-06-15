sources      := $(wildcard src/*.cpp)
targets      := $(basename $(notdir $(sources)))
bins         := $(addprefix ./bin/,$(targets))
CC            = clang++ -stdlib=libc++ -std=c++0x

all: $(bins)

./bin/%: src/%.cpp
	$(CC) -o $@ $<

$(targets): ./bin/$@
	make ./bin/$@

clean:
	rm bin/*
