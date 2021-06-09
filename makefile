main:
	g++ -g -static *cpp -o Main

clean:
	rm -f *o Main

run:
	./Main 
