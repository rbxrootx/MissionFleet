
// Exact recovered repeated 25-49 byte routine.
extern "C" __declspec(naked) void Recovered00450D9C()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov eax, dword ptr [ebp + 8]
    __asm sub eax, 0xbc
    __asm mov dword ptr [ebp - 4], eax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm push ecx
    __asm mov edx, dword ptr [ebp - 4]
    __asm mov ecx, dword ptr [edx + 0x1c]
    __asm mov eax, dword ptr [ebp - 4]
    __asm mov edx, dword ptr [eax + 0x1c]
    __asm mov eax, dword ptr [edx]
    __asm call dword ptr [eax + 0x68]
    __asm xor eax, eax
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 8
}
