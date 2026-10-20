// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B0B30 .. +0x390 bytes.
extern "C" __declspec(naked) void FUN_004b0b30_004B0B30() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, 302ch
        ; Exact mapped bytes E8 83 8C FF FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0xff
        push edi
        mov byte ptr [ebp - 3008h], 0
        mov ecx, 3ffh
        xor eax, eax
        lea edi, [ebp - 3007h]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        ; Exact mapped bytes AA: stosb byte ptr es:[edi], al
        __asm _emit 0xaa
        mov byte ptr [ebp - 2008h], 0
        mov ecx, 3ffh
        xor eax, eax
        lea edi, [ebp - 2007h]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        ; Exact mapped bytes AA: stosb byte ptr es:[edi], al
        __asm _emit 0xaa
        mov byte ptr [ebp - 1000h], 0
        mov ecx, 3ffh
        xor eax, eax
        lea edi, [ebp - 0fffh]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        ; Exact mapped bytes AA: stosb byte ptr es:[edi], al
        __asm _emit 0xaa
        lea eax, [ebp + 1ch]
        mov dword ptr [ebp - 1004h], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7C 06: jl 0x4b0b9e
        __asm _emit 0x7c
        __asm _emit 0x06
        cmp dword ptr [ebp + 8], 3
        ; Exact mapped bytes 7C 08: jl 0x4b0ba6
        __asm _emit 0x7c
        __asm _emit 0x08
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 15 03 00 00: jmp 0x4b0ebb
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 0F 85 A0 00 00 00: jne 0x4b0c50
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 5d14b0h
        ; Exact mapped bytes FF 15 E8 23 5E 00: call dword ptr [0x5e23e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 8E 8D 00 00 00: jle 0x4b0c50
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D A0 ED 5D 00 00: cmp dword ptr [0x5deda0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa0
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 42: jne 0x4b0c0e
        __asm _emit 0x75
        __asm _emit 0x42
        push 58c51ch
        ; Exact mapped bytes FF 15 28 24 5E 00: call dword ptr [0x5e2428]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 300ch], eax
        cmp dword ptr [ebp - 300ch], 0
        ; Exact mapped bytes 74 20: je 0x4b0c06
        __asm _emit 0x74
        __asm _emit 0x20
        push 58c510h
        mov ecx, dword ptr [ebp - 300ch]
        push ecx
        ; Exact mapped bytes FF 15 2C 24 5E 00: call dword ptr [0x5e242c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 A0 ED 5D 00: mov dword ptr [0x5deda0], eax
        __asm _emit 0xa3
        __asm _emit 0xa0
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D A0 ED 5D 00 00: cmp dword ptr [0x5deda0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa0
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 08: jne 0x4b0c0e
        __asm _emit 0x75
        __asm _emit 0x08
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 AD 02 00 00: jmp 0x4b0ebb
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 58c4dch
        lea ecx, [ebp - 2008h]
        push ecx
        ; Exact mapped bytes FF 15 A0 ED 5D 00: call dword ptr [0x5deda0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        add esp, 10h
        lea edx, [ebp - 2008h]
        push edx
        ; Exact mapped bytes FF 15 44 24 5E 00: call dword ptr [0x5e2444]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        push 5d14b0h
        ; Exact mapped bytes FF 15 E4 23 5E 00: call dword ptr [0x5e23e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes E8 D8 FD FF FF: call 0x4b0a20
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 6B 02 00 00: jmp 0x4b0ebb
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 37: je 0x4b0c8d
        __asm _emit 0x74
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 1004h]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        push 0fedh
        lea edx, [ebp - 1000h]
        push edx
        ; Exact mapped bytes E8 AE F5 FF FF: call 0x4b0220
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 7D 14: jge 0x4b0c8d
        __asm _emit 0x7d
        __asm _emit 0x14
        push 58c4b0h
        lea eax, [ebp - 1000h]
        push eax
        ; Exact mapped bytes E8 B6 91 FF FF: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x91
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 75 32: jne 0x4b0cc5
        __asm _emit 0x75
        __asm _emit 0x32
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 0C: je 0x4b0ca5
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 3028h], 58c49ch
        ; Exact mapped bytes EB 0A: jmp 0x4b0caf
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 3028h], 58c488h
        mov ecx, dword ptr [ebp - 3028h]
        push ecx
        lea edx, [ebp - 3008h]
        push edx
        ; Exact mapped bytes E8 7E 91 FF FF: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x91
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        lea eax, [ebp - 1000h]
        push eax
        lea ecx, [ebp - 3008h]
        push ecx
        ; Exact mapped bytes E8 78 91 FF FF: call 0x4a9e50
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x91
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 75 39: jne 0x4b0d1a
        __asm _emit 0x75
        __asm _emit 0x39
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx*4 + 5d14b4h]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4b0d06
        __asm _emit 0x74
        __asm _emit 0x14
        push 58c484h
        lea ecx, [ebp - 3008h]
        push ecx
        ; Exact mapped bytes E8 4D 91 FF FF: call 0x4a9e50
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x91
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        push 58c480h
        lea edx, [ebp - 3008h]
        push edx
        ; Exact mapped bytes E8 39 91 FF FF: call 0x4a9e50
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x91
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 42: je 0x4b0d62
        __asm _emit 0x74
        __asm _emit 0x42
        lea eax, [ebp - 3008h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 58c474h
        push 1000h
        lea eax, [ebp - 2008h]
        push eax
        ; Exact mapped bytes E8 CB AD 00 00: call 0x4bbb10
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        test eax, eax
        ; Exact mapped bytes 7D 14: jge 0x4b0d60
        __asm _emit 0x7d
        __asm _emit 0x14
        push 58c4b0h
        lea ecx, [ebp - 2008h]
        push ecx
        ; Exact mapped bytes E8 E3 90 FF FF: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x90
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 16: jmp 0x4b0d78
        __asm _emit 0xeb
        __asm _emit 0x16
        lea edx, [ebp - 3008h]
        push edx
        lea eax, [ebp - 2008h]
        push eax
        ; Exact mapped bytes E8 CB 90 FF FF: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x90
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes 83 3D 60 02 5E 00 00: cmp dword ptr [0x5e0260], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 3B: je 0x4b0dbc
        __asm _emit 0x74
        __asm _emit 0x3b
        lea ecx, [ebp - 1008h]
        push ecx
        lea edx, [ebp - 2008h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 60 02 5E 00: call dword ptr [0x5e0260]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x4b0dbc
        __asm _emit 0x74
        __asm _emit 0x1c
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 75 0B: jne 0x4b0db1
        __asm _emit 0x75
        __asm _emit 0x0b
        push 5d14b0h
        ; Exact mapped bytes FF 15 E4 23 5E 00: call dword ptr [0x5e23e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1008h]
        ; Exact mapped bytes E9 FF 00 00 00: jmp 0x4b0ebb
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx*4 + 5d14b4h]
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 74 3E: je 0x4b0e0b
        __asm _emit 0x74
        __asm _emit 0x3e
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax*4 + 5d14c0h], -1
        ; Exact mapped bytes 74 31: je 0x4b0e0b
        __asm _emit 0x74
        __asm _emit 0x31
        push 0
        lea ecx, [ebp - 3010h]
        push ecx
        lea edx, [ebp - 2008h]
        push edx
        ; Exact mapped bytes E8 E1 85 FF FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        lea eax, [ebp - 2008h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx*4 + 5d14c0h]
        push edx
        ; Exact mapped bytes FF 15 F8 21 5E 00: call dword ptr [0x5e21f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax*4 + 5d14b4h]
        and ecx, 2
        test ecx, ecx
        ; Exact mapped bytes 74 0D: je 0x4b0e29
        __asm _emit 0x74
        __asm _emit 0x0d
        lea edx, [ebp - 2008h]
        push edx
        ; Exact mapped bytes FF 15 44 24 5E 00: call dword ptr [0x5e2444]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax*4 + 5d14b4h]
        and ecx, 4
        test ecx, ecx
        ; Exact mapped bytes 74 6E: je 0x4b0ea8
        __asm _emit 0x74
        __asm _emit 0x6e
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 1D: je 0x4b0e5d
        __asm _emit 0x74
        __asm _emit 0x1d
        push 0ah
        lea edx, [ebp - 3024h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 1E 05 00 00: call 0x4b1370
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 302ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x4b0e67
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 302ch], 0
        lea ecx, [ebp - 1000h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp - 302ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 3A 00 00 00: call 0x4b0ec0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        mov dword ptr [ebp - 1008h], eax
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 75 0B: jne 0x4b0ea0
        __asm _emit 0x75
        __asm _emit 0x0b
        push 5d14b0h
        ; Exact mapped bytes FF 15 E4 23 5E 00: call dword ptr [0x5e23e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1008h]
        ; Exact mapped bytes EB 13: jmp 0x4b0ebb
        __asm _emit 0xeb
        __asm _emit 0x13
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 75 0B: jne 0x4b0eb9
        __asm _emit 0x75
        __asm _emit 0x0b
        push 5d14b0h
        ; Exact mapped bytes FF 15 E4 23 5E 00: call dword ptr [0x5e23e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        xor eax, eax
        pop edi
        mov esp, ebp
        pop ebp
        ret
    }
}
