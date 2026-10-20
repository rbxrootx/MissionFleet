// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042C792 .. +0x34D bytes.
extern "C" __declspec(naked) void FUN_0042c792_0042C792() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov eax, dword ptr [ebp + 0ch]
        and dword ptr [ebp - 8], 0
        push ebx
        push esi
        push edi
        mov edi, dword ptr [ebp + 8]
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 14h], eax
        cmp byte ptr [edi], 0
        ; Exact mapped bytes 0F 84 FB 02 00 00: je 0x42caaf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [edi], 25h
        ; Exact mapped bytes 0F 85 DA 02 00 00: jne 0x42ca97
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xda
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes E8 2A 30 FF FF: call 0x41f7ed
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        pop ecx
        mov al, byte ptr [edi]
        cmp al, 25h
        ; Exact mapped bytes 0F 84 C7 02 00 00: je 0x42ca97
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor esi, esi
        test al, al
        mov dword ptr [ebp - 4], esi
        ; Exact mapped bytes 74 41: je 0x42c81a
        __asm _emit 0x74
        __asm _emit 0x41
        cmp al, 23h
        ; Exact mapped bytes 75 06: jne 0x42c7e3
        __asm _emit 0x75
        __asm _emit 0x06
        add dword ptr [ebp - 8], 2
        ; Exact mapped bytes EB 23: jmp 0x42c806
        __asm _emit 0xeb
        __asm _emit 0x23
        cmp al, 2ah
        ; Exact mapped bytes 75 0F: jne 0x42c7f6
        __asm _emit 0x75
        __asm _emit 0x0f
        add dword ptr [ebp + 0ch], 4
        mov eax, dword ptr [ebp + 0ch]
        mov eax, dword ptr [eax - 4]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 10: jmp 0x42c806
        __asm _emit 0xeb
        __asm _emit 0x10
        cmp al, 2dh
        ; Exact mapped bytes 74 0C: je 0x42c806
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp al, 2bh
        ; Exact mapped bytes 74 08: je 0x42c806
        __asm _emit 0x74
        __asm _emit 0x08
        cmp al, 30h
        ; Exact mapped bytes 74 04: je 0x42c806
        __asm _emit 0x74
        __asm _emit 0x04
        cmp al, 20h
        ; Exact mapped bytes 75 0F: jne 0x42c815
        __asm _emit 0x75
        __asm _emit 0x0f
        push edi
        ; Exact mapped bytes E8 E1 2F FF FF: call 0x41f7ed
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        pop ecx
        mov al, byte ptr [edi]
        test al, al
        ; Exact mapped bytes 75 C4: jne 0x42c7d9
        __asm _emit 0x75
        __asm _emit 0xc4
        cmp dword ptr [ebp - 4], esi
        ; Exact mapped bytes 75 29: jne 0x42c843
        __asm _emit 0x75
        __asm _emit 0x29
        push edi
        ; Exact mapped bytes E8 AE 22 FF FF: call 0x41eace
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x22
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov dword ptr [ebp - 4], eax
        mov al, byte ptr [edi]
        test al, al
        ; Exact mapped bytes 74 19: je 0x42c843
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes 0F BE C0: movsx eax, al
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc0
        push eax
        ; Exact mapped bytes E8 0A 35 FF FF: call 0x41fd3d
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x35
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        pop ecx
        ; Exact mapped bytes 74 0B: je 0x42c843
        __asm _emit 0x74
        __asm _emit 0x0b
        push edi
        ; Exact mapped bytes E8 AF 2F FF FF: call 0x41f7ed
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov edi, eax
        ; Exact mapped bytes EB E1: jmp 0x42c824
        __asm _emit 0xeb
        __asm _emit 0xe1
        xor ebx, ebx
        cmp byte ptr [edi], 2eh
        ; Exact mapped bytes 75 21: jne 0x42c86b
        __asm _emit 0x75
        __asm _emit 0x21
        push edi
        ; Exact mapped bytes E8 9D 2F FF FF: call 0x41f7ed
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        pop ecx
        cmp byte ptr [edi], 2ah
        ; Exact mapped bytes 75 37: jne 0x42c88f
        __asm _emit 0x75
        __asm _emit 0x37
        add dword ptr [ebp + 0ch], 4
        push edi
        mov eax, dword ptr [ebp + 0ch]
        mov ebx, dword ptr [eax - 4]
        ; Exact mapped bytes E8 85 2F FF FF: call 0x41f7ed
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov edi, eax
        and dword ptr [ebp - 0ch], 0
        push 3
        push 43d6e4h
        push edi
        ; Exact mapped bytes E8 D2 33 FF FF: call 0x41fc4e
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x33
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 34: jne 0x42c8b7
        __asm _emit 0x75
        __asm _emit 0x34
        add edi, 3
        mov dword ptr [ebp - 0ch], 40000h
        ; Exact mapped bytes EB 5C: jmp 0x42c8eb
        __asm _emit 0xeb
        __asm _emit 0x5c
        push edi
        ; Exact mapped bytes E8 39 22 FF FF: call 0x41eace
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x22
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov ebx, eax
        mov al, byte ptr [edi]
        test al, al
        ; Exact mapped bytes 74 CD: je 0x42c86b
        __asm _emit 0x74
        __asm _emit 0xcd
        ; Exact mapped bytes 0F BE C0: movsx eax, al
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc0
        push eax
        ; Exact mapped bytes E8 96 34 FF FF: call 0x41fd3d
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        pop ecx
        ; Exact mapped bytes 74 BF: je 0x42c86b
        __asm _emit 0x74
        __asm _emit 0xbf
        push edi
        ; Exact mapped bytes E8 3B 2F FF FF: call 0x41f7ed
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov edi, eax
        ; Exact mapped bytes EB E1: jmp 0x42c898
        __asm _emit 0xeb
        __asm _emit 0xe1
        ; Exact mapped bytes 0F BE 07: movsx eax, byte ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x07
        sub eax, 46h
        ; Exact mapped bytes 74 23: je 0x42c8e2
        __asm _emit 0x74
        __asm _emit 0x23
        sub eax, 6
        ; Exact mapped bytes 74 1E: je 0x42c8e2
        __asm _emit 0x74
        __asm _emit 0x1e
        dec eax
        dec eax
        ; Exact mapped bytes 74 1A: je 0x42c8e2
        __asm _emit 0x74
        __asm _emit 0x1a
        sub eax, 1ah
        ; Exact mapped bytes 74 0E: je 0x42c8db
        __asm _emit 0x74
        __asm _emit 0x0e
        sub eax, 4
        ; Exact mapped bytes 75 19: jne 0x42c8eb
        __asm _emit 0x75
        __asm _emit 0x19
        mov dword ptr [ebp - 0ch], 20000h
        ; Exact mapped bytes EB 07: jmp 0x42c8e2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 10000h
        push edi
        ; Exact mapped bytes E8 05 2F FF FF: call 0x41f7ed
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov edi, eax
        ; Exact mapped bytes 0F BE 07: movsx eax, byte ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x07
        or eax, dword ptr [ebp - 0ch]
        mov ecx, 10063h
        cmp eax, ecx
        ; Exact mapped bytes 0F 8F 84 00 00 00: jg 0x42c982
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 B2 00 00 00: je 0x42c9b6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 43h
        ; Exact mapped bytes 0F 84 A9 00 00 00: je 0x42c9b6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 10h
        pop ecx
        sub eax, ecx
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x42c99f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, ecx
        ; Exact mapped bytes 0F 84 96 00 00 00: je 0x42c9b6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, ecx
        ; Exact mapped bytes 0F 84 97 00 00 00: je 0x42c9bf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 0ffd0h
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x42c9b6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, ecx
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x42c9bf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 07: movsx eax, byte ptr [edi]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x07
        cmp eax, 69h
        ; Exact mapped bytes 0F 8F 10 01 00 00: jg 0x42ca57
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 35 01 00 00: je 0x42ca82
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 47h
        ; Exact mapped bytes 0F 84 F6 00 00 00: je 0x42ca4c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 11h
        ; Exact mapped bytes 0F 84 23 01 00 00: je 0x42ca82
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 0ch
        ; Exact mapped bytes 0F 84 1A 01 00 00: je 0x42ca82
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 0F 84 DD 00 00 00: je 0x42ca4c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x42ca06
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 0F 84 CF 00 00 00: je 0x42ca4c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 10 01 00 00: jmp 0x42ca92
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 10073h
        ; Exact mapped bytes 74 36: je 0x42c9bf
        __asm _emit 0x74
        __asm _emit 0x36
        sub eax, 0ffd0h
        ; Exact mapped bytes 74 26: je 0x42c9b6
        __asm _emit 0x74
        __asm _emit 0x26
        sub eax, 10h
        ; Exact mapped bytes 74 0A: je 0x42c99f
        __asm _emit 0x74
        __asm _emit 0x0a
        sub eax, 10h
        ; Exact mapped bytes 74 1C: je 0x42c9b6
        __asm _emit 0x74
        __asm _emit 0x1c
        sub eax, 10h
        ; Exact mapped bytes 75 9C: jne 0x42c93b
        __asm _emit 0x75
        __asm _emit 0x9c
        add dword ptr [ebp + 0ch], 4
        mov eax, dword ptr [ebp + 0ch]
        mov eax, dword ptr [eax - 4]
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x42c9cd
        __asm _emit 0x74
        __asm _emit 0x20
        push eax
        ; Exact mapped bytes E8 32 30 FF FF: call 0x41f9e5
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        ; Exact mapped bytes EB 23: jmp 0x42c9d9
        __asm _emit 0xeb
        __asm _emit 0x23
        add dword ptr [ebp + 0ch], 4
        push 2
        pop esi
        ; Exact mapped bytes EB 2C: jmp 0x42c9eb
        __asm _emit 0xeb
        __asm _emit 0x2c
        add dword ptr [ebp + 0ch], 4
        mov eax, dword ptr [ebp + 0ch]
        mov eax, dword ptr [eax - 4]
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x42c9d2
        __asm _emit 0x75
        __asm _emit 0x05
        push 6
        pop esi
        ; Exact mapped bytes EB 19: jmp 0x42c9eb
        __asm _emit 0xeb
        __asm _emit 0x19
        push eax
        ; Exact mapped bytes FF 15 60 C2 43 00: call dword ptr [0x43c260]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov esi, eax
        cmp esi, 1
        ; Exact mapped bytes 7D 03: jge 0x42c9e3
        __asm _emit 0x7d
        __asm _emit 0x03
        push 1
        pop esi
        test esi, esi
        ; Exact mapped bytes 0F 84 50 FF FF FF: je 0x42c93b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test ebx, ebx
        ; Exact mapped bytes 74 06: je 0x42c9f5
        __asm _emit 0x74
        __asm _emit 0x06
        cmp esi, ebx
        ; Exact mapped bytes 7C 02: jl 0x42c9f5
        __asm _emit 0x7c
        __asm _emit 0x02
        mov esi, ebx
        cmp esi, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F 8F 94 00 00 00: jg 0x42ca92
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp - 4]
        ; Exact mapped bytes E9 8C 00 00 00: jmp 0x42ca92
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebx + 13eh]
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 7E 03: jle 0x42ca14
        __asm _emit 0x7e
        __asm _emit 0x03
        mov eax, dword ptr [ebp - 4]
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 E2 24 FF FF: call 0x41ef00
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xff
        add dword ptr [ebp + 0ch], 8
        mov esi, esp
        mov eax, dword ptr [ebp + 0ch]
        push ecx
        push ecx
        add ebx, 6
        ; Exact mapped bytes DD 40 F8: fld qword ptr [eax - 8]
        __asm _emit 0xdd
        __asm _emit 0x40
        __asm _emit 0xf8
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        push ebx
        push dword ptr [ebp - 4]
        push 43d6dch
        push esi
        ; Exact mapped bytes E8 BB 31 FF FF: call 0x41fbfc
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xff
        push esi
        ; Exact mapped bytes E8 F9 20 FF FF: call 0x41eb40
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 1ch
        ; Exact mapped bytes EB 32: jmp 0x42ca7e
        __asm _emit 0xeb
        __asm _emit 0x32
        add dword ptr [ebp + 0ch], 8
        mov esi, 80h
        ; Exact mapped bytes EB 1E: jmp 0x42ca75
        __asm _emit 0xeb
        __asm _emit 0x1e
        sub eax, 6eh
        ; Exact mapped bytes 74 32: je 0x42ca8e
        __asm _emit 0x74
        __asm _emit 0x32
        dec eax
        ; Exact mapped bytes 74 23: je 0x42ca82
        __asm _emit 0x74
        __asm _emit 0x23
        dec eax
        ; Exact mapped bytes 74 0C: je 0x42ca6e
        __asm _emit 0x74
        __asm _emit 0x0c
        sub eax, 5
        ; Exact mapped bytes 74 1B: je 0x42ca82
        __asm _emit 0x74
        __asm _emit 0x1b
        sub eax, 3
        ; Exact mapped bytes 74 16: je 0x42ca82
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes EB 24: jmp 0x42ca92
        __asm _emit 0xeb
        __asm _emit 0x24
        add dword ptr [ebp + 0ch], 4
        push 20h
        pop esi
        mov eax, dword ptr [ebp - 4]
        add eax, ebx
        cmp eax, esi
        ; Exact mapped bytes 7C 14: jl 0x42ca92
        __asm _emit 0x7c
        __asm _emit 0x14
        mov esi, eax
        ; Exact mapped bytes EB 10: jmp 0x42ca92
        __asm _emit 0xeb
        __asm _emit 0x10
        test byte ptr [ebp - 0ah], 4
        ; Exact mapped bytes 74 E6: je 0x42ca6e
        __asm _emit 0x74
        __asm _emit 0xe6
        add dword ptr [ebp + 0ch], 8
        ; Exact mapped bytes EB E4: jmp 0x42ca72
        __asm _emit 0xeb
        __asm _emit 0xe4
        add dword ptr [ebp + 0ch], 4
        add dword ptr [ebp - 8], esi
        ; Exact mapped bytes EB 0A: jmp 0x42caa1
        __asm _emit 0xeb
        __asm _emit 0x0a
        push edi
        ; Exact mapped bytes E8 49 31 FF FF: call 0x41fbe6
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xff
        add dword ptr [ebp - 8], eax
        pop ecx
        push edi
        ; Exact mapped bytes E8 46 2D FF FF: call 0x41f7ed
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x2d
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov edi, eax
        ; Exact mapped bytes E9 FC FC FF FF: jmp 0x42c7ab
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [ebp - 10h]
        push dword ptr [ebp - 8]
        mov ecx, esi
        ; Exact mapped bytes E8 B9 14 00 00: call 0x42df75
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp - 14h]
        push dword ptr [ebp + 8]
        push dword ptr [esi]
        ; Exact mapped bytes E8 CC 30 FF FF: call 0x41fb95
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, esi
        push -1
        ; Exact mapped bytes E8 EF 14 00 00: call 0x42dfc4
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        lea esp, [ebp - 20h]
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
