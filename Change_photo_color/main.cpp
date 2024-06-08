#include <graphics.h>

int main()
{
	initgraph(2280, 920);

	IMAGE img;
	loadimage(&img, "res/touming.png");

	DWORD* src_buffer = GetImageBuffer(&img);
	DWORD buffer_white = 0xffffff;				// 白色（目标色——图片改成白色）

	int w = img.getwidth();
	int h = img.getheight();

	for (int i = 0; i < w * h; i++)
	{
		if (src_buffer[i] != 0x000000)
		src_buffer[i] = buffer_white;
	}

	putimage(30, 30, &img);


	system("pause");

	return 0;

}