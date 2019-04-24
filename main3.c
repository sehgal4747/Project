 #include <stdio.h>
    void main ()
    {
 
        int ppl[10];
  int i, j=65, z, str;
 int rt;
   	for(j; j<75; ){
	T:
		printf("Enter No. of gift items for %c :", j);
	j=j+1;
 for(i; i<10; )        //loop for taking the input 				Complexity : n
 {
 scanf("%d", &ppl[i]);

 i=i+1;
 goto T;
 }
}


 
        for (i = 0; i < 10; ++i)             // for is to compute decreasing order    		Complexity=n*n
          {
            for (z=i+1; z<10; z++) 			// for is to compute decreasing order
                {
                if (ppl[i] < ppl[z]) 		//checks the smaller input 
                   {
                         str = ppl[i];            
                        ppl[i] = ppl[z];
                           ppl[z] = str;
                }
            } 
        }
        
 
     
 
             

