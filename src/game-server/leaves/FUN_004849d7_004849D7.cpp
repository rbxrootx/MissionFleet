// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004849D7 .. +0x31B bytes.
extern "C" __declspec(naked) void FUN_004849d7_004849D7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 18ech]
        ; Exact mapped bytes E8 D1 5A F8 FF: call 0x40a4d0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x5a
        __asm _emit 0xf8
        __asm _emit 0xff
        push 78h
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 18ech]
        ; Exact mapped bytes E8 AD C5 F8 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xc5
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x484a2b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 32h
        ; Exact mapped bytes 0F 8D 49 01 00 00: jge 0x484b7e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 4]
        imul ecx, ecx, 370h
        cmp dword ptr [eax + ecx + 16bdch], 0
        ; Exact mapped bytes 0F 85 24 01 00 00: jne 0x484b79
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 5ch
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 4]
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16be0h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 18ech]
        ; Exact mapped bytes E8 47 C5 F8 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xc5
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x484a91
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 20h
        ; Exact mapped bytes 0F 8D DE 00 00 00: jge 0x484b79
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 4]
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16bdch]
        mov eax, dword ptr [ebp - 0ch]
        imul eax, eax, 0ah
        ; Exact mapped bytes 66 8B 8C 02 2E 01 00 00: mov cx, word ptr [edx + eax + 0x12e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        and ecx, 0ffffh
        cmp ecx, 5
        ; Exact mapped bytes 74 6C: je 0x484b3d
        __asm _emit 0x74
        __asm _emit 0x6c
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 4]
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16bdch]
        mov eax, dword ptr [ebp - 0ch]
        imul eax, eax, 0ah
        ; Exact mapped bytes 66 8B 8C 02 2E 01 00 00: mov cx, word ptr [edx + eax + 0x12e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        and ecx, 0ffffh
        cmp ecx, 6
        ; Exact mapped bytes 74 36: je 0x484b3d
        __asm _emit 0x74
        __asm _emit 0x36
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 4]
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16bdch]
        mov eax, dword ptr [ebp - 0ch]
        imul eax, eax, 0ah
        ; Exact mapped bytes 66 8B 8C 02 2E 01 00 00: mov cx, word ptr [edx + eax + 0x12e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        and ecx, 0ffffh
        cmp ecx, 0dh
        ; Exact mapped bytes 75 37: jne 0x484b74
        __asm _emit 0x75
        __asm _emit 0x37
        push 0ah
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 4]
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16bdch]
        mov eax, dword ptr [ebp - 0ch]
        imul eax, eax, 0ah
        lea ecx, [edx + eax + 12eh]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 18ech]
        ; Exact mapped bytes E8 52 C4 F8 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xc4
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes E9 0F FF FF FF: jmp 0x484a88
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 A4 FE FF FF: jmp 0x484a22
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x484b90
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 64h
        ; Exact mapped bytes 0F 8D 8A 00 00 00: jge 0x484c24
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [edx + eax*4 + 94h], -1
        ; Exact mapped bytes 74 6F: je 0x484c1f
        __asm _emit 0x74
        __asm _emit 0x6f
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 278h]
        shr ecx, 1
        and ecx, 7fffffffh
        cmp ecx, -1
        ; Exact mapped bytes 74 49: je 0x484c1f
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 4]
        imul ecx, ecx, 37ch
        cmp dword ptr [eax + ecx + 2e4h], 0
        ; Exact mapped bytes 75 2D: jne 0x484c1f
        __asm _emit 0x75
        __asm _emit 0x2d
        push 37ch
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 4]
        imul ecx, ecx, 37ch
        lea edx, [eax + ecx + 224h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 18ech]
        ; Exact mapped bytes E8 A7 C3 F8 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xc3
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes E9 63 FF FF FF: jmp 0x484b87
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 C7 45 F8 7C 00: mov word ptr [ebp - 8], 0x7c
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xf8
        __asm _emit 0x7c
        __asm _emit 0x00
        push 2
        lea ecx, [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 18ech]
        ; Exact mapped bytes E8 88 C3 F8 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xc3
        __asm _emit 0xf8
        __asm _emit 0xff
        push 1dch
        mov eax, dword ptr [ebp - 10h]
        add eax, 1ch
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 18ech]
        ; Exact mapped bytes E8 6E C3 F8 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xc3
        __asm _emit 0xf8
        __asm _emit 0xff
        push 0
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 18ech]
        ; Exact mapped bytes E8 28 58 F8 FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x58
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 18ech]
        ; Exact mapped bytes E8 F9 57 F8 FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x57
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        push 8002h
        push 0
        push 80000002h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A6 25 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [edx + 18h]
        push eax
        push 80025000h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 79 25 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8F EC F7 FF: call 0x403950
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xec
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 08 57 F8 FF: call 0x40a3d0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x484ce2
        __asm _emit 0x74
        __asm _emit 0x16
        push 0
        push 46ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 75 EC F7 FF: call 0x403950
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xec
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2E EC F7 FF: call 0x403910
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xec
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 F4 3A 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x3a
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
