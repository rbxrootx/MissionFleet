// Exact shared legacy runtime primitive.
extern "C" __declspec(naked) void Recovered004AC400()
{
    __asm mov eax, dword ptr [esp+8]
    __asm mov ecx, dword ptr [esp+16]
    __asm or ecx, eax
    __asm mov ecx, dword ptr [esp+12]
    __asm jne hard_case
    __asm mov eax, dword ptr [esp+4]
    __asm mul ecx
    __asm ret 16
    __asm hard_case:
    __asm push ebx
    __asm mul ecx
    __asm mov ebx, eax
    __asm mov eax, dword ptr [esp+8]
    __asm mul dword ptr [esp+20]
    __asm add ebx, eax
    __asm mov eax, dword ptr [esp+8]
    __asm mul ecx
    __asm add edx, ebx
    __asm pop ebx
    __asm ret 16
}
