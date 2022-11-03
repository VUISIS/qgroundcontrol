#include <QByteArray>

static void xor_crypto(QByteArray message)
{
    char key = 'X';
  
    for (int i = 0; i < message.length(); i++)
    {
        message[i] = message[i] ^ key;
    }
}