// Exact recovered framework dispatch leaf.
extern "C" __declspec(naked) void Recovered004F08E7()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm mov dword ptr [ebp-4], ecx
    __asm mov eax, dword ptr [ebp-4]
    __asm mov edx, dword ptr [eax]
    __asm mov ecx, dword ptr [ebp-4]
    __asm call dword ptr [edx+152]
    __asm test eax, eax
    __asm jne close
    __asm jmp done
    __asm close:
    __asm mov eax, dword ptr [ebp-4]
    __asm mov edx, dword ptr [eax]
    __asm mov ecx, dword ptr [ebp-4]
    __asm call dword ptr [edx+132]
    __asm done:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
