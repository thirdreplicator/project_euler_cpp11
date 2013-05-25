all:
	clang++ -stdlib=libc++ -o ./bin/euler-1 ./src/euler-1.cpp
	clang++ -stdlib=libc++ -o ./bin/euler-2 ./src/euler-2.cpp
	clang++ -stdlib=libc++ -o ./bin/euler-3 ./src/euler-3.cpp

euler-1: euler-1.cpp
	clang++ -stdlib=libc++ -o ./bin/euler-1 ./src/euler-1.cpp

euler-2: euler-2.cpp
	clang++ -stdlib=libc++ -o ./bin/euler-2 ./src/euler-2.cpp

euler-3: euler-3.cpp
	clang++ -stdlib=libc++ -o ./bin/euler-3 ./src/euler-3.cpp
