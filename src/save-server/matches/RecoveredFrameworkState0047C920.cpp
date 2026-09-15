// Exact recovered framework state helper.
extern "C" __declspec(naked) void Recovered0047C920()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], 0
    __asm jmp check
    __asm iterate:
    __asm mov eax, dword ptr [ebp-4]
    __asm add eax, 1
    __asm mov dword ptr [ebp-4], eax
    __asm check:
    __asm cmp dword ptr [ebp-4], 3
    __asm jge done
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov edx, dword ptr [ebp+8]
    __asm mov dword ptr [edx+ecx*4], 0
    __asm jmp iterate
    __asm done:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
