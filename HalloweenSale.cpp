#include <bits/stdc++.h>

using namespace std;

int howManyGames(int price, int discount, int min, int s) {
    // Return the number of games you can buy
    int game =0;
    int totalspend =0;
    
    while(totalspend <= s){
    	game += 1;
    	totalspend = totalspend + price;
    	price = price-discount;
    	if(price<=min){
    		price = min;
    		break;
    	}
    }
    while(totalspend <= s){
    	++game;
    	totalspend = totalspend + min;
    }
    return game-1;
}

int main() {
    int p;
    int d;
    int m;
    int s;
    cin >> p >> d >> m >> s;
    int answer = howManyGames(p, d, m, s);
    cout << answer << endl;
    return 0;
}