class Sharp{
	private:int _Pin;
	public:
	 Sharp(int _P){ _Pin=_P;}
	int GetDis(void);
};

int Sharp::GetDis(void){	
    return(pow(3027.4 /analogRead(_Pin), 1.2134));
} 

