#include <stdio.h>

int main()
{
    float rainfall_data[5][12] = {
    {12.5, 15.3, 20.1, 25.4, 30.2, 150.3, 200.5, 180.4, 120.6, 80.2, 40.3, 20.1},  // Year 1
    {10.2, 14.8, 18.7, 22.5, 28.9, 140.2, 190.4, 170.3, 110.5, 75.1, 35.6, 18.9},  // Year 2
    {11.0, 13.5, 19.3, 24.0, 29.5, 145.0, 195.0, 175.0, 115.0, 78.0, 38.0, 19.5},  // Year 3
    {13.0, 16.0, 21.0, 26.0, 31.0, 155.0, 205.0, 185.0, 125.0, 85.0, 42.0, 22.0},  // Year 4
    {12.0, 15.0, 20.0, 25.0, 30.0, 150.0, 200.0, 180.0, 120.0, 80.0, 40.0, 20.0}   // Year 5
    };
    
    float yearly_rain;
    float average_monthly_rain = 0.0;
    
    for (int i = 0; i < 5; i++) {
        yearly_rain = 0.0;
        for (int j = 0; j < 12; j++) {
            // printf("%3.1f\n", rainfall_data[i][j]);
            yearly_rain += rainfall_data[i][j];
            average_monthly_rain += rainfall_data[i][j];
        }
        printf("Rain for Year %d is %.2f\n", i, yearly_rain/12);
    }
    printf("Average monthly rain: %20.2f\n", yearly_rain/(12*5));
	return 0;
}
