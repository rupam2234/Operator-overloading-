class A
{
	int length;
	int breath;
	PUBLIC:
	A(int ln,int br) {
		length = ln;
		breath = br;
	}

	A operator + (A obj)
	{
		length = lenght + obj.length;
		breadth = breadth + obj.breadth;
		return A(length,breadth)
	}
};
int main()
{
	A obj1(4, 6), obj2(10, 5);
	A obj3=obj1 + obj2;
}

