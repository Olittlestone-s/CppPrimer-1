/*
(a) 计算'a' + 3时，'a'被类型提升为int，计算得到的结果转换为char
(b) 计算ival * 1.0时，ival提升为double，ui与中间变量相减时，ui被提升为double，赋值时double转换为float
(c) 计算ui * fval时，ui被转换为float，赋值时，float被提升为double
(d) 计算ival + fval时，ival被转换为float，+ dval时，中间变量从float提升为double
Exercise 4.35: Given the following definitions,

	char cval;
	int ival;
	unsigned int ui;
	float fval;
	double dval;

identify the implicit type conversions, if any, taking place:

	(a) cval = 'a' + 3;
	(b) fval = ui - ival * 1.0;
	(c) dval = ui * fval;
	(d) cval = ival + fval + dval;

By Faisal Saadatmand

(a) a is converted to int, added to 3 and the result is converted to char (truncated).
(b) ival is converted to a double. To evaluate the result of the subtraction
	the conversion is implementation dependent, i.e.: depends on the size of
	unsigned and double. The result of the assignment operator is a conversion to a
	float--possible loss of precision.
(c) Conversion depends on the size of unsigned int and float. Result of
	 the assignment is converted to a double.
(d) ival is converted to float, added to fval. The result of the addition is
	converted to a double and added to dval. The final result is converted to
	int, which results in a loss of precision, and then to char, which
	truncates the value.

*/
