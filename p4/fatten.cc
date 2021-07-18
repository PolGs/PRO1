int max(int a,int b){
	if(a >= b) return a;
	else return b;
}

int fatten(int x) {
        if (x < 10) return x;
        int engr = fatten(x/10);
        int udengr = engr%10;
        int d = x%10;
        int m = max(udengr,d);
        return engr*10 + m;
}