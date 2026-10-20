// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00475950 .. +0x1FB bytes.
extern "C" __declspec(naked) void FUN_00475950_00475950() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push esi
        cmp dword ptr [ebp + 0ch], 4
        ; Exact mapped bytes 74 06: je 0x475963
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 0ch], 3
        ; Exact mapped bytes 75 05: jne 0x475968
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 D0 01 00 00: jmp 0x475b38
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 74 16: je 0x475984
        __asm _emit 0x74
        __asm _emit 0x16
        cmp dword ptr [ebp + 8], 15h
        ; Exact mapped bytes 74 10: je 0x475984
        __asm _emit 0x74
        __asm _emit 0x10
        cmp dword ptr [ebp + 8], 16h
        ; Exact mapped bytes 74 0A: je 0x475984
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp dword ptr [ebp + 8], 0fh
        ; Exact mapped bytes 0F 85 DD 00 00 00: jne 0x475a61
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        ; Exact mapped bytes E8 25 AF FF FF: call 0x4708b0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 74 06: je 0x47599a
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 8], 15h
        ; Exact mapped bytes 75 45: jne 0x4759df
        __asm _emit 0x75
        __asm _emit 0x45
        ; Exact mapped bytes 83 3D 50 74 68 00 00: cmp dword ptr [0x687450], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x50
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 3C: jne 0x4759df
        __asm _emit 0x75
        __asm _emit 0x3c
        push 1
        push 475b80h
        ; Exact mapped bytes FF 15 54 B8 68 00: call dword ptr [0x68b854]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 0C: jne 0x4759c1
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes C7 05 50 74 68 00 01 00 00 00: mov dword ptr [0x687450], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x50
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1E: jmp 0x4759df
        __asm _emit 0xeb
        __asm _emit 0x1e
        ; Exact mapped bytes FF 15 B8 B7 68 00: call dword ptr [0x68b7b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov esi, eax
        ; Exact mapped bytes E8 C2 7C FF FF: call 0x46d690
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], esi
        push 1
        ; Exact mapped bytes E8 79 AF FF FF: call 0x470950
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes E9 59 01 00 00: jmp 0x475b38
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
        ; Exact mapped bytes 77 5E: ja 0x475a52
        __asm _emit 0x77
        __asm _emit 0x5e
        mov eax, dword ptr [ebp - 10h]
        xor edx, edx
        mov dl, byte ptr [eax + 475b5fh]
        ; Exact mapped bytes FF 24 95 4B 5B 47 00: jmp dword ptr [edx*4 + 0x475b4b]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x4b
        __asm _emit 0x5b
        __asm _emit 0x47
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 40 74 68 00: mov ecx, dword ptr [0x687440]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 89 15 40 74 68 00: mov dword ptr [0x687440], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 38: jmp 0x475a52
        __asm _emit 0xeb
        __asm _emit 0x38
        ; Exact mapped bytes A1 44 74 68 00: mov eax, dword ptr [0x687444]
        __asm _emit 0xa1
        __asm _emit 0x44
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 89 0D 44 74 68 00: mov dword ptr [0x687444], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 25: jmp 0x475a52
        __asm _emit 0xeb
        __asm _emit 0x25
        ; Exact mapped bytes 8B 15 48 74 68 00: mov edx, dword ptr [0x687448]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes A3 48 74 68 00: mov dword ptr [0x687448], eax
        __asm _emit 0xa3
        __asm _emit 0x48
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 12: jmp 0x475a52
        __asm _emit 0xeb
        __asm _emit 0x12
        ; Exact mapped bytes 8B 0D 4C 74 68 00: mov ecx, dword ptr [0x68744c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 89 15 4C 74 68 00: mov dword ptr [0x68744c], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        push 1
        ; Exact mapped bytes E8 F7 AE FF FF: call 0x470950
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xae
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes E9 D2 00 00 00: jmp 0x475b33
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 8
        ; Exact mapped bytes 74 11: je 0x475a78
        __asm _emit 0x74
        __asm _emit 0x11
        cmp dword ptr [ebp + 8], 4
        ; Exact mapped bytes 74 0B: je 0x475a78
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp dword ptr [ebp + 8], 0bh
        ; Exact mapped bytes 74 05: je 0x475a78
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 C0 00 00 00: jmp 0x475b38
        __asm _emit 0xe9
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 83 98 FF FF: call 0x46f300
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x98
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 50h], 67e0e0h
        ; Exact mapped bytes 75 49: jne 0x475ad5
        __asm _emit 0x75
        __asm _emit 0x49
        push 133h
        push 63f210h
        push 2
        ; Exact mapped bytes 8B 0D 60 E1 67 00: mov ecx, dword ptr [0x67e160]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0xe1
        __asm _emit 0x67
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 1C 0D FF FF: call 0x4667c0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x0d
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 50h], eax
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 74 1D: je 0x475ad3
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes 8B 0D 60 E1 67 00: mov ecx, dword ptr [0x67e160]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0xe1
        __asm _emit 0x67
        __asm _emit 0x00
        push ecx
        push 67e0e0h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        push eax
        ; Exact mapped bytes E8 32 F8 FE FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xf8
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes EB 02: jmp 0x475ad5
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 63: jmp 0x475b38
        __asm _emit 0xeb
        __asm _emit 0x63
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 7B 03 00 00: call 0x475e60
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 02: jne 0x475af3
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 45: jmp 0x475b38
        __asm _emit 0xeb
        __asm _emit 0x45
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 2C: jne 0x475b33
        __asm _emit 0x75
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 0ch
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 8B 15 64 E1 67 00: mov edx, dword ptr [0x67e164]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xe1
        __asm _emit 0x67
        __asm _emit 0x00
        imul edx, edx, 0ch
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        add ecx, edx
        cmp dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 72 02: jb 0x475b31
        __asm _emit 0x72
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x475b33
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB C9: jmp 0x475afc
        __asm _emit 0xeb
        __asm _emit 0xc9
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes EB 0E: jmp 0x475b46
        __asm _emit 0xeb
        __asm _emit 0x0e
        ; Exact mapped bytes E8 43 7B FF FF: call 0x46d680
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x7b
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
