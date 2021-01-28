#include "stats.h"
struct stat
{
    int min,max;
    float average;
};
struct stat myval;
auto Statistics::ComputeStatistics(const std::vector<___>&vect ) {
    //Implement statistics here
    myval.min,myval.max =vect[i];
    myval.average =0.0;
    for (int i=1; i<vect.size(); i++) 
    {
        if(vect[i] <min)
            min =vect[i];
        if(vect[i] >max)
            max =vect[i];
        (average +=vect[i])/2;
    }
    return myval;
}
