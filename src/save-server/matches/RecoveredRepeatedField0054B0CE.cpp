// Exact recovered repeated field/value leaf helper.
extern "C" __declspec(naked) void Recovered0054B0CE()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm mov word ptr [eax], 11h
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov dl, byte ptr [ebp+8]
    __asm mov byte ptr [ecx+8], dl
    __asm mov eax, dword ptr [ebp-4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
