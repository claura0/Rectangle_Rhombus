/*! \file rectangle.h
	\brief Declaration of the class Rectangle

	Details.
*/


#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
using namespace std;

/// @class Rectangle
/// @brief to manage an object with the shape of a rectangle
class Rectangle
{
private:
	float length;
	float width;

public:

    /// @name CONSTRUCTORS/DESTRUCTOR
    /// @{
    ///Default Constructor
	Rectangle();
    ///Constructor
	Rectangle(float w, float l);
    ///Destructor
	~Rectangle();
    ///Copy constructor
    Rectangle(const Rectangle &r);
    /// @}

    /// @name OPERATORS
    /// @{
    ///Assignment overloading
    Rectangle& operator=(const Rectangle &r);
    ///Comparison overloading
    bool operator==(const Rectangle &r) const;
    /// @}

    /// @name BASIC HANDLING
    /// @{
    void Init();
    void Init(const Rectangle &r);
    void Reset();
    void ErrorMessage(const char *string);
    /// @}

    /// ACCESS FUNCTIONS
	void SetDim(float w, float l);
	void SetLength(float l);
	void SetWidth(float w);
	
	void GetDim(float &w, float &l);
	float GetLength();
	float GetWidth();

    float GetArea();
    float GetPerimeter();

    /// @name DEBUG and SERIALIZATION
    /// @{
    /// Object printout for diagnostic
    void Dump();
    /// @}
};

#endif