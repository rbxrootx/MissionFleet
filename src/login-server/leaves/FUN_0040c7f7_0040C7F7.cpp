// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040C7F7 .. +0x2F8 bytes.
extern "C" __declspec(naked) void FUN_0040c7f7_0040C7F7() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 439f16h
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
        sub esp, 28h
        push esi
        push edi
        mov dword ptr [ebp - 2ch], ecx
        mov eax, dword ptr [ebp - 2ch]
        cmp dword ptr [eax + 0cb4h], 0
        ; Exact mapped bytes 74 07: je 0x40c82a
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 B3 02 00 00: jmp 0x40cadd
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3E EB FF FF: call 0x40b370
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x40c83d
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 A0 02 00 00: jmp 0x40cadd
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 0cb4h], edx
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [eax + 0cbch], 0
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ecx + 0cb0h], 1
        mov ecx, dword ptr [ebp + 8]
        add ecx, 0e4h
        ; Exact mapped bytes E8 1F EB FF FF: call 0x40b390
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 7D 13: jge 0x40c889
        __asm _emit 0x7d
        __asm _emit 0x13
        mov ecx, dword ptr [ebp + 8]
        add ecx, 0e4h
        ; Exact mapped bytes E8 0C EB FF FF: call 0x40b390
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 06: jmp 0x40c88f
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [eax + 0cc0h], ecx
        mov edx, dword ptr [ebp - 2ch]
        cmp dword ptr [edx + 0cc4h], 0
        ; Exact mapped bytes 74 18: je 0x40c8bf
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 0cc4h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 59 10 02 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 0cc0h]
        imul ecx, ecx, 38h
        push ecx
        ; Exact mapped bytes E8 1B 10 02 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [edx + 0cc4h], eax
        mov ecx, dword ptr [ebp - 2ch]
        cmp dword ptr [ecx + 0cc8h], 0
        ; Exact mapped bytes 74 18: je 0x40c907
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 0cc8h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 11 10 02 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 0cc0h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        imul ecx, ecx, 0b0h
        push ecx
        ; Exact mapped bytes E8 CA 0F 02 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x0f
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 1F: je 0x40c954
        __asm _emit 0x74
        __asm _emit 0x1f
        push 40d310h
        mov edx, dword ptr [ebp - 14h]
        push edx
        push 0b0h
        mov eax, dword ptr [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 F4 09 00 00: call 0x40d340
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 34h], ecx
        ; Exact mapped bytes EB 07: jmp 0x40c95b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 24h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [eax + 0cc8h], ecx
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x40c986
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [eax + 0cc0h]
        ; Exact mapped bytes 0F 8D E4 00 00 00: jge 0x40ca7c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        add ecx, 0e4h
        ; Exact mapped bytes E8 CA 09 00 00: call 0x40d370
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        mov edx, dword ptr [ebp - 10h]
        imul edx, edx, 38h
        mov eax, dword ptr [ebp - 2ch]
        mov edi, dword ptr [eax + 0cc4h]
        add edi, edx
        mov ecx, 0eh
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        push 18h
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, ecx, 38h
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 0cc4h]
        add eax, ecx
        push eax
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, ecx, 0b0h
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 0cc8h]
        add eax, ecx
        push eax
        ; Exact mapped bytes E8 D2 21 01 00: call 0x41ebc0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, ecx, 0b0h
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 0cc8h]
        mov byte ptr [eax + ecx + 18h], 0
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, ecx, 0b0h
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 0cc8h]
        mov dword ptr [eax + ecx + 48h], 4
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, ecx, 38h
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 0cc4h]
        mov edx, dword ptr [ebp - 10h]
        imul edx, edx, 0b0h
        mov esi, dword ptr [ebp - 2ch]
        mov esi, dword ptr [esi + 0cc8h]
        mov eax, dword ptr [eax + ecx + 2ch]
        mov dword ptr [esi + edx + 7ch], eax
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, ecx, 38h
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 0cc4h]
        mov edx, dword ptr [ebp - 10h]
        imul edx, edx, 0b0h
        mov esi, dword ptr [ebp - 2ch]
        mov esi, dword ptr [esi + 0cc8h]
        mov eax, dword ptr [eax + ecx + 30h]
        mov dword ptr [esi + edx + 80h], eax
        ; Exact mapped bytes E9 01 FF FF FF: jmp 0x40c97d
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 46ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 15 7A FF FF: call 0x4044a0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AE 79 FF FF: call 0x404440
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2ch]
        cmp dword ptr [ecx + 0ca0h], 0
        ; Exact mapped bytes 75 2A: jne 0x40cac8
        __asm _emit 0x75
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 2ch]
        add edx, 0ca4h
        push edx
        push 0
        mov eax, dword ptr [ebp - 2ch]
        push eax
        push 40c460h
        push 0
        push 0
        ; Exact mapped bytes FF 15 2C C2 43 00: call dword ptr [0x43c22c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ecx + 0ca0h], eax
        ; Exact mapped bytes EB 10: jmp 0x40cad8
        __asm _emit 0xeb
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 0ca0h]
        push eax
        ; Exact mapped bytes FF 15 30 C2 43 00: call dword ptr [0x43c230]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
