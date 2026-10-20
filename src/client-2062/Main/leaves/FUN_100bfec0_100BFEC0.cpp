// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100BFEC0 .. +0x397 bytes.
extern "C" __declspec(naked) void FUN_100bfec0_100BFEC0() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 60 03 00 00: je 0x100c0230
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x60
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 1f00h
        ; Exact mapped bytes 66 3D 00 01: cmp ax, 0x100
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 BE 01 00 00: jne 0x100c009d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8ch]
        mov eax, dword ptr [ecx + 28h]
        add eax, 6
        cmp eax, 8ch
        ; Exact mapped bytes 7D 03: jge 0x100bfef5
        __asm _emit 0x7d
        __asm _emit 0x03
        push eax
        ; Exact mapped bytes EB 05: jmp 0x100bfefa
        __asm _emit 0xeb
        __asm _emit 0x05
        push 8ch
        ; Exact mapped bytes E8 21 F2 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xf2
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 88h]
        mov eax, dword ptr [ecx + 28h]
        add eax, 6
        cmp eax, 0fah
        ; Exact mapped bytes 0F 8D A7 00 00 00: jge 0x100bffbd
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8ch]
        mov eax, dword ptr [edx + 28h]
        add eax, 6
        push eax
        ; Exact mapped bytes E8 F8 F1 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xf1
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 90h]
        mov edx, dword ptr [ecx + 28h]
        add edx, 6
        push edx
        ; Exact mapped bytes E8 E6 F1 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xf1
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 94h]
        mov eax, dword ptr [ecx + 28h]
        add eax, 6
        push eax
        ; Exact mapped bytes E8 D4 F1 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xf1
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 98h]
        mov edx, dword ptr [ecx + 28h]
        add edx, 6
        push edx
        ; Exact mapped bytes E8 C2 F1 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xf1
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 9ch]
        mov eax, dword ptr [ecx + 28h]
        add eax, 6
        push eax
        ; Exact mapped bytes E8 B0 F1 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xf1
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a0h]
        mov edx, dword ptr [ecx + 28h]
        add edx, 6
        push edx
        ; Exact mapped bytes E8 9E F1 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xf1
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a4h]
        mov eax, dword ptr [ecx + 28h]
        add eax, 6
        push eax
        ; Exact mapped bytes E8 8C F1 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xf1
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a8h]
        mov edx, dword ptr [ecx + 28h]
        add edx, 6
        push edx
        ; Exact mapped bytes E8 7A F1 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xf1
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ach]
        mov eax, dword ptr [ecx + 28h]
        add eax, 6
        push eax
        ; Exact mapped bytes E8 68 F1 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xf1
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 73 02 00 00: jmp 0x100c0230
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ffh
        ; Exact mapped bytes E8 59 F1 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xf1
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 90h]
        push 0ffh
        ; Exact mapped bytes E8 49 F1 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xf1
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 94h]
        push 0ffh
        ; Exact mapped bytes E8 39 F1 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xf1
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 98h]
        push 0ffh
        ; Exact mapped bytes E8 29 F1 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xf1
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 98h]
        push 0ffh
        mov dword ptr [ecx + 50h], 5
        mov ecx, dword ptr [esi + 9ch]
        ; Exact mapped bytes E8 0C F1 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xf1
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a0h]
        push 0ffh
        ; Exact mapped bytes E8 FC F0 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xf0
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a4h]
        push 0ffh
        ; Exact mapped bytes E8 EC F0 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xf0
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a8h]
        push 0ffh
        ; Exact mapped bytes E8 DC F0 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xf0
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ach]
        push 0ffh
        ; Exact mapped bytes E8 CC F0 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xf0
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8ch]
        push 8ch
        ; Exact mapped bytes E8 BC F0 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xf0
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c4h]
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x100c0086
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [esi + 0b0h]
        mov edx, dword ptr [esi + 0a0h]
        mov dword ptr [esi + 0b8h], eax
        mov dword ptr [edx + 80h], eax
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        and eax, 0e2ffh
        or eax, 202h
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes E9 93 01 00 00: jmp 0x100c0230
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 00 04: cmp ax, 0x400
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 0F 85 56 01 00 00: jne 0x100c01fd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8ch]
        mov eax, dword ptr [ecx + 28h]
        add eax, -6
        test eax, eax
        ; Exact mapped bytes 7E 03: jle 0x100c00ba
        __asm _emit 0x7e
        __asm _emit 0x03
        push eax
        ; Exact mapped bytes EB 02: jmp 0x100c00bc
        __asm _emit 0xeb
        __asm _emit 0x02
        push 0
        ; Exact mapped bytes E8 5F F0 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xf0
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 88h]
        mov edx, dword ptr [ecx + 28h]
        sub edx, 6
        test edx, edx
        ; Exact mapped bytes 0F 8E A7 00 00 00: jle 0x100c017c
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8ch]
        mov edx, dword ptr [eax + 28h]
        sub edx, 6
        push edx
        ; Exact mapped bytes E8 39 F0 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xf0
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 90h]
        mov eax, dword ptr [ecx + 28h]
        sub eax, 6
        push eax
        ; Exact mapped bytes E8 27 F0 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xf0
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 94h]
        mov edx, dword ptr [ecx + 28h]
        sub edx, 6
        push edx
        ; Exact mapped bytes E8 15 F0 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 98h]
        mov eax, dword ptr [ecx + 28h]
        sub eax, 6
        push eax
        ; Exact mapped bytes E8 03 F0 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xf0
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 9ch]
        mov edx, dword ptr [ecx + 28h]
        sub edx, 6
        push edx
        ; Exact mapped bytes E8 F1 EF 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xef
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a0h]
        mov eax, dword ptr [ecx + 28h]
        sub eax, 6
        push eax
        ; Exact mapped bytes E8 DF EF 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xef
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a4h]
        mov edx, dword ptr [ecx + 28h]
        sub edx, 6
        push edx
        ; Exact mapped bytes E8 CD EF 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xef
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a8h]
        mov eax, dword ptr [ecx + 28h]
        sub eax, 6
        push eax
        ; Exact mapped bytes E8 BB EF 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xef
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ach]
        mov edx, dword ptr [ecx + 28h]
        sub edx, 6
        push edx
        ; Exact mapped bytes E8 A9 EF 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xef
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 B4 00 00 00: jmp 0x100c0230
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes E8 9D EF 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xef
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 90h]
        push 0
        ; Exact mapped bytes E8 90 EF 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xef
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 94h]
        push 0
        ; Exact mapped bytes E8 83 EF 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xef
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 98h]
        push 0
        ; Exact mapped bytes E8 76 EF 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xef
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 9ch]
        push 0
        ; Exact mapped bytes E8 69 EF 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xef
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a0h]
        push 0
        ; Exact mapped bytes E8 5C EF 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xef
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a4h]
        push 0
        ; Exact mapped bytes E8 4F EF 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xef
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a8h]
        push 0
        ; Exact mapped bytes E8 42 EF 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xef
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ach]
        push 0
        ; Exact mapped bytes E8 35 EF 03 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xef
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        and eax, 0e5fch
        or ah, 5
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes EB 33: jmp 0x100c0230
        __asm _emit 0xeb
        __asm _emit 0x33
        ; Exact mapped bytes 66 3D 00 05: cmp ax, 0x500
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x05
        ; Exact mapped bytes 75 2D: jne 0x100c0230
        __asm _emit 0x75
        __asm _emit 0x2d
        ; Exact mapped bytes 83 3D C8 91 1C 10 0C: cmp dword ptr [0x101c91c8], 0xc
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc8
        __asm _emit 0x91
        __asm _emit 0x1c
        __asm _emit 0x10
        __asm _emit 0x0c
        ; Exact mapped bytes 75 1E: jne 0x100c022a
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 0D EC 56 1C 10: mov ecx, dword ptr [0x101c56ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 89 EF F6 FF: call 0x1002f1a0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xef
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D EC 56 1C 10: mov ecx, dword ptr [0x101c56ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 CE FE F6 FF: call 0x100300f0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xfe
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes 66 81 66 24 FB FF: and word ptr [esi + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x100c0230
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes FF 05 C8 91 1C 10: inc dword ptr [0x101c91c8]
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0xc8
        __asm _emit 0x91
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x100c0254
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [esi + 3ch]
        cmp edi, eax
        ; Exact mapped bytes 74 0E: je 0x100c024f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        test edi, edi
        mov ecx, edi
        ; Exact mapped bytes 75 EB: jne 0x100c0237
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        pop edi
        pop esi
        ret
    }
}
