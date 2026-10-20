// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00475C20 .. +0x20A bytes.
extern "C" __declspec(naked) void FUN_00475c20_00475C20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        sub ecx, 2
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp - 20h], 14h
        ; Exact mapped bytes 0F 87 A8 00 00 00: ja 0x475cee
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        xor edx, edx
        mov dl, byte ptr [eax + 475e42h]
        ; Exact mapped bytes FF 24 95 2A 5E 47 00: jmp dword ptr [edx*4 + 0x475e2a]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x47
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 687440h
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x475cf6
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 687444h
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 67: jmp 0x475cf6
        __asm _emit 0xeb
        __asm _emit 0x67
        mov dword ptr [ebp - 18h], 687448h
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 4D: jmp 0x475cf6
        __asm _emit 0xeb
        __asm _emit 0x4d
        mov dword ptr [ebp - 18h], 68744ch
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 33: jmp 0x475cf6
        __asm _emit 0xeb
        __asm _emit 0x33
        ; Exact mapped bytes E8 38 96 FF FF: call 0x46f300
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x96
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 85 01 00 00: call 0x475e60
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        add eax, 8
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 1ch], edx
        ; Exact mapped bytes EB 08: jmp 0x475cf6
        __asm _emit 0xeb
        __asm _emit 0x08
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 30 01 00 00: jmp 0x475e26
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 0A: je 0x475d06
        __asm _emit 0x74
        __asm _emit 0x0a
        push 1
        ; Exact mapped bytes E8 AD AB FF FF: call 0x4708b0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        cmp dword ptr [ebp - 1ch], 1
        ; Exact mapped bytes 75 17: jne 0x475d23
        __asm _emit 0x75
        __asm _emit 0x17
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 0A: je 0x475d1c
        __asm _emit 0x74
        __asm _emit 0x0a
        push 1
        ; Exact mapped bytes E8 37 AC FF FF: call 0x470950
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xac
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        xor eax, eax
        ; Exact mapped bytes E9 03 01 00 00: jmp 0x475e26
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 17: jne 0x475d40
        __asm _emit 0x75
        __asm _emit 0x17
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 0A: je 0x475d39
        __asm _emit 0x74
        __asm _emit 0x0a
        push 1
        ; Exact mapped bytes E8 1A AC FF FF: call 0x470950
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xac
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push 3
        ; Exact mapped bytes E8 F0 42 FF FF: call 0x46a030
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x42
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 8
        ; Exact mapped bytes 74 0C: je 0x475d52
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp dword ptr [ebp + 8], 0bh
        ; Exact mapped bytes 74 06: je 0x475d52
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 8], 4
        ; Exact mapped bytes 75 2C: jne 0x475d7e
        __asm _emit 0x75
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 54h], 0
        cmp dword ptr [ebp + 8], 8
        ; Exact mapped bytes 75 13: jne 0x475d7e
        __asm _emit 0x75
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 58h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 58h], 8ch
        cmp dword ptr [ebp + 8], 8
        ; Exact mapped bytes 75 3C: jne 0x475dc0
        __asm _emit 0x75
        __asm _emit 0x3c
        ; Exact mapped bytes A1 58 E1 67 00: mov eax, dword ptr [0x67e158]
        __asm _emit 0xa1
        __asm _emit 0x58
        __asm _emit 0xe1
        __asm _emit 0x67
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 09: jmp 0x475d97
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes 8B 15 58 E1 67 00: mov edx, dword ptr [0x67e158]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xe1
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes 03 15 5C E1 67 00: add edx, dword ptr [0x67e15c]
        __asm _emit 0x03
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xe1
        __asm _emit 0x67
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], edx
        ; Exact mapped bytes 7D 16: jge 0x475dbe
        __asm _emit 0x7d
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 10h]
        imul eax, eax, 0ch
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov dword ptr [edx + eax + 8], 0
        ; Exact mapped bytes EB D0: jmp 0x475d8e
        __asm _emit 0xeb
        __asm _emit 0xd0
        ; Exact mapped bytes EB 09: jmp 0x475dc9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax], 0
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 0A: je 0x475dd9
        __asm _emit 0x74
        __asm _emit 0x0a
        push 1
        ; Exact mapped bytes E8 7A AB FF FF: call 0x470950
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        cmp dword ptr [ebp + 8], 8
        ; Exact mapped bytes 75 11: jne 0x475df0
        __asm _emit 0x75
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 58h]
        push edx
        push 8
        ; Exact mapped bytes FF 55 E4: call dword ptr [ebp - 0x1c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe4
        add esp, 8
        ; Exact mapped bytes EB 0A: jmp 0x475dfa
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 55 E4: call dword ptr [ebp - 0x1c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe4
        add esp, 4
        cmp dword ptr [ebp + 8], 8
        ; Exact mapped bytes 74 0C: je 0x475e0c
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp dword ptr [ebp + 8], 0bh
        ; Exact mapped bytes 74 06: je 0x475e0c
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 8], 4
        ; Exact mapped bytes 75 18: jne 0x475e24
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 54h], edx
        cmp dword ptr [ebp + 8], 8
        ; Exact mapped bytes 75 09: jne 0x475e24
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax + 58h], ecx
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
