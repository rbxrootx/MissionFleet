// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00429B70 .. +0x2A6 bytes.
extern "C" __declspec(naked) void FUN_00429b70_00429B70() {
    __asm {
        sub esp, 3ch
        cmp dword ptr [esp + 50h], 0
        push ebx
        push esi
        push edi
        push ebp
        ; Exact mapped bytes 74 08: je 0x429b86
        __asm _emit 0x74
        __asm _emit 0x08
        xor eax, eax
        mov esi, dword ptr [esp + 50h]
        ; Exact mapped bytes EB 0F: jmp 0x429b95
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov esi, dword ptr [esp + 50h]
        push 6
        push esi
        ; Exact mapped bytes E8 AE F2 FF FF: call 0x428e40
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [esp + 5ch]
        test eax, eax
        push ecx
        ; Exact mapped bytes 74 14: je 0x429bb2
        __asm _emit 0x74
        __asm _emit 0x14
        mov edx, dword ptr [esp + 5ch]
        mov ebx, dword ptr [esp + 58h]
        push edx
        push ebx
        push esi
        push eax
        ; Exact mapped bytes FF 15 60 C4 43 00: call dword ptr [0x43c460]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes EB 11: jmp 0x429bc3
        __asm _emit 0xeb
        __asm _emit 0x11
        mov eax, dword ptr [esp + 5ch]
        mov edx, dword ptr [esp + 58h]
        push eax
        push edx
        push esi
        ; Exact mapped bytes FF 15 4C C4 43 00: call dword ptr [0x43c44c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 00 14 45 00 00: cmp dword ptr [0x451400], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 75 0E: jne 0x429bde
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [esp + 10h]
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 3ch
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
        push esi
        ; Exact mapped bytes FF 15 30 C5 43 00: call dword ptr [0x43c530]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x429bf7
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [esp + 10h]
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 3ch
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
        mov dword ptr [esp + 14h], 1
        lea eax, [esp + 14h]
        push eax
        push 0
        push 11efh
        push esi
        ; Exact mapped bytes FF 15 4C C5 43 00: call dword ptr [0x43c54c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        push -10h
        ; Exact mapped bytes 8B 2D 14 C5 43 00: mov ebp, dword ptr [0x43c514]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x14
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        push esi
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        cmp dword ptr [esp + 14h], 0
        ; Exact mapped bytes 0F 84 E0 01 00 00: je 0x429e08
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        and ecx, 10400080h
        cmp ecx, 10400080h
        ; Exact mapped bytes 0F 85 CC 01 00 00: jne 0x429e08
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0c00000h
        ; Exact mapped bytes 8B 1D F8 1E 45 00: mov ebx, dword ptr [0x451ef8]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xf8
        __asm _emit 0x1e
        __asm _emit 0x45
        __asm _emit 0x00
        sub eax, 0c00000h
        cmp eax, 1
        push esi
        sbb ebp, ebp
        neg ebp
        cmp ebp, 1
        sbb eax, eax
        inc eax
        sub ebx, eax
        ; Exact mapped bytes FF 15 B0 C3 43 00: call dword ptr [0x43c3b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        mov edi, eax
        lea eax, [esp + 1ch]
        push eax
        push esi
        ; Exact mapped bytes FF 15 90 C4 43 00: call dword ptr [0x43c490]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 1ch]
        mov edx, dword ptr [esp + 20h]
        sub dword ptr [esp + 24h], ecx
        push 0fh
        lea eax, [esp + 20h]
        push 7
        sub dword ptr [esp + 30h], edx
        push 2
        mov dword ptr [esp + 2ch], 0
        mov dword ptr [esp + 28h], 0
        push eax
        push edi
        ; Exact mapped bytes E8 AF F4 FF FF: call 0x429150
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [esp + 30h]
        add esp, 14h
        push -1
        push -1
        push ecx
        ; Exact mapped bytes FF 15 70 C3 43 00: call dword ptr [0x43c370]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        lea ecx, [esp + 1ch]
        push 0fh
        push 2
        push 0
        push ecx
        push edi
        ; Exact mapped bytes E8 8C F4 FF FF: call 0x429150
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [esp + 30h]
        add esp, 14h
        push -1
        push -1
        push ecx
        ; Exact mapped bytes FF 15 70 C3 43 00: call dword ptr [0x43c370]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 48 14 45 00: mov ecx, dword ptr [0x451448]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        push ecx
        push edi
        ; Exact mapped bytes FF 15 70 C0 43 00: call dword ptr [0x43c070]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        lea ecx, [esp + 2ch]
        mov dword ptr [esp + 18h], eax
        lea eax, [esp + 1ch]
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov eax, dword ptr [eax + 0ch]
        push ecx
        push edi
        mov dword ptr [ecx + 8], edx
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [esp + 24h]
        ; Exact mapped bytes 03 05 F4 1E 45 00: add eax, dword ptr [0x451ef4]
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0xf4
        __asm _emit 0x1e
        __asm _emit 0x45
        __asm _emit 0x00
        mov dword ptr [esp + 3ch], eax
        ; Exact mapped bytes E8 05 F4 FF FF: call 0x429120
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 2ch]
        lea ecx, [esp + 34h]
        sub eax, dword ptr [esp + 24h]
        add esp, 8
        ; Exact mapped bytes 2B 05 F4 1E 45 00: sub eax, dword ptr [0x451ef4]
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0xf4
        __asm _emit 0x1e
        __asm _emit 0x45
        __asm _emit 0x00
        push 0
        push eax
        push ecx
        ; Exact mapped bytes FF 15 80 C4 43 00: call dword ptr [0x43c480]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        lea ecx, [esp + 2ch]
        push ecx
        push edi
        ; Exact mapped bytes E8 DB F3 FF FF: call 0x429120
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 24h]
        add esp, 8
        ; Exact mapped bytes 03 05 F4 1E 45 00: add eax, dword ptr [0x451ef4]
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0xf4
        __asm _emit 0x1e
        __asm _emit 0x45
        __asm _emit 0x00
        mov dword ptr [esp + 2ch], eax
        mov eax, dword ptr [esp + 24h]
        ; Exact mapped bytes 2B 05 F4 1E 45 00: sub eax, dword ptr [0x451ef4]
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0xf4
        __asm _emit 0x1e
        __asm _emit 0x45
        __asm _emit 0x00
        lea ecx, [esp + 2ch]
        mov dword ptr [esp + 34h], eax
        push ecx
        mov eax, dword ptr [esp + 34h]
        push edi
        add eax, ebx
        mov dword ptr [esp + 40h], eax
        ; Exact mapped bytes E8 A7 F3 FF FF: call 0x429120
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        test ebp, ebp
        ; Exact mapped bytes 74 46: je 0x429dc6
        __asm _emit 0x74
        __asm _emit 0x46
        mov ebp, dword ptr [esp + 30h]
        lea edx, [esp + 2ch]
        lea ecx, [esp + 3ch]
        mov eax, dword ptr [edx]
        add ebx, dword ptr [esp + 30h]
        mov dword ptr [ecx], eax
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ecx + 4], ebp
        mov edx, dword ptr [edx + 0ch]
        mov dword ptr [ecx + 8], eax
        ; Exact mapped bytes A1 FC 1E 45 00: mov eax, dword ptr [0x451efc]
        __asm _emit 0xa1
        __asm _emit 0xfc
        __asm _emit 0x1e
        __asm _emit 0x45
        __asm _emit 0x00
        push 0fh
        add eax, ebx
        push 0
        push 2
        mov dword ptr [ecx + 0ch], edx
        lea ecx, [esp + 48h]
        mov dword ptr [esp + 4ch], ebx
        mov dword ptr [esp + 54h], eax
        push ecx
        push edi
        ; Exact mapped bytes E8 8D F3 FF FF: call 0x429150
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        mov eax, dword ptr [esp + 28h]
        lea ecx, [esp + 2ch]
        sub eax, dword ptr [esp + 20h]
        push ecx
        ; Exact mapped bytes 2B 05 F4 1E 45 00: sub eax, dword ptr [0x451ef4]
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0xf4
        __asm _emit 0x1e
        __asm _emit 0x45
        __asm _emit 0x00
        push edi
        add dword ptr [esp + 38h], eax
        mov eax, dword ptr [esp + 38h]
        ; Exact mapped bytes 03 05 F8 1E 45 00: add eax, dword ptr [0x451ef8]
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x1e
        __asm _emit 0x45
        __asm _emit 0x00
        mov dword ptr [esp + 40h], eax
        ; Exact mapped bytes E8 2F F3 FF FF: call 0x429120
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 20h]
        add esp, 8
        push ecx
        push edi
        ; Exact mapped bytes FF 15 70 C0 43 00: call dword ptr [0x43c070]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        push edi
        push esi
        ; Exact mapped bytes FF 15 C4 C3 43 00: call dword ptr [0x43c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 3ch
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
