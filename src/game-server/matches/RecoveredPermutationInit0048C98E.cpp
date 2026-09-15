// Exact recovered 32-entry permutation-state initializer.
extern "C" __declspec(naked) void Recovered0048C98E()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 10h
    __asm push esi
    __asm mov eax, 0cccccccch
    __asm mov dword ptr [ebp-10h], eax
    __asm mov dword ptr [ebp-0ch], eax
    __asm mov dword ptr [ebp-8], eax
    __asm mov dword ptr [ebp-4], eax
    __asm mov dword ptr [ebp-10h], ecx
    __asm mov dword ptr [ebp-8], 0
    __asm jmp seed_test
    __asm seed_next:
    __asm mov eax, dword ptr [ebp-8]
    __asm add eax, 1
    __asm mov dword ptr [ebp-8], eax
    __asm seed_test:
    __asm cmp dword ptr [ebp-8], 20h
    __asm jae seeded
    __asm mov ecx, dword ptr [ebp+8]
    __asm imul ecx, dword ptr [ebp-8]
    __asm or edx, 0ffffffffh
    __asm sub edx, ecx
    __asm mov eax, dword ptr [ebp-8]
    __asm mov ecx, dword ptr [ebp-10h]
    __asm mov dword ptr [ecx+eax*4+14h], edx
    __asm jmp seed_next
    __asm seeded:
    __asm mov edx, dword ptr [ebp-10h]
    __asm mov eax, dword ptr [edx+4]
    __asm mov dword ptr [ebp-0ch], eax
    __asm mov ecx, dword ptr [ebp-10h]
    __asm cmp dword ptr [ecx+8], 0
    __asm jne count_ready
    __asm mov edx, dword ptr [ebp-0ch]
    __asm add edx, 400h
    __asm mov dword ptr [ebp-0ch], edx
    __asm count_ready:
    __asm mov dword ptr [ebp-4], 0
    __asm jmp mix_test
    __asm mix_next:
    __asm mov eax, dword ptr [ebp-4]
    __asm add eax, 1
    __asm mov dword ptr [ebp-4], eax
    __asm mix_test:
    __asm mov ecx, dword ptr [ebp-4]
    __asm cmp ecx, dword ptr [ebp-0ch]
    __asm jae done
    __asm mov eax, dword ptr [ebp-4]
    __asm xor edx, edx
    __asm mov ecx, 20h
    __asm div ecx
    __asm mov eax, dword ptr [ebp-10h]
    __asm mov ecx, dword ptr [eax+0ch]
    __asm mov eax, dword ptr [ebp-4]
    __asm mov esi, dword ptr [ebp-10h]
    __asm mov edx, dword ptr [esi+edx*4+14h]
    __asm mov dword ptr [ecx+eax*4], edx
    __asm mov eax, dword ptr [ebp-4]
    __asm xor edx, edx
    __asm mov ecx, 20h
    __asm div ecx
    __asm mov ecx, edx
    __asm mov edx, dword ptr [ebp-10h]
    __asm mov eax, dword ptr [ebp-4]
    __asm add eax, dword ptr [edx+94h]
    __asm xor edx, edx
    __asm mov esi, 20h
    __asm div esi
    __asm mov eax, dword ptr [ebp-10h]
    __asm mov esi, dword ptr [ebp-10h]
    __asm mov ecx, dword ptr [eax+ecx*4+14h]
    __asm xor ecx, dword ptr [esi+edx*4+14h]
    __asm mov eax, dword ptr [ebp-4]
    __asm xor edx, edx
    __asm mov esi, 20h
    __asm div esi
    __asm mov eax, dword ptr [ebp-10h]
    __asm mov dword ptr [eax+edx*4+14h], ecx
    __asm jmp mix_next
    __asm done:
    __asm mov ecx, dword ptr [ebp-10h]
    __asm mov dword ptr [ecx+10h], 0
    __asm pop esi
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
