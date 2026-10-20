// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C33D0 .. +0x113 bytes.
extern "C" __declspec(naked) void FUN_587c33d0() {
    __asm {
        push esi
        push edi
        mov edi, ecx
        ; Exact mapped bytes 66 8B 47 24: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x24
        test al, 2
        ; Exact mapped bytes 0F 84 FB 00 00 00: je 0x587c34db
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 3ch]
        mov esi, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x587c340f
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x587c3408
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 10h]
        push esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [edi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 0B: je 0x587c340f
        __asm _emit 0x74
        __asm _emit 0x0b
        test eax, eax
        ; Exact mapped bytes 75 EA: jne 0x587c33f2
        __asm _emit 0x75
        __asm _emit 0xea
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        cmp eax, 205h
        ; Exact mapped bytes 0F 87 9A 00 00 00: ja 0x587c34b7
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 200h
        ; Exact mapped bytes 0F 83 A9 00 00 00: jae 0x587c34d1
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 100h
        cmp eax, 0fh
        ; Exact mapped bytes 0F 87 A5 00 00 00: ja 0x587c34db
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, byte ptr [eax + 587c34f0h]
        ; Exact mapped bytes FF 24 95 E4 34 7C 58: jmp dword ptr [edx*4 + 0x587c34e4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xe4
        __asm _emit 0x34
        __asm _emit 0x7c
        __asm _emit 0x58
        mov dword ptr [edi + 80h], 0
        cmp dword ptr [esi + 8], 78h
        ; Exact mapped bytes 0F 85 83 00 00 00: jne 0x587c34db
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D FC 44 A2 58 00: cmp dword ptr [0x58a244fc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 80 47 A2 58: mov ecx, dword ptr [0x58a24780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 74 1D: je 0x587c3484
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes C7 05 FC 44 A2 58 00 00 00 00: mov dword ptr [0x58a244fc], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 74 66: je 0x587c34db
        __asm _emit 0x74
        __asm _emit 0x66
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [edi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 FC 44 A2 58 01 00 00 00: mov dword ptr [0x58a244fc], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x44
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 74 49: je 0x587c34db
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes 8B 15 D4 48 A2 58: mov edx, dword ptr [0x58a248d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 0ch]
        push edx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D 80 47 A2 58: mov ecx, dword ptr [0x58a24780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov eax, dword ptr [edi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        sub eax, 207h
        cmp eax, 8ah
        ; Exact mapped bytes 77 18: ja 0x587c34db
        __asm _emit 0x77
        __asm _emit 0x18
        movzx ecx, byte ptr [eax + 587c3508h]
        ; Exact mapped bytes FF 24 8D 00 35 7C 58: jmp dword ptr [ecx*4 + 0x587c3500]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x35
        __asm _emit 0x7c
        __asm _emit 0x58
        mov dword ptr [edi + 80h], 0
        mov eax, dword ptr [edi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
