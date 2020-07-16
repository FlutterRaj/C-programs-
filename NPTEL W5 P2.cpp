int count=0,tNum;
    tNum=N;
 
    while(tNum>0){
        count++;
        tNum/=10;
    }
 
    printf("The number %d contains %d digits.",N,count);
}
