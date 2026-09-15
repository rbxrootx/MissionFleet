// Exact recovered paired leaf helper.
extern "C" __declspec(naked) void Recovered0053470A()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm mov ecx, dword ptr [eax]
    __asm mov edx, dword ptr [ecx+92]
    __asm xor eax, eax
    __asm mov ax, word ptr [edx+28]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
