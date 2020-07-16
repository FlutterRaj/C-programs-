int temp,flag=0;

temp=N;

while(temp!=1)
{
  if(temp%2!=0)
  {
    flag=1;
    break;
  }
  temp=temp/2;
}

if(flag==0)
  printf("%d is a number that can be expressed as power of 2.",N);
else
  printf("%d cannot be expressed as power of 2.",N);

}
