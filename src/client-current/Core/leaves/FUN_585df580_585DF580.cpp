// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585DF580 .. +0x28E bytes.
extern "C" __declspec(naked) void FUN_585df580_585DF580() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 58h]
        cmp edx, dword ptr [ecx + 28h]
        ; Exact mapped bytes 74 3D: je 0x585df5d4
        __asm _emit 0x74
        __asm _emit 0x3d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 5ch]
        cmp edx, dword ptr [ecx + 2ch]
        ; Exact mapped bytes 74 2F: je 0x585df5d4
        __asm _emit 0x74
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 58h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8C 5F 1D 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x5f
        __asm _emit 0x1d
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 ED 5F 1D 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x5f
        __asm _emit 0x1d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E5 87 00 00: call 0x585e7db0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2D 5C 00 00: call 0x585e5200
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        add ecx, 106a4h
        ; Exact mapped bytes E8 5E F2 00 00: call 0x585ee840
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 22bh
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 4D 5C 15 00: call 0x58735240
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x5c
        __asm _emit 0x15
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0e0ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, 200h
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 CA 02: or dx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0x02
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20f08h]
        mov dword ptr [ebp - 8], edx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A7 67 EA FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x67
        __asm _emit 0xea
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 20f18h], 0
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 1077ah]
        cmp edx, 7
        ; Exact mapped bytes 75 11: jne 0x585df666
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 220dch]
        ; Exact mapped bytes E8 AD 0C FB FF: call 0x58590310
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x0c
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 4A: jmp 0x585df6b0
        __asm _emit 0xeb
        __asm _emit 0x4a
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4F 73 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x73
        __asm _emit 0xea
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 3B: je 0x585df6b0
        __asm _emit 0x74
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 40 73 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x73
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 29 CA EA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xca
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2B 73 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x73
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 24 73 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x73
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 11 58 00 00: call 0x585e4ec0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 6
        ; Exact mapped bytes 75 0F: jne 0x585df6ce
        __asm _emit 0x75
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 220e0h]
        ; Exact mapped bytes E8 D3 AD EE FF: call 0x584ca4a0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xad
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        push 1
        ; Exact mapped bytes 8B 0D 88 06 96 58: mov ecx, dword ptr [0x58960688]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 05 68 EA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x68
        __asm _emit 0xea
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ecx + 5896068ch]
        mov dword ptr [ebp - 14h], edx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 EA 67 EA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x67
        __asm _emit 0xea
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [eax + 5896068ch]
        mov dword ptr [ebp - 18h], ecx
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 CF 67 EA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x67
        __asm _emit 0xea
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [eax + 5896068ch]
        mov dword ptr [ebp - 1ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 64 BA 1D 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xba
        __asm _emit 0x1d
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [edx + 5896068ch]
        mov dword ptr [ebp - 20h], eax
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 49 BA 1D 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xba
        __asm _emit 0x1d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 106fch]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 106fch]
        mov eax, dword ptr [edx + 24h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D 80 75 94 58: mov ecx, dword ptr [0x58947580]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F5 51 00 00: call 0x585e4960
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x51
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 10da4h]
        mov dword ptr [ebp - 24h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 06 68 EA FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x68
        __asm _emit 0xea
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10d24h]
        mov dword ptr [ebp - 28h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 F0 67 EA FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x67
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20e74h]
        mov dword ptr [ebp - 2ch], edx
        push 17h
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 6A 1C F7 FF: call 0x58551420
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x1c
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20e74h]
        mov dword ptr [ebp - 30h], ecx
        push 3
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 54 1C F7 FF: call 0x58551420
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x1c
        __asm _emit 0xf7
        __asm _emit 0xff
        push 3
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1A 76 00 00: call 0x585e6df0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 280h]
        ; Exact mapped bytes E8 0C 99 16 00: call 0x587490f0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x99
        __asm _emit 0x16
        __asm _emit 0x00
        ; Exact mapped bytes A1 34 06 96 58: mov eax, dword ptr [0x58960634]
        __asm _emit 0xa1
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [eax]
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D 38 06 96 58: mov ecx, dword ptr [0x58960638]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes 8B 0D 38 06 96 58: mov ecx, dword ptr [0x58960638]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
