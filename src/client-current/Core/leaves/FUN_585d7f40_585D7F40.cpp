// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585D7F40 .. +0x119 bytes.
extern "C" __declspec(naked) void FUN_585d7f40_585D7F40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x585d7f5b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 106c0h]
        ; Exact mapped bytes 0F 8D E8 00 00 00: jge 0x585d8055
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 8
        ; Exact mapped bytes 75 05: jne 0x585d7f78
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 DD 00 00 00: jmp 0x585d8055
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 21ac8h]
        mov dword ptr [ebp - 0ch], edx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 6E D9 13 00: call 0x58715900
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xd9
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 8]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 8
        ; Exact mapped bytes 74 0F: je 0x585d7fb1
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 8]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 9
        ; Exact mapped bytes 75 46: jne 0x585d7ff7
        __asm _emit 0x75
        __asm _emit 0x46
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 04 EA EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xea
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 ED 4F EB FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x4f
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 75 2D: jne 0x585d7ff5
        __asm _emit 0x75
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 21ac8h]
        mov dword ptr [ebp - 10h], eax
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 1E D9 13 00: call 0x58715900
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xd9
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + ecx*4 + 21ac8h]
        ; Exact mapped bytes E8 4C D9 13 00: call 0x58715940
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xd9
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 59: jmp 0x585d8050
        __asm _emit 0xeb
        __asm _emit 0x59
        mov eax, dword ptr [ebp - 8]
        movzx ecx, word ptr [eax + 1077ah]
        cmp ecx, 7
        ; Exact mapped bytes 74 2F: je 0x585d8035
        __asm _emit 0x74
        __asm _emit 0x2f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 21ac8h]
        mov dword ptr [ebp - 14h], ecx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 E0 D8 13 00: call 0x58715900
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xd8
        __asm _emit 0x13
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 21ac8h]
        ; Exact mapped bytes E8 0E D9 13 00: call 0x58715940
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xd9
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1B: jmp 0x585d8050
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 21ac8h]
        mov dword ptr [ebp - 18h], eax
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 B1 D8 13 00: call 0x58715900
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xd8
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 FD FE FF FF: jmp 0x585d7f52
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
