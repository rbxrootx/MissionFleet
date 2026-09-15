// x86 ABI: ECX is the slot manager; stack argument is the signed slot index.
// Validate allocation, fetch Win32 TLS, return zero for an absent per-thread entry.
// Preserve debug assertions and signed comparisons exactly.
extern "C" char File005CA28C;
extern "C" void Assert00534A00();
extern "C" void *TlsGetValue005E2324; // Import address slot, not function code.
extern "C" __declspec(naked) void *Recovered00548D50(int)
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm push ebx
    __asm push esi
    __asm push edi
    __asm mov dword ptr [ebp-8], ecx
    __asm check_range:
    __asm cmp dword ptr [ebp+8], 0
    __asm je assert_range
    __asm mov eax, dword ptr [ebp-8]
    __asm mov ecx, dword ptr [ebp+8]
    __asm cmp ecx, dword ptr [eax+0ch]
    __asm jl range_done
    __asm assert_range:
    __asm push 0feh
    __asm push offset File005CA28C
    __asm call Assert00534A00
    __asm test eax, eax
    __asm je range_done
    __asm int 3
    __asm range_done:
    __asm xor edx, edx
    __asm test edx, edx
    __asm jne check_range
    __asm check_table:
    __asm mov eax, dword ptr [ebp-8]
    __asm cmp dword ptr [eax+10h], 0
    __asm jne table_done
    __asm push 0ffh
    __asm push offset File005CA28C
    __asm call Assert00534A00
    __asm test eax, eax
    __asm je table_done
    __asm int 3
    __asm table_done:
    __asm xor ecx, ecx
    __asm test ecx, ecx
    __asm jne check_table
    __asm check_allocated:
    __asm mov edx, dword ptr [ebp-8]
    __asm mov eax, dword ptr [edx+10h]
    __asm mov ecx, dword ptr [ebp+8]
    __asm mov edx, dword ptr [eax+ecx*8]
    __asm and edx, 1
    __asm test edx, edx
    __asm jne allocated_done
    __asm push 100h
    __asm push offset File005CA28C
    __asm call Assert00534A00
    __asm test eax, eax
    __asm je allocated_done
    __asm int 3
    __asm allocated_done:
    __asm xor eax, eax
    __asm test eax, eax
    __asm jne check_allocated
    __asm check_tls:
    __asm mov ecx, dword ptr [ebp-8]
    __asm cmp dword ptr [ecx], -1
    __asm jne tls_done
    __asm push 101h
    __asm push offset File005CA28C
    __asm call Assert00534A00
    __asm test eax, eax
    __asm je tls_done
    __asm int 3
    __asm tls_done:
    __asm xor edx, edx
    __asm test edx, edx
    __asm jne check_tls
    __asm mov eax, dword ptr [ebp-8]
    __asm mov ecx, dword ptr [eax]
    __asm push ecx
    __asm call dword ptr [TlsGetValue005E2324]
    __asm mov dword ptr [ebp-4], eax
    __asm cmp dword ptr [ebp-4], 0
    __asm je missing
    __asm mov edx, dword ptr [ebp-4]
    __asm mov eax, dword ptr [ebp+8]
    __asm cmp eax, dword ptr [edx+8]
    __asm jl found
    __asm missing:
    __asm xor eax, eax
    __asm jmp done
    __asm found:
    __asm mov ecx, dword ptr [ebp-4]
    __asm mov edx, dword ptr [ecx+0ch]
    __asm mov eax, dword ptr [ebp+8]
    __asm mov eax, dword ptr [edx+eax*4]
    __asm done:
    __asm pop edi
    __asm pop esi
    __asm pop ebx
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
