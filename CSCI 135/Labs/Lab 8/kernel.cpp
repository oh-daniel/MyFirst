/*
Daniel Oh
CSCI 135
Gennadiy Maryash
Lab 8 Task G
This program implements a horizontal edge detection operation.
*/


#include <iostream>
#include <cassert>
#include <cstdlib>
#include <fstream>

using namespace std;

const int MAX_H = 512;
const int MAX_W = 512;

// Reads a PGM file.
// Notice that: height and width are passed by reference!
void readImage(int image[MAX_H][MAX_W], int &height, int &width) {
	char c;
	int x;
	ifstream instr;
	instr.open("inImage.pgm");

	// read the header P2
	instr >> c;
	assert(c == 'P');
	instr >> c;
	assert(c == '2');

	// skip the comments (if any)
	while ((instr>>ws).peek() == '#') {
		instr.ignore(4096, '\n');
	}

	instr >> width;
	instr >> height;

	assert(width <= MAX_W);
	assert(height <= MAX_H);
	int max;
	instr >> max;
	assert(max == 255);

	for (int row = 0; row < height; row++)
		for (int col = 0; col < width; col++)
			instr >> image[row][col];
	instr.close();
	return;
}


// Writes a PGM file
// Need to provide the array data and the image dimensions
void writeImage(int image[MAX_H][MAX_W], int height, int width) {
	ofstream ostr;
	ostr.open("outImage.pgm");
	if (ostr.fail()) {
		cout << "Unable to write file\n";
		exit(1);
	};

	// print the header
	ostr << "P2" << endl;
	// width, height
	ostr << width << ' ';
	ostr << height << endl;
	ostr << 255 << endl;

	for (int row = 0; row < height; row++) {
		for (int col = 0; col < width; col++) {
			assert(image[row][col] < 256);
			assert(image[row][col] >= 0);
			ostr << image[row][col] << ' ';
			ostr << endl;
		}
	}
	ostr.close();
	return;
}

int main() {

	int img[MAX_H][MAX_W];
	int h, w;

	readImage(img, h, w); // read it from the file "inImage.pgm"
	// h and w were passed by reference and
	// now contain the dimensions of the picture
	// and the 2-dimesional array img contains the image data

	// Now we can manipulate the image the way we like
	// for example we copy its contents into a new array
	int out[MAX_H][MAX_W];

	for(int row = 0; row < h; row++) {
		for(int col = 0; col < w; col++) {
			out[row][col] = img[row][col];
		}
	}

	// and save this new image to file "outImage.pgm"
	writeImage(out, h, w);

    //specified that we should make a new array

/*
Remark 1: Note that this is a sliding window operator unlike the non-overlapping window pixelization
operator in the previous task. That is, the considered window is always a window around the pixel whose
value is being computed.

Remark 2: You shouldn’t overwrite the original array. Make a new array for the output, 
and write the resulting pixel color into the new array.

Remark 3: There are several ways to handle the pixels on the borders, which don’t have all 8 neighbors
available. Come up with any reasonable way to assign their colors (you can assume that
the non-existing neighbors are black, or make the boundary wrap around, or even simply 
assign black color to the boundary pixels in the output).

Remark 4: If the resulting color is less than 0 or greater than 255, make them 0 and 255 respectively,
otherwise writeImage function will complain that the colors are out of range.*/

    int bruh[MAX_H + 2][MAX_W + 2];
    memset(bruh, 0, sizeof(bruh));

    

}
