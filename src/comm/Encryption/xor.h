#include <QByteArray>

static void xor_crypto(char* message, int start_pos, int len)
{
    char key = 'X';
  
    for (int i = start_pos; i < len; i++)
    {
        message[i] = message[i] ^ key;
    }
}