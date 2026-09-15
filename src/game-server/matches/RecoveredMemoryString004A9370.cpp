// Exact shared VC6 memory/string runtime primitive.
extern "C" __declspec(naked) void Recovered004A9370()
{
    __asm mov edx, dword ptr [esp+12]
    __asm mov ecx, dword ptr [esp+4]
    __asm test edx, edx
    __asm je empty
    __asm xor eax, eax
    __asm mov al, byte ptr [esp+8]
    __asm push edi
    __asm mov edi, ecx
    __asm cmp edx, 4
    __asm jb tail
    __asm neg ecx
    __asm and ecx, 3
    __asm je aligned
    __asm sub edx, ecx
    __asm prefix_loop:
    __asm mov byte ptr [edi], al
    __asm inc edi
    __asm dec ecx
    __asm jne prefix_loop
    __asm aligned:
    __asm mov ecx, eax
    __asm shl eax, 8
    __asm add eax, ecx
    __asm mov ecx, eax
    __asm shl eax, 16
    __asm add eax, ecx
    __asm mov ecx, edx
    __asm and edx, 3
    __asm shr ecx, 2
    __asm je tail
    __asm rep stosd
    __asm test edx, edx
    __asm je finish
    __asm tail:
    __asm mov byte ptr [edi], al
    __asm inc edi
    __asm dec edx
    __asm jne tail
    __asm finish:
    __asm mov eax, dword ptr [esp+8]
    __asm pop edi
    __asm ret
    __asm empty:
    __asm mov eax, dword ptr [esp+4]
    __asm ret
}
