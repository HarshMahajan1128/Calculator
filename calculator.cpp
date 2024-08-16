#include <iostream>
using namespace std;

// trigno, expo, quad, log
    // for x belonging to 0 to 2
// double sqrt(double x){
//     double c;
//     c = 1 + ((x-1)/2)
//         - ((x-1)*(x-1)/8) + ((x-1)*(x-1)*(x-1)/16) - (5*(x-1)*(x-1)*(x-1)*(x-1)/128) 
//         + (7*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)/256) - (21*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)/1024) 
//         + (231*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)/14336) ;
//     return c;
// }

// double ln(double x){
//     for (int i = 0; i < 20; i++)
//     {
//         double c;
//         c = (x-1)/(x+1);
//         return c*c*c;
//     }
    
// }
// double sin(double x){
//     double c;
// for (int i = 1; i < 20; i++ )
// {
//    c = x/i ;
//    i++;
// }
// }
double sqrt(double x){
    double c;
    c = 1 + ((x-1)/2)
        - ((x-1)*(x-1)/8) + ((x-1)*(x-1)*(x-1)/16) - (5*(x-1)*(x-1)*(x-1)*(x-1)/128) 
        + (7*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)/256) - (21*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)/1024) 
        + (231*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)*(x-1)/14336) ;
    return c;


}

double add(double a, double b){
    return a+b;
}

double diff(double a, double b){
    return a-b;
}

double mul(double a, double b){
    return a*b;
}

double quot(double a, double b){
    return a/b;
}

double sin(double x){
    double c = x - ((x*x*x)/6)
     + ((x*x*x*x*x)/120) - ((x*x*x*x*x*x*x)/5040)
     + ((x*x*x*x*x*x*x*x*x)/362880) - ((x*x*x*x*x*x*x*x*x*x*x)/39916800)
     + ((x*x*x*x*x*x*x*x*x*x*x)/6227020800) - ((x*x*x*x*x*x*x*x*x*x*x*x*x*x*x)/1307674368000);
     
    return c;
}

double cos(double x){
    double f = 1 - ((x*x)/2) 
    + ((x*x*x*x)/24) - ((x*x*x*x*x*x)/720) 
    + ((x*x*x*x*x*x*x*x)/40320) - ((x*x*x*x*x*x*x*x*x*x)/3628800) 
    + ((x*x*x*x*x*x*x*x*x*x*x*x)/479001600) - ((x*x*x*x*x*x*x*x*x*x*x*x*x*x)/87178291200)
    + ((x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x)/20922789888000) - ((x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x*x)/6402373705728000);
    return f;
}

double tan(double x){
    double g = x + ((x*x*x)/3) + (2*(x*x*x*x*x)/15) + (17*(x*x*x*x*x*x*x)/315) + (62*(x*x*x*x*x*x*x*x*x)/2835) + (1382*(x*x*x*x*x*x*x*x*x*x*x)/155925);
    return g;
}

double cosec(double x){
    double c = 1/sin(x);
    return c;
}

double sec(double x){
    double l = 1/cos(x);
    return l;
}

double cot(double x){
    double g = 1/tan(x);
    return g;
}

double ln(double x){
    double c = 2*((x-1)/(x+1) + 
    (1/3)*(x-1)/(x+1)*(x-1)/(x+1)*(x-1)/(x+1) + 
    (1/5)*(x-1)/(x+1)*(x-1)/(x+1)*(x-1)/(x+1)*(x-1)/(x+1)*(x-1)/(x+1) + 
    (1/7)*(x-1)/(x+1)*(x-1)/(x+1)*(x-1)/(x+1)*(x-1)/(x+1)*(x-1)/(x+1)*(x-1)/(x+1)*(x-1)/(x+1) +
    (1/9)*(x-1)/(x+1)*(x-1)/(x+1)*(x-1)/(x+1)*(x-1)/(x+1)*(x-1)/(x+1)*(x-1)/(x+1)*(x-1)/(x+1)*(x-1)/(x+1)*(x-1)/(x+1) +
    (1/11)*(x-1)/(x+1)*(x-1)/(x+1)*(x-1)/(x+1)*(x-1)/(x+1)*(x-1)/(x+1)*(x-1)/(x+1)*(x-1)/(x+1)*(x-1)/(x+1)*(x-1)/(x+1)*(x-1)/(x+1)*(x-1)/(x+1) +
    (1/13)*(x-1)/(x+1)*(x-1)/(x+1)*(x-1)/(x+1)*(x-1)/(x+1)*(x-1)/(x+1)*(x-1)/(x+1)*(x-1)/(x+1)*(x-1)/(x+1)*(x-1)/(x+1)*(x-1)/(x+1)*(x-1)/(x+1)*(x-1)/(x+1)*(x-1)/(x+1)) ;
    return c;
}


double exp(double a ,double x){
    double c = 1 + (x*ln(a)) + ((x*ln(a)*x*ln(a))/2) 
    + ((x*ln(a)*x*ln(a)*x*ln(a))/6) + ((x*ln(a)*x*ln(a)*x*ln(a)*x*ln(a))/24) + ((x*ln(a)*x*ln(a)*x*ln(a)*x*ln(a)*x*ln(a))/120) 
    + ((x*ln(a)*x*ln(a)*x*ln(a)*x*ln(a)*x*ln(a)*x*ln(a))/720) + ((x*ln(a)*x*ln(a)*x*ln(a)*x*ln(a)*x*ln(a)*x*ln(a)*x*ln(a))/5040)
    + ((x*ln(a)*x*ln(a)*x*ln(a)*x*ln(a)*x*ln(a)*x*ln(a)*x*ln(a)*x*ln(a))/40320) + ((x*ln(a)*x*ln(a)*x*ln(a)*x*ln(a)*x*ln(a)*x*ln(a)*x*ln(a)*x*ln(a)*x*ln(a))/362880);
    return c;
    }

double quad(double a, double b, double c){
    double h;
    h = sqrt((b*b)-(4*a*c));
    if(b*b > 4*a*c){
        cout<<"This equation has real roots"<<endl;
        cout<<"The value of roots are "<< ((-b/2) + (h/2)) <<" & " << ((-b/2) - (h/2));
    }
    else if(b*b == 4*a*c) {
        cout<<"This equation has real and equal roots"<<endl;
        cout<<"The value of the root is "<< (-b/2);
    }
    else if(b*b < 4*a*c) {
        cout<<"This equation has imaginary roots"<<endl;
    }
    return a,b,c;
}

// double enter1(double num1){
//     cout<<"Please the enter the value of first operator"<<endl;
//     cin>>num1;
//     return num1;
// }

// double enter2(double num2){
//     cout<<"Please the enter the value of second operator"<<endl;
//     cin>>num2;
//     return num2;
// }

int main(){
    int a;
    cout<<"Welcome! to the Calculator made by Harsh"<<endl<<endl<<endl;
    cout<<"You can perform the following task using this calculator : "<<endl<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Substraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;
    cout<<"5. Exponent"<<endl;
    cout<<"6. Trignometry"<<endl;
    cout<<"7. Quadratic"<<endl;
    cout<<"8. Logarithm";

    

    
    while(true){
        cout<<endl<<endl<<"Please select the respective serial number for the corresponding task you want to perform."<<endl;
        cin>>a;
        cout<<endl;


    if(a==1){
        double num1,num2;
        cout<<"Please enter the value for a+b"<<endl;
        // enter1(num1);
        // enter2(num2);
        cout<<"Please enter the value of first operator"<<endl;
        cin>>num1;
        cout<<"Please enter the value of second operator"<<endl;
        cin>>num2;
        cout<<"The sum of "<<num1 <<" and "<<num2 <<" is "<<add(num1,num2);
    }
    else if(a==2){
        double num1,num2;
        cout<<"Please enter the value for a-b"<<endl;
        // enter1(num1);
        // enter2(num2);
        cout<<"Please enter the value of first operator"<<endl;
        cin>>num1;
        cout<<"Please enter the value of second operator"<<endl;
        cin>>num2;
        cout<<"The difference of "<<num2 <<" from "<<num1 <<" is "<<diff(num1,num2);
    }
    else if(a==3){
        double num1,num2;
        cout<<"Please enter the value for a*b"<<endl<<endl;
        // enter1(num1);
        // enter2(num2);
        cout<<"Please enter the value of first operator"<<endl;
        cin>>num1;
        cout<<endl<<"Please enter the value of second operator"<<endl;
        cin>>num2;
        cout<<endl<<"The product of "<<num1 <<" and "<<num2 <<" is "<<mul(num1,num2);
    }
    else if(a==4){
        double num1,num2;
        cout<<"Please enter the value for a/b"<<endl<<endl;
        // enter1(num1);
        // enter2(num2);
        cout<<"Please enter the value of first operator"<<endl;
        cin>>num1;
        cout<<"Please enter the value of second operator"<<endl;
        cin>>num2;
        cout<<endl<<"The value of "<<num1 <<" / "<<num2 <<" is "<<quot(num1,num2);
    }
    else if(a==5){
        double num1, num2;
        cout<<"Please enter the values for a^x "<<endl<<endl;
        cout<<"Please enter the value of a"<<endl;
        cin>>num1;
        cout<<"Please enter the value of x"<<endl;
        cin>>num2;
        cout<<"The value of "<<num1<<"^"<<num2<<" is "<<exp(num1, num2)<<endl;

    }
    else if(a==6){
        float v;
        cout<<"Please choose any one from the following trignometric operations : "<<endl<<endl;
        cout<<"a) sin(x)"<<endl;
        cout<<"b) cos(x)"<<endl;
        cout<<"c) tan(x)"<<endl;
        cout<<"d) cosec(x)"<<endl;
        cout<<"e) sec(x)"<<endl;
        cout<<"f) cot(x)"<<endl<<endl;
        cout<<"Please enter the alphabet initial for corresponding operation"<<endl;
        cin>>v;

        if(v='a'){
            double x;
            cin>>x;
            cout<<sin(x);
        }
        else if(v='b'){
            double x;
            cin>>x;
            cout<<cos(x);
        }
        else if(v='c'){
            double x;
            cin>>x;
            cout<<tan(x);
        }
        else if(v='d'){
            double x;
            cin>>x;
            cout<<cosec(x);
        }
        else if(v='e'){
            double x;
            cin>>x;
            cout<<sec(x);
        }
        else if(v='f'){
            double x;
            cin>>x;
            cout<<cot(x);
        }
        else {
            cout<<"Invalid Input !, Please enter a valid input"<<endl<<endl;
        }
        break;
        
    }

    // else if(a==7){
    //     float z;
    //     // double num1,num2;
    //     cout<<"Please choose any one from the following for logarithm"<<endl<<endl;
    //     cout<<"a) to the natural base"<<endl;
    //     cout<<"b) to the base 'n' "<<endl<<endl;
    //     cin>>z;

    //         if(z=='a'){
    //             cout<<"Please enter the value of argument for ln(x)"<<endl;
    //             double x;
    //             cin>>x;
    //             cout<<"The value of ln(x) for your given argument is "<<ln(x);
    //         } 
    //         else if(z=='b'){
    //             cout<<"Please enter the value of base you want"<<endl;
    //             double b;
    //             cin>>b;
    //             cout<<"Please enter the value for argument"<<endl;
    //             double a;
    //             cin>>a;
    //             cout<<"The value of log to your given base for given argument is " <<endl;
    //         }
    //     // enter1(num1);
    //     // enter2(num2);
    // }
    else if(a==7){
        double a,b,c;
        cout<<"Please enter the value for ax^2 + bx + c = 0 to solve it"<<endl<<endl;
        cout<<"Please enter the value for a"<<endl;
        cin>>a;
        cout<<"Please enter the value for b"<<endl;
        cin>>b;
        cout<<"Please enter the value for c"<<endl;
        cin>>c;
        cout<<endl;
        cout<<quad(a,b,c)<<endl;
    }

    else if(a==8){
        float z;
        cout<<"Please enter the value of argument for ln(x)"<<endl;
        double x;
        cin>>x;
        cout<<"The value of ln(x) for your given argument is "<<ln(x);            
    }
    
    else if(a>8){
        cout<<"Invalid Value! Please enter a valid value to operate"<<endl;
        
    }
    
    exit;
    }



    return 0;
}