int main()
{
	int x,y,z;
	
	x=5;
	x=x+3;
	y=x++;
	z=10;
	y--;
	
	printf("\n %d %d %d",x--,y++,z--);
	printf("\n %d %d %d",++x,y,++z);
}
