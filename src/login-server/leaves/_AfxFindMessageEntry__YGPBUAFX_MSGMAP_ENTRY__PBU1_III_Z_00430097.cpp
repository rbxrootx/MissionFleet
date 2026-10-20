// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00430097 .. +0x40 bytes.
extern "C" __declspec(naked) void _AfxFindMessageEntry__YGPBUAFX_MSGMAP_ENTRY__PBU1_III_Z_00430097() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        mov ebx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 14h]
        cmp dword ptr [ebx + 10h], 0
        ; Exact mapped bytes 74 1D: je 0x4300ca
        __asm _emit 0x74
        __asm _emit 0x1d
        cmp eax, dword ptr [ebx]
        ; Exact mapped bytes 74 05: je 0x4300b6
        __asm _emit 0x74
        __asm _emit 0x05
        add ebx, 18h
        ; Exact mapped bytes EB F1: jmp 0x4300a7
        __asm _emit 0xeb
        __asm _emit 0xf1
        cmp edx, dword ptr [ebx + 4]
        ; Exact mapped bytes 75 F6: jne 0x4300b1
        __asm _emit 0x75
        __asm _emit 0xf6
        cmp ecx, dword ptr [ebx + 8]
        ; Exact mapped bytes 72 F1: jb 0x4300b1
        __asm _emit 0x72
        __asm _emit 0xf1
        cmp ecx, dword ptr [ebx + 0ch]
        ; Exact mapped bytes 77 EC: ja 0x4300b1
        __asm _emit 0x77
        __asm _emit 0xec
        mov dword ptr [ebp + 8], ebx
        ; Exact mapped bytes EB 05: jmp 0x4300cf
        __asm _emit 0xeb
        __asm _emit 0x05
        xor eax, eax
        mov dword ptr [ebp + 8], eax
        mov eax, dword ptr [ebp + 8]
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
