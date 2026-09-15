extern "C" void Call004CF8AF();
extern "C" void *Data0068BD80;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered0052CC8D()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm call dword ptr [Data0068BD80]
    __asm push eax
    __asm call Call004CF8AF
    __asm pop ebp
    __asm ret
}
