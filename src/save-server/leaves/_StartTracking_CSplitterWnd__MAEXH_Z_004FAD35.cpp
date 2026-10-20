// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FAD35 .. +0x2AF bytes.
extern "C" __declspec(naked) void _StartTracking_CSplitterWnd__MAEXH_Z_004FAD35() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 1ch], ecx
        push 337h
        push 674fe8h
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 0F F5 FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xf5
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 05: jne 0x4fad5c
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 82 02 00 00: jmp 0x4fafde
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 90h
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 90 08 01 00 00: call dword ptr [eax + 0x108]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 12dh
        ; Exact mapped bytes 0F 8C 9D 00 00 00: jl 0x4fae1e
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 20dh
        ; Exact mapped bytes 0F 8F 90 00 00 00: jg 0x4fae1e
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        sub eax, 12dh
        cdq
        mov ecx, 0fh
        idiv ecx
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp + 8]
        sub eax, 12dh
        cdq
        mov ecx, 0fh
        idiv ecx
        mov dword ptr [ebp - 8], edx
        mov edx, dword ptr [ebp - 1ch]
        add edx, 0a0h
        push edx
        mov eax, dword ptr [ebp - 0ch]
        add eax, 65h
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 92 0C 01 00 00: call dword ptr [edx + 0x10c]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 8ch]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [edx + 84h], 1
        mov eax, dword ptr [ebp - 1ch]
        add eax, 0b0h
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 0c9h
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 90 0C 01 00 00: call dword ptr [eax + 0x10c]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 8ch], edx
        ; Exact mapped bytes E9 C7 00 00 00: jmp 0x4faee5
        __asm _emit 0xe9
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 3
        ; Exact mapped bytes 0F 85 A1 00 00 00: jne 0x4faec9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        add eax, 0a0h
        push eax
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 92 0C 01 00 00: call dword ptr [edx + 0x10c]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 8ch]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [edx + 84h], 1
        mov eax, dword ptr [ebp - 1ch]
        add eax, 0b0h
        push eax
        push 2
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 92 0C 01 00 00: call dword ptr [edx + 0x10c]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax + 8ch], ecx
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 90h
        ; Exact mapped bytes E8 39 74 03 00: call 0x5322c6
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        cdq
        sub eax, edx
        sar eax, 1
        push eax
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 0a0h
        ; Exact mapped bytes E8 CF 76 03 00: call 0x532572
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x76
        __asm _emit 0x03
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 90h
        ; Exact mapped bytes E8 FD 73 03 00: call 0x5322b0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x73
        __asm _emit 0x03
        __asm _emit 0x00
        cdq
        sub eax, edx
        sar eax, 1
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 0b0h
        ; Exact mapped bytes E8 AB 76 03 00: call 0x532572
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x76
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 1C: jmp 0x4faee5
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 1ch]
        add edx, 0a0h
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 92 0C 01 00 00: call dword ptr [edx + 0x10c]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        mov eax, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 92 E8 00 00 00: call dword ptr [edx + 0xe8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 56: je 0x4faf56
        __asm _emit 0x74
        __asm _emit 0x56
        push 636f20h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 83 F2 FD FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xf2
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 45: je 0x4faf56
        __asm _emit 0x74
        __asm _emit 0x45
        push 361h
        push 674fe8h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 3C F3 FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xf3
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 46 7B FD FF: call 0x4d2a72
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x7b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        push 363h
        push 674fe8h
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 1E F3 FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xf3
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        push edx
        push 0
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 F0 00 00 00: call dword ptr [edx + 0xf0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 E6 15 03 00: call 0x52c544
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x15
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 A5 B9 FD FF: call 0x4d690b
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xb9
        __asm _emit 0xfd
        __asm _emit 0xff
        push 180h
        push 0
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 07 14 03 00: call 0x52c37e
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x14
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [eax + 80h], 1
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 0a0h
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 90 CC 00 00 00: call dword ptr [eax + 0xcc]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx + 84h], 0
        ; Exact mapped bytes 74 18: je 0x4fafc0
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 1ch]
        add edx, 0b0h
        push edx
        mov eax, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 92 CC 00 00 00: call dword ptr [edx + 0xcc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 0c0h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 92 1C 01 00 00: call dword ptr [edx + 0x11c]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
