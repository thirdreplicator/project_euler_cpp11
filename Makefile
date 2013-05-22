all:
	clang++ -stdlib=libc++ -o euler-1 euler-1.cpp
	clang++ -stdlib=libc++ -o euler-2 euler-2.cpp


euler-1: euler-1.cpp

euler-2: euler-2.cpp
	clang++ -stdlib=libc++ -o euler-2 euler-2.cpp
