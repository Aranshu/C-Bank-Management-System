#ifndef Caculator_Include
#define Caculator_Include

int addition (int array_name[] , int size_of_array)
{
    int result=0,index=0;
    for(index=0;index<size_of_array;index++)
    {
        result+=array_name[index];
    }
    return result;
}

int subtraction (int array_name[] , int size_of_array)
{
    int result=array_name[0],index=0;
    for(index=0;index<size_of_array;index++)
    {
        result-=array_name[index];
    }
    return result;
}
int multiply (int array_name[] , int size_of_array)
{
    int result=1,index=0;
    for(index=0;index<size_of_array;index++)
    {
        result*=array_name[index];
    }
    return result;
}
int divide (int array_name[] , int size_of_array)
{
     int result=array_name[0],index=0;
    for(index=0;index<size_of_array;index++)
    {
        result/=array_name[index];
    }
    return result;
}
#endif