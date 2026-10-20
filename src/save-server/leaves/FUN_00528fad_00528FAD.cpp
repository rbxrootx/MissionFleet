// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00528FAD .. +0x254 bytes.
extern "C" __declspec(naked) void FUN_00528fad_00528FAD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0b8h
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 4], 3e8h
        ; Exact mapped bytes 0F 85 A7 00 00 00: jne 0x529070
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 8]
        push ecx
        lea edx, [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        push 3e8h
        ; Exact mapped bytes E8 D8 AA F5 FF: call 0x483aba
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xaa
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 19: jne 0x528fff
        __asm _emit 0x75
        __asm _emit 0x19
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 0ch]
        push eax
        push 676778h
        ; Exact mapped bytes E8 1E 76 F7 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x76
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E9 F9 01 00 00: jmp 0x5291f8
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x529019
        __asm _emit 0x75
        __asm _emit 0x14
        push 0f1h
        push 675bd8h
        ; Exact mapped bytes E8 2C FD FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x529019
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x528fff
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 F8 B9 68 00: call dword ptr [0x68b9f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x529046
        __asm _emit 0x75
        __asm _emit 0x14
        push 0f4h
        push 675bd8h
        ; Exact mapped bytes E8 FF FC FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x529046
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x52902c
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        push 6767b0h
        ; Exact mapped bytes E8 B7 75 F7 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x75
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 FC B9 68 00: call dword ptr [0x68b9fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E9 88 01 00 00: jmp 0x5291f8
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 4], 3e2h
        ; Exact mapped bytes 0F 85 78 01 00 00: jne 0x5291f8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 0b4h]
        push edx
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        push 3e2h
        ; Exact mapped bytes E8 1E AA F5 FF: call 0x483aba
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xaa
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 19: jne 0x5290b9
        __asm _emit 0x75
        __asm _emit 0x19
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        push 6767c4h
        ; Exact mapped bytes E8 64 75 F7 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x75
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E9 3F 01 00 00: jmp 0x5291f8
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0b4h]
        and edx, 0ffffh
        test edx, edx
        ; Exact mapped bytes 75 14: jne 0x5290dd
        __asm _emit 0x75
        __asm _emit 0x14
        push 103h
        push 675bd8h
        ; Exact mapped bytes E8 68 FC FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5290dd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D6: jne 0x5290b9
        __asm _emit 0x75
        __asm _emit 0xd6
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 14: jne 0x5290fd
        __asm _emit 0x75
        __asm _emit 0x14
        push 104h
        push 675bd8h
        ; Exact mapped bytes E8 48 FC FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5290fd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x5290e3
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 15 F8 B9 68 00: call dword ptr [0x68b9f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0b8h], eax
        cmp dword ptr [ebp - 0b8h], 0
        ; Exact mapped bytes 75 14: jne 0x529130
        __asm _emit 0x75
        __asm _emit 0x14
        push 107h
        push 675bd8h
        ; Exact mapped bytes E8 15 FC FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x529130
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x529113
        __asm _emit 0x75
        __asm _emit 0xdd
        mov byte ptr [ebp - 60h], 0
        mov ecx, dword ptr [ebp - 0b4h]
        and ecx, 0ffffh
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x52915e
        __asm _emit 0x74
        __asm _emit 0x14
        push 50h
        lea edx, [ebp - 60h]
        push edx
        ; Exact mapped bytes 66 8B 85 4C FF FF FF: mov ax, word ptr [ebp - 0xb4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 E8 B9 68 00: call dword ptr [0x68b9e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov byte ptr [ebp - 0b0h], 0
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes 0F BF 51 02: movsx edx, word ptr [ecx + 2]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x02
        cmp edx, 0c000h
        ; Exact mapped bytes 72 2C: jb 0x5291a3
        __asm _emit 0x72
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes 0F BF 48 02: movsx ecx, word ptr [eax + 2]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x02
        cmp ecx, 0ffffh
        ; Exact mapped bytes 77 1A: ja 0x5291a3
        __asm _emit 0x77
        __asm _emit 0x1a
        push 50h
        lea edx, [ebp - 0b0h]
        push edx
        mov eax, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes 0F BF 48 02: movsx ecx, word ptr [eax + 2]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x02
        push ecx
        ; Exact mapped bytes FF 15 44 BC 68 00: call dword ptr [0x68bc44]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 C1 E8 0E: shr ax, 0xe
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x0e
        ; Exact mapped bytes 66 25 01 00: and ax, 1
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        and eax, 0ffffh
        push eax
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 66 C1 EA 0F: shr dx, 0xf
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x0f
        ; Exact mapped bytes 66 83 E2 01: and dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x01
        and edx, 0ffffh
        push edx
        lea eax, [ebp - 0b0h]
        push eax
        lea ecx, [ebp - 60h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        push 6767fch
        ; Exact mapped bytes E8 2A 74 F7 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x74
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 18h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 FC B9 68 00: call dword ptr [0x68b9fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
