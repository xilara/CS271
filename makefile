all: Lab10

Package.o: Package.cpp Package.h 
	g++ -c Package.cpp

TwoDayPackage.o: TwoDayPackage.cpp TwoDayPackage.h
	g++ -c TwoDayPackage.cpp

Lab10.o: Lab10.cpp Package.h TwoDayPackage.h
	g++ -c Lab10.cpp

Lab10: Lab10.o Package.o TwoDayPackage.o
	g++ Lab10.o Package.o TwoDayPackage.o -o Lab10

clean:
	rm *.o
