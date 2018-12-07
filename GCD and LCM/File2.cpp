int  GCD(int a,int b)
{
	int c;
	if(a<=b) {c=a;for(c;c>1;--c) if(a%c==0&&b%c==0) return c;}
	else{c=b;for(c;c>1;--c) if(a%c==0&&b%c==0) return c;}
	return c;
}
int LCM(int a,int b)
{
	int c,d,f;
	if(a<=b){c=a;for(d=1,f=c;f%b!=0 ;++d,f=c*d);} 
	else{c=b;for(d=1,f=c;f%a!=0;++d,f=c*d);}
	return f;
}
