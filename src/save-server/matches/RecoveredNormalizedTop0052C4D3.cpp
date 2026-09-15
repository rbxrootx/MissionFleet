extern "C" void Call004CF8AF();
extern "C" void *Data0068BF78;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered0052C4D3()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm call dword ptr [Data0068BF78]
    __asm push eax
    __asm call Call004CF8AF
    __asm pop ebp
    __asm ret
}
