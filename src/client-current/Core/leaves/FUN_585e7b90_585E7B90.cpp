// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585E7B90 .. +0x212 bytes.
extern "C" __declspec(naked) void FUN_585e7b90_585E7B90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1071ch], 0
        ; Exact mapped bytes 74 0F: je 0x585e7bb4
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 1071ch]
        ; Exact mapped bytes E8 ED ED E9 FF: call 0x584869a0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xed
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 20f2ch]
        ; Exact mapped bytes E8 FE ED E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xed
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 0B: jmp 0x585e7bd2
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E1 44 EA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x44
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 12: je 0x585e7bea
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 00 43 EA FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x43
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B9 ED E9 FF: call 0x584869a0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xed
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB DD: jmp 0x585e7bc7
        __asm _emit 0xeb
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20f2ch]
        ; Exact mapped bytes E8 78 9E F7 FF: call 0x58561a70
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x9e
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DD 42 EA FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x42
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 0B: jmp 0x585e7c13
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 20 45 EA FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x45
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 35: je 0x585e7c4e
        __asm _emit 0x74
        __asm _emit 0x35
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 5D 21 ED FF: call 0x584b9d80
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x21
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 05 D5 1C 00: call 0x587b5130
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xd5
        __asm _emit 0x1c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 DD 17 FE FF: call 0x585c9410
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x17
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 106fch]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D5 E0 1D 00: call 0x587c5d20
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xe0
        __asm _emit 0x1d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BA: jmp 0x585e7c08
        __asm _emit 0xeb
        __asm _emit 0xba
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0A 47 EA FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x47
        __asm _emit 0xea
        __asm _emit 0xff
        push eax
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 4F 40 EA FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x40
        __asm _emit 0xea
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 4
        div ecx
        add edx, 1388h
        mov dword ptr [ebp - 0ch], edx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 220e4h]
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 75 5C: jne 0x585e7cdd
        __asm _emit 0x75
        __asm _emit 0x5c
        cmp dword ptr [ebp - 0ch], 138bh
        ; Exact mapped bytes 75 0B: jne 0x585e7c95
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 0ch]
        sub ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 48: jmp 0x585e7cdd
        __asm _emit 0xeb
        __asm _emit 0x48
        cmp dword ptr [ebp - 0ch], 1388h
        ; Exact mapped bytes 75 0B: jne 0x585e7ca9
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 34: jmp 0x585e7cdd
        __asm _emit 0xeb
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AF 46 EA FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x46
        __asm _emit 0xea
        __asm _emit 0xff
        push eax
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 F4 3F EA FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x3f
        __asm _emit 0xea
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 2
        div ecx
        test edx, edx
        ; Exact mapped bytes 75 0B: jne 0x585e7cd4
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 09: jmp 0x585e7cdd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        sub eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 07 B6 FE FF: call 0x585d32f0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xb6
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 106fch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E5 CF 1C 00: call 0x587b4ce0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xcf
        __asm _emit 0x1c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D9 41 EA FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x41
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 0B: jmp 0x585e7d17
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1C 44 EA FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x44
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 3F: je 0x585e7d5c
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 106fch]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 51 20 ED FF: call 0x584b9d80
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x20
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 106fch]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 8F 16 FE FF: call 0x585c93d0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x16
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 106fch]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 87 CF 1C 00: call 0x587b4ce0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xcf
        __asm _emit 0x1c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB B0: jmp 0x585e7d0c
        __asm _emit 0xeb
        __asm _emit 0xb0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 220dch]
        ; Exact mapped bytes E8 36 5D FA FF: call 0x5858daa0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x5d
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8E 23 FE FF: call 0x585ca100
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x23
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1071ch], 0
        ; Exact mapped bytes 74 1F: je 0x585e7d9e
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 106fch]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1071ch]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 D3 6F EC FF: call 0x584aed70
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x6f
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
