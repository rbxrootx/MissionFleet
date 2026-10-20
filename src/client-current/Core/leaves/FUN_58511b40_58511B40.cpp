// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58511B40 .. +0x1E1C bytes.
extern "C" __declspec(naked) void FUN_58511b40_58511B40() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58880e1ah
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 31ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push ebx
        push esi
        push edi
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 114h], ecx
        mov eax, dword ptr [ebp - 114h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 02: shr cx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 B1 1D 00 00: je 0x58513942
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb1
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 80 31 0C 00: call 0x585d4d30
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x31
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 2F: je 0x58511be3
        __asm _emit 0x74
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 E2 01: and dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x01
        movzx eax, dx
        test eax, eax
        ; Exact mapped bytes 75 18: jne 0x58511be1
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 CA 01: or dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0x01
        mov eax, dword ptr [ebp - 114h]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes EB 32: jmp 0x58511c15
        __asm _emit 0xeb
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 E2 01: and dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x01
        movzx eax, dx
        cmp eax, 1
        ; Exact mapped bytes 75 1C: jne 0x58511c15
        __asm _emit 0x75
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0fffeh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes 66 89 51 24: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 114h]
        cmp dword ptr [edx + 50h], 0
        ; Exact mapped bytes 0F 84 56 1C 00 00: je 0x5851387b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 114h]
        cmp dword ptr [eax + 54h], 0
        ; Exact mapped bytes 0F 84 14 0B 00 00: je 0x58512749
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x14
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [ecx + 4]
        sub eax, dword ptr [edx + 80h]
        mov dword ptr [ebp - 12ch], eax
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [ecx + 8]
        sub eax, dword ptr [edx + 84h]
        mov dword ptr [ebp - 138h], eax
        mov ecx, dword ptr [ebp - 12ch]
        imul ecx, dword ptr [ebp - 12ch]
        mov edx, dword ptr [ebp - 138h]
        imul edx, dword ptr [ebp - 138h]
        add ecx, edx
        mov dword ptr [ebp - 150h], ecx
        ; Exact mapped bytes F2 0F 2A 85 B0 FE FF FF: cvtsi2sd xmm0, dword ptr [ebp - 0x150]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 7E F3 33 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xf3
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 E6 F5 31 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xf5
        __asm _emit 0x31
        __asm _emit 0x00
        mov dword ptr [ebp - 150h], eax
        cmp dword ptr [ebp - 150h], 14h
        ; Exact mapped bytes 0F 8D 25 04 00 00: jge 0x585120e2
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x25
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 2a4h], ecx
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 6ch]
        push eax
        mov ecx, dword ptr [ebp - 2a4h]
        ; Exact mapped bytes E8 9F F4 24 00: call 0x58761180
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xf4
        __asm _emit 0x24
        __asm _emit 0x00
        mov dword ptr [ebp - 120h], eax
        cmp dword ptr [ebp - 120h], 0
        ; Exact mapped bytes 0F 8E CF 03 00 00: jle 0x585120c3
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xcf
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 31 3C F8 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x3c
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp eax, 0fh
        ; Exact mapped bytes 0F 85 71 03 00 00: jne 0x58512079
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x71
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 120h]
        shl ecx, 1
        imul eax, ecx, 78h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 120h], eax
        mov edx, dword ptr [ebp - 114h]
        mov ecx, dword ptr [edx + 7ch]
        ; Exact mapped bytes E8 C1 53 FC FF: call 0x584d70f0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x53
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esi, eax
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 70h]
        ; Exact mapped bytes E8 71 B2 F7 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xb2
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 0F 84 30 03 00 00: je 0x58512077
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x30
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [ebp - 1a0h], edx
        mov eax, dword ptr [ebp - 150h]
        push eax
        mov ecx, dword ptr [ebp - 120h]
        push ecx
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes E8 D1 4F 00 00: call 0x58516d40
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x4f
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        push 11ch
        ; Exact mapped bytes E8 8A F2 31 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xf2
        __asm _emit 0x31
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 194h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 194h], 0
        ; Exact mapped bytes 0F 84 9A 00 00 00: je 0x58511e31
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 114h]
        mov ecx, dword ptr [edx + 7ch]
        ; Exact mapped bytes E8 0B A3 F7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xa3
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 1a4h], eax
        ; Exact mapped bytes E8 BC EE 33 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xee
        __asm _emit 0x33
        __asm _emit 0x00
        cdq
        mov ecx, 32h
        idiv ecx
        mov esi, edx
        mov edx, dword ptr [ebp - 114h]
        mov ecx, dword ptr [edx + 7ch]
        ; Exact mapped bytes E8 F8 4B F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x4b
        __asm _emit 0xf7
        __asm _emit 0xff
        sub eax, esi
        mov dword ptr [ebp - 1a8h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 05 4C F7 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x4c
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 1ach], eax
        push 0e0h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DF 2C F7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x2c
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 1b0h], eax
        push 40h
        mov eax, dword ptr [ebp - 1a4h]
        push eax
        mov ecx, dword ptr [ebp - 1a8h]
        push ecx
        mov edx, dword ptr [ebp - 1ach]
        push edx
        mov eax, dword ptr [ebp - 1b0h]
        push eax
        push 0ah
        mov ecx, dword ptr [ebp - 120h]
        push ecx
        mov ecx, dword ptr [ebp - 194h]
        ; Exact mapped bytes E8 57 3F FB FF: call 0x584c5d80
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x3f
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 198h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58511e3b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 198h], 0
        mov edx, dword ptr [ebp - 198h]
        mov dword ptr [ebp - 1b4h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 1b4h]
        mov dword ptr [ebp - 1b8h], eax
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 E2 01: and dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x01
        movzx eax, dl
        push eax
        mov ecx, dword ptr [ebp - 1b8h]
        ; Exact mapped bytes E8 69 40 F7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x40
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 0a0h]
        mov eax, dword ptr [ebp - 114h]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 0a0h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 114h]
        mov ecx, dword ptr [ecx + 7ch]
        ; Exact mapped bytes E8 4B 52 FC FF: call 0x584d70f0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x52
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esi, eax
        mov edx, dword ptr [ebp - 114h]
        mov ecx, dword ptr [edx + 70h]
        ; Exact mapped bytes E8 FB B0 F7 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xb0
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 0F 84 1B 01 00 00: je 0x58511fd8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 1bch], ecx
        mov edx, dword ptr [ebp - 120h]
        push edx
        mov ecx, dword ptr [ebp - 1bch]
        ; Exact mapped bytes E8 F2 C5 FF FF: call 0x5850e4d0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 1c0h], ecx
        imul edx, dword ptr [ebp - 120h], 1eh
        push edx
        push 0
        mov ecx, dword ptr [ebp - 1c0h]
        ; Exact mapped bytes E8 2E BF 24 00: call 0x5875de30
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xbf
        __asm _emit 0x24
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 1c4h], ecx
        mov edx, dword ptr [ebp - 120h]
        push edx
        push 2
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes E8 0B BF 24 00: call 0x5875de30
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xbf
        __asm _emit 0x24
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 70h]
        ; Exact mapped bytes E8 7D B0 F7 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xb0
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 1c8h], eax
        mov ecx, dword ptr [ebp - 120h]
        push ecx
        mov edx, dword ptr [ebp - 1c8h]
        push edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CE CB FF FF: call 0x5850eb20
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 62 4A F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x4a
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 114h]
        cmp dword ptr [ecx + 70h], eax
        ; Exact mapped bytes 75 13: jne 0x58511f7c
        __asm _emit 0x75
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 120h]
        push edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C5 C4 FF FF: call 0x5850e440
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 70h]
        ; Exact mapped bytes E8 26 B0 F7 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xb0
        __asm _emit 0xf7
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 29 4A F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x4a
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 12 B0 F7 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xb0
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 75 36: jne 0x58511fd8
        __asm _emit 0x75
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 120h]
        push ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DC CA FF FF: call 0x5850ea90
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 11 37 F8 FF: call 0x584956d0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x37
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 1cch], eax
        mov edx, dword ptr [ebp - 120h]
        push edx
        mov ecx, dword ptr [ebp - 1cch]
        ; Exact mapped bytes E8 B9 F8 FF FF: call 0x58511890
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 70h]
        ; Exact mapped bytes E8 CA AF F7 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xaf
        __asm _emit 0xf7
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CD 49 F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x49
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B6 AF F7 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xaf
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 74 43: je 0x58512041
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 114h]
        mov ecx, dword ptr [ecx + 7ch]
        ; Exact mapped bytes E8 E4 50 FC FF: call 0x584d70f0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x50
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A7 49 F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x49
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 90 AF F7 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xaf
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 75 1D: jne 0x58512041
        __asm _emit 0x75
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 1d0h], eax
        push 1
        mov ecx, dword ptr [ebp - 1d0h]
        ; Exact mapped bytes E8 F0 F3 FF FF: call 0x58511430
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [ebp - 1d8h], edx
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 70h]
        ; Exact mapped bytes E8 52 AF F7 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xaf
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 1d4h], eax
        mov ecx, dword ptr [ebp - 1d4h]
        push ecx
        mov ecx, dword ptr [ebp - 1d8h]
        ; Exact mapped bytes E8 0A 45 00 00: call 0x58516580
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 4A: jmp 0x585120c3
        __asm _emit 0xeb
        __asm _emit 0x4a
        mov edx, dword ptr [ebp - 114h]
        add edx, 80h
        push edx
        mov eax, dword ptr [ebp - 120h]
        push eax
        push 2
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 66 84 0B 00: call 0x585ca500
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x84
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [ebp - 1dch], edx
        mov eax, dword ptr [ebp - 150h]
        push eax
        mov ecx, dword ptr [ebp - 120h]
        push ecx
        mov ecx, dword ptr [ebp - 1dch]
        ; Exact mapped bytes E8 7E 4C 00 00: call 0x58516d40
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x4c
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 114h]
        mov ecx, dword ptr [edx + 7ch]
        ; Exact mapped bytes E8 AF 18 00 00: call 0x58513980
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 E4 18 00 00: call 0x585139c0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 31 04 00 00: jmp 0x58512513
        __asm _emit 0xe9
        __asm _emit 0x31
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 12ch], 0
        ; Exact mapped bytes 0F 84 47 01 00 00: je 0x58512236
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 138h]
        push eax
        ; Exact mapped bytes E8 12 EF 33 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xef
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1e0h], eax
        mov ecx, dword ptr [ebp - 12ch]
        push ecx
        ; Exact mapped bytes E8 FD EE 33 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xee
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1e4h], eax
        mov edx, dword ptr [ebp - 1e0h]
        push edx
        mov eax, dword ptr [ebp - 1e4h]
        push eax
        ; Exact mapped bytes E8 B4 B5 03 00: call 0x5854d6e0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xb5
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 124h], eax
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 88h]
        add edx, 0fah
        mov eax, dword ptr [ebp - 124h]
        imul edx, dword ptr [eax*4 + 5894c930h]
        mov dword ptr [ebp - 11ch], edx
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 8ch]
        add edx, 0fah
        mov eax, dword ptr [ebp - 124h]
        imul edx, dword ptr [eax*4 + 589490f0h]
        mov dword ptr [ebp - 118h], edx
        mov eax, dword ptr [ebp - 11ch]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 11ch], eax
        mov eax, dword ptr [ebp - 118h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 118h], eax
        cmp dword ptr [ebp - 12ch], 0
        ; Exact mapped bytes 7E 0D: jle 0x585121bf
        __asm _emit 0x7e
        __asm _emit 0x0d
        imul edx, dword ptr [ebp - 11ch], -1
        mov dword ptr [ebp - 11ch], edx
        cmp dword ptr [ebp - 138h], 0
        ; Exact mapped bytes 7E 0D: jle 0x585121d5
        __asm _emit 0x7e
        __asm _emit 0x0d
        imul eax, dword ptr [ebp - 118h], -1
        mov dword ptr [ebp - 118h], eax
        mov eax, dword ptr [ebp - 11ch]
        cdq
        mov ecx, 64h
        idiv ecx
        mov eax, dword ptr [ebp - 114h]
        mov dword ptr [eax + 88h], edx
        mov eax, dword ptr [ebp - 118h]
        cdq
        mov ecx, 64h
        idiv ecx
        mov eax, dword ptr [ebp - 114h]
        mov dword ptr [eax + 8ch], edx
        mov eax, dword ptr [ebp - 11ch]
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 11ch], eax
        mov eax, dword ptr [ebp - 118h]
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 118h], eax
        ; Exact mapped bytes E9 B2 00 00 00: jmp 0x585122e8
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 11ch], eax
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 8ch]
        add edx, 0fah
        mov dword ptr [ebp - 118h], edx
        cmp dword ptr [ebp - 12ch], 0
        ; Exact mapped bytes 7E 0D: jle 0x58512276
        __asm _emit 0x7e
        __asm _emit 0x0d
        imul eax, dword ptr [ebp - 11ch], -1
        mov dword ptr [ebp - 11ch], eax
        cmp dword ptr [ebp - 138h], 0
        ; Exact mapped bytes 7E 0D: jle 0x5851228c
        __asm _emit 0x7e
        __asm _emit 0x0d
        imul ecx, dword ptr [ebp - 118h], -1
        mov dword ptr [ebp - 118h], ecx
        mov eax, dword ptr [ebp - 11ch]
        cdq
        mov ecx, 64h
        idiv ecx
        mov eax, dword ptr [ebp - 114h]
        mov dword ptr [eax + 88h], edx
        mov eax, dword ptr [ebp - 118h]
        cdq
        mov ecx, 64h
        idiv ecx
        mov eax, dword ptr [ebp - 114h]
        mov dword ptr [eax + 8ch], edx
        mov eax, dword ptr [ebp - 11ch]
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 11ch], eax
        mov eax, dword ptr [ebp - 118h]
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 118h], eax
        cmp dword ptr [ebp - 138h], 0
        ; Exact mapped bytes 7E 30: jle 0x58512321
        __asm _emit 0x7e
        __asm _emit 0x30
        cmp dword ptr [ebp - 12ch], 0
        ; Exact mapped bytes 7D 14: jge 0x5851230e
        __asm _emit 0x7d
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 124h]
        add edx, 0a8ch
        mov dword ptr [ebp - 124h], edx
        ; Exact mapped bytes EB 11: jmp 0x5851231f
        __asm _emit 0xeb
        __asm _emit 0x11
        mov eax, 708h
        sub eax, dword ptr [ebp - 124h]
        mov dword ptr [ebp - 124h], eax
        ; Exact mapped bytes EB 2E: jmp 0x5851234f
        __asm _emit 0xeb
        __asm _emit 0x2e
        cmp dword ptr [ebp - 12ch], 0
        ; Exact mapped bytes 7D 13: jge 0x5851233d
        __asm _emit 0x7d
        __asm _emit 0x13
        mov ecx, 0a8ch
        sub ecx, dword ptr [ebp - 124h]
        mov dword ptr [ebp - 124h], ecx
        ; Exact mapped bytes EB 12: jmp 0x5851234f
        __asm _emit 0xeb
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 124h]
        add edx, 708h
        mov dword ptr [ebp - 124h], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + ecx + 98h]
        mov dword ptr [ebp - 1f0h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5B 33 F8 FF: call 0x584956d0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x33
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 44 46 F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x46
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 1e8h], eax
        mov eax, dword ptr [ebp - 124h]
        cdq
        mov ecx, 1c2h
        idiv ecx
        add eax, 6eh
        push eax
        mov ecx, dword ptr [ebp - 1e8h]
        ; Exact mapped bytes E8 31 27 F7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x27
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 1ech], eax
        mov edx, dword ptr [ebp - 1ech]
        push edx
        mov ecx, dword ptr [ebp - 1f0h]
        ; Exact mapped bytes E8 A9 48 F7 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x48
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + eax + 98h]
        mov dword ptr [ebp - 1fch], edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F3 32 F8 FF: call 0x584956d0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x32
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DC 45 F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x45
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 1f4h], eax
        mov eax, dword ptr [ebp - 124h]
        cdq
        mov ecx, 1c2h
        idiv ecx
        add eax, 78h
        push eax
        mov ecx, dword ptr [ebp - 1f4h]
        ; Exact mapped bytes E8 C9 26 F7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x26
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 1f8h], eax
        mov edx, dword ptr [ebp - 1f8h]
        push edx
        mov ecx, dword ptr [ebp - 1fch]
        ; Exact mapped bytes E8 41 48 F7 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x48
        __asm _emit 0xf7
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 114h]
        movzx ecx, byte ptr [eax + 74h]
        test ecx, ecx
        ; Exact mapped bytes 0F 85 81 00 00 00: jne 0x585124b3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 23 9F F7 FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x9f
        __asm _emit 0xf7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 114h]
        add eax, dword ptr [edx + 4]
        push eax
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 5F 98 F7 FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x98
        __asm _emit 0xf7
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 2
        div ecx
        test edx, edx
        ; Exact mapped bytes 75 0F: jne 0x5851246d
        __asm _emit 0x75
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 114h]
        mov dword ptr [edx + 78h], 1
        ; Exact mapped bytes EB 0D: jmp 0x5851247a
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 114h]
        mov dword ptr [eax + 78h], 0
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DB 9E F7 FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x9e
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 114h]
        imul edx, dword ptr [ecx + 8], 11h
        add eax, edx
        push eax
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 14 98 F7 FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x98
        __asm _emit 0xf7
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 14h
        div ecx
        add edx, 5
        mov eax, dword ptr [ebp - 114h]
        mov byte ptr [eax + 74h], dl
        ; Exact mapped bytes EB 20: jmp 0x585124d3
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 114h]
        cmp dword ptr [ecx + 78h], 0
        ; Exact mapped bytes 74 14: je 0x585124d3
        __asm _emit 0x74
        __asm _emit 0x14
        mov dword ptr [ebp - 11ch], 0
        mov dword ptr [ebp - 118h], 0
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 8]
        add eax, dword ptr [ebp - 118h]
        push eax
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 4]
        add edx, dword ptr [ebp - 11ch]
        push edx
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 22 31 2A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x31
        __asm _emit 0x2a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 114h]
        mov cl, byte ptr [eax + 74h]
        sub cl, 1
        mov edx, dword ptr [ebp - 114h]
        mov byte ptr [edx + 74h], cl
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 0a0h]
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 0a0h]
        mov edx, dword ptr [eax + 14h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        test eax, eax
        ; Exact mapped bytes 0F 85 0A 02 00 00: jne 0x58512744
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 114h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        cmp edx, 1
        ; Exact mapped bytes 0F 85 F0 01 00 00: jne 0x58512744
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 81 44 F7 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x44
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5A 24 F7 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x24
        __asm _emit 0xf7
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5D 33 F8 FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x33
        __asm _emit 0xf8
        __asm _emit 0xff
        sar eax, 1
        imul edi, eax, 3e8h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5A 44 F7 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x44
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 83 34 F8 FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x34
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        mov eax, edi
        cdq
        idiv ecx
        add esi, eax
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 4]
        sub eax, esi
        mov dword ptr [ebp - 324h], eax
        mov ecx, dword ptr [ebp - 114h]
        mov esi, dword ptr [ecx + 8]
        neg esi
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 23 44 F7 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x44
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6C 31 F8 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x31
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DF 32 F8 FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x32
        __asm _emit 0xf8
        __asm _emit 0xff
        sar eax, 1
        imul ebx, eax, 3e8h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FC 43 F7 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x43
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 25 34 F8 FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x34
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        mov eax, ebx
        cdq
        idiv ecx
        add edi, eax
        add esi, edi
        mov dword ptr [ebp - 320h], esi
        mov edx, dword ptr [ebp - 114h]
        mov ecx, dword ptr [edx + 0a0h]
        ; Exact mapped bytes E8 C3 94 2A 00: call 0x587bbad0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x94
        __asm _emit 0x2a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 0a0h]
        mov dword ptr [ebp - 20ch], ecx
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 0a0h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 20h]
        mov dword ptr [ebp - 210h], edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8F 30 F8 FF: call 0x584956d0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x30
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 98 23 F7 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x23
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 204h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 07 9D F7 FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x9d
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 114h]
        imul edx, dword ptr [ecx + 8], 0bh
        add eax, edx
        push eax
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 40 96 F7 FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x96
        __asm _emit 0xf7
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 12h
        div ecx
        add edx, 14h
        mov dword ptr [ebp - 200h], edx
        mov edx, dword ptr [ebp - 200h]
        push edx
        mov ecx, dword ptr [ebp - 204h]
        ; Exact mapped bytes E8 EC 23 F7 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x23
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 208h], eax
        mov eax, dword ptr [ebp - 208h]
        push eax
        mov ecx, dword ptr [ebp - 20ch]
        ; Exact mapped bytes FF 95 F0 FD FF FF: call dword ptr [ebp - 0x210]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xf0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 214h], ecx
        mov dword ptr [ebp - 130h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585126d4
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 130h]
        add edx, 1
        mov dword ptr [ebp - 130h], edx
        cmp dword ptr [ebp - 130h], 6
        ; Exact mapped bytes 7D 34: jge 0x58512711
        __asm _emit 0x7d
        __asm _emit 0x34
        mov eax, dword ptr [ebp - 130h]
        imul eax, dword ptr [ebp - 130h]
        ; Exact mapped bytes 39 05 90 20 96 58: cmp dword ptr [0x58962090], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 1D: jne 0x5851270f
        __asm _emit 0x75
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 130h]
        add ecx, 2
        mov edx, dword ptr [ebp - 130h]
        add edx, 2
        imul ecx, edx
        mov dword ptr [ebp - 214h], ecx
        ; Exact mapped bytes EB 02: jmp 0x58512711
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB B4: jmp 0x585126c5
        __asm _emit 0xeb
        __asm _emit 0xb4
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 0a0h]
        mov dword ptr [ebp - 218h], ecx
        ; Exact mapped bytes 8B 15 90 20 96 58: mov edx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov eax, dword ptr [ebp - 320h]
        push eax
        mov ecx, dword ptr [ebp - 324h]
        push ecx
        mov ecx, dword ptr [ebp - 218h]
        ; Exact mapped bytes E8 7D B4 05 00: call 0x5856dbc0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xb4
        __asm _emit 0x05
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 32 11 00 00: jmp 0x5851387b
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 114h]
        cmp dword ptr [edx + 58h], 0
        ; Exact mapped bytes 0F 85 F8 10 00 00: jne 0x58513851
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 114h]
        mov ecx, dword ptr [edx + ecx + 90h]
        ; Exact mapped bytes E8 CD 30 FA FF: call 0x584b5840
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x30
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 D4 10 00 00: je 0x5851384f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd4
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 114h]
        movzx ecx, byte ptr [eax + 60h]
        mov dword ptr [ebp - 318h], ecx
        mov edx, dword ptr [ebp - 114h]
        movzx eax, byte ptr [edx + 60h]
        mov dword ptr [ebp - 18ch], eax
        mov ecx, dword ptr [ebp - 18ch]
        sub ecx, 1
        mov dword ptr [ebp - 18ch], ecx
        cmp dword ptr [ebp - 18ch], 6
        ; Exact mapped bytes 0F 87 62 0F 00 00: ja 0x58513719
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x62
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes FF 24 95 60 39 51 58: jmp dword ptr [edx*4 + 0x58513960]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x60
        __asm _emit 0x39
        __asm _emit 0x51
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 64h]
        sub ecx, 34h
        mov edx, dword ptr [ebp - 114h]
        mov dword ptr [edx + 64h], ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7C 9B F7 FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x9b
        __asm _emit 0xf7
        __asm _emit 0xff
        mov esi, eax
        mov eax, dword ptr [ebp - 114h]
        add esi, dword ptr [eax + 4]
        mov ecx, dword ptr [ebp - 114h]
        mov ecx, dword ptr [ecx + 70h]
        ; Exact mapped bytes E8 C3 41 F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x41
        __asm _emit 0xf7
        __asm _emit 0xff
        add esi, eax
        push esi
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 A6 94 F7 FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x94
        __asm _emit 0xf7
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 2
        div ecx
        test edx, edx
        ; Exact mapped bytes 0F 84 96 00 00 00: je 0x585128b1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 154h], 0
        ; Exact mapped bytes EB 0F: jmp 0x58512836
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 154h]
        add edx, 1
        mov dword ptr [ebp - 154h], edx
        cmp dword ptr [ebp - 154h], 2
        ; Exact mapped bytes 7D 63: jge 0x585128a2
        __asm _emit 0x7d
        __asm _emit 0x63
        mov eax, dword ptr [ebp - 154h]
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + eax*4 + 90h]
        mov dword ptr [ebp - 224h], edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6D 2E F8 FF: call 0x584956d0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x2e
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 56 41 F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x41
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 21ch], eax
        mov eax, dword ptr [ebp - 154h]
        add eax, 0c8h
        push eax
        mov ecx, dword ptr [ebp - 21ch]
        ; Exact mapped bytes E8 49 22 F7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x22
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 220h], eax
        mov ecx, dword ptr [ebp - 220h]
        push ecx
        mov ecx, dword ptr [ebp - 224h]
        ; Exact mapped bytes E8 C1 43 F7 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0xf7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 85: jmp 0x58512827
        __asm _emit 0xeb
        __asm _emit 0x85
        mov edx, dword ptr [ebp - 114h]
        mov byte ptr [edx + 60h], 3
        ; Exact mapped bytes E9 92 00 00 00: jmp 0x58512943
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 158h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585128cc
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 158h]
        add eax, 1
        mov dword ptr [ebp - 158h], eax
        cmp dword ptr [ebp - 158h], 2
        ; Exact mapped bytes 7D 64: jge 0x58512939
        __asm _emit 0x7d
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 158h]
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + ecx*4 + 90h]
        mov dword ptr [ebp - 230h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D7 2D F8 FF: call 0x584956d0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x2d
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C0 40 F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x40
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 228h], eax
        mov ecx, dword ptr [ebp - 158h]
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [ebp - 228h]
        ; Exact mapped bytes E8 B2 21 F7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x21
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 22ch], eax
        mov edx, dword ptr [ebp - 22ch]
        push edx
        mov ecx, dword ptr [ebp - 230h]
        ; Exact mapped bytes E8 2A 43 F7 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x43
        __asm _emit 0xf7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 84: jmp 0x585128bd
        __asm _emit 0xeb
        __asm _emit 0x84
        mov eax, dword ptr [ebp - 114h]
        mov byte ptr [eax + 60h], 4
        mov dword ptr [ebp - 174h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5851295e
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 174h]
        add ecx, 1
        mov dword ptr [ebp - 174h], ecx
        cmp dword ptr [ebp - 174h], 2
        ; Exact mapped bytes 7D 41: jge 0x585129a8
        __asm _emit 0x7d
        __asm _emit 0x41
        mov edx, dword ptr [ebp - 174h]
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + edx*4 + 90h]
        mov dword ptr [ebp - 234h], ecx
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 8]
        add eax, 23h
        push eax
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 4]
        sub edx, 22h
        push edx
        mov ecx, dword ptr [ebp - 234h]
        ; Exact mapped bytes E8 7B 2C 2A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x2c
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB A7: jmp 0x5851294f
        __asm _emit 0xeb
        __asm _emit 0xa7
        ; Exact mapped bytes E9 6C 0D 00 00: jmp 0x58513719
        __asm _emit 0xe9
        __asm _emit 0x6c
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 64h]
        sub ecx, 3fh
        mov edx, dword ptr [ebp - 114h]
        mov dword ptr [edx + 64h], ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 93 99 F7 FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x99
        __asm _emit 0xf7
        __asm _emit 0xff
        mov esi, eax
        mov eax, dword ptr [ebp - 114h]
        add esi, dword ptr [eax + 4]
        mov ecx, dword ptr [ebp - 114h]
        mov ecx, dword ptr [ecx + 70h]
        ; Exact mapped bytes E8 DA 3F F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x3f
        __asm _emit 0xf7
        __asm _emit 0xff
        add esi, eax
        push esi
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 BD 92 F7 FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x92
        __asm _emit 0xf7
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 2
        div ecx
        test edx, edx
        ; Exact mapped bytes 0F 84 96 00 00 00: je 0x58512a9a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 170h], 0
        ; Exact mapped bytes EB 0F: jmp 0x58512a1f
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 170h]
        add edx, 1
        mov dword ptr [ebp - 170h], edx
        cmp dword ptr [ebp - 170h], 2
        ; Exact mapped bytes 7D 63: jge 0x58512a8b
        __asm _emit 0x7d
        __asm _emit 0x63
        mov eax, dword ptr [ebp - 170h]
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + eax*4 + 90h]
        mov dword ptr [ebp - 240h], edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 84 2C F8 FF: call 0x584956d0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x2c
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6D 3F F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x3f
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 238h], eax
        mov eax, dword ptr [ebp - 170h]
        add eax, 0c8h
        push eax
        mov ecx, dword ptr [ebp - 238h]
        ; Exact mapped bytes E8 60 20 F7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x20
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 23ch], eax
        mov ecx, dword ptr [ebp - 23ch]
        push ecx
        mov ecx, dword ptr [ebp - 240h]
        ; Exact mapped bytes E8 D8 41 F7 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x41
        __asm _emit 0xf7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 85: jmp 0x58512a10
        __asm _emit 0xeb
        __asm _emit 0x85
        mov edx, dword ptr [ebp - 114h]
        mov byte ptr [edx + 60h], 3
        ; Exact mapped bytes E9 92 00 00 00: jmp 0x58512b2c
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 15ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x58512ab5
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 15ch]
        add eax, 1
        mov dword ptr [ebp - 15ch], eax
        cmp dword ptr [ebp - 15ch], 2
        ; Exact mapped bytes 7D 64: jge 0x58512b22
        __asm _emit 0x7d
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 15ch]
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + ecx*4 + 90h]
        mov dword ptr [ebp - 24ch], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EE 2B F8 FF: call 0x584956d0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x2b
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D7 3E F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x3e
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 244h], eax
        mov ecx, dword ptr [ebp - 15ch]
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [ebp - 244h]
        ; Exact mapped bytes E8 C9 1F F7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x1f
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 248h], eax
        mov edx, dword ptr [ebp - 248h]
        push edx
        mov ecx, dword ptr [ebp - 24ch]
        ; Exact mapped bytes E8 41 41 F7 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x41
        __asm _emit 0xf7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 84: jmp 0x58512aa6
        __asm _emit 0xeb
        __asm _emit 0x84
        mov eax, dword ptr [ebp - 114h]
        mov byte ptr [eax + 60h], 4
        mov dword ptr [ebp - 178h], 0
        ; Exact mapped bytes EB 0F: jmp 0x58512b47
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 178h]
        add ecx, 1
        mov dword ptr [ebp - 178h], ecx
        cmp dword ptr [ebp - 178h], 2
        ; Exact mapped bytes 7D 41: jge 0x58512b91
        __asm _emit 0x7d
        __asm _emit 0x41
        mov edx, dword ptr [ebp - 178h]
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + edx*4 + 90h]
        mov dword ptr [ebp - 250h], ecx
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 8]
        add eax, 2eh
        push eax
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 4]
        add edx, 10h
        push edx
        mov ecx, dword ptr [ebp - 250h]
        ; Exact mapped bytes E8 92 2A 2A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x2a
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB A7: jmp 0x58512b38
        __asm _emit 0xeb
        __asm _emit 0xa7
        ; Exact mapped bytes E9 83 0B 00 00: jmp 0x58513719
        __asm _emit 0xe9
        __asm _emit 0x83
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 64h]
        sub ecx, 14h
        mov edx, dword ptr [ebp - 114h]
        mov dword ptr [edx + 64h], ecx
        mov eax, dword ptr [ebp - 114h]
        cmp dword ptr [eax + 64h], 28h
        ; Exact mapped bytes 0F 8E D1 01 00 00: jle 0x58512d8c
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xd1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9A 97 F7 FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x97
        __asm _emit 0xf7
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 114h]
        add esi, dword ptr [ecx + 4]
        mov edx, dword ptr [ebp - 114h]
        mov ecx, dword ptr [edx + 70h]
        ; Exact mapped bytes E8 E1 3D F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x3d
        __asm _emit 0xf7
        __asm _emit 0xff
        add esi, eax
        push esi
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 C4 90 F7 FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x90
        __asm _emit 0xf7
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 2
        div ecx
        test edx, edx
        ; Exact mapped bytes 0F 84 96 00 00 00: je 0x58512c93
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 160h], 0
        ; Exact mapped bytes EB 0F: jmp 0x58512c18
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 160h]
        add edx, 1
        mov dword ptr [ebp - 160h], edx
        cmp dword ptr [ebp - 160h], 2
        ; Exact mapped bytes 7D 63: jge 0x58512c84
        __asm _emit 0x7d
        __asm _emit 0x63
        mov eax, dword ptr [ebp - 160h]
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + eax*4 + 90h]
        mov dword ptr [ebp - 25ch], edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8B 2A F8 FF: call 0x584956d0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x2a
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 74 3D F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x3d
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 254h], eax
        mov eax, dword ptr [ebp - 160h]
        add eax, 0c8h
        push eax
        mov ecx, dword ptr [ebp - 254h]
        ; Exact mapped bytes E8 67 1E F7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x1e
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 258h], eax
        mov ecx, dword ptr [ebp - 258h]
        push ecx
        mov ecx, dword ptr [ebp - 25ch]
        ; Exact mapped bytes E8 DF 3F F7 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x3f
        __asm _emit 0xf7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 85: jmp 0x58512c09
        __asm _emit 0xeb
        __asm _emit 0x85
        mov edx, dword ptr [ebp - 114h]
        mov byte ptr [edx + 60h], 3
        ; Exact mapped bytes E9 92 00 00 00: jmp 0x58512d25
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 164h], 0
        ; Exact mapped bytes EB 0F: jmp 0x58512cae
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 164h]
        add eax, 1
        mov dword ptr [ebp - 164h], eax
        cmp dword ptr [ebp - 164h], 2
        ; Exact mapped bytes 7D 64: jge 0x58512d1b
        __asm _emit 0x7d
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 164h]
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + ecx*4 + 90h]
        mov dword ptr [ebp - 268h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F5 29 F8 FF: call 0x584956d0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x29
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DE 3C F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x3c
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 260h], eax
        mov ecx, dword ptr [ebp - 164h]
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [ebp - 260h]
        ; Exact mapped bytes E8 D0 1D F7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x1d
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 264h], eax
        mov edx, dword ptr [ebp - 264h]
        push edx
        mov ecx, dword ptr [ebp - 268h]
        ; Exact mapped bytes E8 48 3F F7 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x3f
        __asm _emit 0xf7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 84: jmp 0x58512c9f
        __asm _emit 0xeb
        __asm _emit 0x84
        mov eax, dword ptr [ebp - 114h]
        mov byte ptr [eax + 60h], 4
        mov dword ptr [ebp - 17ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x58512d40
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 17ch]
        add ecx, 1
        mov dword ptr [ebp - 17ch], ecx
        cmp dword ptr [ebp - 17ch], 2
        ; Exact mapped bytes 7D 3E: jge 0x58512d87
        __asm _emit 0x7d
        __asm _emit 0x3e
        mov edx, dword ptr [ebp - 17ch]
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + edx*4 + 90h]
        mov dword ptr [ebp - 26ch], ecx
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 8]
        add eax, 15h
        push eax
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov ecx, dword ptr [ebp - 26ch]
        ; Exact mapped bytes E8 9C 28 2A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x28
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB AA: jmp 0x58512d31
        __asm _emit 0xeb
        __asm _emit 0xaa
        ; Exact mapped bytes E9 D4 00 00 00: jmp 0x58512e60
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 13ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x58512da7
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 13ch]
        add eax, 1
        mov dword ptr [ebp - 13ch], eax
        cmp dword ptr [ebp - 13ch], 2
        ; Exact mapped bytes 0F 8D A2 00 00 00: jge 0x58512e56
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 13ch]
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + ecx*4 + 90h]
        mov dword ptr [ebp - 278h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F8 28 F8 FF: call 0x584956d0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x28
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E1 3B F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x3b
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 270h], eax
        mov ecx, dword ptr [ebp - 13ch]
        add ecx, 0cch
        push ecx
        mov ecx, dword ptr [ebp - 270h]
        ; Exact mapped bytes E8 D3 1C F7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x1c
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 274h], eax
        mov edx, dword ptr [ebp - 274h]
        push edx
        mov ecx, dword ptr [ebp - 278h]
        ; Exact mapped bytes E8 4B 3E F7 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x3e
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 13ch]
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + eax*4 + 90h]
        mov dword ptr [ebp - 27ch], edx
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 8]
        add ecx, 17h
        push ecx
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 27ch]
        ; Exact mapped bytes E8 D0 27 2A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x27
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 42 FF FF FF: jmp 0x58512d98
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 114h]
        mov byte ptr [ecx + 60h], 5
        ; Exact mapped bytes E9 B4 08 00 00: jmp 0x58513719
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 64h]
        sub eax, 14h
        mov ecx, dword ptr [ebp - 114h]
        mov dword ptr [ecx + 64h], eax
        mov edx, dword ptr [ebp - 114h]
        cmp dword ptr [edx + 64h], 28h
        ; Exact mapped bytes 0F 8E D1 01 00 00: jle 0x5851305b
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xd1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CB 94 F7 FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x94
        __asm _emit 0xf7
        __asm _emit 0xff
        mov esi, eax
        mov eax, dword ptr [ebp - 114h]
        add esi, dword ptr [eax + 4]
        mov ecx, dword ptr [ebp - 114h]
        mov ecx, dword ptr [ecx + 70h]
        ; Exact mapped bytes E8 12 3B F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x3b
        __asm _emit 0xf7
        __asm _emit 0xff
        add esi, eax
        push esi
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 F5 8D F7 FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x8d
        __asm _emit 0xf7
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 2
        div ecx
        test edx, edx
        ; Exact mapped bytes 0F 84 96 00 00 00: je 0x58512f62
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 168h], 0
        ; Exact mapped bytes EB 0F: jmp 0x58512ee7
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 168h]
        add edx, 1
        mov dword ptr [ebp - 168h], edx
        cmp dword ptr [ebp - 168h], 2
        ; Exact mapped bytes 7D 63: jge 0x58512f53
        __asm _emit 0x7d
        __asm _emit 0x63
        mov eax, dword ptr [ebp - 168h]
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + eax*4 + 90h]
        mov dword ptr [ebp - 288h], edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BC 27 F8 FF: call 0x584956d0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A5 3A F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x3a
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 280h], eax
        mov eax, dword ptr [ebp - 168h]
        add eax, 0c8h
        push eax
        mov ecx, dword ptr [ebp - 280h]
        ; Exact mapped bytes E8 98 1B F7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x1b
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 284h], eax
        mov ecx, dword ptr [ebp - 284h]
        push ecx
        mov ecx, dword ptr [ebp - 288h]
        ; Exact mapped bytes E8 10 3D F7 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x3d
        __asm _emit 0xf7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 85: jmp 0x58512ed8
        __asm _emit 0xeb
        __asm _emit 0x85
        mov edx, dword ptr [ebp - 114h]
        mov byte ptr [edx + 60h], 3
        ; Exact mapped bytes E9 92 00 00 00: jmp 0x58512ff4
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 16ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x58512f7d
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 16ch]
        add eax, 1
        mov dword ptr [ebp - 16ch], eax
        cmp dword ptr [ebp - 16ch], 2
        ; Exact mapped bytes 7D 64: jge 0x58512fea
        __asm _emit 0x7d
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 16ch]
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + ecx*4 + 90h]
        mov dword ptr [ebp - 294h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 26 27 F8 FF: call 0x584956d0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x27
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0F 3A F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x3a
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 28ch], eax
        mov ecx, dword ptr [ebp - 16ch]
        add ecx, 0c8h
        push ecx
        mov ecx, dword ptr [ebp - 28ch]
        ; Exact mapped bytes E8 01 1B F7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x1b
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 290h], eax
        mov edx, dword ptr [ebp - 290h]
        push edx
        mov ecx, dword ptr [ebp - 294h]
        ; Exact mapped bytes E8 79 3C F7 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x3c
        __asm _emit 0xf7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 84: jmp 0x58512f6e
        __asm _emit 0xeb
        __asm _emit 0x84
        mov eax, dword ptr [ebp - 114h]
        mov byte ptr [eax + 60h], 4
        mov dword ptr [ebp - 180h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5851300f
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 180h]
        add ecx, 1
        mov dword ptr [ebp - 180h], ecx
        cmp dword ptr [ebp - 180h], 2
        ; Exact mapped bytes 7D 3E: jge 0x58513056
        __asm _emit 0x7d
        __asm _emit 0x3e
        mov edx, dword ptr [ebp - 180h]
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + edx*4 + 90h]
        mov dword ptr [ebp - 298h], ecx
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 8]
        add eax, 15h
        push eax
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov ecx, dword ptr [ebp - 298h]
        ; Exact mapped bytes E8 CD 25 2A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x25
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB AA: jmp 0x58513000
        __asm _emit 0xeb
        __asm _emit 0xaa
        ; Exact mapped bytes E9 D4 00 00 00: jmp 0x5851312f
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 140h], 0
        ; Exact mapped bytes EB 0F: jmp 0x58513076
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 140h]
        add eax, 1
        mov dword ptr [ebp - 140h], eax
        cmp dword ptr [ebp - 140h], 2
        ; Exact mapped bytes 0F 8D A2 00 00 00: jge 0x58513125
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 140h]
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + ecx*4 + 90h]
        mov dword ptr [ebp - 2e4h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 29 26 F8 FF: call 0x584956d0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x26
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 12 39 F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x39
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 29ch], eax
        mov ecx, dword ptr [ebp - 140h]
        add ecx, 0cch
        push ecx
        mov ecx, dword ptr [ebp - 29ch]
        ; Exact mapped bytes E8 04 1A F7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x1a
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 2a0h], eax
        mov edx, dword ptr [ebp - 2a0h]
        push edx
        mov ecx, dword ptr [ebp - 2e4h]
        ; Exact mapped bytes E8 7C 3B F7 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x3b
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 140h]
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + eax*4 + 90h]
        mov dword ptr [ebp - 2a8h], edx
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 8]
        add ecx, 17h
        push ecx
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 2a8h]
        ; Exact mapped bytes E8 01 25 2A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x25
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 42 FF FF FF: jmp 0x58513067
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 114h]
        mov byte ptr [ecx + 60h], 5
        ; Exact mapped bytes E9 E5 05 00 00: jmp 0x58513719
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 64h]
        sub eax, 1
        mov ecx, dword ptr [ebp - 114h]
        mov dword ptr [ecx + 64h], eax
        mov edx, dword ptr [ebp - 114h]
        cmp dword ptr [edx + 64h], 13h
        ; Exact mapped bytes 7E 67: jle 0x585131bc
        __asm _emit 0x7e
        __asm _emit 0x67
        mov dword ptr [ebp - 184h], 0
        ; Exact mapped bytes EB 0F: jmp 0x58513170
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 184h]
        add eax, 1
        mov dword ptr [ebp - 184h], eax
        cmp dword ptr [ebp - 184h], 2
        ; Exact mapped bytes 7D 3E: jge 0x585131b7
        __asm _emit 0x7d
        __asm _emit 0x3e
        mov ecx, dword ptr [ebp - 184h]
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + ecx*4 + 90h]
        mov dword ptr [ebp - 2ach], eax
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 8]
        add edx, 1
        push edx
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [ebp - 2ach]
        ; Exact mapped bytes E8 6C 24 2A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB AA: jmp 0x58513161
        __asm _emit 0xeb
        __asm _emit 0xaa
        ; Exact mapped bytes E9 D6 00 00 00: jmp 0x58513292
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 144h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585131d7
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 144h]
        add edx, 1
        mov dword ptr [ebp - 144h], edx
        cmp dword ptr [ebp - 144h], 2
        ; Exact mapped bytes 0F 8D A4 00 00 00: jge 0x58513288
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 144h]
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + eax*4 + 90h]
        mov dword ptr [ebp - 2b8h], edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C8 24 F8 FF: call 0x584956d0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x24
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B1 37 F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x37
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 2b0h], eax
        mov eax, dword ptr [ebp - 144h]
        add eax, 0ceh
        push eax
        mov ecx, dword ptr [ebp - 2b0h]
        ; Exact mapped bytes E8 A4 18 F7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x18
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 2b4h], eax
        mov ecx, dword ptr [ebp - 2b4h]
        push ecx
        mov ecx, dword ptr [ebp - 2b8h]
        ; Exact mapped bytes E8 1C 3A F7 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x3a
        __asm _emit 0xf7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 144h]
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + edx*4 + 90h]
        mov dword ptr [ebp - 2bch], ecx
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 8]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 4]
        sub edx, 9
        push edx
        mov ecx, dword ptr [ebp - 2bch]
        ; Exact mapped bytes E8 9E 23 2A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x23
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 40 FF FF FF: jmp 0x585131c8
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 114h]
        mov byte ptr [eax + 60h], 6
        ; Exact mapped bytes E9 82 04 00 00: jmp 0x58513719
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 64h]
        sub edx, 12h
        mov eax, dword ptr [ebp - 114h]
        mov dword ptr [eax + 64h], edx
        mov dword ptr [ebp - 190h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585132c7
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 190h]
        add ecx, 1
        mov dword ptr [ebp - 190h], ecx
        cmp dword ptr [ebp - 190h], 2
        ; Exact mapped bytes 0F 8D 34 02 00 00: jge 0x58513508
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 114h]
        mov dword ptr [edx + 58h], 1
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F4 36 F7 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x36
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 2c8h], eax
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 2c0h], ecx
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 2c4h], eax
        mov ecx, dword ptr [ebp - 2c0h]
        push ecx
        mov edx, dword ptr [ebp - 2c4h]
        push edx
        mov ecx, dword ptr [ebp - 2c8h]
        ; Exact mapped bytes E8 67 11 07 00: call 0x58584490
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x11
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 19ch], eax
        cmp dword ptr [ebp - 19ch], 0
        ; Exact mapped bytes 74 18: je 0x58513350
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 19ch]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 0D: je 0x58513350
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 114h]
        mov dword ptr [ecx + 58h], 0
        mov edx, dword ptr [ebp - 114h]
        cmp dword ptr [edx + 58h], 0
        ; Exact mapped bytes 0F 85 D9 00 00 00: jne 0x58513439
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 148h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5851337b
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 148h]
        add eax, 1
        mov dword ptr [ebp - 148h], eax
        cmp dword ptr [ebp - 148h], 2
        ; Exact mapped bytes 0F 8D A2 00 00 00: jge 0x5851342a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 148h]
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + ecx*4 + 90h]
        mov dword ptr [ebp - 2d4h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 24 23 F8 FF: call 0x584956d0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x23
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0D 36 F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x36
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 2cch], eax
        mov ecx, dword ptr [ebp - 148h]
        add ecx, 7
        push ecx
        mov ecx, dword ptr [ebp - 2cch]
        ; Exact mapped bytes E8 02 17 F7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x17
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 2d0h], eax
        mov edx, dword ptr [ebp - 2d0h]
        push edx
        mov ecx, dword ptr [ebp - 2d4h]
        ; Exact mapped bytes E8 7A 38 F7 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x38
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 148h]
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + eax*4 + 90h]
        mov dword ptr [ebp - 2d8h], edx
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 8]
        add ecx, 0eh
        push ecx
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 4]
        sub eax, 3
        push eax
        mov ecx, dword ptr [ebp - 2d8h]
        ; Exact mapped bytes E8 FC 21 2A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 42 FF FF FF: jmp 0x5851336c
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 114h]
        mov byte ptr [ecx + 60h], 7
        ; Exact mapped bytes E9 CA 00 00 00: jmp 0x58513503
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x58513454
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 14ch]
        add edx, 1
        mov dword ptr [ebp - 14ch], edx
        cmp dword ptr [ebp - 14ch], 2
        ; Exact mapped bytes 0F 8D A2 00 00 00: jge 0x58513503
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14ch]
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + eax*4 + 90h]
        mov dword ptr [ebp - 328h], edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4B 22 F8 FF: call 0x584956d0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x22
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 34 35 F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x35
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 2dch], eax
        mov eax, dword ptr [ebp - 14ch]
        add eax, 5
        push eax
        mov ecx, dword ptr [ebp - 2dch]
        ; Exact mapped bytes E8 29 16 F7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x16
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 2e0h], eax
        mov ecx, dword ptr [ebp - 2e0h]
        push ecx
        mov ecx, dword ptr [ebp - 328h]
        ; Exact mapped bytes E8 A1 37 F7 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x37
        __asm _emit 0xf7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14ch]
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + edx*4 + 90h]
        mov dword ptr [ebp - 2e8h], ecx
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 8]
        add eax, 0eh
        push eax
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 4]
        sub edx, 3
        push edx
        mov ecx, dword ptr [ebp - 2e8h]
        ; Exact mapped bytes E8 23 21 2A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x21
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 42 FF FF FF: jmp 0x58513445
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B0 FD FF FF: jmp 0x585132b8
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 0C 02 00 00: jmp 0x58513719
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 134h], 0
        ; Exact mapped bytes EB 0F: jmp 0x58513528
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 134h]
        add eax, 1
        mov dword ptr [ebp - 134h], eax
        cmp dword ptr [ebp - 134h], 2
        ; Exact mapped bytes 0F 8D CE 00 00 00: jge 0x58513603
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 134h]
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + ecx*4 + 90h]
        mov dword ptr [ebp - 2ech], eax
        push 0
        mov ecx, dword ptr [ebp - 2ech]
        ; Exact mapped bytes E8 85 29 F7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x29
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 134h]
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + ecx*4 + 98h]
        mov dword ptr [ebp - 2f0h], eax
        push 1
        mov ecx, dword ptr [ebp - 2f0h]
        ; Exact mapped bytes E8 5F 29 F7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x29
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 134h]
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + ecx*4 + 90h]
        mov dword ptr [ebp - 2f4h], eax
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 8]
        add edx, 14h
        push edx
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 4]
        add ecx, 15h
        push ecx
        mov ecx, dword ptr [ebp - 2f4h]
        ; Exact mapped bytes E8 61 20 2A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x20
        __asm _emit 0x2a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 134h]
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + edx*4 + 98h]
        mov dword ptr [ebp - 2f8h], ecx
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 8]
        add eax, 14h
        push eax
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 4]
        add edx, 15h
        push edx
        mov ecx, dword ptr [ebp - 2f8h]
        ; Exact mapped bytes E8 23 20 2A 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x20
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 16 FF FF FF: jmp 0x58513519
        __asm _emit 0xe9
        __asm _emit 0x16
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C2 20 F8 FF: call 0x584956d0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 2fch], eax
        mov eax, dword ptr [ebp - 114h]
        add eax, 7ch
        push eax
        mov ecx, dword ptr [ebp - 114h]
        add ecx, 4
        push ecx
        mov ecx, dword ptr [ebp - 2fch]
        ; Exact mapped bytes E8 FD C0 FF FF: call 0x5850f730
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F1 22 F8 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x22
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp eax, 0fh
        ; Exact mapped bytes 0F 85 82 00 00 00: jne 0x585136ca
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 114h]
        mov ecx, dword ptr [edx + 70h]
        ; Exact mapped bytes E8 5A 99 F7 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x99
        __asm _emit 0xf7
        __asm _emit 0xff
        mov esi, eax
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 7ch]
        ; Exact mapped bytes E8 8A 3A FC FF: call 0x584d70f0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x3a
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 74 51: je 0x585136bb
        __asm _emit 0x74
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 114h]
        mov ecx, dword ptr [ecx + 7ch]
        ; Exact mapped bytes E8 F8 E1 FF FF: call 0x58511870
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 114h]
        mov ecx, dword ptr [edx + 7ch]
        ; Exact mapped bytes E8 3A 33 F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x33
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 114h]
        mov dword ptr [ecx + 80h], eax
        mov edx, dword ptr [ebp - 114h]
        mov ecx, dword ptr [edx + 7ch]
        ; Exact mapped bytes E8 10 8A F7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x8a
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 114h]
        mov dword ptr [ecx + 84h], eax
        mov edx, dword ptr [ebp - 114h]
        mov dword ptr [edx + 54h], 1
        ; Exact mapped bytes EB 0D: jmp 0x585136c8
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 114h]
        mov dword ptr [eax + 58h], 1
        ; Exact mapped bytes EB 4F: jmp 0x58513719
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp - 114h]
        mov ecx, dword ptr [ecx + 7ch]
        ; Exact mapped bytes E8 98 E1 FF FF: call 0x58511870
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 114h]
        mov ecx, dword ptr [edx + 7ch]
        ; Exact mapped bytes E8 DA 32 F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x32
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 114h]
        mov dword ptr [ecx + 80h], eax
        mov edx, dword ptr [ebp - 114h]
        mov ecx, dword ptr [edx + 7ch]
        ; Exact mapped bytes E8 B0 89 F7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x89
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 114h]
        mov dword ptr [ecx + 84h], eax
        mov edx, dword ptr [ebp - 114h]
        mov dword ptr [edx + 54h], 1
        mov dword ptr [ebp - 188h], 0
        ; Exact mapped bytes EB 0F: jmp 0x58513734
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 188h]
        add eax, 1
        mov dword ptr [ebp - 188h], eax
        cmp dword ptr [ebp - 188h], 2
        ; Exact mapped bytes 7D 1B: jge 0x58513758
        __asm _emit 0x7d
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 188h]
        mov edx, dword ptr [ebp - 114h]
        mov ecx, dword ptr [edx + ecx*4 + 90h]
        ; Exact mapped bytes E8 2B 24 FA FF: call 0x584b5b80
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x24
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CD: jmp 0x58513725
        __asm _emit 0xeb
        __asm _emit 0xcd
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 114h]
        mov ecx, dword ptr [edx + ecx + 90h]
        ; Exact mapped bytes E8 8E 12 F7 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x12
        __asm _emit 0xf7
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 B2 BC F8 FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xbc
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 300h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 114h]
        mov ecx, dword ptr [ecx + eax + 90h]
        ; Exact mapped bytes E8 09 89 F7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x89
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 304h], eax
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 114h]
        mov ecx, dword ptr [ecx + eax + 90h]
        ; Exact mapped bytes E8 F9 31 F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x31
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 308h], eax
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 30ch], eax
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 310h], edx
        mov eax, dword ptr [ebp - 114h]
        movzx ecx, byte ptr [eax + 60h]
        mov dword ptr [ebp - 314h], ecx
        mov edx, dword ptr [ebp - 300h]
        push edx
        mov eax, dword ptr [ebp - 304h]
        push eax
        mov ecx, dword ptr [ebp - 308h]
        push ecx
        mov edx, dword ptr [ebp - 30ch]
        push edx
        mov eax, dword ptr [ebp - 310h]
        push eax
        mov ecx, dword ptr [ebp - 314h]
        push ecx
        mov edx, dword ptr [ebp - 318h]
        push edx
        push 588a3e84h
        lea eax, [ebp - 110h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 24h
        lea ecx, [ebp - 110h]
        push ecx
        ; Exact mapped bytes FF 15 A0 42 89 58: call dword ptr [0x588942a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes EB 2A: jmp 0x5851387b
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [eax + edx + 90h]
        ; Exact mapped bytes E8 D5 1F FA FF: call 0x584b5840
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x1f
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x5851387b
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 46 01 00 00: call 0x585139c0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 114h]
        cmp dword ptr [ecx + 3ch], 0
        ; Exact mapped bytes 74 1E: je 0x585138a5
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 3ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 0D: ja 0x585138a5
        __asm _emit 0x77
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 114h]
        mov dword ptr [ecx + 3ch], 0
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [edx + 3ch]
        mov dword ptr [ebp - 128h], eax
        cmp dword ptr [ebp - 128h], 0
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x58513942
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 128h]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 0C: ja 0x585138db
        __asm _emit 0x77
        __asm _emit 0x0c
        mov dword ptr [ebp - 128h], 0
        ; Exact mapped bytes EB D9: jmp 0x585138b4
        __asm _emit 0xeb
        __asm _emit 0xd9
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 2A 1D F8 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x1d
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 114h]
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [edx + 3ch]
        ; Exact mapped bytes 75 18: jne 0x5851390b
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 128h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 128h]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 39: jmp 0x58513942
        __asm _emit 0xeb
        __asm _emit 0x39
        ; Exact mapped bytes EB 32: jmp 0x5851393d
        __asm _emit 0xeb
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 FA 1C F8 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x1c
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 31ch], ecx
        mov edx, dword ptr [ebp - 128h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 128h]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 31ch]
        mov dword ptr [ebp - 128h], eax
        ; Exact mapped bytes E9 72 FF FF FF: jmp 0x585138b4
        __asm _emit 0xe9
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 F6 D6 31 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xd6
        __asm _emit 0x31
        __asm _emit 0x00
        mov esp, ebp
    }
}
