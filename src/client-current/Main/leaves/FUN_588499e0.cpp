// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588499E0 .. +0xD0 bytes.
extern "C" __declspec(naked) void FUN_588499e0() {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr [edi + 98h]
        cmp esi, dword ptr [edi + 9ch]
        ; Exact mapped bytes 76 05: jbe 0x588499f9
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 79 32 13 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x32
        __asm _emit 0x13
        __asm _emit 0x00
        mov ebx, dword ptr [edi + 8ch]
        nop
        mov ebp, dword ptr [edi + 9ch]
        cmp dword ptr [edi + 98h], ebp
        ; Exact mapped bytes 76 05: jbe 0x58849a13
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 5F 32 13 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x32
        __asm _emit 0x13
        __asm _emit 0x00
        mov eax, dword ptr [edi + 8ch]
        test ebx, ebx
        ; Exact mapped bytes 74 04: je 0x58849a21
        __asm _emit 0x74
        __asm _emit 0x04
        cmp ebx, eax
        ; Exact mapped bytes 74 05: je 0x58849a26
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 4C 32 13 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x32
        __asm _emit 0x13
        __asm _emit 0x00
        cmp esi, ebp
        ; Exact mapped bytes 74 7F: je 0x58849aa9
        __asm _emit 0x74
        __asm _emit 0x7f
        test ebx, ebx
        ; Exact mapped bytes 75 33: jne 0x58849a61
        __asm _emit 0x75
        __asm _emit 0x33
        ; Exact mapped bytes E8 3F 32 13 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x32
        __asm _emit 0x13
        __asm _emit 0x00
        xor eax, eax
        cmp esi, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x58849a3f
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 33 32 13 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x32
        __asm _emit 0x13
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        cmp dword ptr [esi], eax
        ; Exact mapped bytes 74 22: je 0x58849a69
        __asm _emit 0x74
        __asm _emit 0x22
        test ebx, ebx
        ; Exact mapped bytes 75 1A: jne 0x58849a65
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes E8 22 32 13 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x32
        __asm _emit 0x13
        __asm _emit 0x00
        xor eax, eax
        cmp esi, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x58849a5c
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 16 32 13 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x32
        __asm _emit 0x13
        __asm _emit 0x00
        add esi, 4
        ; Exact mapped bytes EB 9F: jmp 0x58849a00
        __asm _emit 0xeb
        __asm _emit 0x9f
        mov eax, dword ptr [ebx]
        ; Exact mapped bytes EB D0: jmp 0x58849a35
        __asm _emit 0xeb
        __asm _emit 0xd0
        mov eax, dword ptr [ebx]
        ; Exact mapped bytes EB E9: jmp 0x58849a52
        __asm _emit 0xeb
        __asm _emit 0xe9
        mov eax, dword ptr [edi + 9ch]
        lea ecx, [esi + 4]
        sub eax, ecx
        sar eax, 2
        test eax, eax
        ; Exact mapped bytes 7E 10: jle 0x58849a8b
        __asm _emit 0x7e
        __asm _emit 0x10
        add eax, eax
        add eax, eax
        push eax
        push ecx
        push eax
        push esi
        ; Exact mapped bytes E8 CC 31 13 00: call 0x5897cc54
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x31
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 10h
        add dword ptr [edi + 9ch], -4
        mov eax, dword ptr [edi + 9ch]
        cmp dword ptr [edi + 98h], esi
        ; Exact mapped bytes 77 04: ja 0x58849aa4
        __asm _emit 0x77
        __asm _emit 0x04
        cmp esi, eax
        ; Exact mapped bytes 76 05: jbe 0x58849aa9
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 C9 31 13 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x31
        __asm _emit 0x13
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
