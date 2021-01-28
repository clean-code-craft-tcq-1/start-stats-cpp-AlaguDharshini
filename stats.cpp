#include "stats.h"
struct stat
{
    int min,max;
    float average;
};

struct stat myval;
auto Statistics::ComputeStatistics(const std::vector<T>&vect ) {
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

class StatsAlerter 
{
    private:
    float maxThreshold;
    bool ledalert;
    bool emailalert;
    struct IAlerter
    {
    EmailAlert emailAlert;
    LEDAlert ledAlert;
    }test;
    public:
    StatsAlerter(maxThresholdset, alertersset)
    {
     ledalert =false;
        emailalert = false;
        maxThreshold = maxThresholdset;
        test.emailAlert = alertersset.emailAlert;
        test.ledAlert   =alertersset.ledAlert;
    }
    void checkAndAlert(std::vector<T>&vect)
    {
      for (int i=1; i<vect.size(); i++) 
      {
        if(vect[i] >maxThresholdset)
        {
            emailalert = true;
            ledalert = true;
          break;
        }
      }
    }
    bool emailSent ()
    {
        return emailalert;
    }
    bool ledGlows()
    {
        return ledalert;
    }
};
