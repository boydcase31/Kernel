// Video memory pointer - always constant
unsigned short *vidmem = (unsigned short *) 0xB8000;

void vidmemwrite(const char* str)
{
	unsigned i;
	for (i = 0; str[i] != NULL; ++i)
		vidmem[i] = (unsigned char) str[i] | 0x0700; //What's 0x0700?
}
