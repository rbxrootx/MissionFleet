// Exact recovered VC6 three-word mantissa copy.
extern "C" __declspec(naked) void Recovered004BF1F0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 0ch
    __asm mov eax, dword ptr [ebp+0ch]
    __asm mov dword ptr [ebp-4], eax
    __asm mov ecx, dword ptr [ebp+8]
    __asm mov dword ptr [ebp-8], ecx
    __asm mov dword ptr [ebp-0ch], 0
    __asm jmp test_index
    __asm next:
    __asm mov edx, dword ptr [ebp-0ch]
    __asm add edx, 1
    __asm mov dword ptr [ebp-0ch], edx
    __asm test_index:
    __asm cmp dword ptr [ebp-0ch], 3
    __asm jge done
    __asm mov eax, dword ptr [ebp-8]
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov edx, dword ptr [ecx]
    __asm mov dword ptr [eax], edx
    __asm mov eax, dword ptr [ebp-8]
    __asm add eax, 4
    __asm mov dword ptr [ebp-8], eax
    __asm mov ecx, dword ptr [ebp-4]
    __asm add ecx, 4
    __asm mov dword ptr [ebp-4], ecx
    __asm jmp next
    __asm done:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
