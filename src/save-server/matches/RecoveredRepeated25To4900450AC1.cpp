extern "C" void Call0044F67A();
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered00450AC1()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov eax, dword ptr [ebp + 8]
    __asm sub eax, 0xb8
    __asm mov dword ptr [ebp - 4], eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm call Call0044F67A
    __asm xor eax, eax
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
