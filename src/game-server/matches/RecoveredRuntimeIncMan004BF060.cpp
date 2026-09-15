extern "C" void Recovered004C5070();
// Exact shared VC6 three-word mantissa increment.
extern "C" __declspec(naked) void Recovered004BF060()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 10h
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
    __asm mov edx, 1
    __asm mov ecx, dword ptr [ebp-4]
    __asm shl edx, cl
    __asm mov dword ptr [ebp-8], edx
    __asm mov eax, dword ptr [ebp-0ch]
    __asm mov ecx, dword ptr [ebp+8]
    __asm lea edx, [ecx+eax*4]
    __asm push edx
    __asm mov eax, dword ptr [ebp-8]
    __asm push eax
    __asm mov ecx, dword ptr [ebp-0ch]
    __asm mov edx, dword ptr [ebp+8]
    __asm mov eax, dword ptr [edx+ecx*4]
    __asm push eax
    __asm call Recovered004C5070
    __asm add esp, 0ch
    __asm mov dword ptr [ebp-10h], eax
    __asm mov ecx, dword ptr [ebp-0ch]
    __asm sub ecx, 1
    __asm mov dword ptr [ebp-0ch], ecx
    __asm jmp carry_test
    __asm carry_next:
    __asm mov edx, dword ptr [ebp-0ch]
    __asm sub edx, 1
    __asm mov dword ptr [ebp-0ch], edx
    __asm carry_test:
    __asm cmp dword ptr [ebp-0ch], 0
    __asm jl done
    __asm cmp dword ptr [ebp-10h], 0
    __asm je done
    __asm mov eax, dword ptr [ebp-0ch]
    __asm mov ecx, dword ptr [ebp+8]
    __asm lea edx, [ecx+eax*4]
    __asm push edx
    __asm push 1
    __asm mov eax, dword ptr [ebp-0ch]
    __asm mov ecx, dword ptr [ebp+8]
    __asm mov edx, dword ptr [ecx+eax*4]
    __asm push edx
    __asm call Recovered004C5070
    __asm add esp, 0ch
    __asm mov dword ptr [ebp-10h], eax
    __asm jmp carry_next
    __asm done:
    __asm mov eax, dword ptr [ebp-10h]
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
