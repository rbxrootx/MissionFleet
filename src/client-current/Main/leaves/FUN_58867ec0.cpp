// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58867EC0 .. +0x172 bytes.
extern "C" __declspec(naked) void FUN_58867ec0() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        push edi
        test al, 2
        ; Exact mapped bytes 0F 84 56 01 00 00: je 0x58868028
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 14h]
        mov eax, dword ptr [ebp + 4]
        sub eax, 100h
        ; Exact mapped bytes 0F 84 F7 00 00 00: je 0x58867fdb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 100h
        ; Exact mapped bytes 74 64: je 0x58867f4f
        __asm _emit 0x74
        __asm _emit 0x64
        sub eax, 1
        ; Exact mapped bytes 0F 85 ED 00 00 00: jne 0x58867fe1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 2c0h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 74 26: je 0x58867f29
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, 0aah
        ; Exact mapped bytes 66 33 86 D6 00 00 00: xor ax, word ptr [esi + 0xd6]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x86
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 0A: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x0a
        ; Exact mapped bytes 72 14: jb 0x58867f29
        __asm _emit 0x72
        __asm _emit 0x14
        lea ecx, [esi + 0cch]
        push ecx
        mov ecx, dword ptr [esi + 70h]
        ; Exact mapped bytes E8 FC 5C 03 00: call 0x5889dc20
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x5c
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 B8 00 00 00: jmp 0x58867fe1
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 2c4h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 0F 84 A6 00 00 00: je 0x58867fe1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esi + 0cch]
        push ecx
        mov ecx, dword ptr [esi + 6ch]
        ; Exact mapped bytes E8 16 1C 04 00: call 0x588a9b60
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x1c
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 92 00 00 00: jmp 0x58867fe1
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 1D C8 84 A2 58: mov ebx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [esi + 2c0h]
        add ebx, 4
        push ebx
        mov ecx, edi
        ; Exact mapped bytes E8 DA 95 EC FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x95
        __asm _emit 0xec
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 27: je 0x58867f91
        __asm _emit 0x74
        __asm _emit 0x27
        ; Exact mapped bytes 66 8B 57 24: mov dx, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 75 0D: jne 0x58867f80
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 2c0h]
        push 1
        ; Exact mapped bytes E8 70 96 EC FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x96
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, dword ptr [esi + 2c4h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes EB 50: jmp 0x58867fe1
        __asm _emit 0xeb
        __asm _emit 0x50
        mov ecx, dword ptr [esi + 2c4h]
        push ebx
        ; Exact mapped bytes E8 A3 95 EC FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x95
        __asm _emit 0xec
        __asm _emit 0xff
        push 0
        mov ecx, edi
        test eax, eax
        ; Exact mapped bytes 74 22: je 0x58867fc7
        __asm _emit 0x74
        __asm _emit 0x22
        ; Exact mapped bytes E8 46 96 EC FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x96
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, dword ptr [esi + 2c4h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 75 29: jne 0x58867fe1
        __asm _emit 0x75
        __asm _emit 0x29
        mov ecx, dword ptr [esi + 2c4h]
        push 1
        ; Exact mapped bytes E8 2B 96 EC FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x96
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes EB 1A: jmp 0x58867fe1
        __asm _emit 0xeb
        __asm _emit 0x1a
        ; Exact mapped bytes E8 F4 95 EC FF: call 0x587315c0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x95
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 2c4h]
        push 0
        ; Exact mapped bytes E8 E7 95 EC FF: call 0x587315c0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x95
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x58867fe1
        __asm _emit 0xeb
        __asm _emit 0x06
        cmp dword ptr [ebp + 8], 1bh
        ; Exact mapped bytes 74 2E: je 0x5886800f
        __asm _emit 0x74
        __asm _emit 0x2e
        mov eax, dword ptr [esi + 3ch]
        test eax, eax
        ; Exact mapped bytes 74 40: je 0x58868028
        __asm _emit 0x74
        __asm _emit 0x40
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x58868006
        __asm _emit 0x74
        __asm _emit 0x17
        nop
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 10h]
        push ebp
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 26: je 0x58868028
        __asm _emit 0x74
        __asm _emit 0x26
        test eax, eax
        ; Exact mapped bytes 75 EA: jne 0x58867ff0
        __asm _emit 0x75
        __asm _emit 0xea
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [esi + 2d0h], 1
        ; Exact mapped bytes 74 07: je 0x5886801f
        __asm _emit 0x74
        __asm _emit 0x07
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
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
