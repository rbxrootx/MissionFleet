extern "C" void Call005314CC();
extern "C" void Call0053150A();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered0053151A()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm push esi
    __asm mov dword ptr [ebp - 4], ecx
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0053150A
    __asm mov esi, eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call005314CC
    __asm imul eax, eax, 0x3c
    __asm sub esi, eax
    __asm mov eax, esi
    __asm pop esi
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
