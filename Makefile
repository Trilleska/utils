all:
	g++ src/amiempty.cpp -o ./amiempty
	g++ src/cdir.cpp -o ./cdir
	g++ src/hn.cpp -o ./hn

install:
	sudo mv ./amiempty /usr/bin/
	sudo mv ./cdir /usr/bin/
	sudo mv ./hn /usr/bin/
