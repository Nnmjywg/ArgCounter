# Copyright (c) 2017 Nnmjywg

_target = ""

all:
	read _target
	make $_target

myArgs-c:
	gcc -o ArgCounter-c myArgs.c
myArgs-cxx:
	g++ -o ArgCounter-cxx myArgs.cc
