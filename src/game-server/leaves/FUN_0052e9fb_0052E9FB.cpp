// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052E9FB .. +0x48B bytes.
extern "C" __declspec(naked) void FUN_0052e9fb_0052E9FB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 9ch
        mov dword ptr [ebp - 94h], ecx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 E9 03 FC FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 31 73 00 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 80 D6 00 00: call 0x53c0af
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        push 21h
        ; Exact mapped bytes FF 15 B8 28 5E 00: call dword ptr [0x5e28b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        push 20h
        ; Exact mapped bytes FF 15 B8 28 5E 00: call dword ptr [0x5e28b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 54h]
        ; Exact mapped bytes E8 F7 6B 00 00: call 0x535640
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x6b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D FC E8 5D 00 00: cmp dword ptr [0x5de8fc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xfc
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 3C 01 00 00: je 0x52eb92
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
        ; Exact mapped bytes E8 37 EF 00 00: call 0x53d9a0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes 83 3D F4 E8 5D 00 00: cmp dword ptr [0x5de8f4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 2F: je 0x52eaa4
        __asm _emit 0x74
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 68h]
        and eax, 1000h
        test eax, eax
        ; Exact mapped bytes 74 23: je 0x52eaa4
        __asm _emit 0x74
        __asm _emit 0x23
        cmp dword ptr [ebp - 6ch], 3
        ; Exact mapped bytes 75 07: jne 0x52ea8e
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 6ch], 2
        push 2
        ; Exact mapped bytes FF 15 BC 25 5E 00: call dword ptr [0x5e25bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C8: movsx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc8
        test ecx, ecx
        ; Exact mapped bytes 7D 07: jge 0x52eaa4
        __asm _emit 0x7d
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 DC 03 00 00: jmp 0x52ee80
        __asm _emit 0xe9
        __asm _emit 0xdc
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 6ch], 0ah
        ; Exact mapped bytes 72 06: jb 0x52eab0
        __asm _emit 0x72
        __asm _emit 0x06
        cmp dword ptr [ebp - 6ch], 11h
        ; Exact mapped bytes 76 0E: jbe 0x52eabe
        __asm _emit 0x76
        __asm _emit 0x0e
        cmp dword ptr [ebp - 6ch], 4
        ; Exact mapped bytes 74 08: je 0x52eabe
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E9 C2 03 00 00: jmp 0x52ee80
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 68h]
        and edx, 800h
        test edx, edx
        ; Exact mapped bytes 74 0A: je 0x52ead5
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 2
        ; Exact mapped bytes E9 AB 03 00 00: jmp 0x52ee80
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
        ; Exact mapped bytes E8 AD 75 00 00: call 0x536096
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 68h]
        and edx, 200h
        test edx, edx
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x52eb8a
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
        ; Exact mapped bytes 77 6F: ja 0x52eb8a
        __asm _emit 0x77
        __asm _emit 0x6f
        mov eax, dword ptr [ebp - 98h]
        xor edx, edx
        mov dl, byte ptr [eax + 52ee9ah]
        ; Exact mapped bytes FF 24 95 86 EE 52 00: jmp dword ptr [edx*4 + 0x52ee86]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x86
        __asm _emit 0xee
        __asm _emit 0x52
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        xor eax, eax
        cmp ecx, dword ptr [ebp - 0ch]
        setge al
        dec eax
        and eax, 2
        add eax, 0ah
        ; Exact mapped bytes E9 39 03 00 00: jmp 0x52ee80
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
        ; Exact mapped bytes E9 26 03 00 00: jmp 0x52ee80
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
        ; Exact mapped bytes E9 0D 03 00 00: jmp 0x52ee80
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
        ; Exact mapped bytes E9 F6 02 00 00: jmp 0x52ee80
        __asm _emit 0xe9
        __asm _emit 0xf6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E9 EE 02 00 00: jmp 0x52ee80
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
        ; Exact mapped bytes E8 30 74 00 00: call 0x535fde
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x52ebb9
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 C7 02 00 00: jmp 0x52ee80
        __asm _emit 0xe9
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 6
        ; Exact mapped bytes FF 15 B8 28 5E 00: call dword ptr [0x5e28b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        push 5
        ; Exact mapped bytes FF 15 B8 28 5E 00: call dword ptr [0x5e28b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 6D 6A 00 00: call 0x535640
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x6a
        __asm _emit 0x00
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
        ; Exact mapped bytes E8 66 FD FF FF: call 0x52e962
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 4ch]
        push eax
        lea ecx, [ebp - 64h]
        ; Exact mapped bytes E8 A8 71 00 00: call 0x535db0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x71
        __asm _emit 0x00
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
        ; Exact mapped bytes E8 AE 73 00 00: call 0x535fde
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x52ec3e
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 42 02 00 00: jmp 0x52ee80
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 68h]
        and edx, 40600h
        test edx, edx
        ; Exact mapped bytes 0F 84 C4 01 00 00: je 0x52ee13
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 78h], 0
        mov eax, dword ptr [ebp - 50h]
        ; Exact mapped bytes 03 05 3C EC 5D 00: add eax, dword ptr [0x5dec3c]
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        shl ecx, 1
        sub eax, ecx
        push eax
        mov edx, dword ptr [ebp - 54h]
        ; Exact mapped bytes 03 15 38 EC 5D 00: add edx, dword ptr [0x5dec38]
        __asm _emit 0x03
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        imul eax, eax, 3
        sub edx, eax
        push edx
        lea ecx, [ebp - 74h]
        ; Exact mapped bytes E8 BF 69 00 00: call 0x535640
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x69
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [ebp - 50h]
        cmp dword ptr [ebp + 0ch], ecx
        ; Exact mapped bytes 7D 4A: jge 0x52ecd6
        __asm _emit 0x7d
        __asm _emit 0x4a
        mov edx, dword ptr [ebp - 68h]
        and edx, 200h
        test edx, edx
        ; Exact mapped bytes 74 09: je 0x52eca2
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 78h], 0ch
        ; Exact mapped bytes EB 2F: jmp 0x52ecd1
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 10h]
        add eax, dword ptr [ebp - 74h]
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 7F 09: jg 0x52ecb6
        __asm _emit 0x7f
        __asm _emit 0x09
        mov dword ptr [ebp - 78h], 0dh
        ; Exact mapped bytes EB 1B: jmp 0x52ecd1
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 8]
        sub ecx, dword ptr [ebp - 74h]
        cmp dword ptr [ebp + 8], ecx
        ; Exact mapped bytes 7C 09: jl 0x52ecca
        __asm _emit 0x7c
        __asm _emit 0x09
        mov dword ptr [ebp - 78h], 0eh
        ; Exact mapped bytes EB 07: jmp 0x52ecd1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 78h], 0ch
        ; Exact mapped bytes E9 F6 00 00 00: jmp 0x52edcc
        __asm _emit 0xe9
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        sub edx, dword ptr [ebp - 50h]
        cmp dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes 7C 49: jl 0x52ed2a
        __asm _emit 0x7c
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 68h]
        and eax, 200h
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x52ecf6
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 78h], 0fh
        ; Exact mapped bytes EB 2F: jmp 0x52ed25
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 10h]
        add ecx, dword ptr [ebp - 74h]
        cmp dword ptr [ebp + 8], ecx
        ; Exact mapped bytes 7F 09: jg 0x52ed0a
        __asm _emit 0x7f
        __asm _emit 0x09
        mov dword ptr [ebp - 78h], 10h
        ; Exact mapped bytes EB 1B: jmp 0x52ed25
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 8]
        sub edx, dword ptr [ebp - 74h]
        cmp dword ptr [ebp + 8], edx
        ; Exact mapped bytes 7C 09: jl 0x52ed1e
        __asm _emit 0x7c
        __asm _emit 0x09
        mov dword ptr [ebp - 78h], 11h
        ; Exact mapped bytes EB 07: jmp 0x52ed25
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 78h], 0fh
        ; Exact mapped bytes E9 A2 00 00 00: jmp 0x52edcc
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        add eax, dword ptr [ebp - 54h]
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 7D 47: jge 0x52ed7c
        __asm _emit 0x7d
        __asm _emit 0x47
        mov ecx, dword ptr [ebp - 68h]
        and ecx, 200h
        test ecx, ecx
        ; Exact mapped bytes 74 09: je 0x52ed4b
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 78h], 0ah
        ; Exact mapped bytes EB 2F: jmp 0x52ed7a
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov edx, dword ptr [ebp - 0ch]
        add edx, dword ptr [ebp - 70h]
        cmp dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes 7F 09: jg 0x52ed5f
        __asm _emit 0x7f
        __asm _emit 0x09
        mov dword ptr [ebp - 78h], 0dh
        ; Exact mapped bytes EB 1B: jmp 0x52ed7a
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 4]
        sub eax, dword ptr [ebp - 70h]
        cmp dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 7C 09: jl 0x52ed73
        __asm _emit 0x7c
        __asm _emit 0x09
        mov dword ptr [ebp - 78h], 10h
        ; Exact mapped bytes EB 07: jmp 0x52ed7a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 78h], 0ah
        ; Exact mapped bytes EB 50: jmp 0x52edcc
        __asm _emit 0xeb
        __asm _emit 0x50
        mov ecx, dword ptr [ebp - 8]
        sub ecx, dword ptr [ebp - 54h]
        cmp dword ptr [ebp + 8], ecx
        ; Exact mapped bytes 7C 45: jl 0x52edcc
        __asm _emit 0x7c
        __asm _emit 0x45
        mov edx, dword ptr [ebp - 68h]
        and edx, 200h
        test edx, edx
        ; Exact mapped bytes 74 09: je 0x52ed9d
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 78h], 0bh
        ; Exact mapped bytes EB 2F: jmp 0x52edcc
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 0ch]
        add eax, dword ptr [ebp - 70h]
        cmp dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 7F 09: jg 0x52edb1
        __asm _emit 0x7f
        __asm _emit 0x09
        mov dword ptr [ebp - 78h], 0eh
        ; Exact mapped bytes EB 1B: jmp 0x52edcc
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 4]
        sub ecx, dword ptr [ebp - 70h]
        cmp dword ptr [ebp + 0ch], ecx
        ; Exact mapped bytes 7C 09: jl 0x52edc5
        __asm _emit 0x7c
        __asm _emit 0x09
        mov dword ptr [ebp - 78h], 11h
        ; Exact mapped bytes EB 07: jmp 0x52edcc
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 78h], 0bh
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 2D: je 0x52edff
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 68h]
        and edx, 800h
        test edx, edx
        ; Exact mapped bytes 74 0C: je 0x52edeb
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 9ch], 2
        ; Exact mapped bytes EB 09: jmp 0x52edf4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 9ch], eax
        mov eax, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x52ee80
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
        ; Exact mapped bytes E8 83 72 00 00: call 0x536096
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x72
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 03 05 3C EC 5D 00: add eax, dword ptr [0x5dec3c]
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0xec
        __asm _emit 0x5d
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
        ; Exact mapped bytes E8 94 71 00 00: call 0x535fde
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x71
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 2D: je 0x52ee7b
        __asm _emit 0x74
        __asm _emit 0x2d
        ; Exact mapped bytes 8B 15 38 EC 5D 00: mov edx, dword ptr [0x5dec38]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx - 2]
        cmp dword ptr [ebp + 8], ecx
        ; Exact mapped bytes 7D 14: jge 0x52ee74
        __asm _emit 0x7d
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 68h]
        and edx, 80000h
        test edx, edx
        ; Exact mapped bytes 74 07: je 0x52ee74
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 3
        ; Exact mapped bytes EB 0C: jmp 0x52ee80
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, 2
        ; Exact mapped bytes EB 05: jmp 0x52ee80
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
