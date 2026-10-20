// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10080900 .. +0x133 bytes.
extern "C" __declspec(naked) void FUN_10080900_10080900() {
    __asm {
        sub esp, 400h
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 0cch]
        test eax, eax
        ; Exact mapped bytes 0F 84 0C 01 00 00: je 0x10080a26
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 414h]
        mov ebp, dword ptr [esp + 41ch]
        test ebx, ebx
        ; Exact mapped bytes 75 2E: jne 0x1008095a
        __asm _emit 0x75
        __asm _emit 0x2e
        cmp ebp, -1
        ; Exact mapped bytes 75 29: jne 0x1008095a
        __asm _emit 0x75
        __asm _emit 0x29
        mov eax, dword ptr [esp + 418h]
        mov ecx, dword ptr [esi + 0d14h]
        push 0
        push 0
        push 10101h
        push eax
        ; Exact mapped bytes E8 13 1B F9 FF: call 0x10012460
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x1b
        __asm _emit 0xf9
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 400h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        push 101ad0e8h
        push ebx
        ; Exact mapped bytes FF 15 A0 50 17 10: call dword ptr [0x101750a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 0F 84 B8 00 00 00: je 0x10080a26
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edi, edi
        cmp ebp, 1
        ; Exact mapped bytes 75 0E: jne 0x10080983
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [esi + 0d8h]
        push ebx
        ; Exact mapped bytes E8 DF 40 01 00: call 0x10094a60
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 10: jmp 0x10080993
        __asm _emit 0xeb
        __asm _emit 0x10
        test ebp, ebp
        ; Exact mapped bytes 75 0E: jne 0x10080995
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [esi + 0d8h]
        push ebx
        ; Exact mapped bytes E8 8D 40 01 00: call 0x10094a20
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, eax
        push ebx
        lea ecx, [esp + 14h]
        push 101ab9c8h
        push ecx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov edx, dword ptr [esp + 424h]
        add esp, 0ch
        lea eax, [esp + 10h]
        push 3d4h
        push edx
        push eax
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        lea ecx, [esp + eax + 18h]
        push ecx
        ; Exact mapped bytes FF 15 B4 50 17 10: call dword ptr [0x101750b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test edi, edi
        ; Exact mapped bytes 74 25: je 0x100809f5
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [esi + 0d14h]
        push edi
        push 0
        lea edx, [esp + 18h]
        push 10101h
        push edx
        ; Exact mapped bytes E8 78 1A F9 FF: call 0x10012460
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x1a
        __asm _emit 0xf9
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 400h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d14h]
        push 0
        push 0
        lea eax, [esp + 18h]
        push 10101h
        push eax
        ; Exact mapped bytes E8 52 1A F9 FF: call 0x10012460
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x1a
        __asm _emit 0xf9
        __asm _emit 0xff
        lea ecx, [esi + 0cfch]
        push ebx
        push ecx
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [esi + 0d18h], 1
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 400h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
