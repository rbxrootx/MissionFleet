// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100E97C0 .. +0x3C2 bytes.
extern "C" __declspec(naked) void FUN_100e97c0_100E97C0() {
    __asm {
        push -1
        push 10173f9ch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 8], esi
        mov dword ptr [esi], 101765a4h
        mov eax, dword ptr [esi + 0e74h]
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr [esp + 18h], 3
        ; Exact mapped bytes 0F 84 00 03 00 00: je 0x100e9afe
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 5c0ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100e9814
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 5c0ch], ebx
        mov ecx, dword ptr [esi + 5cb8h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100e982a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 5cb8h], ebx
        mov ecx, dword ptr [esi + 1058h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100e9840
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 1058h], ebx
        mov ecx, dword ptr [esi + 1054h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100e9856
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 1054h], ebx
        mov ecx, dword ptr [esi + 1050h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100e986c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 1050h], ebx
        mov ecx, dword ptr [esi + 5cdch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100e9882
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 5cdch], ebx
        mov ecx, dword ptr [esi + 0f1ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100e9898
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0f1ch], ebx
        mov ecx, dword ptr [esi + 0f20h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100e98ae
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0f20h], ebx
        mov ecx, dword ptr [esi + 5c04h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100e98c4
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 5c04h], ebx
        mov ecx, dword ptr [esi + 5c08h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100e98da
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 5c08h], ebx
        mov ecx, dword ptr [esi + 0f14h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100e98f0
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0f14h], ebx
        mov ecx, dword ptr [esi + 0f10h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100e9906
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0f10h], ebx
        mov ecx, dword ptr [esi + 0f0ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100e991c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0f0ch], ebx
        mov ecx, dword ptr [esi + 0f24h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100e9932
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0f24h], ebx
        mov ecx, dword ptr [esi + 0ef4h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100e9948
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0ef4h], ebx
        mov ecx, dword ptr [esi + 0ef8h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100e995e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0ef8h], ebx
        mov ecx, dword ptr [esi + 0eech]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100e9974
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0eech], ebx
        mov ecx, dword ptr [esi + 0ef0h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100e998a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0ef0h], ebx
        mov ecx, dword ptr [esi + 0efch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100e99a0
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0efch], ebx
        mov ecx, dword ptr [esi + 0f00h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100e99b6
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0f00h], ebx
        mov ecx, dword ptr [esi + 0f30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100e99cc
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0f30h], ebx
        mov ecx, dword ptr [esi + 5ce0h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100e99e2
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 5ce0h], ebx
        mov eax, dword ptr [esi + 0e74h]
        push ebp
        cmp eax, ebx
        push edi
        ; Exact mapped bytes 74 64: je 0x100e9a52
        __asm _emit 0x74
        __asm _emit 0x64
        mov cl, byte ptr [eax + 8]
        xor ebp, ebp
        test cl, 7
        ; Exact mapped bytes 76 28: jbe 0x100e9a20
        __asm _emit 0x76
        __asm _emit 0x28
        lea edi, [esi + 5cbch]
        mov ecx, dword ptr [edi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100e9a0c
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi], ebx
        mov eax, dword ptr [esi + 0e74h]
        inc ebp
        add edi, 4
        mov cl, byte ptr [eax + 8]
        and ecx, 7
        cmp ebp, ecx
        ; Exact mapped bytes 7C DE: jl 0x100e99fe
        __asm _emit 0x7c
        __asm _emit 0xde
        mov eax, dword ptr [esi + 0e74h]
        ; Exact mapped bytes 8B 0D DC 58 1C 10: mov ecx, dword ptr [0x101c58dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        xor edx, edx
        ; Exact mapped bytes 66 8B 50 14: mov dx, word ptr [eax + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x14
        push edx
        push esi
        ; Exact mapped bytes E8 17 9E 00 00: call 0x100f3850
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0e74h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 16: mov cx, word ptr [eax + 0x16]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x16
        push ecx
        ; Exact mapped bytes 8B 0D DC 58 1C 10: mov ecx, dword ptr [0x101c58dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        ; Exact mapped bytes E8 5E 9F 00 00: call 0x100f39b0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 87 50 00 00: call 0x100eeae0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 5c70h]
        cmp eax, 40000h
        ; Exact mapped bytes 74 07: je 0x100e9a6d
        __asm _emit 0x74
        __asm _emit 0x07
        cmp eax, 50000h
        ; Exact mapped bytes 75 46: jne 0x100e9ab3
        __asm _emit 0x75
        __asm _emit 0x46
        mov ecx, esi
        ; Exact mapped bytes E8 6C 4F 00 00: call 0x100ee9e0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x4f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 D5 4F 00 00: call 0x100eea50
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x4f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 5E 4E 00 00: call 0x100ee8e0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 5c30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100e9a98
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 5c30h], ebx
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 4], esi
        ; Exact mapped bytes 75 11: jne 0x100e9ab3
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [ecx + 20b00h]
        ; Exact mapped bytes E8 2D 68 F5 FF: call 0x100402e0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x68
        __asm _emit 0xf5
        __asm _emit 0xff
        lea edi, [esi + 0b8h]
        mov ebp, 24h
        mov eax, dword ptr [edi]
        cmp eax, ebx
        ; Exact mapped bytes 74 09: je 0x100e9acd
        __asm _emit 0x74
        __asm _emit 0x09
        push eax
        ; Exact mapped bytes E8 BA 2C 08 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x2c
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        add edi, 4
        dec ebp
        ; Exact mapped bytes 75 EB: jne 0x100e9abe
        __asm _emit 0x75
        __asm _emit 0xeb
        mov eax, dword ptr [esi + 148h]
        pop edi
        cmp eax, ebx
        pop ebp
        ; Exact mapped bytes 74 09: je 0x100e9ae8
        __asm _emit 0x74
        __asm _emit 0x09
        push eax
        ; Exact mapped bytes E8 9F 2C 08 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x2c
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [esi + 0f18h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100e9afe
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0f18h], ebx
        mov ecx, dword ptr [esi + 8ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100e9b14
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 8ch], ebx
        mov eax, dword ptr [esi + 103ch]
        push eax
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes E8 60 2C 08 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x2c
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        lea ecx, [esi + 0f78h]
        mov dword ptr [esi + 103ch], ebx
        mov dword ptr [esi + 1040h], ebx
        push 100f12e0h
        push 8
        push 10h
        push ecx
        mov dword ptr [esi + 1044h], ebx
        mov byte ptr [esp + 28h], 1
        ; Exact mapped bytes E8 ED 2D 08 00: call 0x1016c940
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x2d
        __asm _emit 0x08
        __asm _emit 0x00
        lea ecx, [esi + 328h]
        mov byte ptr [esp + 18h], bl
        ; Exact mapped bytes E8 8E 78 00 00: call 0x100f13f0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        mov dword ptr [esp + 18h], 0ffffffffh
        ; Exact mapped bytes E8 6F 4B F6 FF: call 0x1004e6e0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x4b
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 10h]
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
        add esp, 14h
        ret
    }
}
