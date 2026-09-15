// Exact recovered repeated field/value leaf helper.
extern "C" __declspec(naked) void Recovered0049A170()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], 4
    __asm mov ecx, dword ptr [ebp+8]
    __asm add ecx, dword ptr [ebp+12]
    __asm mov eax, dword ptr [ebp+12]
    __asm xor edx, edx
    __asm div dword ptr [ebp-4]
    __asm add ecx, edx
    __asm mov eax, ecx
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
