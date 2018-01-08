[02:53, 8.1.2018] +90 507 906 80 40: #include <stdio.h>

#if defined(_WIN32) || defined(_WIN64)
        const char* os = "Windows kullaniyorsun";
#else
#ifdef __linux
        const char* os = "Linux kullaniyorsun";
#else
        const char* os = "Bilinmeyen bir isletim sistemi kullaniyorsun";
#endif
#endif

int main(void)
{
   printf("os = %s\n", os);
   return 0;
}
[02:54, 8.1.2018] +90 507 906 80 40: 
