/* DAY 2 OF C CODING
 Write a program to calculate the area and circumference of a circle given its radius*/

    #include <stdio.h>
	int main()
	{   
	
    	printf("Name - Avantika\nSap ID - 590028347\nCourse - Bsc CS\nBatch - 1st");
    	printf("\n-----------------------------------\n");

	    float r,A,P;
	    printf("Give the value of r: ");
	    scanf("%f",&r);
	    A=3.14*r*r;   
	    P=2*3.14*r;  // Perimeter formula for circle 3.14 represents Pie value
	    printf("Area of circle is: %f \n",A);
	      
	    printf("Perimeter of circle is :%f \n",P);

return 0;
}
