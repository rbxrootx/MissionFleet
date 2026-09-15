// Exact recovered high-fanout table index resolver.
extern "C" unsigned char ProbeFile0049A1E0;
extern "C" unsigned char ProbeExpr0049A1E0;
extern "C" void Report004B0B30();
extern "C" __declspec(naked) void Probe0049A1E0()
{
    __asm push ebp
    __asm mov ebp, esp
    __asm sub esp, 8
    __asm push ebx
    __asm push esi
    __asm push edi
    __asm mov dword ptr [ebp-8], ecx
    __asm retry_check:
    __asm mov eax, dword ptr [ebp-8]
    __asm cmp dword ptr [eax+16], 0
    __asm jne checked
    __asm push offset ProbeExpr0049A1E0
    __asm push 0
    __asm push 2349
    __asm push offset ProbeFile0049A1E0
    __asm push 2
    __asm call Report004B0B30
    __asm add esp, 20
    __asm cmp eax, 1
    __asm jne checked
    __asm int 3
    __asm checked:
    __asm xor ecx, ecx
    __asm test ecx, ecx
    __asm jne retry_check
    __asm mov edx, dword ptr [ebp-8]
    __asm xor eax, eax
    __asm mov al, byte ptr [edx+24]
    __asm test eax, eax
    __asm je ranged
    __asm mov dword ptr [ebp-4], 0
    __asm jmp loop_check
    __asm iterate:
    __asm mov ecx, dword ptr [ebp-4]
    __asm add ecx, 1
    __asm mov dword ptr [ebp-4], ecx
    __asm loop_check:
    __asm mov edx, dword ptr [ebp-8]
    __asm mov eax, dword ptr [ebp-4]
    __asm cmp eax, dword ptr [edx+12]
    __asm jae not_found
    __asm mov ecx, dword ptr [ebp-4]
    __asm imul ecx, ecx, 48
    __asm mov edx, dword ptr [ebp-8]
    __asm mov eax, dword ptr [edx+16]
    __asm mov edx, dword ptr [ebp+8]
    __asm mov eax, dword ptr [eax+ecx+8]
    __asm cmp eax, dword ptr [edx]
    __asm jne continue_loop
    __asm mov ecx, dword ptr [ebp+8]
    __asm mov edx, dword ptr [ebp-4]
    __asm mov dword ptr [ecx], edx
    __asm mov al, 1
    __asm jmp done
    __asm continue_loop:
    __asm jmp iterate
    __asm not_found:
    __asm xor al, al
    __asm jmp done
    __asm ranged:
    __asm mov eax, dword ptr [ebp-8]
    __asm mov ecx, dword ptr [eax+12]
    __asm mov edx, dword ptr [ebp-8]
    __asm mov eax, dword ptr [edx+16]
    __asm mov edx, dword ptr [eax+8]
    __asm lea eax, dword ptr [ecx+edx-1]
    __asm mov ecx, dword ptr [ebp+8]
    __asm cmp dword ptr [ecx], eax
    __asm jbe adjust
    __asm xor al, al
    __asm jmp done
    __asm adjust:
    __asm mov edx, dword ptr [ebp-8]
    __asm mov eax, dword ptr [edx+16]
    __asm mov ecx, dword ptr [ebp+8]
    __asm mov edx, dword ptr [ecx]
    __asm sub edx, dword ptr [eax+8]
    __asm mov eax, dword ptr [ebp+8]
    __asm mov dword ptr [eax], edx
    __asm mov al, 1
    __asm done:
    __asm pop edi
    __asm pop esi
    __asm pop ebx
    __asm mov esp, ebp
    __asm pop ebp
    __asm ret 4
}
