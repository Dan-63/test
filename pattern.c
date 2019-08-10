#include <drawlib.h>

int main(void) {
	int i;

	dl_initialize(1.0); 
	
	dl_clear(dl_color_from_rgb(0,0,0));
	
	for (i = 0; i < 30; i++) {
		/*dl_ellipse(320, 240, 0 + i * 10, 0 + i * 15, 0 + i * 5 , 0, 360,  dl_color_from_rgb(255,0 + 5*i, 0 + 10*i),4, 0);*/
		dl_circle(0,0,30 + i * 15, dl_color_from_rgb(255-i*5,255-i*2,255-i*2),2,0);

		dl_circle(640,0,30 + i * 15, dl_color_from_rgb(255-i*5,255-i*2,255-i*2),2,0);

		dl_circle(0,480,30 + i * 15, dl_color_from_rgb(255-i*5,255-i*2,255-i*2),2,0);

		dl_circle(640,480,30 + i * 15, dl_color_from_rgb(255-i*5,255-i*2,255-i*2),2,0);

		dl_circle(320,240,30 + i * 15, dl_color_from_rgb(255-i*10,255-i*4,255-i*4),2,0);

	  dl_rectangle(315 - 10 * i, 235 - 10 * i, 325 + 10 * i, 245 + 10 * i, dl_color_from_rgb(100 + 13 * i, 255 - 18 * i, 165 + 8 * i), 2, 0);

  }  

/*カービィ*/
dl_ellipse(230,240,40,30,340,0,360,dl_color_from_rgb(232,143,202),2,-1);
dl_ellipse(410,240,40,30,20,0,360,dl_color_from_rgb(232,143,202),2,-1);
dl_ellipse(270,310,50,40,320,0,360,dl_color_from_rgb(155,28,56),2,-1);
dl_ellipse(370,310,50,40,40,0,360,dl_color_from_rgb(155,28,56),2,-1);

dl_circle(320,240,100,dl_color_from_rgb(232,143,202),2,-1);

dl_ellipse(300,210,10,30,0,0,360,dl_color_from_rgb(97,83,70),2,-1);
dl_ellipse(340,210,10,30,0,0,360,dl_color_from_rgb(97,83,70),2,-1);

dl_ellipse(300,197,8,15,0,0,360,DL_C("white"),2,-1);
dl_ellipse(340,197,8,15,0,0,360,DL_C("white"),2,-1);

dl_ellipse(280,240,10,5,0,0,360,dl_color_from_rgb(231,86,133),2,-1);
dl_ellipse(360,240,10,5,0,0,360,dl_color_from_rgb(231,86,133),2,-1);

dl_ellipse(320,270,7,10,0,0,360,dl_color_from_rgb(89,33,52),2,-1);

dl_ellipse(300,210,10,30,0,0,360,dl_color_from_rgb(97,83,70),2,0); 
dl_ellipse(340,210,10,30,0,0,360,dl_color_from_rgb(97,83,70),2,0);



	while (1) {
		dl_wait(1.0);
  } 

	return 0;
}

