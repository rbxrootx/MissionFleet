// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D1524 .. +0x28C bytes.
extern "C" __declspec(naked) void FUN_004d1524_004D1524() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 9B F9 01 00: call 0x4f0ed4
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xf9
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 0a8h], 0
        ; Exact mapped bytes 74 0F: je 0x4d1554
        __asm _emit 0x74
        __asm _emit 0x0f
        push 5c7f90h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C9 35 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x35
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 0D: jmp 0x4d1561
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 5c7fa4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BA 35 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x35
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 60h]
        push eax
        push 5c7fb8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A6 35 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x35
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 4F 37 06 00: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x37
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 74h]
        push edx
        push 5c7fcch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8B 35 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 9C 37 06 00: call 0x534d33
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x37
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 78h]
        push ecx
        push 5c7fe4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 70 35 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x35
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 69 35 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x35
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 7ch]
        push eax
        push 5c7ff8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 55 35 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x35
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 66 37 06 00: call 0x534d33
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x37
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 80h]
        push edx
        push 5c800ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 37 35 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x35
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 30 35 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x35
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 84h]
        push ecx
        push 5c8028h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 19 35 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x35
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 2A 37 06 00: call 0x534d33
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x37
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 8ch]
        push eax
        push 5c8040h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FB 34 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 F4 34 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 90h]
        push edx
        push 5c8058h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DD 34 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 AF 37 06 00: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x37
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 98h]
        push ecx
        push 5c8068h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BF 34 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 B8 34 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 82 94 00 00 00: mov ax, word ptr [edx + 0x94]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 5c8080h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A0 34 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 10 36 06 00: call 0x534c92
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x36
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 91 96 00 00 00: mov dx, word ptr [ecx + 0x96]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edx
        push 5c8098h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 81 34 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 F1 35 06 00: call 0x534c92
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x35
        __asm _emit 0x06
        __asm _emit 0x00
        push 5c80b4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6D 34 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 5c80cch
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 37: je 0x4d16fb
        __asm _emit 0x74
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        test eax, eax
        ; Exact mapped bytes 74 2D: je 0x4d16fb
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3D 34 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 36 34 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 1]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB C3: jmp 0x4d16be
        __asm _emit 0xeb
        __asm _emit 0xc3
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0C: je 0x4d170d
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0E 34 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x00
        push 5c80d0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 01 34 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 37: je 0x4d1760
        __asm _emit 0x74
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 74 2D: je 0x4d1760
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D8 33 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x33
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 D1 33 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x33
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + eax + 1]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB C3: jmp 0x4d1723
        __asm _emit 0xeb
        __asm _emit 0xc3
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0C: je 0x4d1772
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A9 33 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x33
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 0a0h], 4cfec0h
        ; Exact mapped bytes 75 0F: jne 0x4d1790
        __asm _emit 0x75
        __asm _emit 0x0f
        push 5c80ech
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8D 33 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x33
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 0D: jmp 0x4d179d
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 5c8120h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7E 33 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x33
        __asm _emit 0x06
        __asm _emit 0x00
        push 5c8154h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 71 33 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x33
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
