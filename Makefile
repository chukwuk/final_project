CC=g++
EXE_F=wallgame


all: $(EXE_F)

$(EXE_F):mazelevel.o mazelevel.hpp implementation.cpp intrepidstudent.o intrepidstudent.hpp openspace.o openspace.hpp wall.o wall.hpp ta.o ta.hpp supplem.o supplem.hpp mazelocation.hpp instructor.o instructor.cpp
	$(CC) ta.o implementation.cpp mazelevel.o intrepidstudent.o openspace.o supplem.o instructor.o wall.o -o $(EXE_F)

ta.o:ta.cpp ta.hpp mazeperson.hpp
	$(CC) -c ta.cpp -o ta.o

mazelevel.o:mazelevel.cpp mazelevel.hpp mazelocation.hpp
	$(CC) -c mazelevel.cpp -o mazelevel.o

intrepidstudent.o:intrepidstudent.cpp intrepidstudent.hpp mazeperson.hpp
	$(CC) -c intrepidstudent.cpp -o intrepidstudent.o

openspace.o:openspace.cpp openspace.hpp mazelocation.hpp
	$(CC) -c openspace.cpp -o openspace.o

wall.o:wall.cpp wall.hpp mazelocation.hpp
	$(CC) -c wall.cpp -o wall.o

supplem.o:supplem.cpp supplem.hpp mazelocation.hpp mazeperson.hpp openspace.hpp ta.hpp
	$(CC) -c supplem.cpp -o supplem.o

instructor.o:instructor.cpp instructor.hpp mazeperson.hpp
	$(CC) -c instructor.cpp -o instructor.o

clean:
	rm -rf o*
