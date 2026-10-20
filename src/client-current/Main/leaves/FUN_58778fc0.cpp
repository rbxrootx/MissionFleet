// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58778FC0 .. +0x93 bytes.
extern "C" __declspec(naked) void FUN_58778fc0() {
    __asm {
        push ecx
        push ebx
        mov ebx, dword ptr [ecx + 0e4h]
        mov ecx, dword ptr [ecx + 0f0h]
        push edi
        xor eax, eax
        xor edi, edi
        mov dword ptr [esp + 8], ecx
        test ebx, ebx
        ; Exact mapped bytes 7E 72: jle 0x5877904d
        __asm _emit 0x7e
        __asm _emit 0x72
        push ebp
        ; Exact mapped bytes 66 8B 6C 24 14: mov bp, word ptr [esp + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x14
        push esi
        lea esi, [ecx + 2]
        movzx eax, word ptr [esi]
        ; Exact mapped bytes 66 83 F8 6C: cmp ax, 0x6c
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x6c
        ; Exact mapped bytes 74 0C: je 0x58778ffa
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 66 83 F8 6D: cmp ax, 0x6d
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x6d
        ; Exact mapped bytes 74 06: je 0x58778ffa
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 83 F8 6E: cmp ax, 0x6e
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x6e
        ; Exact mapped bytes 75 0B: jne 0x58779005
        __asm _emit 0x75
        __asm _emit 0x0b
        push 5898d61ch
        ; Exact mapped bytes FF 15 78 C1 98 58: call dword ptr [0x5898c178]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov al, byte ptr [esi + 99h]
        and al, 0fh
        ; Exact mapped bytes 66 0F B6 C8: movzx cx, al
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc8
        ; Exact mapped bytes 66 3B E9: cmp bp, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xe9
        ; Exact mapped bytes 75 14: jne 0x5877902a
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 66 8B 54 24 1C: mov dx, word ptr [esp + 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 66 3B 96 A0 00 00 00: cmp dx, word ptr [esi + 0xa0]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x96
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 06: jne 0x5877902a
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [esi + 6ah], 1
        ; Exact mapped bytes 74 15: je 0x5877903f
        __asm _emit 0x74
        __asm _emit 0x15
        inc edi
        add esi, 0ach
        cmp edi, ebx
        ; Exact mapped bytes 7C B0: jl 0x58778fe5
        __asm _emit 0x7c
        __asm _emit 0xb0
        pop esi
        pop ebp
        pop edi
        xor eax, eax
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        imul edi, edi, 0ach
        add edi, dword ptr [esp + 10h]
        pop esi
        mov eax, edi
        pop ebp
        pop edi
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
