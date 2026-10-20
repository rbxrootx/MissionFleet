// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00474F30 .. +0x3B8 bytes.
extern "C" __declspec(naked) void FUN_00474f30_00474F30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        ; Exact mapped bytes A1 48 02 68 00: mov eax, dword ptr [0x680248]
        __asm _emit 0xa1
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        cmp dword ptr [ecx + 10h], -1
        ; Exact mapped bytes 0F 84 5C 01 00 00: je 0x4750a7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 2018h
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 20h]
        add edx, 18h
        mov eax, dword ptr [ebp - 4]
        sub eax, edx
        sar eax, 3
        shl eax, 0ch
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 10h]
        add edx, eax
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 15: jmp 0x474f93
        __asm _emit 0xeb
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 4]
        add eax, 8
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1000h
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 73 69: jae 0x475004
        __asm _emit 0x73
        __asm _emit 0x69
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 7C 5A: jl 0x474fff
        __asm _emit 0x7c
        __asm _emit 0x5a
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 76 4F: jbe 0x474fff
        __asm _emit 0x76
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 2D 03 00 00: call 0x4752f0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 27: je 0x474ff6
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 89 15 48 02 68 00: mov dword ptr [0x680248], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        sub ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 8], ecx
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E9 EE 02 00 00: jmp 0x4752e4
        __asm _emit 0xe9
        __asm _emit 0xee
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 4], eax
        ; Exact mapped bytes E9 7A FF FF FF: jmp 0x474f7e
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 18h
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 15: jmp 0x475036
        __asm _emit 0xeb
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 4]
        add eax, 8
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1000h
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 73 69: jae 0x4750a7
        __asm _emit 0x73
        __asm _emit 0x69
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 7C 5A: jl 0x4750a2
        __asm _emit 0x7c
        __asm _emit 0x5a
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 76 4F: jbe 0x4750a2
        __asm _emit 0x76
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 8A 02 00 00: call 0x4752f0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 27: je 0x475099
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 89 15 48 02 68 00: mov dword ptr [0x680248], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        sub ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 8], ecx
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E9 4B 02 00 00: jmp 0x4752e4
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 4], eax
        ; Exact mapped bytes E9 7A FF FF FF: jmp 0x475021
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 3B 05 48 02 68 00: cmp eax, dword ptr [0x680248]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 80 FE FF FF: jne 0x474f3e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], 67e228h
        mov ecx, dword ptr [ebp - 20h]
        cmp dword ptr [ecx + 10h], -1
        ; Exact mapped bytes 0F 84 95 01 00 00: je 0x475267
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        cmp dword ptr [edx + 0ch], 0
        ; Exact mapped bytes 0F 84 88 01 00 00: je 0x475267
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 20h]
        add edx, 18h
        mov eax, dword ptr [ebp - 4]
        sub eax, edx
        sar eax, 3
        shl eax, 0ch
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 10h]
        add edx, eax
        mov dword ptr [ebp - 8], edx
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 12: jmp 0x475125
        __asm _emit 0xeb
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 8
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax], -1
        ; Exact mapped bytes 75 08: jne 0x475135
        __asm _emit 0x75
        __asm _emit 0x08
        cmp dword ptr [ebp - 14h], 10h
        ; Exact mapped bytes 7D 02: jge 0x475135
        __asm _emit 0x7d
        __asm _emit 0x02
        ; Exact mapped bytes EB DE: jmp 0x475113
        __asm _emit 0xeb
        __asm _emit 0xde
        push 4
        push 1000h
        mov ecx, dword ptr [ebp - 14h]
        shl ecx, 0ch
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 58 B8 68 00: call dword ptr [0x68b858]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F 85 0D 01 00 00: jne 0x475263
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov eax, dword ptr [ebp - 14h]
        shl eax, 0ch
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 58 07 FF FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x07
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 18h], 0
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 1E: jmp 0x47519e
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 1ch]
        add edx, 1000h
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 10h]
        add eax, 8
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 18h]
        cmp ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 7D 34: jge 0x4751da
        __asm _emit 0x7d
        __asm _emit 0x34
        mov edx, dword ptr [ebp - 1ch]
        add edx, 8
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ecx + 4], 0f0h
        mov edx, dword ptr [ebp - 1ch]
        mov byte ptr [edx + 0f8h], 0ffh
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 0f0h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 4], 0f1h
        ; Exact mapped bytes EB A6: jmp 0x475180
        __asm _emit 0xeb
        __asm _emit 0xa6
        mov edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 89 15 48 02 68 00: mov dword ptr [0x680248], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        add eax, 2018h
        cmp dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 73 13: jae 0x475203
        __asm _emit 0x73
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx], -1
        ; Exact mapped bytes 74 0B: je 0x475203
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 10h]
        add edx, 8
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes EB E0: jmp 0x4751e3
        __asm _emit 0xeb
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 20h]
        add eax, 2018h
        cmp dword ptr [ebp - 10h], eax
        sbb ecx, ecx
        and ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 0ch], ecx
        mov eax, dword ptr [ebp - 8]
        mov cl, byte ptr [ebp + 8]
        mov byte ptr [eax + 8], cl
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        sub edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 8]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        sub eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 4], eax
        mov eax, dword ptr [ebp - 8]
        add eax, 100h
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x4752e4
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 7D: jmp 0x4752e4
        __asm _emit 0xeb
        __asm _emit 0x7d
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 67e228h
        ; Exact mapped bytes 0F 85 49 FE FF FF: jne 0x4750c5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x49
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 EF F7 FF FF: call 0x474a70
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 58: je 0x4752e2
        __asm _emit 0x74
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        mov cl, byte ptr [ebp + 8]
        mov byte ptr [eax + 8], cl
        mov edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 89 15 48 02 68 00: mov dword ptr [0x680248], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 8]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax], edx
        mov ecx, 0f0h
        sub ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffh
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 18h]
        sub edx, eax
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 18h], edx
        mov eax, dword ptr [ebp - 8]
        add eax, 100h
        ; Exact mapped bytes EB 02: jmp 0x4752e4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
