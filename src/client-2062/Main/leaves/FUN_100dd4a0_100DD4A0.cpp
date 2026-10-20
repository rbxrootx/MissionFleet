// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100DD4A0 .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_100dd4a0_100DD4A0() {
    __asm {
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        mov ecx, dword ptr [esp + 10h]
        push edi
        cmp cl, byte ptr [ebp + 139dh]
        ; Exact mapped bytes 73 30: jae 0x100dd4e2
        __asm _emit 0x73
        __asm _emit 0x30
        xor edx, edx
        xor edi, edi
        mov dl, byte ptr [ebp + 98h]
        xor eax, eax
        test edx, edx
        ; Exact mapped bytes 7E 20: jle 0x100dd4e2
        __asm _emit 0x7e
        __asm _emit 0x20
        lea esi, [ebp + 0f9ch]
        cmp dword ptr [esi], 0
        ; Exact mapped bytes 74 0D: je 0x100dd4da
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ebx, ecx
        and ebx, 0ffh
        cmp edi, ebx
        ; Exact mapped bytes 74 12: je 0x100dd4eb
        __asm _emit 0x74
        __asm _emit 0x12
        inc edi
        inc eax
        add esi, 4
        cmp eax, edx
        ; Exact mapped bytes 7C E6: jl 0x100dd4c8
        __asm _emit 0x7c
        __asm _emit 0xe6
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp + eax*4 + 0d9ch]
        pop edi
        pop esi
        pop ebp
        mov eax, dword ptr [eax + 60h]
        pop ebx
        shr eax, 4
        xor al, 0aah
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
