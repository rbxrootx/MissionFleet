// Exact recovered state/data leaf.
extern "C" __declspec(naked) void Recovered004B16C0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov eax, dword ptr [ebp+8]
    __asm mov dword ptr [ebp-4], eax
    __asm copy:
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov edx, dword ptr [ebp+12]
    __asm mov ax, word ptr [edx]
    __asm mov word ptr [ecx], ax
    __asm mov ecx, dword ptr [ebp-4]
    __asm xor edx, edx
    __asm mov dx, word ptr [ecx]
    __asm mov eax, dword ptr [ebp-4]
    __asm add eax, 2
    __asm mov dword ptr [ebp-4], eax
    __asm mov ecx, dword ptr [ebp+12]
    __asm add ecx, 2
    __asm mov dword ptr [ebp+12], ecx
    __asm test edx, edx
    __asm je done
    __asm jmp copy
    __asm done:
    __asm mov eax, dword ptr [ebp+8]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
