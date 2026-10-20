// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041374D .. +0x1C6 bytes.
extern "C" __declspec(naked) void FUN_0041374d_0041374D() {
    __asm {
        mov eax, 43a685h
        ; Exact mapped bytes E8 B1 BE 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        push 2
        mov eax, dword ptr [esi + 0d4h]
        pop ebx
        mov dword ptr [ebp - 10h], eax
        test byte ptr [esi + 2dh], 20h
        ; Exact mapped bytes 74 16: je 0x413786
        __asm _emit 0x74
        __asm _emit 0x16
        push -3
        push dword ptr [ebp - 10h]
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 7B E1 FF FF: call 0x4118f8
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes 66 3B FB: cmp di, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 EC: je 0x413770
        __asm _emit 0x74
        __asm _emit 0xec
        ; Exact mapped bytes EB 14: jmp 0x41379a
        __asm _emit 0xeb
        __asm _emit 0x14
        push -3
        push dword ptr [ebp - 10h]
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 31 8E 01 00: call 0x42c5c4
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes 66 3B FB: cmp di, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 EC: je 0x413786
        __asm _emit 0x74
        __asm _emit 0xec
        mov eax, dword ptr [esi]
        push edi
        mov ecx, esi
        ; Exact mapped bytes FF 50 48: call dword ptr [eax + 0x48]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x48
        test eax, eax
        ; Exact mapped bytes 0F 85 D3 00 00 00: jne 0x41387d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 14h
        ; Exact mapped bytes E8 3B A1 01 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xa1
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov ecx, eax
        mov dword ptr [ebp - 14h], ecx
        and dword ptr [ebp - 4], 0
        test ecx, ecx
        ; Exact mapped bytes 74 0A: je 0x4137c9
        __asm _emit 0x74
        __asm _emit 0x0a
        push edi
        ; Exact mapped bytes E8 D5 E1 FF FF: call 0x41199a
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x4137cb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [edi]
        or dword ptr [ebp - 4], 0ffffffffh
        push 1
        mov ecx, edi
        push dword ptr [esi + 4]
        push dword ptr [esi + 8]
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        cmp dword ptr [esi + 0b0h], 1
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x41386c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 43d500h
        lea ecx, [edi + 10h]
        ; Exact mapped bytes E8 61 8F 01 00: call 0x42c759
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x8f
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7C 70: jl 0x41386c
        __asm _emit 0x7c
        __asm _emit 0x70
        mov ecx, edi
        ; Exact mapped bytes E8 23 EF 01 00: call 0x432726
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xef
        __asm _emit 0x01
        __asm _emit 0x00
        test byte ptr [esi + 0ach], bl
        ; Exact mapped bytes 74 18: je 0x413823
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [esi + 0b0h]
        cmp eax, 3
        ; Exact mapped bytes 74 05: je 0x41381b
        __asm _emit 0x74
        __asm _emit 0x05
        cmp eax, 4
        ; Exact mapped bytes 75 08: jne 0x413823
        __asm _emit 0x75
        __asm _emit 0x08
        mov dword ptr [esi + 0b0h], ebx
        ; Exact mapped bytes EB 18: jmp 0x41383b
        __asm _emit 0xeb
        __asm _emit 0x18
        and dword ptr [esi + 0d0h], 0
        and dword ptr [esi + 0cch], 0
        mov dword ptr [esi + 0b0h], 1
        push dword ptr [esi + 0b0h]
        push 7
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 3D 8D 01 00: call 0x42c588
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, eax
        mov eax, dword ptr [esi]
        push edi
        mov ecx, esi
        ; Exact mapped bytes FF 50 48: call dword ptr [eax + 0x48]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x48
        test eax, eax
        ; Exact mapped bytes 0F 85 0D FF FF FF: jne 0x41376a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi]
        push 0
        push edi
        mov ecx, esi
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        ; Exact mapped bytes E9 FE FE FF FF: jmp 0x41376a
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 10h]
        push 443350h
        push eax
        mov dword ptr [ebp - 10h], edi
        ; Exact mapped bytes E8 AA BD 00 00: call 0x41f627
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        test byte ptr [esi + 2dh], 20h
        ; Exact mapped bytes 75 28: jne 0x4138ab
        __asm _emit 0x75
        __asm _emit 0x28
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 2D 8D 01 00: call 0x42c5b8
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes 66 3B FB: cmp di, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 74 F1: je 0x413883
        __asm _emit 0x74
        __asm _emit 0xf1
        mov eax, dword ptr [esi]
        push edi
        mov ecx, esi
        ; Exact mapped bytes FF 50 48: call dword ptr [eax + 0x48]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x48
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x4138ab
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [esi]
        xor ebx, ebx
        push ebx
        push edi
        mov ecx, esi
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        ; Exact mapped bytes EB 02: jmp 0x4138ad
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        push 1
        pop eax
        ; Exact mapped bytes 66 3B F8: cmp di, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf8
        mov dword ptr [esi + 90h], eax
        ; Exact mapped bytes 75 49: jne 0x413904
        __asm _emit 0x75
        __asm _emit 0x49
        lea eax, [ebp - 14h]
        push eax
        push 7
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 F5 8C 01 00: call 0x42c5be
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        mov edi, eax
        mov eax, dword ptr [esi]
        push edi
        mov ecx, esi
        ; Exact mapped bytes FF 50 48: call dword ptr [eax + 0x48]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x48
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x4138e0
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [esi]
        push ebx
        push edi
        mov ecx, esi
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        cmp dword ptr [ebp - 14h], 1
        ; Exact mapped bytes 75 1E: jne 0x413904
        __asm _emit 0x75
        __asm _emit 0x1e
        cmp dword ptr [esi + 0cch], ebx
        lea eax, [esi + 0cch]
        ; Exact mapped bytes 75 08: jne 0x4138fc
        __asm _emit 0x75
        __asm _emit 0x08
        cmp dword ptr [esi + 0d0h], ebx
        ; Exact mapped bytes 74 08: je 0x413904
        __asm _emit 0x74
        __asm _emit 0x08
        mov dword ptr [eax], ebx
        mov dword ptr [esi + 0d0h], ebx
        mov ecx, dword ptr [ebp - 0ch]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ret
    }
}
