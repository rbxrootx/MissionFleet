// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100FAF20 .. +0x120 bytes.
extern "C" __declspec(naked) void FUN_100faf20_100FAF20() {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr [edi + 14h]
        test esi, esi
        ; Exact mapped bytes 0F 84 0A 01 00 00: je 0x100fb03a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 10h]
        mov eax, dword ptr [esi + 0ch]
        cmp dword ptr [eax + 50h], edx
        ; Exact mapped bytes 74 0D: je 0x100faf49
        __asm _emit 0x74
        __asm _emit 0x0d
        mov esi, dword ptr [esi + 8]
        test esi, esi
        ; Exact mapped bytes 75 F1: jne 0x100faf34
        __asm _emit 0x75
        __asm _emit 0xf1
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes A1 08 57 1C 10: mov eax, dword ptr [0x101c5708]
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ebx, dword ptr [esi + 0ch]
        cmp dword ptr [eax + 60h], ebx
        ; Exact mapped bytes 75 07: jne 0x100faf5d
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [eax + 60h], 0
        mov eax, dword ptr [ebx + 0e8h]
        cmp eax, -1
        ; Exact mapped bytes 75 52: jne 0x100fafba
        __asm _emit 0x75
        __asm _emit 0x52
        mov ecx, dword ptr [edi + 24h]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 8E 00 00 00: je 0x100fb001
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 0ch]
        cmp dword ptr [eax + 50h], edx
        ; Exact mapped bytes 74 09: je 0x100faf84
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ecx + 8]
        test ecx, ecx
        ; Exact mapped bytes 75 F1: jne 0x100faf73
        __asm _emit 0x75
        __asm _emit 0xf1
        ; Exact mapped bytes EB 7D: jmp 0x100fb001
        __asm _emit 0xeb
        __asm _emit 0x7d
        test ecx, ecx
        ; Exact mapped bytes 74 79: je 0x100fb001
        __asm _emit 0x74
        __asm _emit 0x79
        mov eax, dword ptr [ecx + 4]
        mov edx, dword ptr [ecx + 8]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100faf97
        __asm _emit 0x74
        __asm _emit 0x05
        mov dword ptr [eax + 8], edx
        ; Exact mapped bytes EB 03: jmp 0x100faf9a
        __asm _emit 0xeb
        __asm _emit 0x03
        mov dword ptr [edi + 24h], edx
        test edx, edx
        ; Exact mapped bytes 74 0E: je 0x100fafac
        __asm _emit 0x74
        __asm _emit 0x0e
        mov dword ptr [edx + 4], eax
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        dec dword ptr [edi + 2ch]
        ; Exact mapped bytes EB 55: jmp 0x100fb001
        __asm _emit 0xeb
        __asm _emit 0x55
        mov dword ptr [edi + 28h], eax
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        dec dword ptr [edi + 2ch]
        ; Exact mapped bytes EB 47: jmp 0x100fb001
        __asm _emit 0xeb
        __asm _emit 0x47
        mov ecx, dword ptr [edi + 4]
        test ecx, ecx
        ; Exact mapped bytes 74 40: je 0x100fb001
        __asm _emit 0x74
        __asm _emit 0x40
        mov edx, dword ptr [ecx + 48h]
        shr edx, 0ah
        cmp edx, eax
        ; Exact mapped bytes 74 0C: je 0x100fafd7
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ecx + 0b70h]
        test ecx, ecx
        ; Exact mapped bytes 75 EC: jne 0x100fafc1
        __asm _emit 0x75
        __asm _emit 0xec
        ; Exact mapped bytes EB 2A: jmp 0x100fb001
        __asm _emit 0xeb
        __asm _emit 0x2a
        test ecx, ecx
        ; Exact mapped bytes 74 26: je 0x100fb001
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebx + 60h]
        shr eax, 0ch
        and eax, 0fh
        mov edx, dword ptr [ecx + eax*4 + 83ch]
        lea eax, [ecx + eax*4 + 83ch]
        cmp edx, ebx
        ; Exact mapped bytes 75 0B: jne 0x100fb001
        __asm _emit 0x75
        __asm _emit 0x0b
        mov dword ptr [eax], 0
        ; Exact mapped bytes E8 6F 74 FF FF: call 0x100f2470
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        test esi, esi
        ; Exact mapped bytes 74 29: je 0x100fb02e
        __asm _emit 0x74
        __asm _emit 0x29
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 8]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100fb014
        __asm _emit 0x74
        __asm _emit 0x05
        mov dword ptr [eax + 8], ecx
        ; Exact mapped bytes EB 03: jmp 0x100fb017
        __asm _emit 0xeb
        __asm _emit 0x03
        mov dword ptr [edi + 14h], ecx
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x100fb020
        __asm _emit 0x74
        __asm _emit 0x05
        mov dword ptr [ecx + 4], eax
        ; Exact mapped bytes EB 03: jmp 0x100fb023
        __asm _emit 0xeb
        __asm _emit 0x03
        mov dword ptr [edi + 18h], eax
        mov edx, dword ptr [esi]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        dec dword ptr [edi + 1ch]
        test ebx, ebx
        ; Exact mapped bytes 74 08: je 0x100fb03a
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebx]
        push 1
        mov ecx, ebx
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
