int triangle (int width, int height){
int array[5] = {0,1,2,3,4};
int area;
area = width * height/2;
return (area);
}


int main(int argc, char *argv[])
{
	int ret = triangle(4,2);
	return ret;

}
