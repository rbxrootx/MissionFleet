// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585CBD00 .. +0x5A9 bytes.
extern "C" __declspec(naked) void FUN_585cbd00_585CBD00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 884h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 838h], ecx
        mov dword ptr [ebp - 83ch], 1
        mov dword ptr [ebp - 84ch], 0
        mov dword ptr [ebp - 840h], 0
        mov dword ptr [ebp - 850h], 1
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 0F 84 B4 00 00 00: je 0x585cbe02
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 838h]
        mov ecx, dword ptr [ecx + 20f08h]
        ; Exact mapped bytes E8 F1 58 F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x58
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 83ch]
        ; Exact mapped bytes 0F BE 04 10: movsx eax, byte ptr [eax + edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x10
        cmp eax, 20h
        ; Exact mapped bytes 74 1F: je 0x585cbd8d
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 838h]
        mov ecx, dword ptr [ecx + 20f08h]
        ; Exact mapped bytes E8 D1 58 F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x58
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 83ch]
        ; Exact mapped bytes 0F BE 04 10: movsx eax, byte ptr [eax + edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x585cbd91
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes EB 73: jmp 0x585cbe02
        __asm _emit 0xeb
        __asm _emit 0x73
        ; Exact mapped bytes EB 6C: jmp 0x585cbdfd
        __asm _emit 0xeb
        __asm _emit 0x6c
        mov ecx, dword ptr [ebp - 838h]
        mov ecx, dword ptr [ecx + 20f08h]
        ; Exact mapped bytes E8 AE 58 F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x58
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 83ch]
        ; Exact mapped bytes 0F BE 04 10: movsx eax, byte ptr [eax + edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x10
        cmp eax, 30h
        ; Exact mapped bytes 7C 40: jl 0x585cbdf1
        __asm _emit 0x7c
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 838h]
        mov ecx, dword ptr [ecx + 20f08h]
        ; Exact mapped bytes E8 8E 58 F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x58
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 83ch]
        ; Exact mapped bytes 0F BE 04 10: movsx eax, byte ptr [eax + edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x10
        cmp eax, 39h
        ; Exact mapped bytes 7F 20: jg 0x585cbdf1
        __asm _emit 0x7f
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 84ch]
        add ecx, 1
        mov dword ptr [ebp - 84ch], ecx
        mov edx, dword ptr [ebp - 83ch]
        add edx, 1
        mov dword ptr [ebp - 83ch], edx
        ; Exact mapped bytes EB 0C: jmp 0x585cbdfd
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov dword ptr [ebp - 850h], 0
        ; Exact mapped bytes EB 05: jmp 0x585cbe02
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 3F FF FF FF: jmp 0x585cbd41
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 850h], 0
        ; Exact mapped bytes 0F 84 8E 04 00 00: je 0x585cc29d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 838h]
        mov dword ptr [eax + 21ef4h], 0
        mov dword ptr [ebp - 844h], 1
        ; Exact mapped bytes EB 0F: jmp 0x585cbe3a
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 844h]
        add ecx, 1
        mov dword ptr [ebp - 844h], ecx
        mov edx, dword ptr [ebp - 844h]
        cmp edx, dword ptr [ebp - 84ch]
        ; Exact mapped bytes 0F 8F A4 00 00 00: jg 0x585cbef0
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 838h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 F3 57 F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x57
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 844h]
        ; Exact mapped bytes 0F BE 14 08: movsx edx, byte ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x08
        sub edx, 30h
        ; Exact mapped bytes F2 0F 2A C2: cvtsi2sd xmm0, edx
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc2
        mov eax, dword ptr [ebp - 84ch]
        sub eax, dword ptr [ebp - 844h]
        push eax
        sub esp, 8
        ; Exact mapped bytes F2 0F 10 0D D0 50 89 58: movsd xmm1, qword ptr [0x588950d0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x50
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 0C 24: movsd qword ptr [esp], xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x0c
        __asm _emit 0x24
        ; Exact mapped bytes F2 0F 11 85 8C F7 FF FF: movsd qword ptr [ebp - 0x874], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 98 5A EC FF: call 0x58491930
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x5a
        __asm _emit 0xec
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes DD 9D 84 F7 FF FF: fstp qword ptr [ebp - 0x87c]
        __asm _emit 0xdd
        __asm _emit 0x9d
        __asm _emit 0x84
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 10 85 8C F7 FF FF: movsd xmm0, qword ptr [ebp - 0x874]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 59 85 84 F7 FF FF: mulsd xmm0, qword ptr [ebp - 0x87c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 11 85 7C F7 FF FF: movsd qword ptr [ebp - 0x884], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x7c
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 838h]
        mov edx, dword ptr [ecx + 21ef4h]
        mov dword ptr [ebp - 854h], edx
        ; Exact mapped bytes F2 0F 2A 85 AC F7 FF FF: cvtsi2sd xmm0, dword ptr [ebp - 0x854]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 58 85 7C F7 FF FF: addsd xmm0, qword ptr [ebp - 0x884]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x85
        __asm _emit 0x7c
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 2C C0: cvttsd2si eax, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc0
        mov ecx, dword ptr [ebp - 838h]
        mov dword ptr [ecx + 21ef4h], eax
        ; Exact mapped bytes E9 3B FF FF FF: jmp 0x585cbe2b
        __asm _emit 0xe9
        __asm _emit 0x3b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 18h
        push 0
        mov edx, dword ptr [ebp - 838h]
        add edx, 21ec4h
        push edx
        ; Exact mapped bytes E8 0A 0F 28 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 838h]
        mov ecx, dword ptr [eax + 21ef4h]
        push ecx
        push 588ad8f0h
        push 18h
        mov edx, dword ptr [ebp - 838h]
        add edx, 21ec4h
        push edx
        ; Exact mapped bytes E8 C1 4E EE FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x4e
        __asm _emit 0xee
        __asm _emit 0xff
        add esp, 10h
        mov eax, dword ptr [ebp - 838h]
        add eax, 21ec4h
        push eax
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F7 96 01 00: call 0x585e5640
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 838h]
        add ecx, 21ec4h
        push ecx
        ; Exact mapped bytes 8B 0D 98 75 94 58: mov ecx, dword ptr [0x58947598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FE 30 FA FF: call 0x5856f060
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x30
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 BB 02 00 00: je 0x585cc225
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 838h]
        mov ecx, dword ptr [edx + 20f08h]
        ; Exact mapped bytes E8 D5 56 F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x56
        __asm _emit 0xf0
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 FF 51 28 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        cmp eax, dword ptr [ebp - 83ch]
        ; Exact mapped bytes 0F 86 F6 01 00 00: jbe 0x585cc186
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xf6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 838h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 AF 56 F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x56
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 83ch]
        ; Exact mapped bytes 0F BE 14 08: movsx edx, byte ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x14
        __asm _emit 0x08
        cmp edx, 20h
        ; Exact mapped bytes 0F 85 D2 01 00 00: jne 0x585cc186
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 30h
        push 0
        lea eax, [ebp - 834h]
        push eax
        ; Exact mapped bytes E8 4C 0E 28 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x0e
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 18h
        push 589604e0h
        lea ecx, [ebp - 834h]
        push ecx
        ; Exact mapped bytes E8 B6 08 28 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x08
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 18h
        mov edx, dword ptr [ebp - 838h]
        add edx, 21ec4h
        push edx
        lea eax, [ebp - 81ch]
        push eax
        ; Exact mapped bytes E8 98 08 28 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x08
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 838h]
        mov ecx, dword ptr [ecx + 20f08h]
        ; Exact mapped bytes E8 44 56 F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x56
        __asm _emit 0xf0
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 6E 51 28 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x51
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 83ch]
        add edx, 1
        sub eax, edx
        mov dword ptr [ebp - 840h], eax
        mov eax, dword ptr [ebp - 840h]
        add eax, 31h
        mov dword ptr [ebp - 840h], eax
        mov ecx, dword ptr [ebp - 840h]
        push ecx
        ; Exact mapped bytes E8 01 50 26 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x50
        __asm _emit 0x26
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 858h], eax
        mov edx, dword ptr [ebp - 858h]
        mov dword ptr [ebp - 848h], edx
        mov eax, dword ptr [ebp - 840h]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 848h]
        push ecx
        ; Exact mapped bytes E8 A5 0D 28 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 30h
        lea edx, [ebp - 834h]
        push edx
        mov eax, dword ptr [ebp - 848h]
        push eax
        ; Exact mapped bytes E8 0D 08 28 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 840h]
        sub ecx, 30h
        push ecx
        mov edx, dword ptr [ebp - 838h]
        mov ecx, dword ptr [edx + 20f08h]
        ; Exact mapped bytes E8 AF 55 F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x55
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 83ch]
        lea edx, [eax + ecx + 1]
        push edx
        mov eax, dword ptr [ebp - 848h]
        add eax, 30h
        push eax
        ; Exact mapped bytes E8 D5 07 28 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x07
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        push 1
        mov ecx, dword ptr [ebp - 840h]
        push ecx
        mov edx, dword ptr [ebp - 848h]
        push edx
        ; Exact mapped bytes 8B 0D 98 75 94 58: mov ecx, dword ptr [0x58947598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B7 47 FA FF: call 0x58570890
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x47
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 2B: jne 0x585cc108
        __asm _emit 0x75
        __asm _emit 0x2b
        push 588ad8f4h
        ; Exact mapped bytes E8 09 5F F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x5f
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 85ch], eax
        push 6464ffh
        mov eax, dword ptr [ebp - 85ch]
        push eax
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 49 42 11 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x42
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        push 400h
        push 0
        lea ecx, [ebp - 404h]
        push ecx
        ; Exact mapped bytes E8 F5 0C 28 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x0c
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 838h]
        add edx, 21ec4h
        push edx
        push 588ad91ch
        ; Exact mapped bytes E8 BB 5E F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x5e
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        push eax
        push 400h
        lea eax, [ebp - 404h]
        push eax
        ; Exact mapped bytes E8 A6 4C EE FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x4c
        __asm _emit 0xee
        __asm _emit 0xff
        add esp, 10h
        lea ecx, [ebp - 404h]
        push ecx
        push 5
        push 2
        mov ecx, dword ptr [ebp - 838h]
        ; Exact mapped bytes E8 8D C2 FF FF: call 0x585c83f0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 848h]
        mov dword ptr [ebp - 860h], edx
        push 1
        mov eax, dword ptr [ebp - 860h]
        push eax
        ; Exact mapped bytes E8 B6 4E 26 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x4e
        __asm _emit 0x26
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E9 9D 00 00 00: jmp 0x585cc223
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 838h]
        mov ecx, dword ptr [ecx + 20f08h]
        ; Exact mapped bytes E8 B9 54 F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x54
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 83ch]
        ; Exact mapped bytes 0F BE 44 10 01: movsx eax, byte ptr [eax + edx + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0x01
        cmp eax, 20h
        ; Exact mapped bytes 74 20: je 0x585cc1c7
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 838h]
        mov ecx, dword ptr [ecx + 20f08h]
        ; Exact mapped bytes E8 98 54 F0 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x54
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 83ch]
        ; Exact mapped bytes 0F BE 44 10 01: movsx eax, byte ptr [eax + edx + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0x01
        test eax, eax
        ; Exact mapped bytes 75 5C: jne 0x585cc223
        __asm _emit 0x75
        __asm _emit 0x5c
        push 400h
        push 0
        lea ecx, [ebp - 804h]
        push ecx
        ; Exact mapped bytes E8 36 0C 28 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x0c
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 838h]
        add edx, 21ec4h
        push edx
        push 588ad948h
        ; Exact mapped bytes E8 FC 5D F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x5d
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        push eax
        push 400h
        lea eax, [ebp - 804h]
        push eax
        ; Exact mapped bytes E8 E7 4B EE FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x4b
        __asm _emit 0xee
        __asm _emit 0xff
        add esp, 10h
        lea ecx, [ebp - 804h]
        push ecx
        push 5
        push 2
        mov ecx, dword ptr [ebp - 838h]
        ; Exact mapped bytes E8 CE C1 FF FF: call 0x585c83f0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 78: jmp 0x585cc29d
        __asm _emit 0xeb
        __asm _emit 0x78
        mov edx, dword ptr [ebp - 838h]
        mov eax, dword ptr [edx + 20f0ch]
        mov dword ptr [ebp - 868h], eax
        push 588ad974h
        ; Exact mapped bytes E8 AF 5D F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x5d
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 864h], eax
        push 6464ffh
        mov ecx, dword ptr [ebp - 864h]
        push ecx
        mov ecx, dword ptr [ebp - 868h]
        ; Exact mapped bytes E8 6F 92 1F 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x92
        __asm _emit 0x1f
        __asm _emit 0x00
        push 588ad9a0h
        ; Exact mapped bytes E8 85 5D F5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x5d
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 86ch], eax
        push 6464ffh
        mov edx, dword ptr [ebp - 86ch]
        push edx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C5 40 11 00: call 0x586e0350
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x40
        __asm _emit 0x11
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 838h]
        mov ecx, dword ptr [eax + 20f08h]
        ; Exact mapped bytes E8 64 42 F0 FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x42
        __asm _emit 0xf0
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 A9 4D 26 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x4d
        __asm _emit 0x26
        __asm _emit 0x00
        mov esp, ebp
    }
}
