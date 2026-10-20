// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585E4BC0 .. +0x20E bytes.
extern "C" __declspec(naked) void FUN_585e4bc0_585E4BC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FF 01 00 00: call 0x585e4dd0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D7 9C 00 00: call 0x585ee8b0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585e4bec
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 44: jge 0x585e4c36
        __asm _emit 0x7d
        __asm _emit 0x44
        imul ecx, dword ptr [ebp - 8], 38h
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx + 2205ch], 0
        ; Exact mapped bytes 74 31: je 0x585e4c34
        __asm _emit 0x74
        __asm _emit 0x31
        imul eax, dword ptr [ebp - 8], 38h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 2205ch]
        mov dword ptr [ebp - 10h], edx
        push 4
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 15 C4 24 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 8
        imul ecx, dword ptr [ebp - 8], 38h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 2205ch], 0
        ; Exact mapped bytes EB AD: jmp 0x585e4be3
        __asm _emit 0xeb
        __asm _emit 0xad
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
        mov dword ptr [eax + 10670h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10674h], 0
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 10688h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10694h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10698h], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E8 FE FF FF: call 0x585e4b80
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 106ach], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 106b8h], 0ffffffffh
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 106c0h], 0
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B7 46 00 00: call 0x585e9380
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 1065ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 598h], 0
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 5ach], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 5a8h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 590h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 2bch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 2c0h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 20ffch], 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 106a4h
        ; Exact mapped bytes E8 04 9B 00 00: call 0x585ee840
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 20f2ch]
        ; Exact mapped bytes E8 26 CD F7 FF: call 0x58561a70
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xcd
        __asm _emit 0xf7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 20f30h]
        ; Exact mapped bytes E8 18 CD F7 FF: call 0x58561a70
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xcd
        __asm _emit 0xf7
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x585e4d6b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 8
        ; Exact mapped bytes 7D 13: jge 0x585e4d84
        __asm _emit 0x7d
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 29ch], 0
        ; Exact mapped bytes EB DE: jmp 0x585e4d62
        __asm _emit 0xeb
        __asm _emit 0xde
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 20f34h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 21a88h], 0
        ; Exact mapped bytes 74 0F: je 0x585e4dac
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 21e20h]
        ; Exact mapped bytes E8 65 5F FE FF: call 0x585cad10
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x5f
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 7
        ; Exact mapped bytes 75 0F: jne 0x585e4dca
        __asm _emit 0x75
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 220dch]
        ; Exact mapped bytes E8 57 A9 FA FF: call 0x5858f720
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xa9
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
