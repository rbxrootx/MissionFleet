// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100737D0 .. +0x295 bytes.
extern "C" __declspec(naked) void FUN_100737d0_100737D0() {
    __asm {
        sub esp, 40h
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 50h]
        push edi
        mov ebp, ecx
        mov al, byte ptr [esi + 68h]
        and al, 0fh
        cmp al, 1
        ; Exact mapped bytes 74 48: je 0x1007382e
        __asm _emit 0x74
        __asm _emit 0x48
        lea ecx, [esi + 6]
        lea edx, [esp + 10h]
        push ecx
        push 101ab85ch
        push 101ab850h
        push edx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D DC 92 1C 10: mov ecx, dword ptr [0x101c92dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        add esp, 10h
        lea eax, [esp + 10h]
        push 0
        push 1017f3bch
        push eax
        push ecx
        ; Exact mapped bytes FF 15 8C 51 17 10: call dword ptr [0x1017518c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 4A 89 0F 00: call 0x1016c170
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x89
        __asm _emit 0x0f
        __asm _emit 0x00
        push -1
        ; Exact mapped bytes FF 15 90 51 17 10: call dword ptr [0x10175190]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esp + 5ch]
        test eax, eax
        mov eax, dword ptr [esi + 44h]
        ; Exact mapped bytes 0F 85 7B 01 00 00: jne 0x100739b8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        shr eax, 1
        and eax, 1fh
        lea edx, [eax + eax*4]
        mov eax, dword ptr [esp + 58h]
        lea ecx, [eax + edx*2]
        push ecx
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        push esi
        ; Exact mapped bytes E8 26 88 FB FF: call 0x1002c080
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x88
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edi, eax
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 0E: mov cx, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0e
        mov eax, dword ptr [edi + 0e74h]
        mov edx, dword ptr [eax + 64h]
        mov al, byte ptr [eax + 2]
        push edx
        xor edx, edx
        mov dl, byte ptr [esi + 4]
        push 0
        and al, 1fh
        push 0
        push eax
        push ecx
        mov ecx, dword ptr [edx*4 + 101ace60h]
        ; Exact mapped bytes E8 59 84 FB FF: call 0x1002bce0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x84
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 174h]
        xor eax, eax
        mov al, byte ptr [esi + 4]
        push 0
        push eax
        ; Exact mapped bytes E8 56 23 05 00: call 0x100c5bf0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x23
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 118h]
        test eax, eax
        ; Exact mapped bytes 74 2A: je 0x100738ce
        __asm _emit 0x74
        __asm _emit 0x2a
        lea ebx, [esi + 6]
        push 101ad0e8h
        push ebx
        ; Exact mapped bytes FF 15 A0 50 17 10: call dword ptr [0x101750a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 3A: je 0x100738f1
        __asm _emit 0x74
        __asm _emit 0x3a
        mov ecx, dword ptr [edi + 0e74h]
        mov al, byte ptr [edi + 76ah]
        mov dl, byte ptr [ecx + 2]
        and dl, 1fh
        push edx
        push eax
        push ebx
        ; Exact mapped bytes EB 18: jmp 0x100738e6
        __asm _emit 0xeb
        __asm _emit 0x18
        mov ecx, dword ptr [edi + 0e74h]
        mov al, byte ptr [edi + 76ah]
        mov dl, byte ptr [ecx + 2]
        lea ecx, [esi + 6]
        and dl, 1fh
        push edx
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 3F 8D 04 00: call 0x100bc630
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x8d
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        xor edx, edx
        mov dl, byte ptr [edi + 330h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 87 2E 03 00 00: mov ax, word ptr [edi + 0x32e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0x2e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        shl edx, 0ah
        add edx, eax
        lea eax, [ecx + edx*8 + 448h]
        mov ecx, edi
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [eax]
        push edx
        push eax
        ; Exact mapped bytes E8 AE B3 08 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xb3
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 11ch]
        ; Exact mapped bytes E8 73 B8 08 00: call 0x100ff1a0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xb8
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 88 88 FB FF: call 0x1002c1c0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x88
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 174h]
        push eax
        ; Exact mapped bytes E8 6C 1A 05 00: call 0x100c53b0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x1a
        __asm _emit 0x05
        __asm _emit 0x00
        mov al, byte ptr [esi + 0a8h]
        test al, al
        ; Exact mapped bytes 74 0C: je 0x1007395a
        __asm _emit 0x74
        __asm _emit 0x0c
        push 40000000h
        mov ecx, edi
        ; Exact mapped bytes E8 B6 A7 07 00: call 0x100ee110
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xa7
        __asm _emit 0x07
        __asm _emit 0x00
        test byte ptr [esi + 0a9h], 1
        ; Exact mapped bytes 74 22: je 0x10073985
        __asm _emit 0x74
        __asm _emit 0x22
        push 1
        mov ecx, edi
        ; Exact mapped bytes E8 14 BE 07 00: call 0x100ef780
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xbe
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0f10h]
        lea eax, [ebp + 220h]
        mov edx, dword ptr [ecx + 6ch]
        push edx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes EB 09: jmp 0x1007398e
        __asm _emit 0xeb
        __asm _emit 0x09
        push 0
        mov ecx, edi
        ; Exact mapped bytes E8 F2 BD 07 00: call 0x100ef780
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xbd
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 11ch]
        ; Exact mapped bytes E8 07 B8 08 00: call 0x100ff1a0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xb8
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BD B6 01 00 00 02: cmp word ptr [ebp + 0x1b6], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0xb6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 B4 00 00 00: jne 0x10073a5b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, ebp
        ; Exact mapped bytes E8 22 0F 00 00: call 0x100748d0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 40h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        shr eax, 1
        and eax, 1fh
        lea ecx, [eax + eax*4]
        mov eax, dword ptr [esp + 58h]
        lea edx, [eax + ecx*2]
        ; Exact mapped bytes 8B 0D F0 58 1C 10: mov ecx, dword ptr [0x101c58f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        push eax
        push esi
        ; Exact mapped bytes E8 3B EA FC FF: call 0x10042410
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xea
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 20 A1 04 00: call 0x100bdb00
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xa1
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edi, dword ptr [eax + 0ch]
        test edi, edi
        ; Exact mapped bytes 74 6F: je 0x10073a5b
        __asm _emit 0x74
        __asm _emit 0x6f
        ; Exact mapped bytes 8B 2D A0 50 17 10: mov ebp, dword ptr [0x101750a0]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        lea ebx, [esi + 6]
        lea ecx, [edi + 332h]
        push ecx
        push ebx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x10073a14
        __asm _emit 0x74
        __asm _emit 0x11
        mov edi, dword ptr [edi + 78h]
        test edi, edi
        ; Exact mapped bytes 75 EB: jne 0x100739f5
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 40h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 56 68: mov dx, word ptr [esi + 0x68]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x68
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes E8 3C 14 FB FF: call 0x10024e60
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x14
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [edi + 0f2ch]
        add eax, 328h
        mov ecx, dword ptr [ecx + 6ch]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x10073a42
        __asm _emit 0x74
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x10073a42
        __asm _emit 0x74
        __asm _emit 0x08
        push eax
        push ecx
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [edi + 0f28h]
        mov ecx, 1
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov edi, dword ptr [edi + 0f2ch]
        ; Exact mapped bytes 66 09 4F 24: or word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x4f
        __asm _emit 0x24
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 40h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
