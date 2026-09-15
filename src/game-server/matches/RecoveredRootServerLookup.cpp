// Forward a lookup request to the root server's embedded table at offset 0xc30.
class RecoveredServerTable00441900
{
public:
    void Lookup(unsigned int key);
};

class NavyFieldRootServer
{
    unsigned char reserved[0xc30];
    RecoveredServerTable00441900 table;
public:
    void LookupServer(unsigned int key);
};

void NavyFieldRootServer::LookupServer(unsigned int key)
{
    table.Lookup(key);
}
