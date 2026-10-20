// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58655FA0 .. +0x1A87 bytes.
extern "C" __declspec(naked) void FUN_58655fa0_58655FA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1fch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 38h], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 3E 15 00 00: jne 0x586574fe
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3e
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 7ch]
        ; Exact mapped bytes 75 60: jne 0x5865602b
        __asm _emit 0x75
        __asm _emit 0x60
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + 0d8h]
        ; Exact mapped bytes E8 87 32 E6 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x32
        __asm _emit 0xe6
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 5
        ; Exact mapped bytes 74 2B: je 0x5865600c
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + 0d8h]
        ; Exact mapped bytes E8 71 32 E6 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x32
        __asm _emit 0xe6
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 4
        ; Exact mapped bytes 74 15: je 0x5865600c
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 0d8h]
        ; Exact mapped bytes E8 5B 32 E6 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x32
        __asm _emit 0xe6
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 1A: jne 0x58656026
        __asm _emit 0x75
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 0d8h]
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 0d8h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 CE 14 00 00: jmp 0x586574f9
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 80h]
        ; Exact mapped bytes 0F 85 22 02 00 00: jne 0x5865625f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x22
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        cmp dword ptr [eax + 0f0h], 1
        ; Exact mapped bytes 0F 85 01 01 00 00: jne 0x5865614e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + edx + 0a0h]
        ; Exact mapped bytes E8 8C 36 ED FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x36
        __asm _emit 0xed
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 8E E2 00 00 00: jle 0x5865614e
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + edx + 0a0h]
        ; Exact mapped bytes E8 3D AB 16 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xab
        __asm _emit 0x16
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 0F 8E C2 00 00 00: jle 0x5865614e
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 0dch]
        mov dword ptr [ebp - 0a0h], edx
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 0f0h]
        mov dword ptr [ebp - 18ch], ecx
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + edx + 0a0h]
        ; Exact mapped bytes E8 60 6B FD FF: call 0x5862cc20
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x6b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 1f0h], eax
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + ecx + 0a0h]
        ; Exact mapped bytes E8 43 6B FD FF: call 0x5862cc20
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x6b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 1f4h], eax
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + ecx + 0a0h]
        ; Exact mapped bytes E8 26 6B FD FF: call 0x5862cc20
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x6b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 1f8h], eax
        mov eax, dword ptr [ebp - 18ch]
        push eax
        mov ecx, dword ptr [ebp - 1f0h]
        push ecx
        mov edx, dword ptr [ebp - 1f4h]
        push edx
        mov eax, dword ptr [ebp - 1f8h]
        push eax
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 D9 D8 EC FF: call 0x58523a00
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xd8
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        cmp dword ptr [ebp - 88h], -1
        ; Exact mapped bytes 74 13: je 0x58656149
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 88h]
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E8 74 F2 FF: call 0x5857d630
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 0C 01 00 00: jmp 0x5865625a
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        cmp dword ptr [edx + 0f0h], 2
        ; Exact mapped bytes 0F 85 FC 00 00 00: jne 0x5865625a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + ecx + 0b8h]
        ; Exact mapped bytes E8 7B 35 ED FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x35
        __asm _emit 0xed
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 8E DD 00 00 00: jle 0x5865625a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + ecx + 0b8h]
        ; Exact mapped bytes E8 2C AA 16 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xaa
        __asm _emit 0x16
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 0F 8E BD 00 00 00: jle 0x5865625a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 0dch]
        mov dword ptr [ebp - 0b4h], ecx
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 0f0h]
        mov dword ptr [ebp - 0a4h], eax
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + ecx + 0b8h]
        ; Exact mapped bytes E8 4F 6A FD FF: call 0x5862cc20
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x6a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0a8h], eax
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + eax + 0b8h]
        ; Exact mapped bytes E8 32 6A FD FF: call 0x5862cc20
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x6a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0ach], eax
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + eax + 0b8h]
        ; Exact mapped bytes E8 15 6A FD FF: call 0x5862cc20
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x6a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0b0h], eax
        mov edx, dword ptr [ebp - 0a4h]
        push edx
        mov eax, dword ptr [ebp - 0a8h]
        push eax
        mov ecx, dword ptr [ebp - 0ach]
        push ecx
        mov edx, dword ptr [ebp - 0b0h]
        push edx
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 C8 D7 EC FF: call 0x58523a00
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xd7
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        cmp dword ptr [ebp - 8ch], -1
        ; Exact mapped bytes 74 13: je 0x5865625a
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 8ch]
        push eax
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D7 73 F2 FF: call 0x5857d630
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x73
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 9A 12 00 00: jmp 0x586574f9
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 84h]
        ; Exact mapped bytes 0F 85 EC 01 00 00: jne 0x5865645d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        cmp dword ptr [eax + 0f0h], 1
        ; Exact mapped bytes 75 16: jne 0x58656293
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ecx + 110h], 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 9E 35 00 00: call 0x58659830
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        push 0ch
        push 0
        lea edx, [ebp - 34h]
        push edx
        ; Exact mapped bytes E8 70 6B 1F 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x6b
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 2ch], 0ch
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 110h]
        sub ecx, 1
        imul edx, ecx, 0ch
        mov dword ptr [ebp - 30h], edx
        mov dword ptr [ebp - 34h], 1
        lea eax, [ebp - 34h]
        push eax
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6E 87 F2 FF: call 0x5857ea40
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x87
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ecx + 0f0h], 2
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 0cch]
        mov dword ptr [ebp - 0b8h], eax
        push 0
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 95 FC E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xfc
        __asm _emit 0xe2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 0d0h]
        mov dword ptr [ebp - 0bch], edx
        push 0
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 79 FC E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xfc
        __asm _emit 0xe2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 0d4h]
        mov dword ptr [ebp - 0c0h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 5D FC E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xfc
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 74h], 0
        ; Exact mapped bytes EB 09: jmp 0x58656346
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 74h]
        add edx, 1
        mov dword ptr [ebp - 74h], edx
        cmp dword ptr [ebp - 74h], 3
        ; Exact mapped bytes 7D 63: jge 0x586563af
        __asm _emit 0x7d
        __asm _emit 0x63
        mov eax, dword ptr [ebp - 74h]
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + eax*4 + 0a0h]
        mov dword ptr [ebp - 0c4h], edx
        push 0
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 24 FC E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xfc
        __asm _emit 0xe2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 74h]
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + eax*4 + 0ach]
        mov dword ptr [ebp - 0c8h], edx
        push 0
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 04 FC E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xfc
        __asm _emit 0xe2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 74h]
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + eax*4 + 0b8h]
        mov dword ptr [ebp - 0cch], edx
        push 0fh
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 E4 FB E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xfb
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 8E: jmp 0x5865633d
        __asm _emit 0xeb
        __asm _emit 0x8e
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 0c4h]
        mov dword ptr [ebp - 0d0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 C5 FB E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xfb
        __asm _emit 0xe2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 0ech]
        mov dword ptr [ebp - 0d4h], eax
        push 0
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 F9 FA E2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xfa
        __asm _emit 0xe2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 0e4h]
        mov dword ptr [ebp - 0d8h], edx
        push 0
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 DD FA E2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xfa
        __asm _emit 0xe2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 0e8h]
        mov dword ptr [ebp - 0dch], ecx
        push 0
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 C1 FA E2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0xe2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 98h]
        mov dword ptr [ebp - 0e0h], eax
        push 0
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 55 FB E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xfb
        __asm _emit 0xe2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 9ch]
        mov dword ptr [ebp - 0e4h], edx
        push 0
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 39 FB E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xfb
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 9C 10 00 00: jmp 0x586574f9
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 88h]
        ; Exact mapped bytes 0F 85 EC 01 00 00: jne 0x5865665b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        cmp dword ptr [edx + 0f0h], 2
        ; Exact mapped bytes 75 16: jne 0x58656491
        __asm _emit 0x75
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [eax + 110h], 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 A0 33 00 00: call 0x58659830
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        push 0ch
        push 0
        lea ecx, [ebp - 28h]
        push ecx
        ; Exact mapped bytes E8 72 69 1F 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x69
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 20h], 0ch
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 110h]
        sub eax, 1
        imul ecx, eax, 0ch
        mov dword ptr [ebp - 24h], ecx
        mov dword ptr [ebp - 28h], 0
        lea edx, [ebp - 28h]
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 70 85 F2 FF: call 0x5857ea40
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x85
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [eax + 0f0h], 1
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 0cch]
        mov dword ptr [ebp - 0e8h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 97 FA E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xfa
        __asm _emit 0xe2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 0d0h]
        mov dword ptr [ebp - 0ech], ecx
        push 0
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 7B FA E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xfa
        __asm _emit 0xe2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 0d4h]
        mov dword ptr [ebp - 0f0h], eax
        push 0
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 5F FA E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xfa
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 78h], 0
        ; Exact mapped bytes EB 09: jmp 0x58656544
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 78h]
        add ecx, 1
        mov dword ptr [ebp - 78h], ecx
        cmp dword ptr [ebp - 78h], 3
        ; Exact mapped bytes 7D 63: jge 0x586565ad
        __asm _emit 0x7d
        __asm _emit 0x63
        mov edx, dword ptr [ebp - 78h]
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + edx*4 + 0a0h]
        mov dword ptr [ebp - 0f4h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 26 FA E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xfa
        __asm _emit 0xe2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 78h]
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + edx*4 + 0ach]
        mov dword ptr [ebp - 0f8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 06 FA E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xfa
        __asm _emit 0xe2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 78h]
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + edx*4 + 0b8h]
        mov dword ptr [ebp - 0fch], ecx
        push 0
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 E6 F9 E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xf9
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 8E: jmp 0x5865653b
        __asm _emit 0xeb
        __asm _emit 0x8e
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 0c4h]
        mov dword ptr [ebp - 100h], eax
        push 0
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 C7 F9 E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xf9
        __asm _emit 0xe2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 0ech]
        mov dword ptr [ebp - 104h], edx
        push 0
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 FB F8 E2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xf8
        __asm _emit 0xe2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 0e4h]
        mov dword ptr [ebp - 108h], ecx
        push 0
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 DF F8 E2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xf8
        __asm _emit 0xe2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 0e8h]
        mov dword ptr [ebp - 10ch], eax
        push 0
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 C3 F8 E2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xf8
        __asm _emit 0xe2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 98h]
        mov dword ptr [ebp - 110h], edx
        push 0
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 57 F9 E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xf9
        __asm _emit 0xe2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 9ch]
        mov dword ptr [ebp - 114h], ecx
        push 0
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 3B F9 E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xf9
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 9E 0E 00 00: jmp 0x586574f9
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 0e4h]
        ; Exact mapped bytes 75 0E: jne 0x58656677
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 FF 14 00 00: call 0x58657b70
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 82 0E 00 00: jmp 0x586574f9
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0e8h]
        ; Exact mapped bytes 75 0E: jne 0x58656693
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 A3 13 00 00: call 0x58657a30
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 66 0E 00 00: jmp 0x586574f9
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 98h]
        ; Exact mapped bytes 0F 85 32 04 00 00: jne 0x58656ad7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x32
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        cmp dword ptr [edx + 0f0h], 2
        ; Exact mapped bytes 0F 85 A1 01 00 00: jne 0x58656856
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + ecx + 0b8h]
        ; Exact mapped bytes E8 F4 A4 16 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xa4
        __asm _emit 0x16
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], eax
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 7C 0C: jl 0x586566e1
        __asm _emit 0x7c
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 38h]
        cmp dword ptr [eax + 0f8h], 0
        ; Exact mapped bytes 75 1A: jne 0x586566fb
        __asm _emit 0x75
        __asm _emit 0x1a
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 0F 8E 66 01 00 00: jle 0x58656851
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        cmp dword ptr [ecx + 0f8h], 0
        ; Exact mapped bytes 0F 85 56 01 00 00: jne 0x58656851
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 60h], 0
        ; Exact mapped bytes EB 09: jmp 0x5865670d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 60h]
        add edx, 1
        mov dword ptr [ebp - 60h], edx
        cmp dword ptr [ebp - 60h], 3
        ; Exact mapped bytes 7D 15: jge 0x58656728
        __asm _emit 0x7d
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 60h]
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + eax*4 + 0ach]
        ; Exact mapped bytes E8 9B A1 16 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xa1
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB DC: jmp 0x58656704
        __asm _emit 0xeb
        __asm _emit 0xdc
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + 0c4h]
        ; Exact mapped bytes E8 8A A1 16 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xa1
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 38h]
        cmp dword ptr [eax + 0f8h], 0
        ; Exact mapped bytes 74 0F: je 0x58656752
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ecx + 0f8h], 0
        ; Exact mapped bytes EB 09: jmp 0x5865675b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 3ch]
        sub edx, 1
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 49 1D 00 00: call 0x586584b0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 48h], eax
        mov dword ptr [ebp - 60h], 0
        ; Exact mapped bytes EB 09: jmp 0x5865677c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 60h]
        add ecx, 1
        mov dword ptr [ebp - 60h], ecx
        cmp dword ptr [ebp - 60h], 3
        ; Exact mapped bytes 7D 25: jge 0x586567a7
        __asm _emit 0x7d
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 60h]
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + edx*4 + 0b8h]
        mov dword ptr [ebp - 118h], ecx
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 EC AD 16 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xad
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB CC: jmp 0x58656773
        __asm _emit 0xeb
        __asm _emit 0xcc
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + ecx + 0ach]
        mov dword ptr [ebp - 11ch], eax
        push 999999h
        push 0
        mov ecx, dword ptr [ebp - 48h]
        add ecx, 2d2h
        push ecx
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 45 9D 16 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x9d
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + edx + 0ach]
        mov dword ptr [ebp - 120h], ecx
        push 999999h
        push 0
        mov edx, dword ptr [ebp - 48h]
        add edx, 4
        push edx
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 14 9D 16 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x9d
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + eax + 0ach]
        mov dword ptr [ebp - 124h], edx
        push 999999h
        push 0
        mov eax, dword ptr [ebp - 48h]
        add eax, 2b2h
        push eax
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 E2 9C 16 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x9c
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 48h]
        add ecx, 9ah
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 60 30 00 00: call 0x586598b0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 70 02 00 00: jmp 0x58656ac6
        __asm _emit 0xe9
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        cmp dword ptr [edx + 0f0h], 1
        ; Exact mapped bytes 0F 85 60 02 00 00: jne 0x58656ac6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + ecx + 0a0h]
        ; Exact mapped bytes E8 43 A3 16 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xa3
        __asm _emit 0x16
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], eax
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 7C 0C: jl 0x58656892
        __asm _emit 0x7c
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 38h]
        cmp dword ptr [eax + 0f8h], 0
        ; Exact mapped bytes 75 1A: jne 0x586568ac
        __asm _emit 0x75
        __asm _emit 0x1a
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 0F 8E 2A 02 00 00: jle 0x58656ac6
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x2a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        cmp dword ptr [ecx + 0f8h], 0
        ; Exact mapped bytes 0F 85 1A 02 00 00: jne 0x58656ac6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 64h], 0
        ; Exact mapped bytes EB 09: jmp 0x586568be
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 64h]
        add edx, 1
        mov dword ptr [ebp - 64h], edx
        cmp dword ptr [ebp - 64h], 3
        ; Exact mapped bytes 7D 15: jge 0x586568d9
        __asm _emit 0x7d
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 64h]
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + eax*4 + 0ach]
        ; Exact mapped bytes E8 EA 9F 16 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x9f
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB DC: jmp 0x586568b5
        __asm _emit 0xeb
        __asm _emit 0xdc
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + 0c4h]
        ; Exact mapped bytes E8 D9 9F 16 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x9f
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 38h]
        cmp dword ptr [eax + 0f8h], 0
        ; Exact mapped bytes 74 0F: je 0x58656903
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ecx + 0f8h], 0
        ; Exact mapped bytes EB 09: jmp 0x5865690c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 3ch]
        sub edx, 1
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 98 1B 00 00: call 0x586584b0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 48h], eax
        mov dword ptr [ebp - 64h], 0
        ; Exact mapped bytes EB 09: jmp 0x5865692d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 64h]
        add ecx, 1
        mov dword ptr [ebp - 64h], ecx
        cmp dword ptr [ebp - 64h], 3
        ; Exact mapped bytes 7D 25: jge 0x58656958
        __asm _emit 0x7d
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 64h]
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + edx*4 + 0a0h]
        mov dword ptr [ebp - 128h], ecx
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 3B AC 16 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xac
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB CC: jmp 0x58656924
        __asm _emit 0xeb
        __asm _emit 0xcc
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + ecx + 0ach]
        mov dword ptr [ebp - 12ch], eax
        push 999999h
        push 0
        mov ecx, dword ptr [ebp - 48h]
        add ecx, 29ah
        push ecx
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 94 9B 16 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x9b
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + edx + 0ach]
        mov dword ptr [ebp - 130h], ecx
        push 999999h
        push 0
        mov edx, dword ptr [ebp - 48h]
        add edx, 4
        push edx
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 63 9B 16 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x9b
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + eax + 0ach]
        mov dword ptr [ebp - 134h], edx
        push 999999h
        push 0
        mov eax, dword ptr [ebp - 48h]
        add eax, 2b2h
        push eax
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 31 9B 16 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x9b
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 48h]
        add ecx, 9ah
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 AF 2E 00 00: call 0x586598b0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, 1
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes 0F BE 94 01 0A 03 00 00: movsx edx, byte ptr [ecx + eax + 0x30a]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x0a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 4eh
        ; Exact mapped bytes 0F 85 A8 00 00 00: jne 0x58656ac6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 48h]
        mov byte ptr [edx + ecx + 30ah], 59h
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CE 83 F2 FF: call 0x5857ee10
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x83
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + eax + 0a0h]
        mov dword ptr [ebp - 138h], edx
        push 999999h
        mov eax, dword ptr [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 A2 AC 16 00: call 0x587c1710
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xac
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + ecx + 0a0h]
        mov dword ptr [ebp - 13ch], eax
        push 999999h
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 76 AC 16 00: call 0x587c1710
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xac
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + edx + 0a0h]
        mov dword ptr [ebp - 140h], ecx
        push 999999h
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 4B AC 16 00: call 0x587c1710
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xac
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [eax + 114h], ecx
        ; Exact mapped bytes E9 22 0A 00 00: jmp 0x586574f9
        __asm _emit 0xe9
        __asm _emit 0x22
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 9ch]
        ; Exact mapped bytes 0F 85 8E 04 00 00: jne 0x58656f77
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        cmp dword ptr [ecx + 0f0h], 2
        ; Exact mapped bytes 0F 85 CF 01 00 00: jne 0x58656cc8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + eax + 0b8h]
        ; Exact mapped bytes E8 B0 A0 16 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xa0
        __asm _emit 0x16
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], eax
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + eax + 0b8h]
        ; Exact mapped bytes E8 C6 2B ED FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x2b
        __asm _emit 0xed
        __asm _emit 0xff
        cmp dword ptr [ebp - 40h], eax
        ; Exact mapped bytes 7D 0C: jge 0x58656b3b
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 38h]
        cmp dword ptr [edx + 0f8h], 0
        ; Exact mapped bytes 75 33: jne 0x58656b6e
        __asm _emit 0x75
        __asm _emit 0x33
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + ecx + 0b8h]
        ; Exact mapped bytes E8 9E 2B ED FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x2b
        __asm _emit 0xed
        __asm _emit 0xff
        sub eax, 1
        cmp dword ptr [ebp - 40h], eax
        ; Exact mapped bytes 0F 8D 65 01 00 00: jge 0x58656cc3
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        cmp dword ptr [eax + 0f8h], 0
        ; Exact mapped bytes 0F 85 55 01 00 00: jne 0x58656cc3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 68h], 0
        ; Exact mapped bytes EB 09: jmp 0x58656b80
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 68h]
        add ecx, 1
        mov dword ptr [ebp - 68h], ecx
        cmp dword ptr [ebp - 68h], 3
        ; Exact mapped bytes 7D 15: jge 0x58656b9b
        __asm _emit 0x7d
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 68h]
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + edx*4 + 0ach]
        ; Exact mapped bytes E8 28 9D 16 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x9d
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB DC: jmp 0x58656b77
        __asm _emit 0xeb
        __asm _emit 0xdc
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + 0c4h]
        ; Exact mapped bytes E8 17 9D 16 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x9d
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 38h]
        cmp dword ptr [edx + 0f8h], 0
        ; Exact mapped bytes 74 0F: je 0x58656bc5
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [eax + 0f8h], 0
        ; Exact mapped bytes EB 09: jmp 0x58656bce
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 40h]
        add ecx, 1
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [ebp - 40h]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 D6 18 00 00: call 0x586584b0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4ch], eax
        mov dword ptr [ebp - 68h], 0
        ; Exact mapped bytes EB 09: jmp 0x58656bef
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 68h]
        add eax, 1
        mov dword ptr [ebp - 68h], eax
        cmp dword ptr [ebp - 68h], 3
        ; Exact mapped bytes 7D 25: jge 0x58656c1a
        __asm _emit 0x7d
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 68h]
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + ecx*4 + 0b8h]
        mov dword ptr [ebp - 144h], eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 79 A9 16 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xa9
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB CC: jmp 0x58656be6
        __asm _emit 0xeb
        __asm _emit 0xcc
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + eax + 0ach]
        mov dword ptr [ebp - 148h], edx
        push 999999h
        push 0
        mov eax, dword ptr [ebp - 4ch]
        add eax, 2d2h
        push eax
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 D3 98 16 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x98
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + ecx + 0ach]
        mov dword ptr [ebp - 14ch], eax
        push 999999h
        push 0
        mov ecx, dword ptr [ebp - 4ch]
        add ecx, 4
        push ecx
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 A2 98 16 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x98
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + edx + 0ach]
        mov dword ptr [ebp - 150h], ecx
        push 999999h
        push 0
        mov edx, dword ptr [ebp - 4ch]
        add edx, 2b2h
        push edx
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 6F 98 16 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x98
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4ch]
        add eax, 9ah
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 EE 2B 00 00: call 0x586598b0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 9E 02 00 00: jmp 0x58656f66
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        cmp dword ptr [ecx + 0f0h], 1
        ; Exact mapped bytes 0F 85 8E 02 00 00: jne 0x58656f66
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + eax + 0a0h]
        ; Exact mapped bytes E8 D1 9E 16 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x9e
        __asm _emit 0x16
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], eax
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + eax + 0a0h]
        ; Exact mapped bytes E8 E7 29 ED FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x29
        __asm _emit 0xed
        __asm _emit 0xff
        cmp dword ptr [ebp - 40h], eax
        ; Exact mapped bytes 7D 0C: jge 0x58656d1a
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 38h]
        cmp dword ptr [edx + 0f8h], 0
        ; Exact mapped bytes 75 33: jne 0x58656d4d
        __asm _emit 0x75
        __asm _emit 0x33
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + ecx + 0a0h]
        ; Exact mapped bytes E8 BF 29 ED FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x29
        __asm _emit 0xed
        __asm _emit 0xff
        sub eax, 1
        cmp dword ptr [ebp - 40h], eax
        ; Exact mapped bytes 0F 8D 29 02 00 00: jge 0x58656f66
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x29
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        cmp dword ptr [eax + 0f8h], 0
        ; Exact mapped bytes 0F 85 19 02 00 00: jne 0x58656f66
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58656d5f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 5ch]
        add ecx, 1
        mov dword ptr [ebp - 5ch], ecx
        cmp dword ptr [ebp - 5ch], 3
        ; Exact mapped bytes 7D 15: jge 0x58656d7a
        __asm _emit 0x7d
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 5ch]
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + edx*4 + 0ach]
        ; Exact mapped bytes E8 49 9B 16 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x9b
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB DC: jmp 0x58656d56
        __asm _emit 0xeb
        __asm _emit 0xdc
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + 0c4h]
        ; Exact mapped bytes E8 38 9B 16 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x9b
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 38h]
        cmp dword ptr [edx + 0f8h], 0
        ; Exact mapped bytes 74 0F: je 0x58656da4
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [eax + 0f8h], 0
        ; Exact mapped bytes EB 09: jmp 0x58656dad
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 40h]
        add ecx, 1
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [ebp - 40h]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 F7 16 00 00: call 0x586584b0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4ch], eax
        mov dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58656dce
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 5ch]
        add eax, 1
        mov dword ptr [ebp - 5ch], eax
        cmp dword ptr [ebp - 5ch], 3
        ; Exact mapped bytes 7D 25: jge 0x58656df9
        __asm _emit 0x7d
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 5ch]
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + ecx*4 + 0a0h]
        mov dword ptr [ebp - 154h], eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 9A A7 16 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xa7
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB CC: jmp 0x58656dc5
        __asm _emit 0xeb
        __asm _emit 0xcc
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + eax + 0ach]
        mov dword ptr [ebp - 158h], edx
        push 999999h
        push 0
        mov eax, dword ptr [ebp - 4ch]
        add eax, 29ah
        push eax
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 F4 96 16 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x96
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + ecx + 0ach]
        mov dword ptr [ebp - 15ch], eax
        push 999999h
        push 0
        mov ecx, dword ptr [ebp - 4ch]
        add ecx, 4
        push ecx
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 C3 96 16 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x96
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + edx + 0ach]
        mov dword ptr [ebp - 160h], ecx
        push 999999h
        push 0
        mov edx, dword ptr [ebp - 4ch]
        add edx, 2b2h
        push edx
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes E8 90 96 16 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x96
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4ch]
        add eax, 9ah
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 0F 2A 00 00: call 0x586598b0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, 1
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4ch]
        ; Exact mapped bytes 0F BE 8C 10 0A 03 00 00: movsx ecx, byte ptr [eax + edx + 0x30a]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x8c
        __asm _emit 0x10
        __asm _emit 0x0a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 4eh
        ; Exact mapped bytes 0F 85 A8 00 00 00: jne 0x58656f66
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 1
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4ch]
        mov byte ptr [ecx + eax + 30ah], 59h
        mov edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2E 7F F2 FF: call 0x5857ee10
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x7f
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + edx + 0a0h]
        mov dword ptr [ebp - 164h], ecx
        push 999999h
        mov edx, dword ptr [ebp - 40h]
        push edx
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 02 A8 16 00: call 0x587c1710
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xa8
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + eax + 0a0h]
        mov dword ptr [ebp - 168h], edx
        push 999999h
        mov eax, dword ptr [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 D6 A7 16 00: call 0x587c1710
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xa7
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + ecx + 0a0h]
        mov dword ptr [ebp - 16ch], eax
        push 999999h
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 AB A7 16 00: call 0x587c1710
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xa7
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [edx + 114h], eax
        ; Exact mapped bytes E9 82 05 00 00: jmp 0x586574f9
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + edx + 8ch]
        ; Exact mapped bytes 0F 85 C3 00 00 00: jne 0x58657055
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        cmp dword ptr [edx + 0f0h], 2
        ; Exact mapped bytes 75 3B: jne 0x58656fd9
        __asm _emit 0x75
        __asm _emit 0x3b
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + ecx + 0b8h]
        mov dword ptr [ebp - 170h], eax
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 0f4h]
        push edx
        push 3
        mov eax, dword ptr [ebp - 38h]
        add eax, 0b8h
        push eax
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes E8 DA D4 EC FF: call 0x585244b0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xd4
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 46: jmp 0x5865701f
        __asm _emit 0xeb
        __asm _emit 0x46
        mov ecx, dword ptr [ebp - 38h]
        cmp dword ptr [ecx + 0f0h], 1
        ; Exact mapped bytes 75 3A: jne 0x5865701f
        __asm _emit 0x75
        __asm _emit 0x3a
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + eax + 0a0h]
        mov dword ptr [ebp - 174h], edx
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 0f4h]
        push ecx
        push 3
        mov edx, dword ptr [ebp - 38h]
        add edx, 0a0h
        push edx
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 92 D4 EC FF: call 0x585244b0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xd4
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 38h]
        cmp dword ptr [eax + 0f4h], 0
        ; Exact mapped bytes 75 0C: jne 0x58657037
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 90h], 1
        ; Exact mapped bytes EB 0A: jmp 0x58657041
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 90h], 0
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ebp - 90h]
        mov dword ptr [ecx + 0f4h], edx
        ; Exact mapped bytes E9 A4 04 00 00: jmp 0x586574f9
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + eax + 8ch]
        ; Exact mapped bytes 0F 85 C3 00 00 00: jne 0x58657133
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        cmp dword ptr [eax + 0f0h], 2
        ; Exact mapped bytes 75 3B: jne 0x586570b7
        __asm _emit 0x75
        __asm _emit 0x3b
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + ecx + 0b8h]
        mov dword ptr [ebp - 178h], eax
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 0f4h]
        push edx
        push 3
        mov eax, dword ptr [ebp - 38h]
        add eax, 0b8h
        push eax
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes E8 FC D3 EC FF: call 0x585244b0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xd3
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 46: jmp 0x586570fd
        __asm _emit 0xeb
        __asm _emit 0x46
        mov ecx, dword ptr [ebp - 38h]
        cmp dword ptr [ecx + 0f0h], 1
        ; Exact mapped bytes 75 3A: jne 0x586570fd
        __asm _emit 0x75
        __asm _emit 0x3a
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + edx + 0a0h]
        mov dword ptr [ebp - 17ch], ecx
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 0f4h]
        push eax
        push 3
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 0a0h
        push ecx
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 B4 D3 EC FF: call 0x585244b0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xd3
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 38h]
        cmp dword ptr [edx + 0f4h], 0
        ; Exact mapped bytes 75 0C: jne 0x58657115
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 94h], 1
        ; Exact mapped bytes EB 0A: jmp 0x5865711f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 94h], 0
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ebp - 94h]
        mov dword ptr [eax + 0f4h], ecx
        ; Exact mapped bytes E9 C6 03 00 00: jmp 0x586574f9
        __asm _emit 0xe9
        __asm _emit 0xc6
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + edx + 8ch]
        ; Exact mapped bytes 0F 85 C1 00 00 00: jne 0x5865720e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        cmp dword ptr [edx + 0f0h], 2
        ; Exact mapped bytes 75 3B: jne 0x58657194
        __asm _emit 0x75
        __asm _emit 0x3b
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + eax + 0b8h]
        mov dword ptr [ebp - 180h], edx
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 0f4h]
        push ecx
        push 3
        mov edx, dword ptr [ebp - 38h]
        add edx, 0b8h
        push edx
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 1F D3 EC FF: call 0x585244b0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xd3
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 44: jmp 0x586571d8
        __asm _emit 0xeb
        __asm _emit 0x44
        mov eax, dword ptr [ebp - 38h]
        cmp dword ptr [eax + 0f0h], 1
        ; Exact mapped bytes 75 38: jne 0x586571d8
        __asm _emit 0x75
        __asm _emit 0x38
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + ecx + 0a0h]
        mov dword ptr [ebp - 184h], eax
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 0f4h]
        push edx
        push 3
        mov eax, dword ptr [ebp - 38h]
        add eax, 0a0h
        push eax
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 D9 D2 EC FF: call 0x585244b0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xd2
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 38h]
        cmp dword ptr [ecx + 0f4h], 0
        ; Exact mapped bytes 75 0C: jne 0x586571f0
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 98h], 1
        ; Exact mapped bytes EB 0A: jmp 0x586571fa
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 98h], 0
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [ebp - 98h]
        mov dword ptr [edx + 0f4h], eax
        ; Exact mapped bytes E9 EB 02 00 00: jmp 0x586574f9
        __asm _emit 0xe9
        __asm _emit 0xeb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 100h]
        ; Exact mapped bytes 0F 85 83 00 00 00: jne 0x586572a3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        cmp dword ptr [eax + 110h], 1
        ; Exact mapped bytes 7E 72: jle 0x5865729e
        __asm _emit 0x7e
        __asm _emit 0x72
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 110h]
        sub edx, 1
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [eax + 110h], edx
        push 0ch
        push 0
        lea ecx, [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 C2 5B 1F 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x5b
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 8], 0ch
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 110h]
        sub eax, 1
        imul ecx, eax, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 38h]
        cmp dword ptr [edx + 0f0h], 1
        ; Exact mapped bytes 75 09: jne 0x5865727f
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 07: jmp 0x58657286
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 1
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AB 77 F2 FF: call 0x5857ea40
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x77
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 93 25 00 00: call 0x58659830
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 56 02 00 00: jmp 0x586574f9
        __asm _emit 0xe9
        __asm _emit 0x56
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0fch]
        ; Exact mapped bytes 0F 85 F7 00 00 00: jne 0x586573ac
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        cmp dword ptr [eax + 0f0h], 1
        ; Exact mapped bytes 75 11: jne 0x586572d2
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C4 A5 F1 FF: call 0x58571890
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xa5
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 90: mov word ptr [ebp - 0x70], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x90
        ; Exact mapped bytes EB 0F: jmp 0x586572e1
        __asm _emit 0xeb
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 93 A5 F1 FF: call 0x58571870
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xa5
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 90: mov word ptr [ebp - 0x70], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x90
        ; Exact mapped bytes 0F BF 45 90: movsx eax, word ptr [ebp - 0x70]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x90
        cdq
        mov ecx, 0ch
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 74 0C: je 0x586572fd
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 9ch], 1
        ; Exact mapped bytes EB 0A: jmp 0x58657307
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 9ch], 0
        ; Exact mapped bytes 66 8B 95 64 FF FF FF: mov dx, word ptr [ebp - 0x9c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 95 7C FF FF FF: mov word ptr [ebp - 0x84], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 45 90: movsx eax, word ptr [ebp - 0x70]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x90
        cdq
        mov ecx, 0ch
        idiv ecx
        ; Exact mapped bytes 0F BF 95 7C FF FF FF: movsx edx, word ptr [ebp - 0x84]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x95
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add eax, edx
        mov ecx, dword ptr [ebp - 38h]
        cmp dword ptr [ecx + 110h], eax
        ; Exact mapped bytes 7D 72: jge 0x586573a7
        __asm _emit 0x7d
        __asm _emit 0x72
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 110h]
        add eax, 1
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ecx + 110h], eax
        push 0ch
        push 0
        lea edx, [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 B9 5A 1F 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x5a
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 14h], 0ch
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 110h]
        sub ecx, 1
        imul edx, ecx, 0ch
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 38h]
        cmp dword ptr [eax + 0f0h], 1
        ; Exact mapped bytes 75 09: jne 0x58657388
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 07: jmp 0x5865738f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 1
        lea ecx, [ebp - 1ch]
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A2 76 F2 FF: call 0x5857ea40
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x76
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 8A 24 00 00: call 0x58659830
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 4D 01 00 00: jmp 0x586574f9
        __asm _emit 0xe9
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        cmp dword ptr [edx + 0f0h], 2
        ; Exact mapped bytes 0F 85 99 00 00 00: jne 0x58657455
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], 0
        ; Exact mapped bytes EB 09: jmp 0x586573ce
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 44h]
        add eax, 1
        mov dword ptr [ebp - 44h], eax
        cmp dword ptr [ebp - 44h], 3
        ; Exact mapped bytes 7D 16: jge 0x586573ea
        __asm _emit 0x7d
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + ecx*4 + 0b8h]
        ; Exact mapped bytes 75 02: jne 0x586573e8
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x586573ea
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB DB: jmp 0x586573c5
        __asm _emit 0xeb
        __asm _emit 0xdb
        cmp dword ptr [ebp - 44h], 3
        ; Exact mapped bytes 74 60: je 0x58657450
        __asm _emit 0x74
        __asm _emit 0x60
        mov dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58657402
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 7ch]
        add ecx, 1
        mov dword ptr [ebp - 7ch], ecx
        cmp dword ptr [ebp - 7ch], 3
        ; Exact mapped bytes 7D 48: jge 0x58657450
        __asm _emit 0x7d
        __asm _emit 0x48
        mov edx, dword ptr [ebp - 44h]
        cmp edx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes 74 3E: je 0x5865744e
        __asm _emit 0x74
        __asm _emit 0x3e
        mov eax, dword ptr [ebp - 7ch]
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + eax*4 + 0b8h]
        mov dword ptr [ebp - 1c4h], edx
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + eax*4 + 0b8h]
        ; Exact mapped bytes E8 8B 97 16 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x97
        __asm _emit 0x16
        __asm _emit 0x00
        mov dword ptr [ebp - 188h], eax
        mov edx, dword ptr [ebp - 188h]
        push edx
        mov ecx, dword ptr [ebp - 1c4h]
        ; Exact mapped bytes E8 43 A1 16 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xa1
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB A9: jmp 0x586573f9
        __asm _emit 0xeb
        __asm _emit 0xa9
        ; Exact mapped bytes E9 A4 00 00 00: jmp 0x586574f9
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        cmp dword ptr [eax + 0f0h], 1
        ; Exact mapped bytes 0F 85 94 00 00 00: jne 0x586574f9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], 0
        ; Exact mapped bytes EB 09: jmp 0x58657477
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 1
        mov dword ptr [ebp - 44h], ecx
        cmp dword ptr [ebp - 44h], 3
        ; Exact mapped bytes 7D 16: jge 0x58657493
        __asm _emit 0x7d
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + edx*4 + 0a0h]
        ; Exact mapped bytes 75 02: jne 0x58657491
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x58657493
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB DB: jmp 0x5865746e
        __asm _emit 0xeb
        __asm _emit 0xdb
        cmp dword ptr [ebp - 44h], 3
        ; Exact mapped bytes 74 60: je 0x586574f9
        __asm _emit 0x74
        __asm _emit 0x60
        mov dword ptr [ebp - 80h], 0
        ; Exact mapped bytes EB 09: jmp 0x586574ab
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 80h]
        add edx, 1
        mov dword ptr [ebp - 80h], edx
        cmp dword ptr [ebp - 80h], 3
        ; Exact mapped bytes 7D 48: jge 0x586574f9
        __asm _emit 0x7d
        __asm _emit 0x48
        mov eax, dword ptr [ebp - 44h]
        cmp eax, dword ptr [ebp - 80h]
        ; Exact mapped bytes 74 3E: je 0x586574f7
        __asm _emit 0x74
        __asm _emit 0x3e
        mov ecx, dword ptr [ebp - 80h]
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + ecx*4 + 0a0h]
        mov dword ptr [ebp - 194h], eax
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + ecx*4 + 0a0h]
        ; Exact mapped bytes E8 E2 96 16 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x96
        __asm _emit 0x16
        __asm _emit 0x00
        mov dword ptr [ebp - 190h], eax
        mov eax, dword ptr [ebp - 190h]
        push eax
        mov ecx, dword ptr [ebp - 194h]
        ; Exact mapped bytes E8 9A A0 16 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xa0
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB A9: jmp 0x586574a2
        __asm _emit 0xeb
        __asm _emit 0xa9
        ; Exact mapped bytes E9 17 05 00 00: jmp 0x58657a15
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0f764h
        ; Exact mapped bytes 0F 85 0A 05 00 00: jne 0x58657a15
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0a
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        cmp dword ptr [ecx + 0f0h], 2
        ; Exact mapped bytes 75 56: jne 0x5865756d
        __asm _emit 0x75
        __asm _emit 0x56
        mov dword ptr [ebp - 58h], 0
        ; Exact mapped bytes EB 09: jmp 0x58657529
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 58h]
        add edx, 1
        mov dword ptr [ebp - 58h], edx
        cmp dword ptr [ebp - 58h], 3
        ; Exact mapped bytes 7D 3C: jge 0x5865756b
        __asm _emit 0x7d
        __asm _emit 0x3c
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + eax*4 + 0b8h]
        ; Exact mapped bytes 75 28: jne 0x58657569
        __asm _emit 0x75
        __asm _emit 0x28
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + ecx + 0b8h]
        ; Exact mapped bytes E8 68 96 16 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x96
        __asm _emit 0x16
        __asm _emit 0x00
        mov dword ptr [ebp - 6ch], eax
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ebp - 6ch]
        mov dword ptr [eax + 114h], ecx
        ; Exact mapped bytes EB 02: jmp 0x5865756b
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB B5: jmp 0x58657520
        __asm _emit 0xeb
        __asm _emit 0xb5
        ; Exact mapped bytes EB 60: jmp 0x586575cd
        __asm _emit 0xeb
        __asm _emit 0x60
        mov edx, dword ptr [ebp - 38h]
        cmp dword ptr [edx + 0f0h], 1
        ; Exact mapped bytes 75 54: jne 0x586575cd
        __asm _emit 0x75
        __asm _emit 0x54
        mov dword ptr [ebp - 58h], 0
        ; Exact mapped bytes EB 09: jmp 0x5865758b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 58h]
        add eax, 1
        mov dword ptr [ebp - 58h], eax
        cmp dword ptr [ebp - 58h], 3
        ; Exact mapped bytes 7D 3C: jge 0x586575cd
        __asm _emit 0x7d
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + ecx*4 + 0a0h]
        ; Exact mapped bytes 75 28: jne 0x586575cb
        __asm _emit 0x75
        __asm _emit 0x28
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + edx + 0a0h]
        ; Exact mapped bytes E8 06 96 16 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x16
        __asm _emit 0x00
        mov dword ptr [ebp - 6ch], eax
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ebp - 6ch]
        mov dword ptr [ecx + 114h], edx
        ; Exact mapped bytes EB 02: jmp 0x586575cd
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB B5: jmp 0x58657582
        __asm _emit 0xeb
        __asm _emit 0xb5
        cmp dword ptr [ebp - 58h], 3
        ; Exact mapped bytes 0F 8D 3E 04 00 00: jge 0x58657a15
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x3e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 0F 8C 34 04 00 00: jl 0x58657a15
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x34
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 6ch]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 C3 0E 00 00: call 0x586584b0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 50h], eax
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 0F 84 1B 04 00 00: je 0x58657a15
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 54h], 0
        ; Exact mapped bytes EB 09: jmp 0x5865760c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 54h]
        add ecx, 1
        mov dword ptr [ebp - 54h], ecx
        cmp dword ptr [ebp - 54h], 3
        ; Exact mapped bytes 7D 15: jge 0x58657627
        __asm _emit 0x7d
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 54h]
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + edx*4 + 0ach]
        ; Exact mapped bytes E8 9C 92 16 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x92
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB DC: jmp 0x58657603
        __asm _emit 0xeb
        __asm _emit 0xdc
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + 0c4h]
        ; Exact mapped bytes E8 8B 92 16 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x92
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 98h]
        mov dword ptr [ebp - 198h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 3F E9 E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 9ch]
        mov dword ptr [ebp - 19ch], edx
        push 0fh
        mov ecx, dword ptr [ebp - 19ch]
        ; Exact mapped bytes E8 23 E9 E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 38h]
        cmp dword ptr [eax + 0f0h], 2
        ; Exact mapped bytes 0F 85 B0 00 00 00: jne 0x5865772e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + edx + 0ach]
        mov dword ptr [ebp - 1a0h], ecx
        push 999999h
        push 0
        mov edx, dword ptr [ebp - 50h]
        add edx, 2d2h
        push edx
        mov ecx, dword ptr [ebp - 1a0h]
        ; Exact mapped bytes E8 6E 8E 16 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x8e
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + eax + 0ach]
        mov dword ptr [ebp - 1a4h], edx
        push 999999h
        push 0
        mov eax, dword ptr [ebp - 50h]
        add eax, 4
        push eax
        mov ecx, dword ptr [ebp - 1a4h]
        ; Exact mapped bytes E8 3D 8E 16 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x8e
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + ecx + 0ach]
        mov dword ptr [ebp - 1a8h], eax
        push 999999h
        push 0
        mov ecx, dword ptr [ebp - 50h]
        add ecx, 2b2h
        push ecx
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 0A 8E 16 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x8e
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 50h]
        add edx, 9ah
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 88 21 00 00: call 0x586598b0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 7F 01 00 00: jmp 0x586578ad
        __asm _emit 0xe9
        __asm _emit 0x7f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        cmp dword ptr [eax + 0f0h], 1
        ; Exact mapped bytes 0F 85 6F 01 00 00: jne 0x586578ad
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + edx + 0ach]
        mov dword ptr [ebp - 1ach], ecx
        push 999999h
        push 0
        mov edx, dword ptr [ebp - 50h]
        add edx, 29ah
        push edx
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes E8 AE 8D 16 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x8d
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + eax + 0ach]
        mov dword ptr [ebp - 1b0h], edx
        push 999999h
        push 0
        mov eax, dword ptr [ebp - 50h]
        add eax, 4
        push eax
        mov ecx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes E8 7D 8D 16 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x8d
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + ecx + 0ach]
        mov dword ptr [ebp - 1b4h], eax
        push 999999h
        push 0
        mov ecx, dword ptr [ebp - 50h]
        add ecx, 2b2h
        push ecx
        mov ecx, dword ptr [ebp - 1b4h]
        ; Exact mapped bytes E8 4A 8D 16 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x8d
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 50h]
        add edx, 9ah
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 C8 20 00 00: call 0x586598b0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, 1
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 50h]
        ; Exact mapped bytes 0F BE 84 0A 0A 03 00 00: movsx eax, byte ptr [edx + ecx + 0x30a]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x0a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 4eh
        ; Exact mapped bytes 0F 85 A8 00 00 00: jne 0x586578ad
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 1
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 50h]
        mov byte ptr [eax + edx + 30ah], 59h
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E7 75 F2 FF: call 0x5857ee10
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x75
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + ecx + 0a0h]
        mov dword ptr [ebp - 1b8h], eax
        push 999999h
        mov ecx, dword ptr [ebp - 6ch]
        push ecx
        mov ecx, dword ptr [ebp - 1b8h]
        ; Exact mapped bytes E8 BB 9E 16 00: call 0x587c1710
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x9e
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + edx + 0a0h]
        mov dword ptr [ebp - 1bch], ecx
        push 999999h
        mov edx, dword ptr [ebp - 6ch]
        push edx
        mov ecx, dword ptr [ebp - 1bch]
        ; Exact mapped bytes E8 8F 9E 16 00: call 0x587c1710
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x9e
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + eax + 0a0h]
        mov dword ptr [ebp - 1c0h], edx
        push 999999h
        mov eax, dword ptr [ebp - 6ch]
        push eax
        mov ecx, dword ptr [ebp - 1c0h]
        ; Exact mapped bytes E8 64 9E 16 00: call 0x587c1710
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x9e
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 0d4h]
        mov dword ptr [ebp - 1fch], edx
        push 0
        mov ecx, dword ptr [ebp - 1fch]
        ; Exact mapped bytes E8 C7 E6 E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xe6
        __asm _emit 0xe2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 0cch]
        mov dword ptr [ebp - 1c8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 1c8h]
        ; Exact mapped bytes E8 AB E6 E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xe6
        __asm _emit 0xe2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 0d0h]
        mov dword ptr [ebp - 1cch], eax
        push 0fh
        mov ecx, dword ptr [ebp - 1cch]
        ; Exact mapped bytes E8 8F E6 E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xe6
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 54h], 0
        ; Exact mapped bytes EB 09: jmp 0x58657914
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 54h]
        add ecx, 1
        mov dword ptr [ebp - 54h], ecx
        cmp dword ptr [ebp - 54h], 3
        ; Exact mapped bytes 0F 8D 86 00 00 00: jge 0x586579a4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 54h]
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + edx*4 + 0ach]
        mov dword ptr [ebp - 1d0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 1d0h]
        ; Exact mapped bytes E8 52 9C 16 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x9c
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 54h]
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + edx*4 + 0b8h]
        mov dword ptr [ebp - 1d4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 1d4h]
        ; Exact mapped bytes E8 32 E6 E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xe6
        __asm _emit 0xe2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 54h]
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + edx*4 + 0a0h]
        mov dword ptr [ebp - 1d8h], ecx
        push 0
        mov ecx, dword ptr [ebp - 1d8h]
        ; Exact mapped bytes E8 12 E6 E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xe6
        __asm _emit 0xe2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 54h]
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + edx*4 + 0ach]
        mov dword ptr [ebp - 1dch], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 1dch]
        ; Exact mapped bytes E8 F2 E5 E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xe5
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 67 FF FF FF: jmp 0x5865790b
        __asm _emit 0xe9
        __asm _emit 0x67
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 0c4h]
        mov dword ptr [ebp - 1e0h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 1e0h]
        ; Exact mapped bytes E8 D0 E5 E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xe5
        __asm _emit 0xe2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 0ech]
        mov dword ptr [ebp - 1e4h], edx
        push 1
        mov ecx, dword ptr [ebp - 1e4h]
        ; Exact mapped bytes E8 04 E5 E2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xe5
        __asm _emit 0xe2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 0e4h]
        mov dword ptr [ebp - 1e8h], ecx
        push 1
        mov ecx, dword ptr [ebp - 1e8h]
        ; Exact mapped bytes E8 E8 E4 E2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xe2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 0e8h]
        mov dword ptr [ebp - 1ech], eax
        push 1
        mov ecx, dword ptr [ebp - 1ech]
        ; Exact mapped bytes E8 CC E4 E2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xe4
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        xor eax, eax
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 2F 96 1D 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x96
        __asm _emit 0x1d
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
