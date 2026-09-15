// Exact recovered repeated object/value leaf helper.
extern "C" __declspec(naked) void Recovered004297A0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], 0cccccccch
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm mov word ptr [eax], 8000h
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov word ptr [ecx+2], 0
    __asm mov eax, dword ptr [ebp-4]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
