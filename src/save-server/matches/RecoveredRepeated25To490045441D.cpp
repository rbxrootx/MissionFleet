extern "C" void Call0045443A();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered0045441D()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov dword ptr [eax + 0xc], 0
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0045443A
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
