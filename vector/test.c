#include <stdio.h>
#include "libft.h"
#include "acutest.h"

void test_vector_new(void)
{
	t_vector *vector_char = new_vector(CHAR);
	t_vector *vector_int = new_vector(INT);
	t_vector *vector_double = new_vector(DOUBLE);
	t_vector *vector_ptr = new_vector(PTR);

	TEST_CHECK(vector_char != 0);
	TEST_CHECK(vector_int != 0);
	TEST_CHECK(vector_double != 0);
	TEST_CHECK(vector_ptr != 0);
	free(vector_char);
	free(vector_int);
	free(vector_double);
	free(vector_ptr);
}

void test_vector_insert(void)
{
	t_vector *vector_char = new_vector(CHAR);
	
	TEST_CHECK(vector_char->method->insert(vector_char, "x", 0) == TRUE);
	TEST_CHECK(vector_char->method->insert(vector_char, "y", 1) == TRUE);
	TEST_CHECK(vector_char->method->insert(vector_char, "z", 2) == TRUE);
	TEST_CHECK(ft_memcmp(vector_char->mem, "xyz", 3) == 0);
	TEST_CHECK(vector_char->method->insert(vector_char, "z", 4) != TRUE);
	TEST_CHECK(vector_char->method->insert(vector_char, "A", 1) == TRUE);
	TEST_CHECK(ft_memcmp(vector_char->mem, "xAyz", 4) == 0);
}

void test_vector_push_back(void)
{
	t_vector *vector_char = new_vector(CHAR);
	
	TEST_CHECK(vector_char->method->push_back(vector_char, "x") == TRUE);
	TEST_CHECK(vector_char->method->push_back(vector_char, "y") == TRUE);
	TEST_CHECK(vector_char->method->push_back(vector_char, "z") == TRUE);
	TEST_CHECK(ft_memcmp(vector_char->mem, "xyz", 3) == 0);
}

void test_vector_push_front(void)
{
	t_vector *vector_char = new_vector(CHAR);
	
	TEST_CHECK(vector_char->method->push_front(vector_char, "x") == TRUE);
	TEST_CHECK(vector_char->method->push_front(vector_char, "y") == TRUE);
	TEST_CHECK(vector_char->method->push_front(vector_char, "z") == TRUE);
	TEST_CHECK(ft_memcmp(vector_char->mem, "zyx", 3) == 0);
}

void test_vector_load(void)
{
	t_vector *vector_char = new_vector(CHAR);

	TEST_CHECK(vector_char->method->load(vector_char, "hello world", 11) == TRUE);
	TEST_CHECK(ft_memcmp(vector_char->mem, "hello world", 11) == 0);
}

void test_vector_erase(void)
{
	t_vector *vector_char = new_vector(CHAR);

	TEST_CHECK(vector_char->method->load(vector_char, "hello world", 11) == TRUE);
	TEST_CHECK(ft_memcmp(vector_char->mem, "hello world", 11) == 0);
	TEST_CHECK(vector_char->method->erase(vector_char, 0) == TRUE);
	TEST_CHECK(ft_memcmp(vector_char->mem, "ello world", 10) == 0);
	TEST_CHECK(vector_char->method->erase(vector_char, 9) == TRUE);
	TEST_CHECK(ft_memcmp(vector_char->mem, "ello worl", 9) == 0);
	TEST_CHECK(vector_char->method->erase(vector_char, 9) != TRUE);
}

void test_vector_clear(void)
{
	t_vector *vector_char = new_vector(CHAR);

	TEST_CHECK(vector_char->method->load(vector_char, "hello world", 11) == TRUE);
	void *m = ft_calloc(1, vector_char->max_size * vector_char->bytes);
	vector_char->method->clear(vector_char);
	TEST_CHECK(ft_memcmp(vector_char->mem, m, vector_char->max_size * vector_char->bytes) == 0);
}

void test_vector_at(void)
{
	char *p = 0;
	t_vector *vector_char = new_vector(CHAR);

	TEST_CHECK(vector_char->method->load(vector_char, "hello world", 11) == TRUE);
	p = vector_char->method->at(vector_char, 0);
	TEST_CHECK(p != 0);
	TEST_CHECK(*p == 'h');
	p = vector_char->method->at(vector_char, 10);
	TEST_CHECK(p != 0);
	TEST_CHECK(*p == 'd');
	p = vector_char->method->at(vector_char, 11);
	TEST_CHECK(p == 0);
}

void test_vector_split(void)
{
	char p[] = "hello world";
	t_vector *vector = new_vector(CHAR);
	vector->method->load(vector, p, sizeof(p));
	t_vector *split = vector->method->split(vector, " ");
	t_vector *hello = *(t_vector **)split->method->at(split, 0);
	t_vector *world = *(t_vector **)split->method->at(split, 1);
	TEST_CHECK(ft_memcmp(hello->mem, "hello", 5) == 0);
	TEST_CHECK(ft_memcmp(world->mem, "world", 5) == 0);
	TEST_CHECK(split->size == 2);
}

TEST_LIST =
{
	{"new_vector", test_vector_new},
	{"vector_insert", test_vector_insert},
	{"vector_push_back", test_vector_push_back},
	{"vector_push_front", test_vector_push_front},
	{"vector_load", test_vector_load},
	{"vector_erase", test_vector_erase},
	{"vector_clear", test_vector_clear},
	{"vector_at", test_vector_at},
	{"vector_split", test_vector_split},
	{0, 0}
};
