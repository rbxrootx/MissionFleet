// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585D9410 .. +0x149 bytes.
extern "C" __declspec(naked) void FUN_585d9410_585D9410() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push esi
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9B D5 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xd5
        __asm _emit 0xea
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 27 01 00 00: je 0x585d9554
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 20f2ch]
        ; Exact mapped bytes E8 85 D5 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xd5
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 0B: jmp 0x585d944b
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 68 2C EB FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x2c
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 FF 00 00 00: je 0x585d9554
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 83 2A EB FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x2a
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 E5 00 00 00: je 0x585d954f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 106fch]
        ; Exact mapped bytes E8 D8 C2 EB FF: call 0x58495750
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xc2
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 E7 C2 EB FF: call 0x58495770
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xc2
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D4 5B EE FF: call 0x584bf070
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x5b
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 19 D5 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xd5
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 12 D5 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xd5
        __asm _emit 0xea
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 08 D5 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xd5
        __asm _emit 0xea
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 24h], esi
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F8 D4 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xd4
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E1 2B EB FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x2b
        __asm _emit 0xeb
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D7 2B EB FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x2b
        __asm _emit 0xeb
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 20h], esi
        ; Exact mapped bytes F2 0F 2A 45 DC: cvtsi2sd xmm0, dword ptr [ebp - 0x24]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes F2 0F 2A 4D DC: cvtsi2sd xmm1, dword ptr [ebp - 0x24]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x4d
        __asm _emit 0xdc
        ; Exact mapped bytes F2 0F 59 C1: mulsd xmm0, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc1
        mov edx, dword ptr [ebp - 20h]
        imul edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes F2 0F 2A CA: cvtsi2sd xmm1, edx
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xca
        ; Exact mapped bytes F2 0F 58 C1: addsd xmm0, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc1
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 18 7B 27 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x7b
        __asm _emit 0x27
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 80 7D 25 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x7d
        __asm _emit 0x25
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 0ch], 100h
        cmp dword ptr [ebp - 14h], 320h
        ; Exact mapped bytes 7D 12: jge 0x585d9535
        __asm _emit 0x7d
        __asm _emit 0x12
        imul eax, dword ptr [ebp - 14h], 0ffh
        cdq
        mov ecx, 320h
        idiv ecx
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 1eh
        ; Exact mapped bytes 7D 07: jge 0x585d9542
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 1eh
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F2 BF 1D 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xbf
        __asm _emit 0x1d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 EC FE FF FF: jmp 0x585d9440
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
