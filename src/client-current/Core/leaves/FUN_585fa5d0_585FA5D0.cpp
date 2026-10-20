// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585FA5D0 .. +0x81B bytes.
extern "C" __declspec(naked) void FUN_585fa5d0_585FA5D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 13ch
        mov dword ptr [ebp - 74h], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes F3 0F 11 45 F8: movss dword ptr [ebp - 8], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CA C3 E8 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xc3
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 03 12 00 00: call 0x585fb800
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, 55555555h
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes F2 0F 2A 45 F0: cvtsi2sd xmm0, dword ptr [ebp - 0x10]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xf0
        mov eax, dword ptr [ebp - 10h]
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
        ; Exact mapped bytes F2 0F 11 45 84: movsd qword ptr [ebp - 0x7c], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x84
        ; Exact mapped bytes F2 0F 5A 45 84: cvtsd2ss xmm0, qword ptr [ebp - 0x7c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0x45
        __asm _emit 0x84
        ; Exact mapped bytes F3 0F 5E 05 60 4D 89 58: divss xmm0, dword ptr [0x58894d60]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x05
        __asm _emit 0x60
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes E8 A0 6D 23 00: call 0x588313d0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x6d
        __asm _emit 0x23
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F2 B2 E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xb2
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 4
        ; Exact mapped bytes 75 12: jne 0x585fa655
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes F3 0F 10 05 94 5A 89 58: movss xmm0, dword ptr [0x58895a94]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x94
        __asm _emit 0x5a
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 45 F8: movss dword ptr [ebp - 8], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes E9 99 00 00 00: jmp 0x585fa6ee
        __asm _emit 0xe9
        __asm _emit 0x99
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
        ; Exact mapped bytes E8 D0 B2 E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xb2
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 6
        ; Exact mapped bytes 75 0F: jne 0x585fa674
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes F3 0F 10 05 94 5A 89 58: movss xmm0, dword ptr [0x58895a94]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x94
        __asm _emit 0x5a
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 45 F8: movss dword ptr [ebp - 8], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes EB 7A: jmp 0x585fa6ee
        __asm _emit 0xeb
        __asm _emit 0x7a
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B1 B2 E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xb2
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 0ah
        ; Exact mapped bytes 75 0F: jne 0x585fa693
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes F3 0F 10 05 94 5A 89 58: movss xmm0, dword ptr [0x58895a94]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x94
        __asm _emit 0x5a
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 45 F8: movss dword ptr [ebp - 8], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes EB 5B: jmp 0x585fa6ee
        __asm _emit 0xeb
        __asm _emit 0x5b
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 92 B2 E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xb2
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 0bh
        ; Exact mapped bytes 75 0F: jne 0x585fa6b2
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes F3 0F 10 05 94 5A 89 58: movss xmm0, dword ptr [0x58895a94]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x94
        __asm _emit 0x5a
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 45 F8: movss dword ptr [ebp - 8], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes EB 3C: jmp 0x585fa6ee
        __asm _emit 0xeb
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 73 B2 E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xb2
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 0eh
        ; Exact mapped bytes 75 0F: jne 0x585fa6d1
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes F3 0F 10 05 94 5A 89 58: movss xmm0, dword ptr [0x58895a94]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x94
        __asm _emit 0x5a
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 45 F8: movss dword ptr [ebp - 8], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes EB 1D: jmp 0x585fa6ee
        __asm _emit 0xeb
        __asm _emit 0x1d
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 54 B2 E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xb2
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 0fh
        ; Exact mapped bytes 75 0D: jne 0x585fa6ee
        __asm _emit 0x75
        __asm _emit 0x0d
        ; Exact mapped bytes F3 0F 10 05 94 5A 89 58: movss xmm0, dword ptr [0x58895a94]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x94
        __asm _emit 0x5a
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 45 F8: movss dword ptr [ebp - 8], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C7 C2 E8 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xc2
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 40 1D E9 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x1d
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D9 A2 E8 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xa2
        __asm _emit 0xe8
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        sub eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 8
        ; Exact mapped bytes 0F 87 BC 06 00 00: ja 0x585fade4
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xbc
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 24 8D EC AD 5F 58: jmp dword ptr [ecx*4 + 0x585fadec]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xec
        __asm _emit 0xad
        __asm _emit 0x5f
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes F2 0F 2A 45 EC: cvtsi2sd xmm0, dword ptr [ebp - 0x14]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xec
        mov eax, dword ptr [ebp - 14h]
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
        ; Exact mapped bytes F2 0F 11 85 7C FF FF FF: movsd qword ptr [ebp - 0x84], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 5A 85 7C FF FF FF: cvtsd2ss xmm0, qword ptr [ebp - 0x84]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0x85
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 59 45 F8: mulss xmm0, dword ptr [ebp - 8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes E8 6A 6C 23 00: call 0x588313d0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x6c
        __asm _emit 0x23
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E9 76 06 00 00: jmp 0x585fade4
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes F2 0F 2A 45 E8: cvtsi2sd xmm0, dword ptr [ebp - 0x18]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xe8
        mov edx, dword ptr [ebp - 18h]
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
        ; Exact mapped bytes F2 0F 11 85 74 FF FF FF: movsd qword ptr [ebp - 0x8c], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 5A 85 74 FF FF FF: cvtsd2ss xmm0, qword ptr [ebp - 0x8c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 59 45 F8: mulss xmm0, dword ptr [ebp - 8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes E8 2E 6C 23 00: call 0x588313d0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x6c
        __asm _emit 0x23
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E9 3A 06 00 00: jmp 0x585fade4
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes F2 0F 2A 45 E4: cvtsi2sd xmm0, dword ptr [ebp - 0x1c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xe4
        mov ecx, dword ptr [ebp - 1ch]
        shr ecx, 1fh
        ; Exact mapped bytes F2 0F 58 04 CD 70 4D 89 58: addsd xmm0, qword ptr [ecx*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0xcd
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 85 6C FF FF FF: movsd qword ptr [ebp - 0x94], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 5A 85 6C FF FF FF: cvtsd2ss xmm0, qword ptr [ebp - 0x94]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0x85
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 59 45 F8: mulss xmm0, dword ptr [ebp - 8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes E8 F2 6B 23 00: call 0x588313d0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x6b
        __asm _emit 0x23
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E9 FE 05 00 00: jmp 0x585fade4
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 20h], edx
        ; Exact mapped bytes F2 0F 2A 45 E0: cvtsi2sd xmm0, dword ptr [ebp - 0x20]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 20h]
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
        ; Exact mapped bytes F2 0F 11 85 64 FF FF FF: movsd qword ptr [ebp - 0x9c], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 5A 85 64 FF FF FF: cvtsd2ss xmm0, qword ptr [ebp - 0x9c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 59 45 F8: mulss xmm0, dword ptr [ebp - 8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes E8 B6 6B 23 00: call 0x588313d0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x6b
        __asm _emit 0x23
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E9 C2 05 00 00: jmp 0x585fade4
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes F2 0F 2A 45 DC: cvtsi2sd xmm0, dword ptr [ebp - 0x24]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xdc
        mov edx, dword ptr [ebp - 24h]
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
        ; Exact mapped bytes F2 0F 11 85 5C FF FF FF: movsd qword ptr [ebp - 0xa4], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 5A 85 5C FF FF FF: cvtsd2ss xmm0, qword ptr [ebp - 0xa4]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0x85
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 59 45 F8: mulss xmm0, dword ptr [ebp - 8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes E8 7A 6B 23 00: call 0x588313d0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x6b
        __asm _emit 0x23
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E9 86 05 00 00: jmp 0x585fade4
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes F2 0F 2A 45 D8: cvtsi2sd xmm0, dword ptr [ebp - 0x28]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp - 28h]
        shr ecx, 1fh
        ; Exact mapped bytes F2 0F 58 04 CD 70 4D 89 58: addsd xmm0, qword ptr [ecx*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0xcd
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 85 54 FF FF FF: movsd qword ptr [ebp - 0xac], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 5A 85 54 FF FF FF: cvtsd2ss xmm0, qword ptr [ebp - 0xac]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0x85
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 59 45 F8: mulss xmm0, dword ptr [ebp - 8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes E8 3E 6B 23 00: call 0x588313d0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x6b
        __asm _emit 0x23
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E9 4A 05 00 00: jmp 0x585fade4
        __asm _emit 0xe9
        __asm _emit 0x4a
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8B B0 E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xb0
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 6
        ; Exact mapped bytes 75 3C: jne 0x585fa8e6
        __asm _emit 0x75
        __asm _emit 0x3c
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 2ch], edx
        ; Exact mapped bytes F2 0F 2A 45 D4: cvtsi2sd xmm0, dword ptr [ebp - 0x2c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xd4
        mov eax, dword ptr [ebp - 2ch]
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
        ; Exact mapped bytes F2 0F 11 85 4C FF FF FF: movsd qword ptr [ebp - 0xb4], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 5A 85 4C FF FF FF: cvtsd2ss xmm0, qword ptr [ebp - 0xb4]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0x85
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 59 45 F8: mulss xmm0, dword ptr [ebp - 8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes E8 F2 6A 23 00: call 0x588313d0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x6a
        __asm _emit 0x23
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E9 74 01 00 00: jmp 0x585faa5a
        __asm _emit 0xe9
        __asm _emit 0x74
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
        ; Exact mapped bytes E8 3F B0 E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xb0
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 0ah
        ; Exact mapped bytes 75 3C: jne 0x585fa932
        __asm _emit 0x75
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 30h], ecx
        ; Exact mapped bytes F2 0F 2A 45 D0: cvtsi2sd xmm0, dword ptr [ebp - 0x30]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xd0
        mov edx, dword ptr [ebp - 30h]
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
        ; Exact mapped bytes F2 0F 11 85 44 FF FF FF: movsd qword ptr [ebp - 0xbc], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 5A 85 44 FF FF FF: cvtsd2ss xmm0, qword ptr [ebp - 0xbc]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0x85
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 59 45 F8: mulss xmm0, dword ptr [ebp - 8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes E8 A6 6A 23 00: call 0x588313d0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x6a
        __asm _emit 0x23
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E9 28 01 00 00: jmp 0x585faa5a
        __asm _emit 0xe9
        __asm _emit 0x28
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
        ; Exact mapped bytes E8 F3 AF E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xaf
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 4
        ; Exact mapped bytes 75 3C: jne 0x585fa97e
        __asm _emit 0x75
        __asm _emit 0x3c
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes F2 0F 2A 45 CC: cvtsi2sd xmm0, dword ptr [ebp - 0x34]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xcc
        mov ecx, dword ptr [ebp - 34h]
        shr ecx, 1fh
        ; Exact mapped bytes F2 0F 58 04 CD 70 4D 89 58: addsd xmm0, qword ptr [ecx*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0xcd
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 85 3C FF FF FF: movsd qword ptr [ebp - 0xc4], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 5A 85 3C FF FF FF: cvtsd2ss xmm0, qword ptr [ebp - 0xc4]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0x85
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 59 45 F8: mulss xmm0, dword ptr [ebp - 8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes E8 5A 6A 23 00: call 0x588313d0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x6a
        __asm _emit 0x23
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E9 DC 00 00 00: jmp 0x585faa5a
        __asm _emit 0xe9
        __asm _emit 0xdc
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
        ; Exact mapped bytes E8 A7 AF E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xaf
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 0bh
        ; Exact mapped bytes 75 3C: jne 0x585fa9ca
        __asm _emit 0x75
        __asm _emit 0x3c
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 38h], edx
        ; Exact mapped bytes F2 0F 2A 45 C8: cvtsi2sd xmm0, dword ptr [ebp - 0x38]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xc8
        mov eax, dword ptr [ebp - 38h]
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
        ; Exact mapped bytes F2 0F 11 85 34 FF FF FF: movsd qword ptr [ebp - 0xcc], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 5A 85 34 FF FF FF: cvtsd2ss xmm0, qword ptr [ebp - 0xcc]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0x85
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 59 45 F8: mulss xmm0, dword ptr [ebp - 8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes E8 0E 6A 23 00: call 0x588313d0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x6a
        __asm _emit 0x23
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E9 90 00 00 00: jmp 0x585faa5a
        __asm _emit 0xe9
        __asm _emit 0x90
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
        ; Exact mapped bytes E8 5B AF E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xaf
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 0eh
        ; Exact mapped bytes 75 39: jne 0x585faa13
        __asm _emit 0x75
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 3ch], ecx
        ; Exact mapped bytes F2 0F 2A 45 C4: cvtsi2sd xmm0, dword ptr [ebp - 0x3c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xc4
        mov edx, dword ptr [ebp - 3ch]
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
        ; Exact mapped bytes F2 0F 11 85 2C FF FF FF: movsd qword ptr [ebp - 0xd4], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x2c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 5A 85 2C FF FF FF: cvtsd2ss xmm0, qword ptr [ebp - 0xd4]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0x85
        __asm _emit 0x2c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 59 45 F8: mulss xmm0, dword ptr [ebp - 8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes E8 C2 69 23 00: call 0x588313d0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x69
        __asm _emit 0x23
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 47: jmp 0x585faa5a
        __asm _emit 0xeb
        __asm _emit 0x47
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 12 AF E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xaf
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 0fh
        ; Exact mapped bytes 75 37: jne 0x585faa5a
        __asm _emit 0x75
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes F2 0F 2A 45 C0: cvtsi2sd xmm0, dword ptr [ebp - 0x40]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xc0
        mov ecx, dword ptr [ebp - 40h]
        shr ecx, 1fh
        ; Exact mapped bytes F2 0F 58 04 CD 70 4D 89 58: addsd xmm0, qword ptr [ecx*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0xcd
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 85 24 FF FF FF: movsd qword ptr [ebp - 0xdc], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 5A 85 24 FF FF FF: cvtsd2ss xmm0, qword ptr [ebp - 0xdc]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0x85
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 59 45 F8: mulss xmm0, dword ptr [ebp - 8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes E8 79 69 23 00: call 0x588313d0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x69
        __asm _emit 0x23
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E9 85 03 00 00: jmp 0x585fade4
        __asm _emit 0xe9
        __asm _emit 0x85
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
        ; Exact mapped bytes E8 C6 AE E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xae
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 6
        ; Exact mapped bytes 75 3C: jne 0x585faaab
        __asm _emit 0x75
        __asm _emit 0x3c
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 44h], edx
        ; Exact mapped bytes F2 0F 2A 45 BC: cvtsi2sd xmm0, dword ptr [ebp - 0x44]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xbc
        mov eax, dword ptr [ebp - 44h]
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
        ; Exact mapped bytes F2 0F 11 85 1C FF FF FF: movsd qword ptr [ebp - 0xe4], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 5A 85 1C FF FF FF: cvtsd2ss xmm0, qword ptr [ebp - 0xe4]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0x85
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 59 45 F8: mulss xmm0, dword ptr [ebp - 8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes E8 2D 69 23 00: call 0x588313d0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x69
        __asm _emit 0x23
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E9 74 01 00 00: jmp 0x585fac1f
        __asm _emit 0xe9
        __asm _emit 0x74
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
        ; Exact mapped bytes E8 7A AE E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xae
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 0ah
        ; Exact mapped bytes 75 3C: jne 0x585faaf7
        __asm _emit 0x75
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 48h], ecx
        ; Exact mapped bytes F2 0F 2A 45 B8: cvtsi2sd xmm0, dword ptr [ebp - 0x48]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xb8
        mov edx, dword ptr [ebp - 48h]
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
        ; Exact mapped bytes F2 0F 11 85 14 FF FF FF: movsd qword ptr [ebp - 0xec], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 5A 85 14 FF FF FF: cvtsd2ss xmm0, qword ptr [ebp - 0xec]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 59 45 F8: mulss xmm0, dword ptr [ebp - 8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes E8 E1 68 23 00: call 0x588313d0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x68
        __asm _emit 0x23
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E9 28 01 00 00: jmp 0x585fac1f
        __asm _emit 0xe9
        __asm _emit 0x28
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
        ; Exact mapped bytes E8 2E AE E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xae
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 4
        ; Exact mapped bytes 75 3C: jne 0x585fab43
        __asm _emit 0x75
        __asm _emit 0x3c
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes F2 0F 2A 45 B4: cvtsi2sd xmm0, dword ptr [ebp - 0x4c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xb4
        mov ecx, dword ptr [ebp - 4ch]
        shr ecx, 1fh
        ; Exact mapped bytes F2 0F 58 04 CD 70 4D 89 58: addsd xmm0, qword ptr [ecx*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0xcd
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 85 0C FF FF FF: movsd qword ptr [ebp - 0xf4], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 5A 85 0C FF FF FF: cvtsd2ss xmm0, qword ptr [ebp - 0xf4]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 59 45 F8: mulss xmm0, dword ptr [ebp - 8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes E8 95 68 23 00: call 0x588313d0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x68
        __asm _emit 0x23
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E9 DC 00 00 00: jmp 0x585fac1f
        __asm _emit 0xe9
        __asm _emit 0xdc
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
        ; Exact mapped bytes E8 E2 AD E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xad
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 0bh
        ; Exact mapped bytes 75 3C: jne 0x585fab8f
        __asm _emit 0x75
        __asm _emit 0x3c
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 50h], edx
        ; Exact mapped bytes F2 0F 2A 45 B0: cvtsi2sd xmm0, dword ptr [ebp - 0x50]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xb0
        mov eax, dword ptr [ebp - 50h]
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
        ; Exact mapped bytes F2 0F 11 85 04 FF FF FF: movsd qword ptr [ebp - 0xfc], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 5A 85 04 FF FF FF: cvtsd2ss xmm0, qword ptr [ebp - 0xfc]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 59 45 F8: mulss xmm0, dword ptr [ebp - 8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes E8 49 68 23 00: call 0x588313d0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x68
        __asm _emit 0x23
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E9 90 00 00 00: jmp 0x585fac1f
        __asm _emit 0xe9
        __asm _emit 0x90
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
        ; Exact mapped bytes E8 96 AD E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xad
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 0eh
        ; Exact mapped bytes 75 39: jne 0x585fabd8
        __asm _emit 0x75
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 54h], ecx
        ; Exact mapped bytes F2 0F 2A 45 AC: cvtsi2sd xmm0, dword ptr [ebp - 0x54]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xac
        mov edx, dword ptr [ebp - 54h]
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
        ; Exact mapped bytes F2 0F 11 85 FC FE FF FF: movsd qword ptr [ebp - 0x104], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 5A 85 FC FE FF FF: cvtsd2ss xmm0, qword ptr [ebp - 0x104]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 59 45 F8: mulss xmm0, dword ptr [ebp - 8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes E8 FD 67 23 00: call 0x588313d0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x67
        __asm _emit 0x23
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 47: jmp 0x585fac1f
        __asm _emit 0xeb
        __asm _emit 0x47
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4D AD E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xad
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 0fh
        ; Exact mapped bytes 75 37: jne 0x585fac1f
        __asm _emit 0x75
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes F2 0F 2A 45 A8: cvtsi2sd xmm0, dword ptr [ebp - 0x58]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xa8
        mov ecx, dword ptr [ebp - 58h]
        shr ecx, 1fh
        ; Exact mapped bytes F2 0F 58 04 CD 70 4D 89 58: addsd xmm0, qword ptr [ecx*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0xcd
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 85 F4 FE FF FF: movsd qword ptr [ebp - 0x10c], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 5A 85 F4 FE FF FF: cvtsd2ss xmm0, qword ptr [ebp - 0x10c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0x85
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 59 45 F8: mulss xmm0, dword ptr [ebp - 8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes E8 B4 67 23 00: call 0x588313d0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x67
        __asm _emit 0x23
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E9 C0 01 00 00: jmp 0x585fade4
        __asm _emit 0xe9
        __asm _emit 0xc0
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
        ; Exact mapped bytes E8 01 AD E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xad
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 6
        ; Exact mapped bytes 75 3C: jne 0x585fac70
        __asm _emit 0x75
        __asm _emit 0x3c
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 5ch], edx
        ; Exact mapped bytes F2 0F 2A 45 A4: cvtsi2sd xmm0, dword ptr [ebp - 0x5c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xa4
        mov eax, dword ptr [ebp - 5ch]
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
        ; Exact mapped bytes F2 0F 11 85 EC FE FF FF: movsd qword ptr [ebp - 0x114], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 5A 85 EC FE FF FF: cvtsd2ss xmm0, qword ptr [ebp - 0x114]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 59 45 F8: mulss xmm0, dword ptr [ebp - 8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes E8 68 67 23 00: call 0x588313d0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x67
        __asm _emit 0x23
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E9 74 01 00 00: jmp 0x585fade4
        __asm _emit 0xe9
        __asm _emit 0x74
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
        ; Exact mapped bytes E8 B5 AC E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xac
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 0ah
        ; Exact mapped bytes 75 3C: jne 0x585facbc
        __asm _emit 0x75
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 60h], ecx
        ; Exact mapped bytes F2 0F 2A 45 A0: cvtsi2sd xmm0, dword ptr [ebp - 0x60]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xa0
        mov edx, dword ptr [ebp - 60h]
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
        ; Exact mapped bytes F2 0F 11 85 E4 FE FF FF: movsd qword ptr [ebp - 0x11c], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 5A 85 E4 FE FF FF: cvtsd2ss xmm0, qword ptr [ebp - 0x11c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 59 45 F8: mulss xmm0, dword ptr [ebp - 8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes E8 1C 67 23 00: call 0x588313d0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x67
        __asm _emit 0x23
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E9 28 01 00 00: jmp 0x585fade4
        __asm _emit 0xe9
        __asm _emit 0x28
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
        ; Exact mapped bytes E8 69 AC E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xac
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 4
        ; Exact mapped bytes 75 3C: jne 0x585fad08
        __asm _emit 0x75
        __asm _emit 0x3c
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes F2 0F 2A 45 9C: cvtsi2sd xmm0, dword ptr [ebp - 0x64]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0x9c
        mov ecx, dword ptr [ebp - 64h]
        shr ecx, 1fh
        ; Exact mapped bytes F2 0F 58 04 CD 70 4D 89 58: addsd xmm0, qword ptr [ecx*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0xcd
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 85 DC FE FF FF: movsd qword ptr [ebp - 0x124], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 5A 85 DC FE FF FF: cvtsd2ss xmm0, qword ptr [ebp - 0x124]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 59 45 F8: mulss xmm0, dword ptr [ebp - 8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes E8 D0 66 23 00: call 0x588313d0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E9 DC 00 00 00: jmp 0x585fade4
        __asm _emit 0xe9
        __asm _emit 0xdc
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
        ; Exact mapped bytes E8 1D AC E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xac
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 0bh
        ; Exact mapped bytes 75 3C: jne 0x585fad54
        __asm _emit 0x75
        __asm _emit 0x3c
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 68h], edx
        ; Exact mapped bytes F2 0F 2A 45 98: cvtsi2sd xmm0, dword ptr [ebp - 0x68]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0x98
        mov eax, dword ptr [ebp - 68h]
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
        ; Exact mapped bytes F2 0F 11 85 D4 FE FF FF: movsd qword ptr [ebp - 0x12c], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 5A 85 D4 FE FF FF: cvtsd2ss xmm0, qword ptr [ebp - 0x12c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 59 45 F8: mulss xmm0, dword ptr [ebp - 8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes E8 84 66 23 00: call 0x588313d0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E9 90 00 00 00: jmp 0x585fade4
        __asm _emit 0xe9
        __asm _emit 0x90
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
        ; Exact mapped bytes E8 D1 AB E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xab
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 0eh
        ; Exact mapped bytes 75 39: jne 0x585fad9d
        __asm _emit 0x75
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 6ch], ecx
        ; Exact mapped bytes F2 0F 2A 45 94: cvtsi2sd xmm0, dword ptr [ebp - 0x6c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0x94
        mov edx, dword ptr [ebp - 6ch]
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
        ; Exact mapped bytes F2 0F 11 85 CC FE FF FF: movsd qword ptr [ebp - 0x134], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0xcc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 5A 85 CC FE FF FF: cvtsd2ss xmm0, qword ptr [ebp - 0x134]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0x85
        __asm _emit 0xcc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 59 45 F8: mulss xmm0, dword ptr [ebp - 8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes E8 38 66 23 00: call 0x588313d0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 47: jmp 0x585fade4
        __asm _emit 0xeb
        __asm _emit 0x47
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 88 AB E9 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xab
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, 0fh
        ; Exact mapped bytes 75 37: jne 0x585fade4
        __asm _emit 0x75
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes F2 0F 2A 45 90: cvtsi2sd xmm0, dword ptr [ebp - 0x70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0x90
        mov ecx, dword ptr [ebp - 70h]
        shr ecx, 1fh
        ; Exact mapped bytes F2 0F 58 04 CD 70 4D 89 58: addsd xmm0, qword ptr [ecx*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0xcd
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 85 C4 FE FF FF: movsd qword ptr [ebp - 0x13c], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 5A 85 C4 FE FF FF: cvtsd2ss xmm0, qword ptr [ebp - 0x13c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0x85
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F3 0F 59 45 F8: mulss xmm0, dword ptr [ebp - 8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes E8 EF 65 23 00: call 0x588313d0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x65
        __asm _emit 0x23
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
