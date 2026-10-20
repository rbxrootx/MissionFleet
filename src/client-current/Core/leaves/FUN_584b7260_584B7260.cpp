// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B7260 .. +0x233 bytes.
extern "C" __declspec(naked) void FUN_584b7260_584B7260() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        push esi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 0C: je 0x584b727c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [eax + 84h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        mov ecx, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + ecx*4]
        ; Exact mapped bytes E8 33 D7 FC FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xd7
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 14h], eax
        lea eax, [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 E8: call dword ptr [ebp - 0x18]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe8
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 12h
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 C8 FB FF FF: call 0x584b6ea0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 12: je 0x584b72f1
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E9 E5 FD FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 38h]
        add edx, 12h
        cmp eax, edx
        ; Exact mapped bytes 7D 10: jge 0x584b7301
        __asm _emit 0x7d
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 38h]
        add eax, 12h
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A0 FB FF FF: call 0x584b6ea0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1
        imul ecx, dword ptr [ebp - 34h]
        add ecx, 10h
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 39 FB FF FF: call 0x584b6e50
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 78h], 0
        ; Exact mapped bytes 75 2E: jne 0x584b734f
        __asm _emit 0x75
        __asm _emit 0x2e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 40h]
        ; Exact mapped bytes E8 94 F6 FC FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xf6
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9A E5 FD FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xe5
        __asm _emit 0xfd
        __asm _emit 0xff
        cdq
        sub eax, edx
        sar eax, 1
        sub esi, eax
        mov ecx, dword ptr [ebp - 4]
        add esi, dword ptr [ecx + 6ch]
        push esi
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 64 E3 2F 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xe3
        __asm _emit 0x2f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 27: jmp 0x584b7376
        __asm _emit 0xeb
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 40h]
        ; Exact mapped bytes E8 66 F6 FC FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xf6
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6C E5 FD FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xe5
        __asm _emit 0xfd
        __asm _emit 0xff
        sub esi, eax
        mov eax, dword ptr [ebp - 4]
        add esi, dword ptr [eax + 6ch]
        push esi
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3B E3 2F 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xe3
        __asm _emit 0x2f
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 40h]
        ; Exact mapped bytes E8 EF 92 FE FF: call 0x584a0670
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x92
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 25 E5 FD FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xe5
        __asm _emit 0xfd
        __asm _emit 0xff
        sub esi, eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 70h]
        lea ecx, [esi + eax - 50h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 90 E3 2F 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xe3
        __asm _emit 0x2f
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        add eax, 7
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x584b73be
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 7F 3F: jg 0x584b7405
        __asm _emit 0x7f
        __asm _emit 0x3f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 20h], eax
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 01 EB FC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xeb
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 36 E3 2F 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xe3
        __asm _emit 0x2f
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        add eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB B0: jmp 0x584b73b5
        __asm _emit 0xeb
        __asm _emit 0xb0
        ; Exact mapped bytes EB 09: jmp 0x584b7410
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [edx + 74h]
        ; Exact mapped bytes 7D 1C: jge 0x584b7437
        __asm _emit 0x7d
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 28h], ecx
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 AC EA FC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xea
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D0: jmp 0x584b7407
        __asm _emit 0xeb
        __asm _emit 0xd0
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0F 81 FE FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x81
        __asm _emit 0xfe
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 95 EA FC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xea
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 64h], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 30 EC FC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xec
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 55 EC FC FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xec
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
