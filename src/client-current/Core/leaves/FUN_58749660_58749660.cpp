// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58749660 .. +0x1CE bytes.
extern "C" __declspec(naked) void FUN_58749660_58749660() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888f620h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 30h
        push esi
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
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b4e98h
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, word ptr [ecx + 1b8h]
        cmp edx, 0bh
        ; Exact mapped bytes 75 62: jne 0x58749703
        __asm _emit 0x75
        __asm _emit 0x62
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 23ch], 0
        ; Exact mapped bytes 74 56: je 0x58749703
        __asm _emit 0x74
        __asm _emit 0x56
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 23ch]
        mov dword ptr [ebp - 1ch], edx
        push 0bh
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 BB 7C 01 00: call 0x58761380
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 23ch]
        mov dword ptr [ebp - 20h], ecx
        push 0bh
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 A0 7C 01 00: call 0x58761380
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        push 0bh
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 23ch]
        push edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2E BA E9 FF: call 0x585e5130
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xba
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 95 D2 D3 FF: call 0x584869a0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xd2
        __asm _emit 0xd3
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 1f4h], 0
        ; Exact mapped bytes 74 3D: je 0x58749755
        __asm _emit 0x74
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1f4h]
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 17: je 0x58749741
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 2ch], edx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 55 D4: call dword ptr [ebp - 0x2c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd4
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x58749748
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 1f4h], 0
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, word ptr [ecx + 1d8h]
        cmp edx, 3
        ; Exact mapped bytes 75 59: jne 0x587497bd
        __asm _emit 0x75
        __asm _emit 0x59
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 23ch]
        ; Exact mapped bytes E8 3E 38 D4 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x38
        __asm _emit 0xd4
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 41 D2 D3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xd2
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2A 38 D4 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x38
        __asm _emit 0xd4
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 75 33: jne 0x587497bd
        __asm _emit 0x75
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 250h], 0
        ; Exact mapped bytes 74 27: je 0x587497bd
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 250h]
        mov dword ptr [ebp - 34h], eax
        push 1
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        ; Exact mapped bytes E8 87 78 0E 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x78
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 250h], 0
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, word ptr [eax + 1d8h]
        cmp ecx, 3
        ; Exact mapped bytes 75 49: jne 0x58749815
        __asm _emit 0x75
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 258h], 0
        ; Exact mapped bytes 74 3D: je 0x58749815
        __asm _emit 0x74
        __asm _emit 0x3d
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 258h]
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 17: je 0x58749801
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 38h], ecx
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 55 C8: call dword ptr [ebp - 0x38]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xc8
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58749808
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 258h], 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 63 A2 E3 FF: call 0x58583a80
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xa2
        __asm _emit 0xe3
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
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
