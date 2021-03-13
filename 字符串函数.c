char* my_copy(char* a, const char* b)
{
	assert(a);
	assert(b);
	char* ret = a;
	while (*a++ = *b++)
	{
	}
	return ret;
}

int main()
{
	char a[] = "abcde";
	char b[] = "fg";
	printf("%s", my_copy(a, b));
	return 0;
}


char* my_strcat(char* a, const char* b)
{
	char* ret = a;
	assert(a && b);
	while (*a != '\0')
	{
		a++;
	}
	my_copy(a, b);
	return ret;
}
int main()
{
	char a[30] = "abcd";
	char b[] = "cfw";

	printf("%s", my_strcat(a, b));
	return 0;
}


int my_strcmp(char* a, char* b)
{
	assert(a && b);
	while (*a == *b)
	{
		if (*a == '\0')
			return 0;
		a++;
		b++;
	}
	if (*a > * b)
	{
		return 1;
	}
	else
	{
		return -1;
	}

}

int main()
{
	char a[] = "abc";
	char b[] = "abce";
	int ret = my_strcmp(a, b);
	printf("%d", ret);
	return 0;
}


char* my_strstr(const char* a, const char* b)
{
	assert(a && b);
	char* p1 = NULL;
	char* p2 = NULL;
	char* p3 = a;
	if (!a)
		return (char*)a;
	while (*p1)
	{
		p1 = p3;
		p2 = b;
		while ((*p1 != 0) && (*p2 != 0) && (*p1 == *p2))
		{
			p1++;
			p2++;
		}
		while (*p2 == 0)
		{
			return p3;
		}
		p3++;
	}
	return NULL;
}
int main()
{
	char a[30] = "abcdebc";
	char b[] = "bcf";
	char* p = strstr(a, b);
	printf("%s", p);
	return 0;
}

int main()
{
	char a[] = "abcd@efg.hkj";
	char b[] = ".@";
	char p[30] = { 0 };
	strcpy(p, a);
	char* ret = NULL;
	for (ret = strtok(p, b); ret != NULL; ret = strtok(NULL, b))
	{
		printf("%s", ret);
	}
	return 0;
}

int main()
{
	char arr[] = "abcde123";
	char arr2[] = "fgh";
	memcpy(arr, arr2, 4);
	printf("%s", arr);
	return 0;
}