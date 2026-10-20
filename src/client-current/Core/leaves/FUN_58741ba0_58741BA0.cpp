// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58741BA0 .. +0x1EC bytes.
extern "C" __declspec(naked) void FUN_58741ba0_58741BA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DC E0 D6 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xe0
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 25 2E D4 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x2e
        __asm _emit 0xd4
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58741bdb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 3
        ; Exact mapped bytes 7D 33: jge 0x58741c14
        __asm _emit 0x7d
        __asm _emit 0x33
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 6A FF FF FF: call 0x58741b60
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 18h], ecx
        push 5
        push 1
        mov edx, dword ptr [ebp - 0ch]
        push edx
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 1F 58 FA FF: call 0x586e7430
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x58
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BE: jmp 0x58741bd2
        __asm _emit 0xeb
        __asm _emit 0xbe
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 74 10: je 0x58741c2a
        __asm _emit 0x74
        __asm _emit 0x10
        cmp dword ptr [ebp - 8], 7
        ; Exact mapped bytes 74 0A: je 0x58741c2a
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 0F 85 4A 01 00 00: jne 0x58741d74
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5B E0 D6 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xe0
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A4 2D D4 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x2d
        __asm _emit 0xd4
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 0E: mov ax, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0e
        ; Exact mapped bytes 66 C1 E8 04: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x04
        mov ecx, 0ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        movzx edx, ax
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        ; Exact mapped bytes E8 23 55 FA FF: call 0x586e7180
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x55
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        cmp dword ptr [ebp - 10h], 32h
        ; Exact mapped bytes 72 5A: jb 0x58741cc0
        __asm _emit 0x72
        __asm _emit 0x5a
        cmp dword ptr [ebp - 10h], 52h
        ; Exact mapped bytes 77 54: ja 0x58741cc0
        __asm _emit 0x77
        __asm _emit 0x54
        cmp dword ptr [ebp - 8], 7
        ; Exact mapped bytes 74 06: je 0x58741c78
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 75 16: jne 0x58741c8e
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 1ch], edx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 D5 FE FF FF: call 0x58741b60
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2D: jmp 0x58741cbb
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 20h], ecx
        push 3
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 BF FE FF FF: call 0x58741b60
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 24h], eax
        push 1
        push 1
        push 3
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 76 57 FA FF: call 0x586e7430
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x57
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B2 00 00 00: jmp 0x58741d72
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 53h
        ; Exact mapped bytes 72 57: jb 0x58741d1d
        __asm _emit 0x72
        __asm _emit 0x57
        cmp dword ptr [ebp - 10h], 77h
        ; Exact mapped bytes 77 51: ja 0x58741d1d
        __asm _emit 0x77
        __asm _emit 0x51
        cmp dword ptr [ebp - 8], 7
        ; Exact mapped bytes 74 06: je 0x58741cd8
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 75 16: jne 0x58741cee
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 28h], edx
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 75 FE FF FF: call 0x58741b60
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2D: jmp 0x58741d1b
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 2ch], ecx
        push 4
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 5F FE FF FF: call 0x58741b60
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 30h], eax
        push 1
        push 1
        push 4
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 16 57 FA FF: call 0x586e7430
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x57
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 55: jmp 0x58741d72
        __asm _emit 0xeb
        __asm _emit 0x55
        cmp dword ptr [ebp - 10h], 78h
        ; Exact mapped bytes 75 4F: jne 0x58741d72
        __asm _emit 0x75
        __asm _emit 0x4f
        cmp dword ptr [ebp - 8], 7
        ; Exact mapped bytes 74 06: je 0x58741d2f
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 75 16: jne 0x58741d45
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 34h], edx
        push 2
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 1E FE FF FF: call 0x58741b60
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2D: jmp 0x58741d72
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 38h], ecx
        push 5
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 08 FE FF FF: call 0x58741b60
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 3ch], eax
        push 1
        push 1
        push 5
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 BF 56 FA FF: call 0x586e7430
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x56
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 14: jmp 0x58741d88
        __asm _emit 0xeb
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 40h], edx
        push -1
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 D9 FD FF FF: call 0x58741b60
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
