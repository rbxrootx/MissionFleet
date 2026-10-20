// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051DC0B .. +0x48B bytes.
extern "C" __declspec(naked) void FUN_0051dc0b_0051DC0B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 9ch
        mov dword ptr [ebp - 94h], ecx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 69 86 FB FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x86
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 97 45 01 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 D0 DE 00 00: call 0x52bb0f
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        push 21h
        ; Exact mapped bytes FF 15 C4 BF 68 00: call dword ptr [0x68bfc4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        push 20h
        ; Exact mapped bytes FF 15 C4 BF 68 00: call dword ptr [0x68bfc4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 54h]
        ; Exact mapped bytes E8 57 3F 01 00: call 0x531bb0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 14 6E 68 00 00: cmp dword ptr [0x686e14], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x14
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 3C 01 00 00: je 0x51dda2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 87 F7 00 00: call 0x52d400
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes 83 3D 0C 6E 68 00 00: cmp dword ptr [0x686e0c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 2F: je 0x51dcb4
        __asm _emit 0x74
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 68h]
        and eax, 1000h
        test eax, eax
        ; Exact mapped bytes 74 23: je 0x51dcb4
        __asm _emit 0x74
        __asm _emit 0x23
        cmp dword ptr [ebp - 6ch], 3
        ; Exact mapped bytes 75 07: jne 0x51dc9e
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 2
        push 2
        ; Exact mapped bytes FF 15 FC BE 68 00: call dword ptr [0x68befc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C8: movsx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc8
        test ecx, ecx
        ; Exact mapped bytes 7D 07: jge 0x51dcb4
        __asm _emit 0x7d
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 DC 03 00 00: jmp 0x51e090
        __asm _emit 0xe9
        __asm _emit 0xdc
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 6ch], 0ah
        ; Exact mapped bytes 72 06: jb 0x51dcc0
        __asm _emit 0x72
        __asm _emit 0x06
        cmp dword ptr [ebp - 6ch], 11h
        ; Exact mapped bytes 76 0E: jbe 0x51dcce
        __asm _emit 0x76
        __asm _emit 0x0e
        cmp dword ptr [ebp - 6ch], 4
        ; Exact mapped bytes 74 08: je 0x51dcce
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E9 C2 03 00 00: jmp 0x51e090
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 68h]
        and edx, 800h
        test edx, edx
        ; Exact mapped bytes 74 0A: je 0x51dce5
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 2
        ; Exact mapped bytes E9 AB 03 00 00: jmp 0x51e090
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 50h]
        neg eax
        push eax
        mov ecx, dword ptr [ebp - 54h]
        neg ecx
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 F5 47 01 00: call 0x5324ee
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 68h]
        and edx, 200h
        test edx, edx
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x51dd9a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 98h], eax
        mov ecx, dword ptr [ebp - 98h]
        sub ecx, 4
        mov dword ptr [ebp - 98h], ecx
        cmp dword ptr [ebp - 98h], 0dh
        ; Exact mapped bytes 77 6F: ja 0x51dd9a
        __asm _emit 0x77
        __asm _emit 0x6f
        mov eax, dword ptr [ebp - 98h]
        xor edx, edx
        mov dl, byte ptr [eax + 51e0aah]
        ; Exact mapped bytes FF 24 95 96 E0 51 00: jmp dword ptr [edx*4 + 0x51e096]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x96
        __asm _emit 0xe0
        __asm _emit 0x51
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        xor eax, eax
        cmp ecx, dword ptr [ebp - 0ch]
        setge al
        dec eax
        and eax, 2
        add eax, 0ah
        ; Exact mapped bytes E9 39 03 00 00: jmp 0x51e090
        __asm _emit 0xe9
        __asm _emit 0x39
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        cmp edx, dword ptr [ebp - 0ch]
        setl al
        add eax, 0bh
        ; Exact mapped bytes E9 26 03 00 00: jmp 0x51e090
        __asm _emit 0xe9
        __asm _emit 0x26
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        cmp eax, dword ptr [ebp - 4]
        setle cl
        dec ecx
        and ecx, 5
        add ecx, 0ah
        mov eax, ecx
        ; Exact mapped bytes E9 0D 03 00 00: jmp 0x51e090
        __asm _emit 0xe9
        __asm _emit 0x0d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        cmp edx, dword ptr [ebp - 4]
        setle al
        dec eax
        and eax, 4
        add eax, 0bh
        ; Exact mapped bytes E9 F6 02 00 00: jmp 0x51e090
        __asm _emit 0xe9
        __asm _emit 0xf6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E9 EE 02 00 00: jmp 0x51e090
        __asm _emit 0xe9
        __asm _emit 0xee
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 80h], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 7ch], ecx
        mov edx, dword ptr [ebp - 7ch]
        push edx
        mov eax, dword ptr [ebp - 80h]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 78 46 01 00: call 0x532436
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x51ddc9
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 C7 02 00 00: jmp 0x51e090
        __asm _emit 0xe9
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 6
        ; Exact mapped bytes FF 15 C4 BF 68 00: call dword ptr [0x68bfc4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        push 5
        ; Exact mapped bytes FF 15 C4 BF 68 00: call dword ptr [0x68bfc4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 CD 3D 01 00: call 0x531bb0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 48h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 4ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 44h], ecx
        lea edx, [ebp - 4ch]
        push edx
        push 0
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 66 FD FF FF: call 0x51db72
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 4ch]
        push eax
        lea ecx, [ebp - 64h]
        ; Exact mapped bytes E8 0E 44 01 00: call 0x532226
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 88h], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 84h], edx
        mov eax, dword ptr [ebp - 84h]
        push eax
        mov ecx, dword ptr [ebp - 88h]
        push ecx
        lea ecx, [ebp - 64h]
        ; Exact mapped bytes E8 F6 45 01 00: call 0x532436
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x51de4e
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 42 02 00 00: jmp 0x51e090
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 68h]
        and edx, 40600h
        test edx, edx
        ; Exact mapped bytes 0F 84 C4 01 00 00: je 0x51e023
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 78h], 0
        mov eax, dword ptr [ebp - 50h]
        ; Exact mapped bytes 03 05 5C 71 68 00: add eax, dword ptr [0x68715c]
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x5c
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        shl ecx, 1
        sub eax, ecx
        push eax
        mov edx, dword ptr [ebp - 54h]
        ; Exact mapped bytes 03 15 58 71 68 00: add edx, dword ptr [0x687158]
        __asm _emit 0x03
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        imul eax, eax, 3
        sub edx, eax
        push edx
        lea ecx, [ebp - 74h]
        ; Exact mapped bytes E8 1F 3D 01 00: call 0x531bb0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [ebp - 50h]
        cmp dword ptr [ebp + 0ch], ecx
        ; Exact mapped bytes 7D 4A: jge 0x51dee6
        __asm _emit 0x7d
        __asm _emit 0x4a
        mov edx, dword ptr [ebp - 68h]
        and edx, 200h
        test edx, edx
        ; Exact mapped bytes 74 09: je 0x51deb2
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 78h], 0ch
        ; Exact mapped bytes EB 2F: jmp 0x51dee1
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 10h]
        add eax, dword ptr [ebp - 74h]
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 7F 09: jg 0x51dec6
        __asm _emit 0x7f
        __asm _emit 0x09
        mov dword ptr [ebp - 78h], 0dh
        ; Exact mapped bytes EB 1B: jmp 0x51dee1
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 8]
        sub ecx, dword ptr [ebp - 74h]
        cmp dword ptr [ebp + 8], ecx
        ; Exact mapped bytes 7C 09: jl 0x51deda
        __asm _emit 0x7c
        __asm _emit 0x09
        mov dword ptr [ebp - 78h], 0eh
        ; Exact mapped bytes EB 07: jmp 0x51dee1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 78h], 0ch
        ; Exact mapped bytes E9 F6 00 00 00: jmp 0x51dfdc
        __asm _emit 0xe9
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        sub edx, dword ptr [ebp - 50h]
        cmp dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes 7C 49: jl 0x51df3a
        __asm _emit 0x7c
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 68h]
        and eax, 200h
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x51df06
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 78h], 0fh
        ; Exact mapped bytes EB 2F: jmp 0x51df35
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 10h]
        add ecx, dword ptr [ebp - 74h]
        cmp dword ptr [ebp + 8], ecx
        ; Exact mapped bytes 7F 09: jg 0x51df1a
        __asm _emit 0x7f
        __asm _emit 0x09
        mov dword ptr [ebp - 78h], 10h
        ; Exact mapped bytes EB 1B: jmp 0x51df35
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 8]
        sub edx, dword ptr [ebp - 74h]
        cmp dword ptr [ebp + 8], edx
        ; Exact mapped bytes 7C 09: jl 0x51df2e
        __asm _emit 0x7c
        __asm _emit 0x09
        mov dword ptr [ebp - 78h], 11h
        ; Exact mapped bytes EB 07: jmp 0x51df35
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 78h], 0fh
        ; Exact mapped bytes E9 A2 00 00 00: jmp 0x51dfdc
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        add eax, dword ptr [ebp - 54h]
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 7D 47: jge 0x51df8c
        __asm _emit 0x7d
        __asm _emit 0x47
        mov ecx, dword ptr [ebp - 68h]
        and ecx, 200h
        test ecx, ecx
        ; Exact mapped bytes 74 09: je 0x51df5b
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 78h], 0ah
        ; Exact mapped bytes EB 2F: jmp 0x51df8a
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov edx, dword ptr [ebp - 0ch]
        add edx, dword ptr [ebp - 70h]
        cmp dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes 7F 09: jg 0x51df6f
        __asm _emit 0x7f
        __asm _emit 0x09
        mov dword ptr [ebp - 78h], 0dh
        ; Exact mapped bytes EB 1B: jmp 0x51df8a
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 4]
        sub eax, dword ptr [ebp - 70h]
        cmp dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 7C 09: jl 0x51df83
        __asm _emit 0x7c
        __asm _emit 0x09
        mov dword ptr [ebp - 78h], 10h
        ; Exact mapped bytes EB 07: jmp 0x51df8a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 78h], 0ah
        ; Exact mapped bytes EB 50: jmp 0x51dfdc
        __asm _emit 0xeb
        __asm _emit 0x50
        mov ecx, dword ptr [ebp - 8]
        sub ecx, dword ptr [ebp - 54h]
        cmp dword ptr [ebp + 8], ecx
        ; Exact mapped bytes 7C 45: jl 0x51dfdc
        __asm _emit 0x7c
        __asm _emit 0x45
        mov edx, dword ptr [ebp - 68h]
        and edx, 200h
        test edx, edx
        ; Exact mapped bytes 74 09: je 0x51dfad
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 78h], 0bh
        ; Exact mapped bytes EB 2F: jmp 0x51dfdc
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 0ch]
        add eax, dword ptr [ebp - 70h]
        cmp dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 7F 09: jg 0x51dfc1
        __asm _emit 0x7f
        __asm _emit 0x09
        mov dword ptr [ebp - 78h], 0eh
        ; Exact mapped bytes EB 1B: jmp 0x51dfdc
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 4]
        sub ecx, dword ptr [ebp - 70h]
        cmp dword ptr [ebp + 0ch], ecx
        ; Exact mapped bytes 7C 09: jl 0x51dfd5
        __asm _emit 0x7c
        __asm _emit 0x09
        mov dword ptr [ebp - 78h], 11h
        ; Exact mapped bytes EB 07: jmp 0x51dfdc
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 78h], 0bh
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 2D: je 0x51e00f
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 68h]
        and edx, 800h
        test edx, edx
        ; Exact mapped bytes 74 0C: je 0x51dffb
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 9ch], 2
        ; Exact mapped bytes EB 09: jmp 0x51e004
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 9ch], eax
        mov eax, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x51e090
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 50h]
        neg ecx
        push ecx
        mov edx, dword ptr [ebp - 54h]
        neg edx
        push edx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 CB 44 01 00: call 0x5324ee
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 03 05 5C 71 68 00: add eax, dword ptr [0x68715c]
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x5c
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 90h], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8ch], edx
        mov eax, dword ptr [ebp - 8ch]
        push eax
        mov ecx, dword ptr [ebp - 90h]
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 DC 43 01 00: call 0x532436
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 2D: je 0x51e08b
        __asm _emit 0x74
        __asm _emit 0x2d
        ; Exact mapped bytes 8B 15 58 71 68 00: mov edx, dword ptr [0x687158]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx - 2]
        cmp dword ptr [ebp + 8], ecx
        ; Exact mapped bytes 7D 14: jge 0x51e084
        __asm _emit 0x7d
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 68h]
        and edx, 80000h
        test edx, edx
        ; Exact mapped bytes 74 07: je 0x51e084
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 3
        ; Exact mapped bytes EB 0C: jmp 0x51e090
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, 2
        ; Exact mapped bytes EB 05: jmp 0x51e090
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 0fffffffeh
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
