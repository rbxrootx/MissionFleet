// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00507B92 .. +0x100 bytes.
extern "C" __declspec(naked) void FUN_00507b92_00507B92() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 1ch], ecx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 6D C4 02 00: call 0x534013
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 0B: je 0x507bc4
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 5ch]
        mov dword ptr [ebp - 20h], edx
        ; Exact mapped bytes EB 07: jmp 0x507bcb
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 1ch]
        cmp dword ptr [edx + 58h], 0
        ; Exact mapped bytes 75 19: jne 0x507bf9
        __asm _emit 0x75
        __asm _emit 0x19
        push 5ca4ech
        push 5ca528h
        ; Exact mapped bytes E8 26 80 FC FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x80
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes E9 90 00 00 00: jmp 0x507c89
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax + 40h], 0
        ; Exact mapped bytes 75 14: jne 0x507c16
        __asm _emit 0x75
        __asm _emit 0x14
        push 131h
        push 5ca348h
        ; Exact mapped bytes E8 EF CD 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xcd
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x507c16
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x507bf9
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [edx + 58h]
        ; Exact mapped bytes E8 C2 36 FF FF: call 0x4fb2e9
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x36
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 1A: jne 0x507c4a
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 58h]
        mov edx, dword ptr [ecx]
        push edx
        push 5ca52ch
        ; Exact mapped bytes E8 D2 7F FC FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x7f
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes EB 3F: jmp 0x507c89
        __asm _emit 0xeb
        __asm _emit 0x3f
        lea eax, [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 44000000h
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 40h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 C0 00 00 00: call dword ptr [edx + 0xc0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x507c86
        __asm _emit 0x75
        __asm _emit 0x16
        push 5ca55ch
        push 5ca594h
        ; Exact mapped bytes E8 96 7F FC FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x7f
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes EB 03: jmp 0x507c89
        __asm _emit 0xeb
        __asm _emit 0x03
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
