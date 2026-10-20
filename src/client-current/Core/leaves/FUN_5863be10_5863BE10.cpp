// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5863BE10 .. +0x495 bytes.
extern "C" __declspec(naked) void FUN_5863be10_5863BE10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 19ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 108h], ecx
        mov dword ptr [ebp - 10ch], 0
        mov dword ptr [ebp - 120h], 0
        mov eax, dword ptr [ebp - 108h]
        movzx ecx, byte ptr [eax + 21ch]
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx*4 + 120h]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 85 FB 01 00 00: jne 0x5863c05b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 108h]
        mov ecx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes E8 02 1B ED FF: call 0x5850d970
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x1b
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 10h]
        sub edx, eax
        mov dword ptr [ebp - 110h], edx
        ; Exact mapped bytes F2 0F 2A 85 F0 FE FF FF: cvtsi2sd xmm0, dword ptr [ebp - 0x110]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 110h]
        shr eax, 1fh
        ; Exact mapped bytes F2 0F 58 04 C5 70 4D 89 58: addsd xmm0, qword ptr [eax*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0xc5
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 85 64 FE FF FF: movsd qword ptr [ebp - 0x19c], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 5A 85 64 FE FF FF: cvtsd2ss xmm0, qword ptr [ebp - 0x19c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 108h]
        mov ecx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes F3 0F 11 85 DC FE FF FF: movss dword ptr [ebp - 0x124], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 17 1B ED FF: call 0x5850d9d0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x1b
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 114h], eax
        ; Exact mapped bytes F2 0F 2A 85 EC FE FF FF: cvtsi2sd xmm0, dword ptr [ebp - 0x114]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 114h]
        shr edx, 1fh
        ; Exact mapped bytes F2 0F 58 04 D5 70 4D 89 58: addsd xmm0, qword ptr [edx*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0xd5
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 85 7C FE FF FF: movsd qword ptr [ebp - 0x184], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x7c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 5A 85 7C FE FF FF: cvtsd2ss xmm0, qword ptr [ebp - 0x184]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0x85
        __asm _emit 0x7c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 10 8D DC FE FF FF: movss xmm1, dword ptr [ebp - 0x124]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x8d
        __asm _emit 0xdc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 5E C8: divss xmm1, xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 28 C1: movaps xmm0, xmm1
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xc1
        ; Exact mapped bytes E8 D3 54 1F 00: call 0x588313d0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x54
        __asm _emit 0x1f
        __asm _emit 0x00
        mov dword ptr [ebp - 10ch], eax
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 FF 1B ED FF: call 0x5850db10
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x1b
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 120h], eax
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 128h], edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 FB 1E ED FF: call 0x5850de30
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x1e
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 12ch], edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 1D 20 ED FF: call 0x5850df70
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x20
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 134h], edx
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 40 1B ED FF: call 0x5850dab0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x1b
        __asm _emit 0xed
        __asm _emit 0xff
        add eax, dword ptr [ebp - 10ch]
        mov dword ptr [ebp - 130h], eax
        mov ecx, dword ptr [ebp - 130h]
        push ecx
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 02 1F ED FF: call 0x5850de90
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x1f
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + 0ech]
        mov dword ptr [ebp - 138h], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 E1 F1 17 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xf1
        __asm _emit 0x17
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + 0f0h]
        mov dword ptr [ebp - 140h], eax
        mov ecx, dword ptr [ebp - 108h]
        mov ecx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes E8 E1 1A ED FF: call 0x5850dab0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x1a
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 13ch], eax
        mov edx, dword ptr [ebp - 13ch]
        push edx
        mov ecx, dword ptr [ebp - 140h]
        ; Exact mapped bytes E8 A9 F1 17 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xf1
        __asm _emit 0x17
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 7B 19 ED FF: call 0x5850d970
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x19
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 144h], eax
        push 588af184h
        ; Exact mapped bytes E8 EB 5F EE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x5f
        __asm _emit 0xee
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 148h], eax
        push 0f4240h
        mov ecx, dword ptr [ebp - 144h]
        push ecx
        mov edx, dword ptr [ebp - 148h]
        push edx
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + 258h]
        mov dword ptr [ebp - 17ch], edx
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 17ch]
        ; Exact mapped bytes E8 4B A0 E4 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xa0
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 82 01 00 00: jmp 0x5863c1dd
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 14ch], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 A7 1F ED FF: call 0x5850e020
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x1f
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 108h]
        mov ecx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes E8 E9 18 ED FF: call 0x5850d970
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 10h]
        sub edx, eax
        mov dword ptr [ebp - 118h], edx
        ; Exact mapped bytes F2 0F 2A 85 E8 FE FF FF: cvtsi2sd xmm0, dword ptr [ebp - 0x118]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 118h]
        shr eax, 1fh
        ; Exact mapped bytes F2 0F 58 04 C5 70 4D 89 58: addsd xmm0, qword ptr [eax*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0xc5
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 85 74 FE FF FF: movsd qword ptr [ebp - 0x18c], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 5A 85 74 FE FF FF: cvtsd2ss xmm0, qword ptr [ebp - 0x18c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 108h]
        mov ecx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes F3 0F 11 85 B0 FE FF FF: movss dword ptr [ebp - 0x150], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 FE 18 ED FF: call 0x5850d9d0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x18
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 11ch], eax
        ; Exact mapped bytes F2 0F 2A 85 E4 FE FF FF: cvtsi2sd xmm0, dword ptr [ebp - 0x11c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 11ch]
        shr edx, 1fh
        ; Exact mapped bytes F2 0F 58 04 D5 70 4D 89 58: addsd xmm0, qword ptr [edx*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0xd5
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 85 6C FE FF FF: movsd qword ptr [ebp - 0x194], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x6c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 5A 85 6C FE FF FF: cvtsd2ss xmm0, qword ptr [ebp - 0x194]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0x85
        __asm _emit 0x6c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 10 8D B0 FE FF FF: movss xmm1, dword ptr [ebp - 0x150]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x8d
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 5E C8: divss xmm1, xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 28 C1: movaps xmm0, xmm1
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0xc1
        ; Exact mapped bytes E8 BA 52 1F 00: call 0x588313d0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x52
        __asm _emit 0x1f
        __asm _emit 0x00
        mov dword ptr [ebp - 10ch], eax
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 E6 19 ED FF: call 0x5850db10
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x19
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 120h], eax
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 154h], edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 E2 1C ED FF: call 0x5850de30
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x1c
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 158h], edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 04 1E ED FF: call 0x5850df70
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x1e
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 160h], edx
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 27 19 ED FF: call 0x5850dab0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x19
        __asm _emit 0xed
        __asm _emit 0xff
        add eax, dword ptr [ebp - 10ch]
        mov dword ptr [ebp - 15ch], eax
        mov ecx, dword ptr [ebp - 15ch]
        push ecx
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes E8 E9 1C ED FF: call 0x5850de90
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x1c
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 164h], eax
        mov ecx, dword ptr [ebp - 108h]
        movzx edx, byte ptr [ecx + 21ch]
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx*4 + 120h]
        push ecx
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 44 1E ED FF: call 0x5850e020
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x1e
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 108h]
        mov dword ptr [edx + 0d0h], 0
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + 0f4h]
        mov dword ptr [ebp - 168h], ecx
        push 0
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 84 EF 17 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xef
        __asm _emit 0x17
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + 0bch]
        mov dword ptr [ebp - 16ch], eax
        push 0
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 05 86 18 00: call 0x587c4830
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 108h]
        mov dword ptr [ecx + 0c8h], 0
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + 0f4h]
        mov dword ptr [ebp - 174h], eax
        push 23h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 76 88 E4 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x88
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 170h], eax
        mov ecx, dword ptr [ebp - 170h]
        push ecx
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 4E 35 E6 FF: call 0x5849f7c0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x35
        __asm _emit 0xe6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + 0bch]
        mov dword ptr [ebp - 178h], eax
        push 0ffffffh
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes E8 4C 9E E4 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x9e
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 B1 4D 1F 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x4d
        __asm _emit 0x1f
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
