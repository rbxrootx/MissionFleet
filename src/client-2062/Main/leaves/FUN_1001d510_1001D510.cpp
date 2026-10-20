// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1001D510 .. +0x17D bytes.
extern "C" __declspec(naked) void FUN_1001d510_1001D510() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 2
        ; Exact mapped bytes 0F 84 67 01 00 00: je 0x1001d685
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        mov edi, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x1001d544
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 0F 84 4A 01 00 00: je 0x1001d67e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        push edi
        mov ecx, eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 75 E8: jne 0x1001d52c
        __asm _emit 0x75
        __asm _emit 0xe8
        cmp dword ptr [edi + 4], 100h
        ; Exact mapped bytes 0F 85 2D 01 00 00: jne 0x1001d67e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [edi + 8]
        cmp edi, 0dh
        ; Exact mapped bytes 74 77: je 0x1001d5d0
        __asm _emit 0x74
        __asm _emit 0x77
        cmp edi, 1bh
        ; Exact mapped bytes 0F 85 1C 01 00 00: jne 0x1001d67e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 70h]
        sub eax, 0
        ; Exact mapped bytes 74 1C: je 0x1001d586
        __asm _emit 0x74
        __asm _emit 0x1c
        dec eax
        ; Exact mapped bytes 0F 85 0D 01 00 00: jne 0x1001d67e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 B8 41 00 00: call 0x10021730
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 74h]
        cmp eax, 1
        ; Exact mapped bytes 75 24: jne 0x1001d5b2
        __asm _emit 0x75
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 97 F5 04 00: call 0x1006cb30
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xf5
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 12h
        ; Exact mapped bytes 75 0B: jne 0x1001d5c2
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [esi + 90h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 70h]
        sub eax, 0
        ; Exact mapped bytes 74 1C: je 0x1001d5f4
        __asm _emit 0x74
        __asm _emit 0x1c
        dec eax
        ; Exact mapped bytes 0F 85 9F 00 00 00: jne 0x1001d67e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 DA 3C 00 00: call 0x100212c0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 74h]
        cmp eax, 1
        ; Exact mapped bytes 75 24: jne 0x1001d620
        __asm _emit 0x75
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 29 F5 04 00: call 0x1006cb30
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xf5
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov edx, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 12h
        ; Exact mapped bytes 75 19: jne 0x1001d63e
        __asm _emit 0x75
        __asm _emit 0x19
        mov ecx, dword ptr [esi + 90h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov edx, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 320h
        ; Exact mapped bytes 74 15: je 0x1001d65a
        __asm _emit 0x74
        __asm _emit 0x15
        cmp eax, 321h
        ; Exact mapped bytes 74 0E: je 0x1001d65a
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp eax, 322h
        ; Exact mapped bytes 74 07: je 0x1001d65a
        __asm _emit 0x74
        __asm _emit 0x07
        cmp eax, 323h
        ; Exact mapped bytes 75 1D: jne 0x1001d677
        __asm _emit 0x75
        __asm _emit 0x1d
        ; Exact mapped bytes A1 E4 56 1C 10: mov eax, dword ptr [0x101c56e4]
        __asm _emit 0xa1
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 64h
        mov ecx, dword ptr [eax + 30h]
        ; Exact mapped bytes A1 F8 56 1C 10: mov eax, dword ptr [0x101c56f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [eax + 9a4h]
        mov edx, dword ptr [ecx]
        push eax
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        mov edx, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
