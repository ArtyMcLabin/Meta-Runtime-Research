echo "are you on cygwin windows? y/n"
read answer
if [ 'y'=$answer ];
then
	echo "windows sucks m8"
	g++ run.cpp -O3 -DOS_WINDOWS -o run.exe && ./run.exe
else
	echo "linux ftw m8"
	g++ run.cpp -O3 -o run && ./run
fi

