# Dlib

Vector example.

/*
 * CHAR, INT, DOUBLE, or PTR
/*

t_vector *vector = new_vector(CHAR);
char symbol = 'H';
vector->method->push_back(vector, &symbol);

char next_symbol;

while(has_next(vector))
{
	next_symbol = *(char *)next(vector);
	printf("%c\n", next_symbol);
}

or

char *next_symbol_ptr;

while(has_next(vector))
{
	next_symbol_ptr = next(vector);
	printf("%c\n", *next_symbol_ptr);
}

