// Exact recovered parallel-table availability lookup.
extern "C" __declspec(naked) void Recovered0047B150()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 0ch
    __asm push esi
    __asm mov dword ptr [ebp-0ch], 0cccccccch
    __asm mov dword ptr [ebp-8], 0cccccccch
    __asm mov dword ptr [ebp-4], 0cccccccch
    __asm mov dword ptr [ebp-8], ecx
    __asm cmp dword ptr [ebp+8], -1
    __asm jne indexed
    __asm mov dword ptr [ebp-4], 0
    __asm jmp scan_test
    __asm scan_next:
    __asm mov eax, dword ptr [ebp-4]
    __asm add eax, 1
    __asm mov dword ptr [ebp-4], eax
    __asm scan_test:
    __asm mov ecx, dword ptr [ebp-8]
    __asm mov edx, dword ptr [ebp-4]
    __asm cmp edx, dword ptr [ecx+4]
    __asm jge all_available
    __asm mov eax, dword ptr [ebp-8]
    __asm mov ecx, dword ptr [eax+0ch]
    __asm mov edx, dword ptr [ebp-4]
    __asm cmp dword ptr [ecx+edx*4], 0
    __asm jne scan_continue
    __asm mov eax, dword ptr [ebp-8]
    __asm mov ecx, dword ptr [eax+10h]
    __asm mov edx, dword ptr [ebp-8]
    __asm mov eax, dword ptr [edx+14h]
    __asm mov edx, dword ptr [ebp-4]
    __asm mov esi, dword ptr [ebp-4]
    __asm mov ecx, dword ptr [ecx+edx*4]
    __asm cmp ecx, dword ptr [eax+esi*4]
    __asm jne scan_continue
    __asm xor eax, eax
    __asm jmp done
    __asm scan_continue:
    __asm jmp scan_next
    __asm all_available:
    __asm mov eax, 1
    __asm jmp done
    __asm indexed:
    __asm mov edx, dword ptr [ebp-8]
    __asm mov eax, dword ptr [edx+0ch]
    __asm mov ecx, dword ptr [ebp+8]
    __asm cmp dword ptr [eax+ecx*4], 0
    __asm je equal
    __asm mov edx, dword ptr [ebp-8]
    __asm mov eax, dword ptr [edx+10h]
    __asm mov ecx, dword ptr [ebp-8]
    __asm mov edx, dword ptr [ecx+14h]
    __asm mov ecx, dword ptr [ebp+8]
    __asm mov esi, dword ptr [ebp+8]
    __asm mov eax, dword ptr [eax+ecx*4]
    __asm cmp eax, dword ptr [edx+esi*4]
    __asm je equal
    __asm mov dword ptr [ebp-0ch], 1
    __asm jmp result
    __asm equal:
    __asm mov dword ptr [ebp-0ch], 0
    __asm result:
    __asm mov eax, dword ptr [ebp-0ch]
    __asm done:
    __asm pop esi
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
