class WaitingSocket
{
public:
    void Dispatch0044DF52(unsigned int server, unsigned int key);
    void Dispatch0044E42A(unsigned int server, unsigned int key);
    void Dispatch0044E2DF(unsigned int server, unsigned int key);
    void Dispatch0044E081(unsigned int server, unsigned int key);
    void Dispatch0044E1B0(unsigned int server, unsigned int key);
};

class NavyFieldRootServer
{
    unsigned char unknown[0xc28];
    WaitingSocket *waitingSocket;
public:
    void LookupServer(unsigned int key);
    void LookupServerAt0043F169(unsigned int key);
    WaitingSocket *GetWaitingSocket();
    void Dispatch0043F987(unsigned int server, unsigned int key);
    void Dispatch0043F9C1(unsigned int server, unsigned int key);
    void Dispatch0043F9FB(unsigned int server, unsigned int key);
    void Dispatch0043FA35(unsigned int server, unsigned int key);
    void Dispatch0043FA6F(unsigned int server, unsigned int key);
    void Empty0043FAA9();
};

void NavyFieldRootServer::LookupServerAt0043F169(unsigned int key)
{
    LookupServer(key);
}

void NavyFieldRootServer::Dispatch0043F987(unsigned int server, unsigned int key)
{
    GetWaitingSocket()->Dispatch0044DF52(server, key & 0xffff);
}

void NavyFieldRootServer::Dispatch0043F9C1(unsigned int server, unsigned int key)
{
    GetWaitingSocket()->Dispatch0044E42A(server, key & 0xffff);
}

void NavyFieldRootServer::Dispatch0043F9FB(unsigned int server, unsigned int key)
{
    GetWaitingSocket()->Dispatch0044E2DF(server, key & 0xffff);
}

void NavyFieldRootServer::Dispatch0043FA35(unsigned int server, unsigned int key)
{
    GetWaitingSocket()->Dispatch0044E081(server, key & 0xffff);
}

void NavyFieldRootServer::Dispatch0043FA6F(unsigned int server, unsigned int key)
{
    GetWaitingSocket()->Dispatch0044E1B0(server, key & 0xffff);
}

void NavyFieldRootServer::Empty0043FAA9()
{
}

// Original getter at 00401320; dispatch arguments belong to the subsequent call.
WaitingSocket *NavyFieldRootServer::GetWaitingSocket()
{
    return waitingSocket;
}
