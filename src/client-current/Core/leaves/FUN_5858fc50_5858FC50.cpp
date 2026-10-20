// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5858FC50 .. +0x4D1 bytes.
extern "C" __declspec(naked) void FUN_5858fc50_5858FC50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 814h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 7d0h], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3F 4E FA FF: call 0x58534ab0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x4e
        __asm _emit 0xfa
        __asm _emit 0xff
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 7F 3C: jg 0x5858fcb2
        __asm _emit 0x7f
        __asm _emit 0x3c
        push 0
        push 588aaec8h
        push 588aaed4h
        ; Exact mapped bytes A1 1C 5F 96 58: mov eax, dword ptr [0x58965f1c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes FF 15 6C 44 89 58: call dword ptr [0x5889446c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 44 44 F7 FF: call 0x585040f0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x44
        __asm _emit 0xf7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 5F 04 00 00: jmp 0x58590111
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 7e4h], ecx
        cmp dword ptr [ebp - 7e4h], 4
        ; Exact mapped bytes 74 1F: je 0x5858fce3
        __asm _emit 0x74
        __asm _emit 0x1f
        cmp dword ptr [ebp - 7e4h], 5
        ; Exact mapped bytes 0F 84 3C 01 00 00: je 0x5858fe0d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 7e4h], 6
        ; Exact mapped bytes 0F 84 2F 01 00 00: je 0x5858fe0d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 2E 04 00 00: jmp 0x58590111
        __asm _emit 0xe9
        __asm _emit 0x2e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 7dch], 0
        ; Exact mapped bytes EB 0F: jmp 0x5858fcfe
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 7dch]
        add edx, 1
        mov dword ptr [ebp - 7dch], edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 178h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DF ED 22 00: call 0x587beaf0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xed
        __asm _emit 0x22
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 7dch]
        cmp edx, dword ptr [eax + 3ch]
        ; Exact mapped bytes 0F 84 E8 00 00 00: je 0x5858fe08
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 7e0h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5858fd3b
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 7e0h]
        add eax, 1
        mov dword ptr [ebp - 7e0h], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea edx, [ebp - 0fch]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A2 ED 22 00: call 0x587beaf0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xed
        __asm _emit 0x22
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 7e0h]
        cmp ecx, dword ptr [eax + 38h]
        ; Exact mapped bytes 0F 84 A6 00 00 00: je 0x5858fe03
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 57 ED 22 00: call 0x587beac0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xed
        __asm _emit 0x22
        __asm _emit 0x00
        mov dword ptr [ebp - 810h], eax
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 7c4h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6E ED 22 00: call 0x587beaf0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xed
        __asm _emit 0x22
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 7dch]
        imul edx, dword ptr [eax + 38h]
        add edx, dword ptr [ebp - 7e0h]
        imul eax, edx, 14h
        mov ecx, dword ptr [ebp - 810h]
        mov edx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 80ch], edx
        cmp dword ptr [ebp - 80ch], -1
        ; Exact mapped bytes 74 51: je 0x5858fdfe
        __asm _emit 0x74
        __asm _emit 0x51
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 748h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 30 ED 22 00: call 0x587beaf0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xed
        __asm _emit 0x22
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 7e0h]
        imul edx, dword ptr [eax + 40h]
        mov eax, dword ptr [ebp - 7d0h]
        mov dword ptr [eax + 1ch], edx
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea edx, [ebp - 6cch]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0A ED 22 00: call 0x587beaf0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xed
        __asm _emit 0x22
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 7dch]
        imul ecx, dword ptr [eax + 44h]
        mov edx, dword ptr [ebp - 7d0h]
        mov dword ptr [edx + 20h], ecx
        ; Exact mapped bytes E9 13 03 00 00: jmp 0x58590111
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 29 FF FF FF: jmp 0x5858fd2c
        __asm _emit 0xe9
        __asm _emit 0x29
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 E7 FE FF FF: jmp 0x5858fcef
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 04 03 00 00: jmp 0x58590111
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 7cch], 0
        ; Exact mapped bytes EB 0F: jmp 0x5858fe28
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 7cch]
        add eax, 1
        mov dword ptr [ebp - 7cch], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea edx, [ebp - 650h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B5 EC 22 00: call 0x587beaf0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xec
        __asm _emit 0x22
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 7cch]
        cmp ecx, dword ptr [eax + 3ch]
        ; Exact mapped bytes 0F 84 C7 02 00 00: je 0x58590111
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 7c8h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5858fe65
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 7c8h]
        add edx, 1
        mov dword ptr [ebp - 7c8h], edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 5d4h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 78 EC 22 00: call 0x587beaf0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xec
        __asm _emit 0x22
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 7c8h]
        cmp edx, dword ptr [eax + 38h]
        ; Exact mapped bytes 0F 84 85 02 00 00: je 0x5859010c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2D EC 22 00: call 0x587beac0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xec
        __asm _emit 0x22
        __asm _emit 0x00
        mov dword ptr [ebp - 808h], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea edx, [ebp - 558h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 44 EC 22 00: call 0x587beaf0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xec
        __asm _emit 0x22
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 7cch]
        imul ecx, dword ptr [eax + 38h]
        add ecx, dword ptr [ebp - 7c8h]
        imul edx, ecx, 14h
        mov eax, dword ptr [ebp - 808h]
        mov ecx, dword ptr [eax + edx]
        mov dword ptr [ebp - 804h], ecx
        cmp dword ptr [ebp - 804h], -1
        ; Exact mapped bytes 0F 84 2C 02 00 00: je 0x58590107
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 4dch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 02 EC 22 00: call 0x587beaf0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xec
        __asm _emit 0x22
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 7c8h]
        imul ecx, dword ptr [eax + 40h]
        mov dword ptr [ebp - 800h], ecx
        mov edx, dword ptr [ebp + 0ch]
        sub edx, 5
        shl edx, 4
        mov eax, dword ptr [ebp - 7d0h]
        mov ecx, dword ptr [eax + 8]
        mov eax, dword ptr [ebp - 800h]
        mov dword ptr [ecx + edx], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea edx, [ebp - 460h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C4 EB 22 00: call 0x587beaf0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xeb
        __asm _emit 0x22
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 7cch]
        imul ecx, dword ptr [eax + 44h]
        mov dword ptr [ebp - 7fch], ecx
        mov edx, dword ptr [ebp + 0ch]
        sub edx, 5
        shl edx, 4
        mov eax, dword ptr [ebp - 7d0h]
        mov ecx, dword ptr [eax + 8]
        mov eax, dword ptr [ebp - 7fch]
        mov dword ptr [ecx + edx + 4], eax
        mov ecx, dword ptr [ebp - 7c8h]
        add ecx, 1
        mov dword ptr [ebp - 7d8h], ecx
        mov edx, dword ptr [ebp - 7cch]
        add edx, 1
        mov dword ptr [ebp - 7d4h], edx
        ; Exact mapped bytes EB 0F: jmp 0x5858ff87
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 7d8h]
        add eax, 1
        mov dword ptr [ebp - 7d8h], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea edx, [ebp - 3e4h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 56 EB 22 00: call 0x587beaf0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xeb
        __asm _emit 0x22
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 7d8h]
        cmp ecx, dword ptr [eax + 38h]
        ; Exact mapped bytes 0F 8D 96 00 00 00: jge 0x5859003f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0B EB 22 00: call 0x587beac0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xeb
        __asm _emit 0x22
        __asm _emit 0x00
        mov dword ptr [ebp - 7f8h], eax
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 368h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 22 EB 22 00: call 0x587beaf0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xeb
        __asm _emit 0x22
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 7cch]
        imul edx, dword ptr [eax + 38h]
        add edx, dword ptr [ebp - 7d8h]
        imul eax, edx, 14h
        mov ecx, dword ptr [ebp - 7f8h]
        mov edx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 7f4h], edx
        cmp dword ptr [ebp - 7f4h], -1
        ; Exact mapped bytes 75 41: jne 0x5859003a
        __asm _emit 0x75
        __asm _emit 0x41
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 2ech]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E4 EA 22 00: call 0x587beaf0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xea
        __asm _emit 0x22
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 7d8h]
        imul edx, dword ptr [eax + 40h]
        mov dword ptr [ebp - 7f0h], edx
        mov eax, dword ptr [ebp + 0ch]
        sub eax, 5
        shl eax, 4
        mov ecx, dword ptr [ebp - 7d0h]
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [ebp - 7f0h]
        mov dword ptr [edx + eax + 8], ecx
        ; Exact mapped bytes EB 05: jmp 0x5859003f
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 39 FF FF FF: jmp 0x5858ff78
        __asm _emit 0xe9
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 0F: jmp 0x58590050
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 7d4h]
        add edx, 1
        mov dword ptr [ebp - 7d4h], edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 270h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8D EA 22 00: call 0x587beaf0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xea
        __asm _emit 0x22
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 7d4h]
        cmp edx, dword ptr [eax + 3ch]
        ; Exact mapped bytes 0F 8D 93 00 00 00: jge 0x58590105
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 42 EA 22 00: call 0x587beac0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xea
        __asm _emit 0x22
        __asm _emit 0x00
        mov dword ptr [ebp - 7ech], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea edx, [ebp - 1f4h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 59 EA 22 00: call 0x587beaf0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xea
        __asm _emit 0x22
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 7d4h]
        imul ecx, dword ptr [eax + 38h]
        add ecx, dword ptr [ebp - 7c8h]
        imul edx, ecx, 14h
        mov eax, dword ptr [ebp - 7ech]
        mov ecx, dword ptr [eax + edx]
        mov dword ptr [ebp - 814h], ecx
        cmp dword ptr [ebp - 814h], -1
        ; Exact mapped bytes 75 3E: jne 0x58590100
        __asm _emit 0x75
        __asm _emit 0x3e
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 80h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1E EA 22 00: call 0x587beaf0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xea
        __asm _emit 0x22
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 7d4h]
        imul ecx, dword ptr [eax + 44h]
        mov dword ptr [ebp - 7e8h], ecx
        mov edx, dword ptr [ebp + 0ch]
        sub edx, 5
        shl edx, 4
        mov eax, dword ptr [ebp - 7d0h]
        mov ecx, dword ptr [eax + 8]
        mov eax, dword ptr [ebp - 7e8h]
        mov dword ptr [ecx + edx + 0ch], eax
        ; Exact mapped bytes EB 05: jmp 0x58590105
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 3C FF FF FF: jmp 0x58590041
        __asm _emit 0xe9
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 0A: jmp 0x58590111
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes E9 4A FD FF FF: jmp 0x5858fe56
        __asm _emit 0xe9
        __asm _emit 0x4a
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 08 FD FF FF: jmp 0x5858fe19
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 35 0F 2A 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
