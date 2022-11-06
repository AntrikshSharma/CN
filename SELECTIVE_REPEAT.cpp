#include <bits/stdc++.h> 
using namespace std; 
int buffer[32]; 
void generate_data() 
{ 
    for (int i = 0; i < 32; i++) 
    { 
        buffer[i] = rand() % 100; 
    } 
} 
int main() 
{ 
    int i, p, w, k = 0, p2; 
    int timer[32]; 
    for (i = 0; i < 32; i++) 
    { 
        timer[i] = 5; 
    } 
    cout << "Enter window size: "; 
    cin >> w; 
    generate_data(); 
    i = 0; 
    while (k < 32) 
    { 
        for (int j = 0; j < w; j++) 
        { 
 
            if ((i + j) <= 32) 
                cout << "Packet " << (i + j) << " sent." << endl; 
            p = rand() % 2; 
            timer[k] -= 1; 
            if (p == 0 || timer[k] == 0) 
            { 
                p2 = rand() % 2; 
                if (p2 == 0) 
                { 
                    if (timer[k] == 0) 
                    { 
                        cout << "Timeout occured for packet " << k << ".\n"; 
                    } 
                    else 
                    { 
                        cout << "Packet " << k << " not received.\n"; 
                    } 
                    cout << "Packet " << k << " sent.\n"; 
                    timer[k] = 5; 
                } 
                else 
                { 
                    cout << "Packet " << k << " received.\n"; 
                    k += 1; 
                } 
            } 
        } 
        i += w; 
    } 
    return 0; 
} 
