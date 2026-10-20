// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00402403 .. +0x228 bytes.
extern "C" __declspec(naked) void FUN_00402403_00402403() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 0d78h]
        cmp dword ptr [ecx + 0fch], 4
        ; Exact mapped bytes 0F 85 D5 01 00 00: jne 0x402615
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 0d78h]
        mov cl, byte ptr [eax + 0b2h]
        and cl, 0fh
        and ecx, 0ffh
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 4]
        push ecx
        lea edx, [ebp - 8]
        push edx
        lea eax, [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 44 13 00 00: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 65 01 00 00: je 0x4025ec
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 0d78h]
        mov al, byte ptr [edx + 0b2h]
        and al, 0fh
        and eax, 0ffh
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 14h], 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 180h]
        mov dword ptr [ebp - 18h], edx
        lea eax, [ebp - 10h]
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        lea edx, [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 FC 12 00 00: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 1D 01 00 00: je 0x4025ec
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 0d78h]
        mov dl, byte ptr [ecx + 0b2h]
        shr dl, 5
        and dl, 1
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 0F 84 97 00 00 00: je 0x402589
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 0d78h]
        cmp dword ptr [ecx + 104h], 14h
        ; Exact mapped bytes 0F 85 81 00 00 00: jne 0x402589
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        shl eax, 6
        mov ecx, dword ptr [ebp - 1ch]
        lea ecx, [ecx + eax + 0cb0h]
        ; Exact mapped bytes E8 D0 14 00 00: call 0x4039f0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 7D 62: jge 0x402587
        __asm _emit 0x7d
        __asm _emit 0x62
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 180h]
        shl ecx, 6
        mov edx, dword ptr [ebp - 1ch]
        lea ecx, [edx + ecx + 0cb0h]
        ; Exact mapped bytes E8 41 96 07 00: call 0x47bb85
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x96
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 8]
        shl edx, 6
        mov eax, dword ptr [ebp - 1ch]
        lea ecx, [eax + edx + 0cb0h]
        ; Exact mapped bytes E8 B5 99 07 00: call 0x47bf15
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x99
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 23: jne 0x402587
        __asm _emit 0x75
        __asm _emit 0x23
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 170h]
        or edx, 10000h
        push edx
        push 80020116h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 6F 75 08 00: call 0x489af6
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x75
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 61: jmp 0x4025ea
        __asm _emit 0xeb
        __asm _emit 0x61
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 180h]
        shl edx, 6
        mov eax, dword ptr [ebp - 1ch]
        lea ecx, [eax + edx + 0cb0h]
        ; Exact mapped bytes E8 DD 95 07 00: call 0x47bb85
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x95
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        shl eax, 6
        mov ecx, dword ptr [ebp - 1ch]
        lea ecx, [ecx + eax + 0cb0h]
        ; Exact mapped bytes E8 51 99 07 00: call 0x47bf15
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x99
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 22: jne 0x4025ea
        __asm _emit 0x75
        __asm _emit 0x22
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 170h]
        or eax, 10000h
        push eax
        push 80020116h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 0C 75 08 00: call 0x489af6
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x75
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 29: jmp 0x402615
        __asm _emit 0xeb
        __asm _emit 0x29
        mov esi, esp
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [edx + 0c7ch]
        ; Exact mapped bytes E8 20 ED FF FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 20h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        cmp esi, esp
        ; Exact mapped bytes E8 CB 61 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x61
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, 1
        pop esi
        add esp, 20h
        cmp ebp, esp
        ; Exact mapped bytes E8 BB 61 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x61
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
