// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BBC10 .. +0x1FB bytes.
extern "C" __declspec(naked) void FUN_004bbc10_004BBC10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push esi
        cmp dword ptr [ebp + 0ch], 4
        ; Exact mapped bytes 74 06: je 0x4bbc23
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 0ch], 3
        ; Exact mapped bytes 75 05: jne 0x4bbc28
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 D0 01 00 00: jmp 0x4bbdf8
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 74 16: je 0x4bbc44
        __asm _emit 0x74
        __asm _emit 0x16
        cmp dword ptr [ebp + 8], 15h
        ; Exact mapped bytes 74 10: je 0x4bbc44
        __asm _emit 0x74
        __asm _emit 0x10
        cmp dword ptr [ebp + 8], 16h
        ; Exact mapped bytes 74 0A: je 0x4bbc44
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp dword ptr [ebp + 8], 0fh
        ; Exact mapped bytes 0F 85 DD 00 00 00: jne 0x4bbd21
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        ; Exact mapped bytes E8 A5 95 FF FF: call 0x4b51f0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x95
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 74 06: je 0x4bbc5a
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 8], 15h
        ; Exact mapped bytes 75 45: jne 0x4bbc9f
        __asm _emit 0x75
        __asm _emit 0x45
        ; Exact mapped bytes 83 3D 4C F0 5D 00 00: cmp dword ptr [0x5df04c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x4c
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 3C: jne 0x4bbc9f
        __asm _emit 0x75
        __asm _emit 0x3c
        push 1
        push 4bbe40h
        ; Exact mapped bytes FF 15 34 22 5E 00: call dword ptr [0x5e2234]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 0C: jne 0x4bbc81
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes C7 05 4C F0 5D 00 01 00 00 00: mov dword ptr [0x5df04c], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x4c
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1E: jmp 0x4bbc9f
        __asm _emit 0xeb
        __asm _emit 0x1e
        ; Exact mapped bytes FF 15 FC 23 5E 00: call dword ptr [0x5e23fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov esi, eax
        ; Exact mapped bytes E8 F2 55 FF FF: call 0x4b1280
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x55
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], esi
        push 1
        ; Exact mapped bytes E8 F9 95 FF FF: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x95
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes E9 59 01 00 00: jmp 0x4bbdf8
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, 2
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 14h
        ; Exact mapped bytes 77 5E: ja 0x4bbd12
        __asm _emit 0x77
        __asm _emit 0x5e
        mov eax, dword ptr [ebp - 10h]
        xor edx, edx
        mov dl, byte ptr [eax + 4bbe1fh]
        ; Exact mapped bytes FF 24 95 0B BE 4B 00: jmp dword ptr [edx*4 + 0x4bbe0b]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x0b
        __asm _emit 0xbe
        __asm _emit 0x4b
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 3C F0 5D 00: mov ecx, dword ptr [0x5df03c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 89 15 3C F0 5D 00: mov dword ptr [0x5df03c], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes EB 38: jmp 0x4bbd12
        __asm _emit 0xeb
        __asm _emit 0x38
        ; Exact mapped bytes A1 40 F0 5D 00: mov eax, dword ptr [0x5df040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 89 0D 40 F0 5D 00: mov dword ptr [0x5df040], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes EB 25: jmp 0x4bbd12
        __asm _emit 0xeb
        __asm _emit 0x25
        ; Exact mapped bytes 8B 15 44 F0 5D 00: mov edx, dword ptr [0x5df044]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes A3 44 F0 5D 00: mov dword ptr [0x5df044], eax
        __asm _emit 0xa3
        __asm _emit 0x44
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes EB 12: jmp 0x4bbd12
        __asm _emit 0xeb
        __asm _emit 0x12
        ; Exact mapped bytes 8B 0D 48 F0 5D 00: mov ecx, dword ptr [0x5df048]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 89 15 48 F0 5D 00: mov dword ptr [0x5df048], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push 1
        ; Exact mapped bytes E8 77 95 FF FF: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x95
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes E9 D2 00 00 00: jmp 0x4bbdf3
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 8
        ; Exact mapped bytes 74 11: je 0x4bbd38
        __asm _emit 0x74
        __asm _emit 0x11
        cmp dword ptr [ebp + 8], 4
        ; Exact mapped bytes 74 0B: je 0x4bbd38
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp dword ptr [ebp + 8], 0bh
        ; Exact mapped bytes 74 05: je 0x4bbd38
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 C0 00 00 00: jmp 0x4bbdf8
        __asm _emit 0xe9
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 63 71 FF FF: call 0x4b2ea0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x71
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 50h], 5d1a00h
        ; Exact mapped bytes 75 49: jne 0x4bbd95
        __asm _emit 0x75
        __asm _emit 0x49
        push 133h
        push 58cd30h
        push 2
        ; Exact mapped bytes 8B 0D 80 1A 5D 00: mov ecx, dword ptr [0x5d1a80]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x1a
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 CC E4 FE FF: call 0x4aa230
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 50h], eax
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 74 1D: je 0x4bbd93
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes 8B 0D 80 1A 5D 00: mov ecx, dword ptr [0x5d1a80]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x1a
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        push 5d1a00h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        push eax
        ; Exact mapped bytes E8 92 D2 FE FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xd2
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes EB 02: jmp 0x4bbd95
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 63: jmp 0x4bbdf8
        __asm _emit 0xeb
        __asm _emit 0x63
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 7B 03 00 00: call 0x4bc120
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 02: jne 0x4bbdb3
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 45: jmp 0x4bbdf8
        __asm _emit 0xeb
        __asm _emit 0x45
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 2C: jne 0x4bbdf3
        __asm _emit 0x75
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 0ch
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 8B 15 84 1A 5D 00: mov edx, dword ptr [0x5d1a84]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x1a
        __asm _emit 0x5d
        __asm _emit 0x00
        imul edx, edx, 0ch
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        add ecx, edx
        cmp dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 72 02: jb 0x4bbdf1
        __asm _emit 0x72
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x4bbdf3
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB C9: jmp 0x4bbdbc
        __asm _emit 0xeb
        __asm _emit 0xc9
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes EB 0E: jmp 0x4bbe06
        __asm _emit 0xeb
        __asm _emit 0x0e
        ; Exact mapped bytes E8 73 54 FF FF: call 0x4b1270
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        or eax, 0ffffffffh
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
