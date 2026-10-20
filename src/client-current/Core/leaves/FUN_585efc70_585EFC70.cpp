// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585EFC70 .. +0x27D bytes.
extern "C" __declspec(naked) void FUN_585efc70_585EFC70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3A 6D E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x6d
        __asm _emit 0xe9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x585efc8f
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 58 02 00 00: jmp 0x585efee7
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x585efca1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 8
        ; Exact mapped bytes 0F 8D F2 00 00 00: jge 0x585efd9d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + ecx*4 + 290h], 0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 19 C2 E9 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xc2
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 0B: jmp 0x585efcd7
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 5C C4 E9 FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xc4
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 B7 00 00 00: je 0x585efd98
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 C7 D2 E9 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xd2
        __asm _emit 0xe9
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F 85 A1 00 00 00: jne 0x585efd93
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 46 C7 E9 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xc7
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DF 4C E9 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x4c
        __asm _emit 0xe9
        __asm _emit 0xff
        mov eax, dword ptr [eax + 74h]
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes F2 0F 2A 45 EC: cvtsi2sd xmm0, dword ptr [ebp - 0x14]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xec
        mov ecx, dword ptr [ebp - 14h]
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
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 F8 12 26 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x12
        __asm _emit 0x26
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DD 5D C8: fstp qword ptr [ebp - 0x38]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xc8
        ; Exact mapped bytes F2 0F 10 45 C8: movsd xmm0, qword ptr [ebp - 0x38]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xc8
        ; Exact mapped bytes F2 0F 59 05 C8 51 89 58: mulsd xmm0, qword ptr [0x588951c8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0xc8
        __asm _emit 0x51
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 8]
        movzx eax, word ptr [edx + 1c4h]
        ; Exact mapped bytes F2 0F 2A C8: cvtsi2sd xmm1, eax
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc8
        ; Exact mapped bytes F2 0F 59 C1: mulsd xmm0, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc1
        ; Exact mapped bytes F2 0F 11 45 C0: movsd qword ptr [ebp - 0x40], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xc0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 290h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
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
        ; Exact mapped bytes F2 0F 58 45 C0: addsd xmm0, qword ptr [ebp - 0x40]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x45
        __asm _emit 0xc0
        ; Exact mapped bytes E8 1A 18 24 00: call 0x588315a0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x18
        __asm _emit 0x24
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + ecx*4 + 290h], eax
        ; Exact mapped bytes E9 34 FF FF FF: jmp 0x585efccc
        __asm _emit 0xe9
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 FB FE FF FF: jmp 0x585efc98
        __asm _emit 0xe9
        __asm _emit 0xfb
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 18 6C E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x6c
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 01 D2 E9 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xd2
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 03 6C E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x6c
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7C C6 E9 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xc6
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 15 4C E9 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xe9
        __asm _emit 0xff
        mov eax, dword ptr [eax + 74h]
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
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 2E 12 26 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x12
        __asm _emit 0x26
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DD 5D B8: fstp qword ptr [ebp - 0x48]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xb8
        ; Exact mapped bytes F2 0F 10 45 B8: movsd xmm0, qword ptr [ebp - 0x48]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xb8
        ; Exact mapped bytes F2 0F 59 05 C8 51 89 58: mulsd xmm0, qword ptr [0x588951c8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0xc8
        __asm _emit 0x51
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 8]
        movzx eax, word ptr [edx + 1c4h]
        ; Exact mapped bytes F2 0F 2A C8: cvtsi2sd xmm1, eax
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc8
        ; Exact mapped bytes F2 0F 59 C1: mulsd xmm0, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc1
        ; Exact mapped bytes E8 84 17 24 00: call 0x588315a0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x17
        __asm _emit 0x24
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x585efe38
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 8
        ; Exact mapped bytes 7D 1D: jge 0x585efe5b
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 74 13: je 0x585efe59
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 10h]
        add edx, dword ptr [ecx + eax*4 + 290h]
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes EB D4: jmp 0x585efe2f
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov esi, dword ptr [ebp - 10h]
        imul esi, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 53 6B E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x6b
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3C D1 E9 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xd1
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        mov edi, dword ptr [ebp - 8]
        mov eax, esi
        xor edx, edx
        div dword ptr [edi + ecx*4 + 290h]
        mov dword ptr [ebp - 20h], eax
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8A 6B 00 00: call 0x585f6a20
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x6b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4B 6B 00 00: call 0x585f69f0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x6b
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x585efeb8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 8
        ; Exact mapped bytes 7D 29: jge 0x585efee7
        __asm _emit 0x7d
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 174h]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 290h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 7C 32 11 00: call 0x58703160
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x32
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB C8: jmp 0x585efeaf
        __asm _emit 0xeb
        __asm _emit 0xc8
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
