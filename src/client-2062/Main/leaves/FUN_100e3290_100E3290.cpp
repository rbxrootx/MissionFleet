// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100E3290 .. +0x1CF bytes.
extern "C" __declspec(naked) void FUN_100e3290_100E3290() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push ebp
        push esi
        push edi
        test eax, eax
        mov esi, ecx
        mov ebp, 1
        ; Exact mapped bytes 7C 11: jl 0x100e32b3
        __asm _emit 0x7c
        __asm _emit 0x11
        cmp eax, 8
        ; Exact mapped bytes 7D 0C: jge 0x100e32b3
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov dword ptr [esi + 0a8h], 0
        ; Exact mapped bytes EB 0B: jmp 0x100e32be
        __asm _emit 0xeb
        __asm _emit 0x0b
        cmp eax, -1
        ; Exact mapped bytes 74 06: je 0x100e32be
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [esi + 0a8h], ebp
        mov ecx, dword ptr [esp + 14h]
        xor eax, eax
        mov al, byte ptr [esi + 57h]
        cmp eax, ecx
        ; Exact mapped bytes 0F 8C 84 01 00 00: jl 0x100e3453
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [esp + 18h]
        ; Exact mapped bytes 0F 8F 7A 01 00 00: jg 0x100e3453
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 50h]
        mov edi, 40000000h
        cmp eax, edi
        ; Exact mapped bytes 0F 85 70 01 00 00: jne 0x100e3459
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 88h]
        or byte ptr [esi + 24h], 0fh
        mov ecx, dword ptr [esi + 0e4h]
        xor edx, edx
        test eax, eax
        setl dl
        dec edx
        mov dword ptr [esi + 9ch], edi
        and edx, eax
        mov dword ptr [ecx + 60h], edi
        mov dword ptr [ecx + 5ch], edx
        mov eax, dword ptr [esi + 8ch]
        mov ecx, dword ptr [esi + 0e8h]
        push eax
        ; Exact mapped bytes E8 7F 02 00 00: call 0x100e35a0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 90h]
        push ecx
        mov ecx, dword ptr [esi + 0ech]
        ; Exact mapped bytes E8 6D 02 00 00: call 0x100e35a0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 98h]
        mov ecx, dword ptr [esi + 0f0h]
        push edx
        ; Exact mapped bytes E8 5B 02 00 00: call 0x100e35a0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0bch]
        ; Exact mapped bytes E8 60 55 F3 FF: call 0x100188b0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x55
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0c0h]
        ; Exact mapped bytes E8 55 55 F3 FF: call 0x100188b0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x55
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0c4h]
        ; Exact mapped bytes 8B 3D B0 50 17 10: mov edi, dword ptr [0x101750b0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x100e337b
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, 101ac338h
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x100e337b
        __asm _emit 0x74
        __asm _emit 0x04
        push ecx
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, dword ptr [esi + 0c8h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x100e3395
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, 101ac338h
        test edx, edx
        ; Exact mapped bytes 74 04: je 0x100e3395
        __asm _emit 0x74
        __asm _emit 0x04
        push edx
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, dword ptr [esi + 0dch]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x100e33af
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, 101ac338h
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x100e33af
        __asm _emit 0x74
        __asm _emit 0x04
        push ecx
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, dword ptr [esi + 0e0h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x100e33c9
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, 101ac338h
        test edx, edx
        ; Exact mapped bytes 74 04: je 0x100e33c9
        __asm _emit 0x74
        __asm _emit 0x04
        push edx
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, dword ptr [esi + 0a8h]
        cmp eax, ebp
        ; Exact mapped bytes 75 32: jne 0x100e3405
        __asm _emit 0x75
        __asm _emit 0x32
        mov eax, dword ptr [esi + 0c4h]
        mov edi, 0fffeh
        lea ecx, [esi + 0cch]
        mov edx, 4
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0c8h]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x100e33f7
        __asm _emit 0x75
        __asm _emit 0xf4
        ; Exact mapped bytes EB 34: jmp 0x100e3439
        __asm _emit 0xeb
        __asm _emit 0x34
        test eax, eax
        ; Exact mapped bytes 75 30: jne 0x100e3439
        __asm _emit 0x75
        __asm _emit 0x30
        mov eax, dword ptr [esi + 0c4h]
        lea ecx, [esi + 0cch]
        mov edx, 4
        mov edi, 0fffeh
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0c8h]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x100e342d
        __asm _emit 0x75
        __asm _emit 0xf4
        mov eax, dword ptr [esi + 0dch]
        pop edi
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov esi, dword ptr [esi + 0e0h]
        ; Exact mapped bytes 66 09 6E 24: or word ptr [esi + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x6e
        __asm _emit 0x24
        pop esi
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 66 24 F0 FF: and word ptr [esi + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
