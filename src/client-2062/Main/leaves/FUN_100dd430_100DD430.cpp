// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100DD430 .. +0x62 bytes.
extern "C" __declspec(naked) void FUN_100dd430_100DD430() {
    __asm {
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        mov ecx, dword ptr [esp + 10h]
        push edi
        cmp cl, byte ptr [ebp + 139dh]
        ; Exact mapped bytes 73 30: jae 0x100dd472
        __asm _emit 0x73
        __asm _emit 0x30
        xor edx, edx
        xor edi, edi
        mov dl, byte ptr [ebp + 98h]
        xor eax, eax
        test edx, edx
        ; Exact mapped bytes 7E 20: jle 0x100dd472
        __asm _emit 0x7e
        __asm _emit 0x20
        lea esi, [ebp + 0f9ch]
        cmp dword ptr [esi], 0
        ; Exact mapped bytes 74 0D: je 0x100dd46a
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ebx, ecx
        and ebx, 0ffh
        cmp edi, ebx
        ; Exact mapped bytes 74 12: je 0x100dd47b
        __asm _emit 0x74
        __asm _emit 0x12
        inc edi
        inc eax
        add esi, 4
        cmp eax, edx
        ; Exact mapped bytes 7C E6: jl 0x100dd458
        __asm _emit 0x7c
        __asm _emit 0xe6
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp + eax*4 + 0d9ch]
        pop edi
        pop esi
        pop ebp
        mov ecx, dword ptr [eax + 438h]
        pop ebx
        mov eax, dword ptr [ecx + 6ch]
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
