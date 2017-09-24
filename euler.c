//sum of all multiples of 3 or 5 below 1000

int main(){
  int x=1;
  int sum=0;
  while (x<1000){
    if(x%3==0||x%5==0){
      sum+=x;
    }
    x+=1;
  }
  printf("ans1: %d\n",sum);
  //smallest positive number that is divisible by all numbers 1-20
  
  int i=1;
  int num=1;
  while(num<=20){
    if(i%num==0){
      num++;
      if(num==20){
	printf("%d\n", i);
	return;
      }
    }
    else{
      num=1;
      i+=1;
    }
  }
  //return; 
   
  // return sum;
}

