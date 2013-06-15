all:
	clang++ -stdlib=libc++ -std=c++0x -o ./bin/euler-1 ./src/euler-1.cpp
	clang++ -stdlib=libc++ -std=c++0x -o ./bin/euler-2 ./src/euler-2.cpp
	clang++ -stdlib=libc++ -std=c++0x -o ./bin/euler-3 ./src/euler-3.cpp
	clang++ -stdlib=libc++ -std=c++0x -o ./bin/euler-9 ./src/euler-9.cpp

euler-1: euler-1.cpp
	clang++ -stdlib=libc++ -std=c++0x -o ./bin/euler-1 ./src/euler-1.cpp

euler-2: euler-2.cpp
	clang++ -stdlib=libc++ -std=c++0x -o ./bin/euler-2 ./src/euler-2.cpp

euler-3: euler-3.cpp
	clang++ -stdlib=libc++ -std=c++0x -o ./bin/euler-3 ./src/euler-3.cpp

euler-9: ./src/euler-9.cpp
	clang++ -stdlib=libc++ -std=c++0x -o ./bin/euler-9 ./src/euler-9.cpp

clean:
	rm bin/*
