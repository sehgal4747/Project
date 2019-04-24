 #include <stdio.h>
    void main ()
    {
 
        int ppl[10];
  int i, j=65, z, str;
 int s[10],s1[10],s2[10],s3[10],s4[10],s5[10],s6[10],s7[10],s8[10],s9[10];
 int rt;
   	for(j; j<75; ){
	T:
		printf("Enter No. of gift items for %c :", j);
	j=j+1;
 for(i; i<10; ){
 scanf("%d", &ppl[i]);
  s[0]=ppl[0];
  s1[1]=ppl[1];
  s2[2]=ppl[2];
  s3[3]=ppl[3];
  s4[4]=ppl[4];
  s5[5]=ppl[5]; 
  s6[6]=ppl[6]; 
  s7[7]=ppl[7]; 
  s8[8]=ppl[8];
   s9[9]=ppl[9];
 i=i+1;
 goto T;
 }
}


 
        for (i = 0; i < 10; ++i) 
          {
            for (z=i+1; z<10; z++) 
                {
                if (ppl[i] < ppl[z]) 
                   {
                         str = ppl[i];
                        ppl[i] = ppl[z];
                           ppl[z] = str;
                }
            } 
        }
        
 
        printf("\nThe numbers arranged according to number of gift items:\n\n");
 
              printf("\tOrder \t \t No. Of gift items\n");
        for (i = 0; i < 10; i++) 
        {
           
            if(s[0]==ppl[i]){
            	printf("\tA: \t \t \t");
			}
             if(s1[1]==ppl[i]){
            	printf("\tB:\t \t \t ");
			}
             if(s2[2]==ppl[i]){
            	printf("\tC: \t \t \t");
			}
			if(s3[3]==ppl[i]){
            	printf("\tD: \t \t \t ");
			}	
			if(s4[4]==ppl[i]){
            	printf("\tE: \t \t \t");
			}	
			if(s5[5]==ppl[i]){
            	printf("\tF: \t \t \t ");
			}	
			if(s6[6]==ppl[i]){
            	printf("\tG: \t \t \t");
			}
			if(s7[7]==ppl[i]){
            	printf("\tH: \t \t \t");
			}
			if(s8[8]==ppl[i]){
            	printf("\tI: \t \t \t");
			}
			if(s9[9]==ppl[i]){
            	printf("\tJ: \t \t \t");
			}
			 printf("%d\n", ppl[i]);
        }
 
    }
