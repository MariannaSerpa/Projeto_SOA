all: Butterworth.o CommandLine.o INIReader.o ini.o main.o MotionDetection.o RieszTransform.o VideoSource.o
	g++ Butterworth.o CommandLine.o INIReader.o ini.o main.o MotionDetection.o RieszTransform.o VideoSource.o -o cribsense.out `pkg-config --cflags --libs opencv4` -lpthread -lcanberra
Butterworth.o: Butterworth.cpp
	g++ -c Butterworth.cpp `pkg-config --cflags --libs opencv4` -lpthread -lcanberra
CommandLine.o: CommandLine.cpp
	g++ -c CommandLine.cpp `pkg-config --cflags --libs opencv4` -lpthread -lcanberra
INIReader.o: INIReader.cpp
	g++ -c INIReader.cpp `pkg-config --cflags --libs opencv4` -lpthread -lcanberra
ini.o: ini.c
	gcc -c ini.c
main.o: main.cpp
	g++ -c main.cpp `pkg-config --cflags --libs opencv4` -lpthread -lcanberra
MotionDetection.o: MotionDetection.cpp
	g++ -c MotionDetection.cpp `pkg-config --cflags --libs opencv4` -lpthread -lcanberra
RieszTransform.o: RieszTransform.cpp
	g++ -c RieszTransform.cpp `pkg-config --cflags --libs opencv4` -lpthread -lcanberra
VideoSource.o: VideoSource.cpp
	g++ -c VideoSource.cpp `pkg-config --cflags --libs opencv4` -lpthread -lcanberra
clean:
	rm -f *.out *.o
