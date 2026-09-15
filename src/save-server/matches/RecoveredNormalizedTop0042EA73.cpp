extern "C" void Call0042ECA6();
extern "C" void Call00464DF0();
extern "C" void *Data00634534;
// Exact recovered relocation-normalized call wrapper.
extern "C" __declspec(naked) void Recovered0042EA73()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], 0xcccccccc
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [eax], offset Data00634534
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0042ECA6
    __asm add esp, 4
    __asm cmp ebp, esp
    __asm call Call00464DF0
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
