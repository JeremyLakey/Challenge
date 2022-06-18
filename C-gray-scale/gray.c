struct Pixel {
char red;
char green;
char blue;
}

void greyPxiel(Pixel& pixel) {
int  gray = ((int)pixel.red) + ((int)pixel.green) + ((int)pixel.blue);
int gray /= 3;
pixel.red = gray;
pixel.blue = gray;
pixel.green = gray;
}



void grayAll(Pixel[] pixels, int num) {
  for (int i = 0; i < num; i++) {
    grayPixel(pixels[i]);
  }
}



