class WaitingSocket
{
public:
    void Dispatch0044DF52();
    void Dispatch0044E42A();
    void Dispatch0044E2DF();
    void Dispatch0044E081();
    void Dispatch0044E1B0();
};

class NavyFieldRootServer
{
public:
    void LookupServer(unsigned int key);
    void LookupServerAt0043F169(unsigned int key);
    WaitingSocket *ResolveWaitingSocket(unsigned int server, unsigned int key);
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
    ResolveWaitingSocket(server, key & 0xffff)->Dispatch0044DF52();
}

void NavyFieldRootServer::Dispatch0043F9C1(unsigned int server, unsigned int key)
{
    ResolveWaitingSocket(server, key & 0xffff)->Dispatch0044E42A();
}

void NavyFieldRootServer::Dispatch0043F9FB(unsigned int server, unsigned int key)
{
    ResolveWaitingSocket(server, key & 0xffff)->Dispatch0044E2DF();
}

void NavyFieldRootServer::Dispatch0043FA35(unsigned int server, unsigned int key)
{
    ResolveWaitingSocket(server, key & 0xffff)->Dispatch0044E081();
}

void NavyFieldRootServer::Dispatch0043FA6F(unsigned int server, unsigned int key)
{
    ResolveWaitingSocket(server, key & 0xffff)->Dispatch0044E1B0();
}

void NavyFieldRootServer::Empty0043FAA9()
{
}
