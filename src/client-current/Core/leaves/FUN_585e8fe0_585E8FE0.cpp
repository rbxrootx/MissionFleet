// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585E8FE0 .. +0x37A bytes.
extern "C" __declspec(naked) void FUN_585e8fe0_585E8FE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10678h], 10000000h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 1072ch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 324h], 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 584h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 588h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 5a4h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 590h], 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 5a8h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 1070ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10714h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10710h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 580h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 20efch], 0
        mov ecx, 8
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A F8 0E 02 00: mov word ptr [edx + 0x20ef8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xf8
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 106dch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 106e0h], 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 106e4h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 106d0h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 106d4h], 320h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 106a0h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10bech], 0ffffffffh
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 20f0ch]
        ; Exact mapped bytes E8 B6 77 1D 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x77
        __asm _emit 0x1d
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20f0ch]
        mov dword ptr [ebp - 10h], eax
        push 262h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 0D C6 1C 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xc6
        __asm _emit 0x1c
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585e9136
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 7D 1D: jge 0x585e9159
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 2e4h]
        mov dword ptr [ebp - 14h], ecx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 8A CD E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xcd
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x585e912d
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585e916b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 7D 13: jge 0x585e9184
        __asm _emit 0x7d
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 10bcch], 55555555h
        ; Exact mapped bytes EB DE: jmp 0x585e9162
        __asm _emit 0xeb
        __asm _emit 0xde
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585e9196
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 7D 37: jge 0x585e91d3
        __asm _emit 0x7d
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 10dach]
        mov dword ptr [ebp - 18h], edx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 DA 1F 1D 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x1f
        __asm _emit 0x1d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 10dc0h]
        mov dword ptr [ebp - 1ch], edx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 C0 1F 1D 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x1f
        __asm _emit 0x1d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BA: jmp 0x585e918d
        __asm _emit 0xeb
        __asm _emit 0xba
        mov eax, 4
        shl eax, 2
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 10dach]
        mov dword ptr [ebp - 20h], edx
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 9E 1F 1D 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x1f
        __asm _emit 0x1d
        __asm _emit 0x00
        push 200h
        push 0
        mov eax, dword ptr [ebp - 4]
        add eax, 37ch
        push eax
        ; Exact mapped bytes E8 09 3C 26 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x3c
        __asm _emit 0x26
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 106fch]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 106fch]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10d6ch]
        mov dword ptr [ecx + 10d68h], eax
        ; Exact mapped bytes 83 3D F8 1F 96 58 00: cmp dword ptr [0x58961ff8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 14: je 0x585e9252
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 8B 0D F8 1F 96 58: mov ecx, dword ptr [0x58961ff8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes 8B 0D F8 1F 96 58: mov ecx, dword ptr [0x58961ff8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10d68h]
        ; Exact mapped bytes 89 15 F8 1F 96 58: mov dword ptr [0x58961ff8], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, 4
        imul ecx, eax, 0
        cmp dword ptr [ecx + 58947974h], 0
        ; Exact mapped bytes 74 5B: je 0x585e92cd
        __asm _emit 0x74
        __asm _emit 0x5b
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 10d68h], 0
        ; Exact mapped bytes 74 4F: je 0x585e92cd
        __asm _emit 0x74
        __asm _emit 0x4f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10d68h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10d68h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 28h], edx
        ; Exact mapped bytes A1 64 20 96 58: mov eax, dword ptr [0x58962064]
        __asm _emit 0xa1
        __asm _emit 0x64
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 55 D8: call dword ptr [ebp - 0x28]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10d68h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10d68h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 30h], eax
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 55 D0: call dword ptr [ebp - 0x30]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd0
        nop
        mov ecx, 4
        shl ecx, 2
        mov edx, dword ptr [ecx + 58947974h]
        or edx, 10000h
        mov eax, 4
        shl eax, 2
        mov dword ptr [eax + 58947974h], edx
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A6 FF EC FF: call 0x584b92a0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xff
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5F FF EC FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0xec
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 2
        ; Exact mapped bytes 75 1C: jne 0x585e9325
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8C FF EC FF: call 0x584b92a0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        push 300h
        push 400h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 39 DB EC FF: call 0x584b6e70
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xdb
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 106fch]
        mov dword ptr [ebp - 34h], ecx
        push 300h
        push 400h
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 1B DB EC FF: call 0x584b6e70
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xdb
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
