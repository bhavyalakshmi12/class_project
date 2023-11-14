#include <stdio.h>
main()
{
    float V1;
    printf("Enter V1=");
    scanf("%f",&V1);
    float R1;
    printf("Enter R1=");
    scanf("%f",&R1);
    float R2;  
    printf("Enter R2=");
    scanf("%f",&R2);
    
    
    float Vth = V1 * (R2 / (R1 + R2));
    float Rth = R1 * R2 / (R1 + R2);
    
    printf("Thevenin Equivalent Voltage (Vth): %.2f V\n", Vth);
    printf("Thevenin Equivalent Resistance (Rth): %.2f ohms\n", Rth);
  
}
