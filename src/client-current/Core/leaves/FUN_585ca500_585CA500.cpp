// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585CA500 .. +0x251 bytes.
extern "C" __declspec(naked) void FUN_585ca500_585CA500() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58885bd7h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 54h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes F3 0F 11 45 D8: movss dword ptr [ebp - 0x28], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 21a9ch], 0
        ; Exact mapped bytes 0F 84 FA 01 00 00: je 0x585ca740
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 6C 8D 94 58: mov edx, dword ptr [0x58948d6c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x58
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
        ; Exact mapped bytes F2 0F 11 45 A8: movsd qword ptr [ebp - 0x58], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes F2 0F 5A 45 A8: cvtsd2ss xmm0, qword ptr [ebp - 0x58]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes F3 0F 5E 05 2C 3E 8A 58: divss xmm0, dword ptr [0x588a3e2c]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x05
        __asm _emit 0x2c
        __asm _emit 0x3e
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 59 05 28 3E 8A 58: mulss xmm0, dword ptr [0x588a3e28]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0x28
        __asm _emit 0x3e
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 11 45 D8: movss dword ptr [ebp - 0x28], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D3 1D EC FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x1d
        __asm _emit 0xec
        __asm _emit 0xff
        imul ecx, eax, 11h
        add ecx, 3
        push ecx
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 12 17 EC FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x17
        __asm _emit 0xec
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 64h
        div ecx
        add edx, 1
        mov dword ptr [ebp - 24h], edx
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
        ; Exact mapped bytes F2 0F 11 45 A0: movsd qword ptr [ebp - 0x60], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xa0
        ; Exact mapped bytes F2 0F 5A 45 A0: cvtsd2ss xmm0, qword ptr [ebp - 0x60]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0x45
        __asm _emit 0xa0
        ; Exact mapped bytes F3 0F 10 4D D8: movss xmm1, dword ptr [ebp - 0x28]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact mapped bytes 0F 2F C8: comiss xmm1, xmm0
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0xc8
        ; Exact mapped bytes 72 0B: jb 0x585ca5e0
        __asm _emit 0x72
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 10h]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 8E 56 01 00 00: jle 0x585ca740
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [ebp + 8]
        mov byte ptr [ebp - 18h], al
        cmp byte ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 0E: je 0x585ca604
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp byte ptr [ebp - 18h], 1
        ; Exact mapped bytes 74 19: je 0x585ca615
        __asm _emit 0x74
        __asm _emit 0x19
        cmp byte ptr [ebp - 18h], 2
        ; Exact mapped bytes 74 24: je 0x585ca626
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes EB 31: jmp 0x585ca635
        __asm _emit 0xeb
        __asm _emit 0x31
        imul eax, dword ptr [ebp - 10h], 64h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 20: jmp 0x585ca635
        __asm _emit 0xeb
        __asm _emit 0x20
        imul eax, dword ptr [ebp - 10h], 28h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 0F: jmp 0x585ca635
        __asm _emit 0xeb
        __asm _emit 0x0f
        imul eax, dword ptr [ebp - 10h], 46h
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 21aa8h]
        sub eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 21aa8h], eax
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 21aa8h], 0
        ; Exact mapped bytes 7D 0D: jge 0x585ca663
        __asm _emit 0x7d
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 21aa8h], 0
        push 11ch
        ; Exact mapped bytes E8 97 69 26 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x69
        __asm _emit 0x26
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 66: je 0x585ca6e6
        __asm _emit 0x74
        __asm _emit 0x66
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 34h], edx
        ; Exact mapped bytes E8 DE 65 28 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x65
        __asm _emit 0x28
        __asm _emit 0x00
        cdq
        mov ecx, 32h
        idiv ecx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax]
        sub ecx, edx
        mov dword ptr [ebp - 38h], ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 35 C3 EB FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xc3
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        push 0ceh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 12 A4 EB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xa4
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        push 40h
        mov edx, dword ptr [ebp - 34h]
        push edx
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        mov edx, dword ptr [ebp - 40h]
        push edx
        push 0ah
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 9F B6 EF FF: call 0x584c5d80
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xb6
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x585ca6ed
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 44h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 50h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 10d34h]
        mov dword ptr [ebp - 48h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 21aa8h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 42 9A F3 FF: call 0x58504160
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x9a
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx ecx, word ptr [ebp - 1ch]
        shl ecx, 10h
        movzx edx, word ptr [ebp - 10h]
        or ecx, edx
        mov dword ptr [ebp - 4ch], ecx
        mov eax, dword ptr [ebp - 4ch]
        push eax
        push 0
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 81 37 FB FF: call 0x5857dec0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x37
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
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
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
