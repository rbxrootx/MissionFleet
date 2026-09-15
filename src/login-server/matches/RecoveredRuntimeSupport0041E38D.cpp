// Exact shared compiler runtime support primitive.
extern "C" __declspec(naked) void Recovered0041E38D()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm push ebx
    __asm push esi
    __asm push edi
    __asm mov eax, dword ptr [ebp+12]
    __asm add eax, 12
    __asm mov dword ptr [ebp-4], eax
    __asm mov ebx, dword ptr fs:[0]
    __asm mov eax, dword ptr [ebx]
    __asm mov dword ptr fs:[0], eax
    __asm mov eax, dword ptr [ebp+8]
    __asm mov ebx, dword ptr [ebp+12]
    __asm mov esp, dword ptr [ebx-4]
    __asm mov ebp, dword ptr [ebp-4]
    __asm jmp eax
}
