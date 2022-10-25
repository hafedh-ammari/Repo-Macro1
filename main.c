/**
  ****************************************************************************
  * @file    main.c
  * @author  HAFEDH AMMARI
  * @brief   Macros 
  * @version V1.0.0
  * @date    25-10-2022
  *****************************************************************************/
/* Includes ------------------------------------------------------------------*/
/* Macros --------------------------------------------------------------------*/

//#define INTEL
#define SOM(a, b)       (a+b)
#define MIN(a, b)       ((a) < (b) ? (a) : (b))

//#define OTHERS
#define MUL(a, b)       (a*b)
#define MAX(a, b)       ((a) < (b) ? (b) : (a))
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Main program
  * @param  None
  * @retval None
  */
int main(void)
{
  //Declaration des variables
  int a=5, b=4;


  // Define macro SOM to find sum of two numbers
#ifdef SOM 
     int ResultSum = SOM(a,b);
#endif
  // Define macro MIN to find min of two numbers
#ifdef MIN
     int ResultMin = MIN(a,b);
#endif
     // Define macro MUL to find mul of two numbers
#ifdef MUL
     int ResultMul = MUL(a,b);
#endif
     // Define macro MAX to find max of two numbers
#ifdef MAX
     int ResultMax = MAX(a,b);
#endif     
  while(1)
  {
  }
}

/**************************************END OF FILE**************************************/
# Repo-Macro1
