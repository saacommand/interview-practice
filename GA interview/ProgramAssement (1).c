#include<stdio.h>

#define DLE 0x10
#define ID 0x02
#define EXT 0x0F
#define BUF_LEN ()

typedef struct{
	float latitude;
	float longitude;
	float position;
	float velocity;
	float roll;
	float pitch;
	float power;
	float yaw;
}Position;

/*initiailize the structure data (variable) with dummy data*/
void init()
{
	//TODO
}

/*
Build packet, using the dummy datastructure define init and packet them in this format
DLE ID <Position Data> EXT. if any data parts is equal DLE value dupplicate them.

eg. 0x10 0x20 < 0x01, 0x02, 0x10, 010, 0x23,.....> 0x0F
*/

int buildPacket()
{
	//TODO
}

/*
printData, print build packet to terminal.
*/

void printData()
{
	//TODO
}

int main(int argc, char **argv)
{
	Position uav;
	char buf[BUF_LEN];
	unsigned int len;	
	
	printf("\nBuild Packets ...\n\n");
	
	init(&uav);

	len = buildPacket(&uav, buf);

	printData(buf, BUF_LEN);
	
	return 0;
}
