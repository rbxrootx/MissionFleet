// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58584070 .. +0x29F bytes.
extern "C" __declspec(naked) void FUN_58584070_58584070() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        push esi
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 4ch], 0
        ; Exact mapped bytes 0F 84 88 02 00 00: je 0x5858430f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4ch]
        mov dword ptr [ebp - 0ch], edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D8 17 F1 FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x17
        __asm _emit 0xf1
        __asm _emit 0xff
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 0F 84 6E 02 00 00: je 0x5858430f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 67 16 F1 FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x16
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 30: movsx esi, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 BC 17 F1 FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x17
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 55 16 F1 FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x16
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 00: movsx eax, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x00
        cmp esi, eax
        ; Exact mapped bytes 7F 46: jg 0x58584108
        __asm _emit 0x7f
        __asm _emit 0x46
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 46 16 F1 FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x16
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 30: movsx esi, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 9B 17 F1 FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x17
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 34 16 F1 FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x16
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 08: movsx ecx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x08
        cmp esi, ecx
        ; Exact mapped bytes 0F 85 16 02 00 00: jne 0x585842fd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x16
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 21 C5 F1 FF: call 0x584a0610
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xc5
        __asm _emit 0xf1
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 77 17 F1 FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x17
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 10 C5 F1 FF: call 0x584a0610
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xc5
        __asm _emit 0xf1
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 0F 8E F5 01 00 00: jle 0x585842fd
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 60 17 F1 FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x17
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 0F 84 D3 01 00 00: je 0x585842fb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 20 04 00 00: call 0x58584550
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 0F 85 9D 00 00 00: jne 0x585841d6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2F 17 F1 FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x17
        __asm _emit 0xf1
        __asm _emit 0xff
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 27: je 0x5858416d
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 22 17 F1 FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x17
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 18h], edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F5 03 00 00: call 0x58584550
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 54 09 00 00: call 0x58584ac0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DB 03 00 00: call 0x58584550
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 27: je 0x585841a1
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CE 03 00 00: call 0x58584550
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 20h], edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E1 16 F1 FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x16
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 00 09 00 00: call 0x58584aa0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F3 08 00 00: call 0x58584aa0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 09 09 00 00: call 0x58584ac0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 FD 08 00 00: call 0x58584ac0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4ch], edx
        ; Exact mapped bytes E9 2A 01 00 00: jmp 0x585842fb
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 20 01 00 00: jmp 0x585842f6
        __asm _emit 0xe9
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 72 03 00 00: call 0x58584550
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 2B 15 F1 FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x15
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 30: movsx esi, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 20 15 F1 FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x15
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 00: movsx eax, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x00
        cmp esi, eax
        ; Exact mapped bytes 7F 3E: jg 0x58584235
        __asm _emit 0x7f
        __asm _emit 0x3e
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 51 03 00 00: call 0x58584550
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 0A 15 F1 FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x15
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 30: movsx esi, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FF 14 F1 FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x14
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 08: movsx ecx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x08
        cmp esi, ecx
        ; Exact mapped bytes 75 2F: jne 0x58584247
        __asm _emit 0x75
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 30 03 00 00: call 0x58584550
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 E9 C3 F1 FF: call 0x584a0610
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0xf1
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DF C3 F1 FF: call 0x584a0610
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xc3
        __asm _emit 0xf1
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 7E 12: jle 0x58584247
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 13 03 00 00: call 0x58584550
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes E9 AF 00 00 00: jmp 0x585842f6
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 21 16 F1 FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x16
        __asm _emit 0xf1
        __asm _emit 0xff
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 27: je 0x5858427b
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 14 16 F1 FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x16
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E7 02 00 00: call 0x58584550
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 46 08 00 00: call 0x58584ac0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CD 02 00 00: call 0x58584550
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 27: je 0x585842af
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C0 02 00 00: call 0x58584550
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D3 15 F1 FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x15
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 F2 07 00 00: call 0x58584aa0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E5 07 00 00: call 0x58584aa0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 8D 02 00 00: call 0x58584550
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F2 07 00 00: call 0x58584ac0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7A 02 00 00: call 0x58584550
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 B9 07 00 00: call 0x58584aa0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CD 07 00 00: call 0x58584ac0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 05: jmp 0x585842fb
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 20 FE FF FF: jmp 0x5858411b
        __asm _emit 0xe9
        __asm _emit 0x20
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 0D: jmp 0x5858430a
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 6B 15 F1 FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x15
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes E9 81 FD FF FF: jmp 0x58584090
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
