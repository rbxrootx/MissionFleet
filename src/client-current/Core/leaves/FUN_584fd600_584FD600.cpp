// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584FD600 .. +0x1292 bytes.
extern "C" __declspec(naked) void FUN_584fd600_584FD600() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1a0h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 220h]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 5E: mov ax, word ptr [edx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x5e
        ; Exact mapped bytes 66 C1 E8 04: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 7F: and ax, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x7f
        movzx ecx, ax
        xor ecx, 55h
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 5A DB 2B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xdb
        __asm _emit 0x2b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1e0h]
        mov dword ptr [ebp - 24h], eax
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 94 88 F8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x88
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 83 3D 48 24 96 58 00: cmp dword ptr [0x58962448], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 12 04 00 00: je 0x584fda6c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x12
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a4h]
        shr edx, 1
        and edx, 7fffffffh
        cmp edx, 50h
        ; Exact mapped bytes 75 05: jne 0x584fd675
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 F2 03 00 00: jmp 0x584fda67
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 5E: mov cx, word ptr [eax + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x5e
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        imul eax, edx, 6900h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a4h]
        shr edx, 1
        and edx, 7fffffffh
        imul ecx, edx, 0e0h
        cmp dword ptr [eax + ecx + 5890c098h], 4bh
        ; Exact mapped bytes 0F 8D 7A 01 00 00: jge 0x584fd828
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1ech]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 5E: mov dx, word ptr [ecx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x5e
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        imul ecx, eax, 6900h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a4h]
        shr eax, 1
        and eax, 7fffffffh
        imul edx, eax, 0e0h
        mov eax, dword ptr [ecx + edx + 5890c098h]
        add eax, 25ah
        push eax
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 24 74 F8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x74
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 25 88 F8 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x88
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1f0h]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 5E: mov dx, word ptr [ecx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x5e
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        imul ecx, eax, 6900h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a4h]
        shr eax, 1
        and eax, 7fffffffh
        imul edx, eax, 0e0h
        mov eax, dword ptr [ecx + edx + 5890c098h]
        add eax, 2a5h
        push eax
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C7 73 F8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x73
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 C8 87 F8 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x87
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1f4h]
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 5E: mov dx, word ptr [ecx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x5e
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        imul ecx, eax, 6900h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a4h]
        shr eax, 1
        and eax, 7fffffffh
        imul edx, eax, 0e0h
        mov eax, dword ptr [ecx + edx + 5890c098h]
        add eax, 2f0h
        push eax
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6A 73 F8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x73
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 6B 87 F8 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x87
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1f8h]
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 5E: mov dx, word ptr [ecx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x5e
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        imul ecx, eax, 6900h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a4h]
        shr eax, 1
        and eax, 7fffffffh
        imul edx, eax, 0e0h
        mov eax, dword ptr [ecx + edx + 5890c098h]
        add eax, 33bh
        push eax
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0D 73 F8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x73
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 0E 87 F8 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x87
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 6D 01 00 00: jmp 0x584fd995
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1ech]
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 5E: mov dx, word ptr [ecx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x5e
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        imul ecx, eax, 6900h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a4h]
        shr eax, 1
        and eax, 7fffffffh
        imul edx, eax, 0e0h
        mov eax, dword ptr [ecx + edx + 5890c098h]
        sub eax, 19h
        push eax
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AC 72 F8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x72
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 AD 86 F8 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x86
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1f0h]
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 5E: mov dx, word ptr [ecx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x5e
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        imul ecx, eax, 6900h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a4h]
        shr eax, 1
        and eax, 7fffffffh
        imul edx, eax, 0e0h
        mov eax, dword ptr [ecx + edx + 5890c098h]
        add eax, 19h
        push eax
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 51 72 F8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x72
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 52 86 F8 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x86
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1f4h]
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 5E: mov dx, word ptr [ecx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x5e
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        imul ecx, eax, 6900h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a4h]
        shr eax, 1
        and eax, 7fffffffh
        imul edx, eax, 0e0h
        mov eax, dword ptr [ecx + edx + 5890c098h]
        add eax, 4bh
        push eax
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F6 71 F8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x71
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        mov ecx, dword ptr [ebp - 58h]
        push ecx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 F7 85 F8 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1f8h]
        mov dword ptr [ebp - 64h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 5E: mov dx, word ptr [ecx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x5e
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        imul ecx, eax, 6900h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a4h]
        shr eax, 1
        and eax, 7fffffffh
        imul edx, eax, 0e0h
        mov eax, dword ptr [ecx + edx + 5890c098h]
        add eax, 7dh
        push eax
        ; Exact mapped bytes 8B 0D AC 06 96 58: mov ecx, dword ptr [0x589606ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9B 71 F8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x71
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        mov ecx, dword ptr [ebp - 60h]
        push ecx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 9C 85 F8 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1e0h]
        mov dword ptr [ebp - 6ch], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 5E: mov dx, word ptr [ecx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x5e
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        imul ecx, eax, 6900h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a4h]
        shr eax, 1
        and eax, 7fffffffh
        imul edx, eax, 0e0h
        lea eax, [ecx + edx + 5890bfd0h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx + 0cch]
        push eax
        ; Exact mapped bytes 8B 0D 48 24 96 58: mov ecx, dword ptr [0x58962448]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E3 70 F8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x70
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        mov ecx, dword ptr [ebp - 68h]
        push ecx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 64 92 F8 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x92
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1e4h]
        mov dword ptr [ebp - 74h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 5E: mov dx, word ptr [ecx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x5e
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        imul ecx, eax, 6900h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a4h]
        shr eax, 1
        and eax, 7fffffffh
        imul edx, eax, 0e0h
        lea eax, [ecx + edx + 5890bfd0h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx + 0cch]
        add eax, 1
        push eax
        ; Exact mapped bytes 8B 0D 48 24 96 58: mov ecx, dword ptr [0x58962448]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 79 70 F8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x70
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        mov ecx, dword ptr [ebp - 70h]
        push ecx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 FA 91 F8 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x91
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 97 00 00 00: jmp 0x584fdb03
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1e0h]
        mov dword ptr [ebp - 78h], eax
        push 0
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 DE 91 F8 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x91
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1e4h]
        mov dword ptr [ebp - 7ch], edx
        push 0
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 C8 91 F8 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x91
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ech]
        mov dword ptr [ebp - 80h], ecx
        push 0
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 82 84 F8 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1f0h]
        mov dword ptr [ebp - 84h], eax
        push 0
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 66 84 F8 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1f4h]
        mov dword ptr [ebp - 88h], edx
        push 0
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 4A 84 F8 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1f8h]
        mov dword ptr [ebp - 8ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 2E 84 F8 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 1c0h], 1
        ; Exact mapped bytes 74 0C: je 0x584fdb1b
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1c0h], 2
        ; Exact mapped bytes 75 65: jne 0x584fdb80
        __asm _emit 0x75
        __asm _emit 0x65
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1e8h]
        mov dword ptr [ebp - 90h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1c0h]
        add ecx, 8
        push ecx
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 FE 1C FA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x1c
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1e8h]
        mov dword ptr [ebp - 94h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 82 83 F8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1fch]
        mov dword ptr [ebp - 98h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 16 84 F8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 AF 00 00 00: jmp 0x584fdc2f
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 5E: mov cx, word ptr [eax + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x5e
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 74 64: je 0x584fdbf6
        __asm _emit 0x74
        __asm _emit 0x64
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1e8h]
        mov dword ptr [ebp - 9ch], ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 5E: mov ax, word ptr [edx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x5e
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        push ecx
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 85 1C FA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x1c
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1e8h]
        mov dword ptr [ebp - 0a0h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 09 83 F8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1fch]
        mov dword ptr [ebp - 0a4h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 9D 83 F8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 39: jmp 0x584fdc2f
        __asm _emit 0xeb
        __asm _emit 0x39
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1e8h]
        mov dword ptr [ebp - 0a8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 7E 83 F8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1fch]
        mov dword ptr [ebp - 0ach], eax
        push 0
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 62 83 F8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 238h]
        mov dword ptr [ebp - 0b0h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ach]
        xor ecx, 55555555h
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a8h]
        xor eax, 55555555h
        push eax
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 A8 63 00 00: call 0x58504010
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 228h]
        mov dword ptr [ebp - 0b4h], ecx
        mov edx, 2
        imul eax, edx, 0bh
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + eax + 64h]
        xor edx, 55h
        push edx
        mov eax, 2
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + ecx + 58h]
        xor eax, 55h
        push eax
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 5D 63 00 00: call 0x58504010
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 228h]
        mov dword ptr [ebp - 0b8h], eax
        mov ecx, 2
        imul edx, ecx, 0bh
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + edx + 64h]
        xor ecx, 55h
        push ecx
        mov edx, 2
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + eax + 58h]
        xor edx, 55h
        mov eax, 2
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        movzx eax, word ptr [ecx + eax + 58h]
        xor eax, 55h
        add edx, eax
        push edx
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 FD 62 00 00: call 0x58504010
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 228h]
        mov dword ptr [ebp - 0bch], eax
        mov ecx, 2
        imul edx, ecx, 0bh
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + edx + 64h]
        xor ecx, 55h
        push ecx
        mov edx, 2
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + eax + 58h]
        xor edx, 55h
        mov eax, 2
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        movzx eax, word ptr [ecx + eax + 58h]
        xor eax, 55h
        add edx, eax
        mov ecx, 2
        shl ecx, 1
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + ecx + 58h]
        xor ecx, 55h
        add edx, ecx
        push edx
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 8A 62 00 00: call 0x58504010
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 23ch]
        mov dword ptr [ebp - 0c0h], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0dch
        push ecx
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 F6 82 F8 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x82
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x584fddbd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 7
        ; Exact mapped bytes 0F 8D 77 01 00 00: jge 0x584fdf3e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x77
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 1a4h]
        shr edx, 10h
        movzx eax, dx
        cmp eax, 3
        ; Exact mapped bytes 0F 85 56 01 00 00: jne 0x584fdf39
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 1a4h]
        and eax, 0ffffh
        movzx ecx, ax
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        sub edx, 0ah
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 29h
        ; Exact mapped bytes 0F 87 2B 01 00 00: ja 0x584fdf39
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        movzx ecx, byte ptr [eax + 584fe8b8h]
        ; Exact mapped bytes FF 24 8D 94 E8 4F 58: jmp dword ptr [ecx*4 + 0x584fe894]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 23ch]
        mov dword ptr [ebp - 0c4h], eax
        push 0ffffh
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 A2 82 F8 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x82
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 F5 00 00 00: jmp 0x584fdf39
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 23ch]
        mov dword ptr [ebp - 0c8h], edx
        push 0ff00h
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 7D 82 F8 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x82
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 D0 00 00 00: jmp 0x584fdf39
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 23ch]
        mov dword ptr [ebp - 0cch], ecx
        push 0ff6612h
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 58 82 F8 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x82
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 AB 00 00 00: jmp 0x584fdf39
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 23ch]
        mov dword ptr [ebp - 0d0h], eax
        push 96f0h
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 33 82 F8 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x82
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 86 00 00 00: jmp 0x584fdf39
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 23ch]
        mov dword ptr [ebp - 0d4h], edx
        push 0d7ffh
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 0E 82 F8 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x82
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 64: jmp 0x584fdf39
        __asm _emit 0xeb
        __asm _emit 0x64
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 23ch]
        mov dword ptr [ebp - 0d8h], ecx
        push 0ff2483h
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 EC 81 F8 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x81
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 42: jmp 0x584fdf39
        __asm _emit 0xeb
        __asm _emit 0x42
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 23ch]
        mov dword ptr [ebp - 0dch], eax
        push 0d00ffh
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 CA 81 F8 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x81
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 20: jmp 0x584fdf39
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 23ch]
        mov dword ptr [ebp - 0e0h], edx
        push 0e6907fh
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 A8 81 F8 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x81
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 76 FE FF FF: jmp 0x584fddb4
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes 66 89 45 F4: mov word ptr [ebp - 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        mov byte ptr [ebp - 0dh], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 26ch]
        mov dword ptr [ebp - 0e4h], edx
        push 0
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 7C 7F F8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x7f
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 270h]
        mov dword ptr [ebp - 0e8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 60 7F F8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x7f
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 274h]
        mov dword ptr [ebp - 0ech], eax
        push 0
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 44 7F F8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x7f
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 278h]
        mov dword ptr [ebp - 0f0h], edx
        push 0
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 28 7F F8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x7f
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x584fdfcb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 7
        ; Exact mapped bytes 0F 8D DC 02 00 00: jge 0x584fe2b1
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xdc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 1a4h]
        shr eax, 10h
        movzx ecx, ax
        cmp ecx, 3
        ; Exact mapped bytes 0F 85 09 02 00 00: jne 0x584fe1fa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x09
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 1a4h]
        and ecx, 0ffffh
        movzx edx, cx
        cmp edx, 0ah
        ; Exact mapped bytes 0F 84 EA 01 00 00: je 0x584fe1fa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xea
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 1a4h]
        and edx, 0ffffh
        movzx eax, dx
        cmp eax, 1ah
        ; Exact mapped bytes 0F 84 E1 00 00 00: je 0x584fe110
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 1a4h]
        and eax, 0ffffh
        movzx ecx, ax
        cmp ecx, 1bh
        ; Exact mapped bytes 0F 84 C3 00 00 00: je 0x584fe110
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 1a4h]
        and ecx, 0ffffh
        movzx edx, cx
        cmp edx, 1ch
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x584fe110
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 1a4h]
        and edx, 0ffffh
        movzx eax, dx
        cmp eax, 1dh
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x584fe110
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 1a4h]
        and eax, 0ffffh
        movzx ecx, ax
        cmp ecx, 1eh
        ; Exact mapped bytes 74 6B: je 0x584fe110
        __asm _emit 0x74
        __asm _emit 0x6b
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 1a4h]
        and ecx, 0ffffh
        movzx edx, cx
        cmp edx, 1fh
        ; Exact mapped bytes 74 50: je 0x584fe110
        __asm _emit 0x74
        __asm _emit 0x50
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 1a4h]
        and edx, 0ffffh
        movzx eax, dx
        cmp eax, 20h
        ; Exact mapped bytes 74 35: je 0x584fe110
        __asm _emit 0x74
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 1a4h]
        and eax, 0ffffh
        movzx ecx, ax
        cmp ecx, 21h
        ; Exact mapped bytes 74 1B: je 0x584fe110
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 1a4h]
        and ecx, 0ffffh
        movzx edx, cx
        cmp edx, 22h
        ; Exact mapped bytes 75 0E: jne 0x584fe11e
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, 2
        ; Exact mapped bytes 66 89 45 F4: mov word ptr [ebp - 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes E9 D7 00 00 00: jmp 0x584fe1f5
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 1a4h]
        and eax, 0ffffh
        movzx ecx, ax
        cmp ecx, 26h
        ; Exact mapped bytes 74 1B: je 0x584fe153
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 1a4h]
        and ecx, 0ffffh
        movzx edx, cx
        cmp edx, 27h
        ; Exact mapped bytes 75 0E: jne 0x584fe161
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, 3
        ; Exact mapped bytes 66 89 45 F4: mov word ptr [ebp - 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes E9 94 00 00 00: jmp 0x584fe1f5
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 1a4h]
        and eax, 0ffffh
        movzx ecx, ax
        cmp ecx, 28h
        ; Exact mapped bytes 75 0B: jne 0x584fe186
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, 4
        ; Exact mapped bytes 66 89 55 F4: mov word ptr [ebp - 0xc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf4
        ; Exact mapped bytes EB 6F: jmp 0x584fe1f5
        __asm _emit 0xeb
        __asm _emit 0x6f
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 1a4h]
        and edx, 0ffffh
        movzx eax, dx
        cmp eax, 2ch
        ; Exact mapped bytes 7C 25: jl 0x584fe1c6
        __asm _emit 0x7c
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 1a4h]
        and eax, 0ffffh
        movzx ecx, ax
        cmp ecx, 33h
        ; Exact mapped bytes 7F 0B: jg 0x584fe1c6
        __asm _emit 0x7f
        __asm _emit 0x0b
        mov edx, 5
        ; Exact mapped bytes 66 89 55 F4: mov word ptr [ebp - 0xc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf4
        ; Exact mapped bytes EB 2F: jmp 0x584fe1f5
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 1a4h]
        and edx, 0ffffh
        movzx eax, dx
        cmp eax, 2bh
        ; Exact mapped bytes 75 0B: jne 0x584fe1ec
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, 6
        ; Exact mapped bytes 66 89 4D F4: mov word ptr [ebp - 0xc], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes EB 09: jmp 0x584fe1f5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, 1
        ; Exact mapped bytes 66 89 55 F4: mov word ptr [ebp - 0xc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf4
        ; Exact mapped bytes E9 B2 00 00 00: jmp 0x584fe2ac
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 1a4h]
        shr edx, 10h
        movzx eax, dx
        cmp eax, 4
        ; Exact mapped bytes 75 20: jne 0x584fe232
        __asm _emit 0x75
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 1a4h]
        and eax, 0ffffh
        movzx ecx, ax
        cmp ecx, 5
        ; Exact mapped bytes 75 06: jne 0x584fe232
        __asm _emit 0x75
        __asm _emit 0x06
        mov byte ptr [ebp - 0dh], 1
        ; Exact mapped bytes EB 7A: jmp 0x584fe2ac
        __asm _emit 0xeb
        __asm _emit 0x7a
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 1a4h]
        shr ecx, 10h
        movzx edx, cx
        cmp edx, 4
        ; Exact mapped bytes 75 26: jne 0x584fe270
        __asm _emit 0x75
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 1a4h]
        and edx, 0ffffh
        movzx eax, dx
        cmp eax, 18h
        ; Exact mapped bytes 75 0B: jne 0x584fe270
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, 1
        ; Exact mapped bytes 66 89 4D F4: mov word ptr [ebp - 0xc], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes EB 3C: jmp 0x584fe2ac
        __asm _emit 0xeb
        __asm _emit 0x3c
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 1a4h]
        shr ecx, 10h
        movzx edx, cx
        cmp edx, 4
        ; Exact mapped bytes 75 24: jne 0x584fe2ac
        __asm _emit 0x75
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 1a4h]
        and edx, 0ffffh
        movzx eax, dx
        cmp eax, 29h
        ; Exact mapped bytes 75 09: jne 0x584fe2ac
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, 1
        ; Exact mapped bytes 66 89 4D F4: mov word ptr [ebp - 0xc], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes E9 11 FD FF FF: jmp 0x584fdfc2
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 55 F4: movsx edx, word ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xf4
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        sub eax, 1
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 5
        ; Exact mapped bytes 0F 87 A2 02 00 00: ja 0x584fe56d
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xa2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 24 8D E4 E8 4F 58: jmp dword ptr [ecx*4 + 0x584fe8e4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xe4
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 26ch]
        mov dword ptr [ebp - 0f8h], eax
        push 3dh
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2F 68 F8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x68
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 0f4h], eax
        mov ecx, dword ptr [ebp - 0f4h]
        push ecx
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 27 7C F8 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x7c
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 270h]
        mov dword ptr [ebp - 100h], eax
        push 3ch
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FB 67 F8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x67
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 0fch], eax
        mov ecx, dword ptr [ebp - 0fch]
        push ecx
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 F3 7B F8 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x7b
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 2A 02 00 00: jmp 0x584fe56d
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 26ch]
        mov dword ptr [ebp - 108h], eax
        push 119h
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BE 67 F8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x67
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 104h], eax
        mov ecx, dword ptr [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 B6 7B F8 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x7b
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 270h]
        mov dword ptr [ebp - 110h], eax
        push 11ah
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 87 67 F8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x67
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 10ch], eax
        mov ecx, dword ptr [ebp - 10ch]
        push ecx
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 7F 7B F8 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x7b
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B6 01 00 00: jmp 0x584fe56d
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 26ch]
        mov dword ptr [ebp - 118h], eax
        push 11bh
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4A 67 F8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x67
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 114h], eax
        mov ecx, dword ptr [ebp - 114h]
        push ecx
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 42 7B F8 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x7b
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 270h]
        mov dword ptr [ebp - 120h], eax
        push 11ch
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 13 67 F8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x67
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 11ch], eax
        mov ecx, dword ptr [ebp - 11ch]
        push ecx
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 0B 7B F8 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x7b
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 42 01 00 00: jmp 0x584fe56d
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 26ch]
        mov dword ptr [ebp - 128h], eax
        push 3dh
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D9 66 F8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x66
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 124h], eax
        mov ecx, dword ptr [ebp - 124h]
        push ecx
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 D1 7A F8 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x7a
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 270h]
        mov dword ptr [ebp - 130h], eax
        push 3ch
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A5 66 F8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x66
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 12ch], eax
        mov ecx, dword ptr [ebp - 12ch]
        push ecx
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 9D 7A F8 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x7a
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 D4 00 00 00: jmp 0x584fe56d
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 26ch]
        mov dword ptr [ebp - 138h], eax
        push 38h
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6B 66 F8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x66
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 134h], eax
        mov ecx, dword ptr [ebp - 134h]
        push ecx
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 63 7A F8 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x7a
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 270h]
        mov dword ptr [ebp - 140h], eax
        push 37h
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 37 66 F8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x66
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 13ch], eax
        mov ecx, dword ptr [ebp - 13ch]
        push ecx
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 2F 7A F8 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x7a
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 69: jmp 0x584fe56d
        __asm _emit 0xeb
        __asm _emit 0x69
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 26ch]
        mov dword ptr [ebp - 148h], eax
        push 36h
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 00 66 F8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x66
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 144h], eax
        mov ecx, dword ptr [ebp - 144h]
        push ecx
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 F8 79 F8 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x79
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 270h]
        mov dword ptr [ebp - 150h], eax
        push 35h
        ; Exact mapped bytes 8B 0D A4 07 96 58: mov ecx, dword ptr [0x589607a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CC 65 F8 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x65
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 14ch], eax
        mov ecx, dword ptr [ebp - 14ch]
        push ecx
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 C4 79 F8 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        movzx edx, byte ptr [ebp - 0dh]
        cmp edx, 1
        ; Exact mapped bytes 75 39: jne 0x584fe5af
        __asm _emit 0x75
        __asm _emit 0x39
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 274h]
        mov dword ptr [ebp - 154h], ecx
        push 1
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 4E 79 F8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x79
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 278h]
        mov dword ptr [ebp - 158h], eax
        push 1
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 32 79 F8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x79
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 0F BF 4D F4: movsx ecx, word ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xf4
        test ecx, ecx
        ; Exact mapped bytes 74 39: je 0x584fe5f0
        __asm _emit 0x74
        __asm _emit 0x39
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 26ch]
        mov dword ptr [ebp - 15ch], eax
        push 1
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 0D 79 F8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x79
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 270h]
        mov dword ptr [ebp - 160h], edx
        push 1
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes E8 F1 78 F8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x78
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a4h]
        shr ecx, 1
        and ecx, 7fffffffh
        cmp ecx, 50h
        ; Exact mapped bytes 74 34: je 0x584fe63a
        __asm _emit 0x74
        __asm _emit 0x34
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a4h]
        shr eax, 1
        and eax, 7fffffffh
        cmp eax, 54h
        ; Exact mapped bytes 74 1F: je 0x584fe63a
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20ch]
        mov dword ptr [ebp - 164h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 59 79 F8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x79
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 75: jmp 0x584fe6af
        __asm _emit 0xeb
        __asm _emit 0x75
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 238h]
        mov dword ptr [ebp - 168h], ecx
        push 0
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 8A 78 F8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x78
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x584fe669
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 1ch]
        add edx, 1
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 3
        ; Exact mapped bytes 7D 23: jge 0x584fe692
        __asm _emit 0x7d
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 228h]
        mov dword ptr [ebp - 16ch], edx
        push 0
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 51 78 F8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x78
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CE: jmp 0x584fe660
        __asm _emit 0xeb
        __asm _emit 0xce
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 220h]
        mov dword ptr [ebp - 170h], ecx
        push 0
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes E8 32 78 F8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x78
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 208h]
        mov dword ptr [ebp - 174h], eax
        push 0
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 15 78 F8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 1c0h], 1
        ; Exact mapped bytes 74 0C: je 0x584fe6e4
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 1c0h], 2
        ; Exact mapped bytes 75 22: jne 0x584fe706
        __asm _emit 0x75
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 210h]
        mov dword ptr [ebp - 178h], ecx
        push 0
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes E8 90 78 F8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x78
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 88 01 00 00: jmp 0x584fe88e
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b4h]
        and eax, 10000000h
        ; Exact mapped bytes 74 72: je 0x584fe788
        __asm _emit 0x74
        __asm _emit 0x72
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 5E: mov dx, word ptr [ecx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x5e
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        test eax, eax
        ; Exact mapped bytes 74 60: je 0x584fe788
        __asm _emit 0x74
        __asm _emit 0x60
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 210h]
        mov dword ptr [ebp - 180h], edx
        push 26h
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8C 63 F8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x63
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 17ch], eax
        mov eax, dword ptr [ebp - 17ch]
        push eax
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 04 85 F8 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 210h]
        mov dword ptr [ebp - 184h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 18 78 F8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x78
        __asm _emit 0xf8
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7E 0E 00 00: call 0x584ff600
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 06 01 00 00: jmp 0x584fe88e
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a4h]
        and ecx, 1
        ; Exact mapped bytes 74 60: je 0x584fe7f6
        __asm _emit 0x74
        __asm _emit 0x60
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 210h]
        mov dword ptr [ebp - 18ch], eax
        push 3
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1E 63 F8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x63
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 188h], eax
        mov ecx, dword ptr [ebp - 188h]
        push ecx
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 96 84 F8 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 210h]
        mov dword ptr [ebp - 190h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 AA 77 F8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x77
        __asm _emit 0xf8
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 10 0E 00 00: call 0x584ff600
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 98 00 00 00: jmp 0x584fe88e
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a4h]
        shr edx, 1
        and edx, 7fffffffh
        cmp edx, 1
        ; Exact mapped bytes 75 65: jne 0x584fe871
        __asm _emit 0x75
        __asm _emit 0x65
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 5E: mov cx, word ptr [eax + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x5e
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 75 53: jne 0x584fe871
        __asm _emit 0x75
        __asm _emit 0x53
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 210h]
        mov dword ptr [ebp - 198h], ecx
        push 3
        ; Exact mapped bytes 8B 0D A8 06 96 58: mov ecx, dword ptr [0x589606a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 96 62 F8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x62
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 194h], eax
        mov edx, dword ptr [ebp - 194h]
        push edx
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 0E 84 F8 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 210h]
        mov dword ptr [ebp - 19ch], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 19ch]
        ; Exact mapped bytes E8 22 77 F8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x77
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1D: jmp 0x584fe88e
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 210h]
        mov dword ptr [ebp - 1a0h], eax
        push 0
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes E8 03 77 F8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x77
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
