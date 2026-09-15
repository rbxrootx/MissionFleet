// Exact recovered indexed lock core.
extern "C" int Table0067DE00;
extern "C" void *Import0068B96C;
extern "C" __declspec(naked) void Recovered00470950()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm mov eax, dword ptr [ebp+8]
    __asm mov ecx, dword ptr [eax*4+Table0067DE00]
    __asm push ecx
    __asm call dword ptr [Import0068B96C]
    __asm pop ebp
    __asm ret
}
