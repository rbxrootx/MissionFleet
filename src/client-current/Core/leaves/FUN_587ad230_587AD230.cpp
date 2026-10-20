// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587AD230 .. +0x196 bytes.
extern "C" __declspec(naked) void FUN_587ad230_587AD230() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        test esi, esi
        ; Exact mapped bytes 0F 84 82 01 00 00: je 0x587ad3bf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 20h], 0
        ; Exact mapped bytes 0F 84 78 01 00 00: je 0x587ad3bf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 24h], 0
        ; Exact mapped bytes 0F 84 6E 01 00 00: je 0x587ad3bf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 63 01 00 00: je 0x587ad3bf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax], esi
        ; Exact mapped bytes 0F 85 5B 01 00 00: jne 0x587ad3bf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 4]
        cmp eax, 2ah
        ; Exact mapped bytes 74 29: je 0x587ad295
        __asm _emit 0x74
        __asm _emit 0x29
        cmp eax, 39h
        ; Exact mapped bytes 74 24: je 0x587ad295
        __asm _emit 0x74
        __asm _emit 0x24
        cmp eax, 45h
        ; Exact mapped bytes 74 1F: je 0x587ad295
        __asm _emit 0x74
        __asm _emit 0x1f
        cmp eax, 49h
        ; Exact mapped bytes 74 1A: je 0x587ad295
        __asm _emit 0x74
        __asm _emit 0x1a
        cmp eax, 5bh
        ; Exact mapped bytes 74 15: je 0x587ad295
        __asm _emit 0x74
        __asm _emit 0x15
        cmp eax, 67h
        ; Exact mapped bytes 74 10: je 0x587ad295
        __asm _emit 0x74
        __asm _emit 0x10
        cmp eax, 71h
        ; Exact mapped bytes 74 0B: je 0x587ad295
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp eax, 29ah
        ; Exact mapped bytes 0F 85 2A 01 00 00: jne 0x587ad3bf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        mov edi, dword ptr [esi + 1ch]
        mov dword ptr [esi + 14h], 0
        mov dword ptr [esi + 8], 0
        mov dword ptr [esi + 18h], 0
        mov dword ptr [esi + 2ch], 2
        mov ecx, dword ptr [edi + 18h]
        mov eax, dword ptr [edi + 8]
        mov dword ptr [edi + 14h], 0
        mov dword ptr [edi + 10h], eax
        test ecx, ecx
        ; Exact mapped bytes 79 05: jns 0x587ad2ce
        __asm _emit 0x79
        __asm _emit 0x05
        neg ecx
        mov dword ptr [edi + 18h], ecx
        cmp ecx, 2
        mov eax, 2ah
        push 0
        mov edx, 39h
        cmove eax, edx
        push 0
        mov dword ptr [edi + 4], eax
        push 0
        ; Exact mapped bytes 75 07: jne 0x587ad2f0
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes E8 82 28 00 00: call 0x587afb70
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 05: jmp 0x587ad2f5
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E8 AB 2C 00 00: call 0x587affa0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [esi + 30h], eax
        mov dword ptr [edi + 28h], 0fffffffeh
        push edi
        ; Exact mapped bytes E8 08 34 00 00: call 0x587b0710
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esi + 1ch]
        xor edx, edx
        mov eax, dword ptr [esi + 2ch]
        mov ecx, dword ptr [esi + 4ch]
        add eax, eax
        mov dword ptr [esi + 3ch], eax
        mov eax, dword ptr [esi + 44h]
        ; Exact mapped bytes 66 89 54 48 FE: mov word ptr [eax + ecx*2 - 2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x48
        __asm _emit 0xfe
        mov eax, dword ptr [esi + 4ch]
        lea eax, [eax*2 - 2]
        push eax
        push edx
        push dword ptr [esi + 44h]
        ; Exact mapped bytes E8 DC FA 09 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xfa
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 84h]
        add esp, 10h
        mov dword ptr [esi + 16c8h], 0
        lea ecx, [eax + eax*2]
        movzx eax, word ptr [ecx*4 + 588b99d2h]
        mov dword ptr [esi + 80h], eax
        movzx eax, word ptr [ecx*4 + 588b99d0h]
        mov dword ptr [esi + 8ch], eax
        movzx eax, word ptr [ecx*4 + 588b99d4h]
        mov dword ptr [esi + 90h], eax
        movzx eax, word ptr [ecx*4 + 588b99d6h]
        mov dword ptr [esi + 7ch], eax
        xor eax, eax
        pop edi
        mov dword ptr [esi + 6ch], 0
        mov dword ptr [esi + 5ch], 0
        mov dword ptr [esi + 74h], 0
        mov dword ptr [esi + 16b4h], 0
        mov dword ptr [esi + 78h], 2
        mov dword ptr [esi + 60h], 2
        mov dword ptr [esi + 68h], 0
        mov dword ptr [esi + 48h], 0
        pop esi
        ret
        mov eax, 0fffffffeh
        pop esi
        ret
    }
}
