#pragma once
class rectanglar
{
	// class Constructor & Destructor
public:
	rectanglar(void);
	~rectanglar(void);
	
	// Props 
private : 
	float length ;
	float width ;

	// Methods prototypes
public :
	void setLength ( float L );
	float getLength () ;

	void setWidth ( float W );
	float getWidth () ;
};

