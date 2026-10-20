// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00485200 .. +0x2A6 bytes.
extern "C" __declspec(naked) void FUN_00485200_00485200() {
    __asm {
        sub esp, 3ch
        cmp dword ptr [esp + 50h], 0
        push ebx
        push esi
        push edi
        push ebp
        ; Exact mapped bytes 74 08: je 0x485216
        __asm _emit 0x74
        __asm _emit 0x08
        xor eax, eax
        mov esi, dword ptr [esp + 50h]
        ; Exact mapped bytes EB 0F: jmp 0x485225
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov esi, dword ptr [esp + 50h]
        push 6
        push esi
        ; Exact mapped bytes E8 EE F1 FF FF: call 0x484410
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [esp + 5ch]
        test eax, eax
        push ecx
        ; Exact mapped bytes 74 14: je 0x485242
        __asm _emit 0x74
        __asm _emit 0x14
        mov edx, dword ptr [esp + 5ch]
        mov ebx, dword ptr [esp + 58h]
        push edx
        push ebx
        push esi
        push eax
        ; Exact mapped bytes FF 15 40 BF 68 00: call dword ptr [0x68bf40]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 11: jmp 0x485253
        __asm _emit 0xeb
        __asm _emit 0x11
        mov eax, dword ptr [esp + 5ch]
        mov edx, dword ptr [esp + 58h]
        push eax
        push edx
        push esi
        ; Exact mapped bytes FF 15 00 BF 68 00: call dword ptr [0x68bf00]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 40 90 68 00 00: cmp dword ptr [0x689040], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x40
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 75 0E: jne 0x48526e
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
        ; Exact mapped bytes FF 15 68 BF 68 00: call dword ptr [0x68bf68]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x485287
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
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        push -10h
        ; Exact mapped bytes 8B 2D A0 BF 68 00: mov ebp, dword ptr [0x68bfa0]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xa0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        push esi
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        cmp dword ptr [esp + 14h], 0
        ; Exact mapped bytes 0F 84 E0 01 00 00: je 0x485498
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        and ecx, 10400080h
        cmp ecx, 10400080h
        ; Exact mapped bytes 0F 85 CC 01 00 00: jne 0x485498
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0c00000h
        ; Exact mapped bytes 8B 1D 38 9B 68 00: mov ebx, dword ptr [0x689b38]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x38
        __asm _emit 0x9b
        __asm _emit 0x68
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
        ; Exact mapped bytes FF 15 08 BE 68 00: call dword ptr [0x68be08]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov edi, eax
        lea eax, [esp + 1ch]
        push eax
        push esi
        ; Exact mapped bytes FF 15 70 BF 68 00: call dword ptr [0x68bf70]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xbf
        __asm _emit 0x68
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
        ; Exact mapped bytes E8 EF F3 FF FF: call 0x484720
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [esp + 30h]
        add esp, 14h
        push -1
        push -1
        push ecx
        ; Exact mapped bytes FF 15 10 BD 68 00: call dword ptr [0x68bd10]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        lea ecx, [esp + 1ch]
        push 0fh
        push 2
        push 0
        push ecx
        push edi
        ; Exact mapped bytes E8 CC F3 FF FF: call 0x484720
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [esp + 30h]
        add esp, 14h
        push -1
        push -1
        push ecx
        ; Exact mapped bytes FF 15 10 BD 68 00: call dword ptr [0x68bd10]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 88 90 68 00: mov ecx, dword ptr [0x689088]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        push edi
        ; Exact mapped bytes FF 15 40 B4 68 00: call dword ptr [0x68b440]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xb4
        __asm _emit 0x68
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
        ; Exact mapped bytes 03 05 34 9B 68 00: add eax, dword ptr [0x689b34]
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x34
        __asm _emit 0x9b
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [esp + 3ch], eax
        ; Exact mapped bytes E8 45 F3 FF FF: call 0x4846f0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 2ch]
        lea ecx, [esp + 34h]
        sub eax, dword ptr [esp + 24h]
        add esp, 8
        ; Exact mapped bytes 2B 05 34 9B 68 00: sub eax, dword ptr [0x689b34]
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0x34
        __asm _emit 0x9b
        __asm _emit 0x68
        __asm _emit 0x00
        push 0
        push eax
        push ecx
        ; Exact mapped bytes FF 15 5C BF 68 00: call dword ptr [0x68bf5c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        lea ecx, [esp + 2ch]
        push ecx
        push edi
        ; Exact mapped bytes E8 1B F3 FF FF: call 0x4846f0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 24h]
        add esp, 8
        ; Exact mapped bytes 03 05 34 9B 68 00: add eax, dword ptr [0x689b34]
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x34
        __asm _emit 0x9b
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [esp + 2ch], eax
        mov eax, dword ptr [esp + 24h]
        ; Exact mapped bytes 2B 05 34 9B 68 00: sub eax, dword ptr [0x689b34]
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0x34
        __asm _emit 0x9b
        __asm _emit 0x68
        __asm _emit 0x00
        lea ecx, [esp + 2ch]
        mov dword ptr [esp + 34h], eax
        push ecx
        mov eax, dword ptr [esp + 34h]
        push edi
        add eax, ebx
        mov dword ptr [esp + 40h], eax
        ; Exact mapped bytes E8 E7 F2 FF FF: call 0x4846f0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        test ebp, ebp
        ; Exact mapped bytes 74 46: je 0x485456
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
        ; Exact mapped bytes A1 3C 9B 68 00: mov eax, dword ptr [0x689b3c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x9b
        __asm _emit 0x68
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
        ; Exact mapped bytes E8 CD F2 FF FF: call 0x484720
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        mov eax, dword ptr [esp + 28h]
        lea ecx, [esp + 2ch]
        sub eax, dword ptr [esp + 20h]
        push ecx
        ; Exact mapped bytes 2B 05 34 9B 68 00: sub eax, dword ptr [0x689b34]
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0x34
        __asm _emit 0x9b
        __asm _emit 0x68
        __asm _emit 0x00
        push edi
        add dword ptr [esp + 38h], eax
        mov eax, dword ptr [esp + 38h]
        ; Exact mapped bytes 03 05 38 9B 68 00: add eax, dword ptr [0x689b38]
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0x9b
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [esp + 40h], eax
        ; Exact mapped bytes E8 6F F2 FF FF: call 0x4846f0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 20h]
        add esp, 8
        push ecx
        push edi
        ; Exact mapped bytes FF 15 40 B4 68 00: call dword ptr [0x68b440]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xb4
        __asm _emit 0x68
        __asm _emit 0x00
        push edi
        push esi
        ; Exact mapped bytes FF 15 04 BE 68 00: call dword ptr [0x68be04]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xbe
        __asm _emit 0x68
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
