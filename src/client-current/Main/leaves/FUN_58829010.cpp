// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58829010 .. +0xD3 bytes.
extern "C" __declspec(naked) void FUN_58829010() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 8]
        mov eax, dword ptr [ecx + 4]
        cmp eax, 200h
        ; Exact mapped bytes 75 74: jne 0x58829095
        __asm _emit 0x75
        __asm _emit 0x74
        ; Exact mapped bytes A1 C8 84 A2 58: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        push edi
        mov edi, dword ptr [esi + 128h]
        add eax, 4
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 08 85 F0 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 3D: je 0x58829079
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 66 8B 4F 24: mov cx, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x24
        test cl, 1
        ; Exact mapped bytes 75 4B: jne 0x58829090
        __asm _emit 0x75
        __asm _emit 0x4b
        mov esi, dword ptr [esi + 128h]
        ; Exact mapped bytes 66 83 4E 24 01: or word ptr [esi + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes 8B 15 F8 48 A2 58: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 2E E9 0D 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xe9
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx]
        pop edi
        pop esi
        mov dword ptr [esp + 4], 0
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF E2: jmp edx
        __asm _emit 0xff
        __asm _emit 0xe2
        ; Exact mapped bytes 66 8B 47 24: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 74 0F: je 0x58829090
        __asm _emit 0x74
        __asm _emit 0x0f
        mov esi, dword ptr [esi + 128h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 4E 24: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0x24
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 20ah
        ; Exact mapped bytes 75 F5: jne 0x58829091
        __asm _emit 0x75
        __asm _emit 0xf5
        xor eax, eax
        ; Exact mapped bytes 66 39 41 0A: cmp word ptr [ecx + 0xa], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x41
        __asm _emit 0x0a
        ; Exact mapped bytes 7E 05: jle 0x588290a9
        __asm _emit 0x7e
        __asm _emit 0x05
        mov eax, 1
        mov edx, dword ptr [esi + 128h]
        ; Exact mapped bytes 66 8B 4A 24: mov cx, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x24
        test cl, 1
        ; Exact mapped bytes 74 D9: je 0x58829091
        __asm _emit 0x74
        __asm _emit 0xd9
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x588290d8
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [esi + 13ch]
        test eax, eax
        ; Exact mapped bytes 7E CB: jle 0x58829091
        __asm _emit 0x7e
        __asm _emit 0xcb
        dec eax
        mov ecx, esi
        mov dword ptr [esi + 13ch], eax
        ; Exact mapped bytes E8 DC FB FF FF: call 0x58828cb0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 E1 FC FF FF: call 0x58828dc0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
