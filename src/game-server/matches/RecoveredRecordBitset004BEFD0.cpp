// Exact recovered record/bitset helper.
extern "C" __declspec(naked) void Recovered004BEFD0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 0ch
    __asm mov eax, dword ptr [ebp+0ch]
    __asm cdq
    __asm and edx, 1fh
    __asm add eax, edx
    __asm sar eax, 5
    __asm mov dword ptr [ebp-0ch], eax
    __asm mov eax, dword ptr [ebp+0ch]
    __asm and eax, 8000001fh
    __asm jns remainder
    __asm dec eax
    __asm or eax, 0ffffffe0h
    __asm inc eax
    __asm remainder:
    __asm mov ecx, 1fh
    __asm sub ecx, eax
    __asm mov dword ptr [ebp-4], ecx
    __asm or edx, 0ffffffffh
    __asm mov ecx, dword ptr [ebp-4]
    __asm shl edx, cl
    __asm not edx
    __asm mov dword ptr [ebp-8], edx
    __asm mov eax, dword ptr [ebp-0ch]
    __asm mov ecx, dword ptr [ebp+8]
    __asm mov edx, dword ptr [ecx+eax*4]
    __asm and edx, dword ptr [ebp-8]
    __asm test edx, edx
    __asm je advance
    __asm xor eax, eax
    __asm jmp done
    __asm advance:
    __asm mov eax, dword ptr [ebp-0ch]
    __asm add eax, 1
    __asm mov dword ptr [ebp-0ch], eax
    __asm jmp test_index
    __asm next:
    __asm mov ecx, dword ptr [ebp-0ch]
    __asm add ecx, 1
    __asm mov dword ptr [ebp-0ch], ecx
    __asm test_index:
    __asm cmp dword ptr [ebp-0ch], 3
    __asm jge clear
    __asm mov edx, dword ptr [ebp-0ch]
    __asm mov eax, dword ptr [ebp+8]
    __asm cmp dword ptr [eax+edx*4], 0
    __asm je next_jump
    __asm xor eax, eax
    __asm jmp done
    __asm next_jump:
    __asm jmp next
    __asm clear:
    __asm mov eax, 1
    __asm done:
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
