
// Exact recovered repeated 50-99 byte routine.
extern "C" __declspec(naked) void Recovered004B1660()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov eax, dword ptr [ebp + 8]
    __asm mov dword ptr [ebp - 4], eax
loc_004B166A:
    __asm mov ecx, dword ptr [ebp - 4]
    __asm xor edx, edx
    __asm mov dx, word ptr [ecx]
    __asm test edx, edx
    __asm je loc_004B1681
    __asm mov eax, dword ptr [ebp - 4]
    __asm add eax, 2
    __asm mov dword ptr [ebp - 4], eax
    __asm jmp loc_004B166A
loc_004B1681:
    __asm mov ecx, dword ptr [ebp - 4]
    __asm mov edx, dword ptr [ebp + 0xc]
    __asm mov ax, word ptr [edx]
    __asm mov word ptr [ecx], ax
    __asm mov ecx, dword ptr [ebp - 4]
    __asm xor edx, edx
    __asm mov dx, word ptr [ecx]
    __asm mov eax, dword ptr [ebp - 4]
    __asm add eax, 2
    __asm mov dword ptr [ebp - 4], eax
    __asm mov ecx, dword ptr [ebp + 0xc]
    __asm add ecx, 2
    __asm mov dword ptr [ebp + 0xc], ecx
    __asm test edx, edx
    __asm je loc_004B16AD
    __asm jmp loc_004B1681
loc_004B16AD:
    __asm mov eax, dword ptr [ebp + 8]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
