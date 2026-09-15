// Exact shared legacy runtime primitive.
extern "C" __declspec(naked) void Recovered004A9780()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push edi
    __asm push esi
    __asm push ebx
    __asm mov ecx, dword ptr [ebp+16]
    __asm jecxz result
    __asm mov ebx, ecx
    __asm mov edi, dword ptr [ebp+8]
    __asm mov esi, edi
    __asm xor eax, eax
    __asm repne scasb
    __asm neg ecx
    __asm add ecx, ebx
    __asm mov edi, esi
    __asm mov esi, dword ptr [ebp+12]
    __asm repe cmpsb
    __asm mov al, byte ptr [esi-1]
    __asm xor ecx, ecx
    __asm cmp al, byte ptr [edi-1]
    __asm ja differing
    __asm je result
    __asm dec ecx
    __asm dec ecx
    __asm differing:
    __asm not ecx
    __asm result:
    __asm mov eax, ecx
    __asm pop ebx
    __asm pop esi
    __asm pop edi
    __asm leave
    __asm ret
}
