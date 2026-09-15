// Original x86 member ABI: ECX is the list; RET 4 cleans the offset argument.
extern "C" char File005C5AF0;
extern "C" void Assert00534A00();
extern "C" __declspec(naked) void *Recovered0048EF50(int)
{
    __asm push ebp
    __asm mov ebp, esp
    __asm push ecx
    __asm push ebx
    __asm push esi
    __asm push edi
    __asm mov dword ptr [ebp-4], ecx
    __asm check_empty:
    __asm mov eax, dword ptr [ebp-4]
    __asm cmp dword ptr [eax], 0
    __asm je assertion_done
    __asm push 3ch
    __asm push offset File005C5AF0
    __asm call Assert00534A00
    __asm test eax, eax
    __asm je assertion_done
    __asm int 3
    __asm assertion_done:
    __asm xor ecx, ecx
    __asm test ecx, ecx
    __asm jne check_empty
    __asm mov edx, dword ptr [ebp-4]
    __asm mov eax, dword ptr [ebp+8]
    __asm mov dword ptr [edx+4], eax
    __asm pop edi
    __asm pop esi
    __asm pop ebx
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
