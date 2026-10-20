// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585AD000 .. +0x254 bytes.
extern "C" __declspec(naked) void FUN_585ad000_585AD000() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 60h], 0
        ; Exact mapped bytes 74 0F: je 0x585ad021
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 93 80 EF FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x80
        __asm _emit 0xef
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x585ad028
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp + 8], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 588h]
        mov dword ptr [ebp - 14h], eax
        movzx ecx, byte ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 4F 8F ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x8f
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 60h], 0
        ; Exact mapped bytes 74 2E: je 0x585ad078
        __asm _emit 0x74
        __asm _emit 0x2e
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes E8 8B 79 ED FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x79
        __asm _emit 0xed
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1F: je 0x585ad078
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 7C 79 ED FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x79
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 0C: mov dx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0c
        ; Exact mapped bytes 66 C1 EA 0A: shr dx, 0xa
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 07: jmp 0x585ad07f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x585ad097
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 7D 3D: jge 0x585ad0dc
        __asm _emit 0x7d
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 508h]
        mov dword ptr [ebp - 1ch], eax
        movzx ecx, byte ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 D4 8E ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x8e
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 0c4h]
        mov dword ptr [ebp - 20h], ecx
        movzx edx, byte ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 B7 8E ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x8e
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB B2: jmp 0x585ad08e
        __asm _emit 0xeb
        __asm _emit 0xb2
        ; Exact mapped bytes EB 09: jmp 0x585ad0e7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 1ch
        ; Exact mapped bytes 7D 37: jge 0x585ad124
        __asm _emit 0x7d
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 508h]
        mov dword ptr [ebp - 24h], eax
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 89 8E ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 0c4h]
        mov dword ptr [ebp - 28h], eax
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 6F 8E ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x8e
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BA: jmp 0x585ad0de
        __asm _emit 0xeb
        __asm _emit 0xba
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 60h], 0
        ; Exact mapped bytes 0F 84 D5 00 00 00: je 0x585ad206
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 60h]
        ; Exact mapped bytes E8 A4 78 ED FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x78
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [eax + 270h]
        shr eax, 1bh
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 4], 1ch
        ; Exact mapped bytes EB 09: jmp 0x585ad15a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 1fh
        ; Exact mapped bytes 0F 8F A2 00 00 00: jg 0x585ad206
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 60h]
        ; Exact mapped bytes E8 71 78 ED FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x78
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, 20h
        sub ecx, dword ptr [ebp - 4]
        sub ecx, 1
        mov eax, dword ptr [eax + 270h]
        shr eax, cl
        and eax, 1
        ; Exact mapped bytes 74 3D: je 0x585ad1c4
        __asm _emit 0x74
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 508h]
        mov dword ptr [ebp - 2ch], eax
        movzx ecx, byte ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 EC 8D ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x8d
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 0c4h]
        mov dword ptr [ebp - 30h], ecx
        movzx edx, byte ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 CF 8D ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x8d
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 35: jmp 0x585ad1f9
        __asm _emit 0xeb
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 508h]
        mov dword ptr [ebp - 34h], edx
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 B2 8D ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x8d
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 0c4h]
        mov dword ptr [ebp - 38h], edx
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 98 8D ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x8d
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 10h]
        shr eax, 1
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes E9 4B FF FF FF: jmp 0x585ad151
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 09: jmp 0x585ad211
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 20h
        ; Exact mapped bytes 7D 37: jge 0x585ad24e
        __asm _emit 0x7d
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 508h]
        mov dword ptr [ebp - 3ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 5F 8D ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x8d
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 0c4h]
        mov dword ptr [ebp - 40h], ecx
        push 0
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 45 8D ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x8d
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BA: jmp 0x585ad208
        __asm _emit 0xeb
        __asm _emit 0xba
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
