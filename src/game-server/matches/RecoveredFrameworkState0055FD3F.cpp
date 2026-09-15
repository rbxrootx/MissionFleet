// Exact recovered framework state helper.
extern "C" __declspec(naked) void Recovered0055FD3F()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov eax, dword ptr [ebp+8]
    __asm sub eax, 64
    __asm mov dword ptr [ebp-4], eax
    __asm mov ecx, dword ptr [ebp+12]
    __asm mov edx, dword ptr [ebp-4]
    __asm mov eax, dword ptr [edx+40]
    __asm mov dword ptr [ecx], eax
    __asm mov ecx, dword ptr [ebp+12]
    __asm mov eax, dword ptr [ecx]
    __asm neg eax
    __asm sbb eax, eax
    __asm and eax, 7fffbffbh
    __asm add eax, 80004005h
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 8
}
