// Exact shared VC6 three-word mantissa right shift.
extern "C" __declspec(naked) void Recovered0047C990()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 18h
    __asm push esi
    __asm mov eax, dword ptr [ebp+0ch]
    __asm cdq
    __asm and edx, 1fh
    __asm add eax, edx
    __asm sar eax, 5
    __asm mov dword ptr [ebp-18h], eax
    __asm mov eax, dword ptr [ebp+0ch]
    __asm and eax, 8000001fh
    __asm jns remainder
    __asm dec eax
    __asm or eax, 0ffffffe0h
    __asm inc eax
    __asm remainder:
    __asm mov dword ptr [ebp-4], eax
    __asm or edx, 0ffffffffh
    __asm mov ecx, dword ptr [ebp-4]
    __asm shl edx, cl
    __asm not edx
    __asm mov dword ptr [ebp-14h], edx
    __asm mov dword ptr [ebp-8], 0
    __asm mov dword ptr [ebp-0ch], 0
    __asm jmp shift_test
    __asm shift_next:
    __asm mov eax, dword ptr [ebp-0ch]
    __asm add eax, 1
    __asm mov dword ptr [ebp-0ch], eax
    __asm shift_test:
    __asm cmp dword ptr [ebp-0ch], 3
    __asm jge relocate_start
    __asm mov ecx, dword ptr [ebp-0ch]
    __asm mov edx, dword ptr [ebp+8]
    __asm mov eax, dword ptr [edx+ecx*4]
    __asm and eax, dword ptr [ebp-14h]
    __asm mov dword ptr [ebp-10h], eax
    __asm mov ecx, dword ptr [ebp-0ch]
    __asm mov edx, dword ptr [ebp+8]
    __asm mov eax, dword ptr [edx+ecx*4]
    __asm mov ecx, dword ptr [ebp-4]
    __asm shr eax, cl
    __asm mov ecx, dword ptr [ebp-0ch]
    __asm mov edx, dword ptr [ebp+8]
    __asm mov dword ptr [edx+ecx*4], eax
    __asm mov eax, dword ptr [ebp-0ch]
    __asm mov ecx, dword ptr [ebp+8]
    __asm mov edx, dword ptr [ecx+eax*4]
    __asm or edx, dword ptr [ebp-8]
    __asm mov eax, dword ptr [ebp-0ch]
    __asm mov ecx, dword ptr [ebp+8]
    __asm mov dword ptr [ecx+eax*4], edx
    __asm mov ecx, 20h
    __asm sub ecx, dword ptr [ebp-4]
    __asm mov edx, dword ptr [ebp-10h]
    __asm shl edx, cl
    __asm mov dword ptr [ebp-8], edx
    __asm jmp shift_next
    __asm relocate_start:
    __asm mov dword ptr [ebp-0ch], 2
    __asm jmp relocate_test
    __asm relocate_next:
    __asm mov eax, dword ptr [ebp-0ch]
    __asm sub eax, 1
    __asm mov dword ptr [ebp-0ch], eax
    __asm relocate_test:
    __asm cmp dword ptr [ebp-0ch], 0
    __asm jl done
    __asm mov ecx, dword ptr [ebp-0ch]
    __asm cmp ecx, dword ptr [ebp-18h]
    __asm jl clear_word
    __asm mov edx, dword ptr [ebp-0ch]
    __asm sub edx, dword ptr [ebp-18h]
    __asm mov eax, dword ptr [ebp-0ch]
    __asm mov ecx, dword ptr [ebp+8]
    __asm mov esi, dword ptr [ebp+8]
    __asm mov edx, dword ptr [esi+edx*4]
    __asm mov dword ptr [ecx+eax*4], edx
    __asm jmp relocated
    __asm clear_word:
    __asm mov eax, dword ptr [ebp-0ch]
    __asm mov ecx, dword ptr [ebp+8]
    __asm mov dword ptr [ecx+eax*4], 0
    __asm relocated:
    __asm jmp relocate_next
    __asm done:
    __asm pop esi
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret
}
