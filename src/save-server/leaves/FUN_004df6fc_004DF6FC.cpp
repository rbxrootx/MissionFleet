// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DF6FC .. +0x15C bytes.
extern "C" __declspec(naked) void FUN_004df6fc_004DF6FC() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 150h
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 12h
        push ecx
        ; Exact mapped bytes E8 87 F3 FF FF: call 0x4dea9f
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x4df72a
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [ebp + 0ch]
        mov byte ptr [edx + 12h], 0
        xor eax, eax
        ; Exact mapped bytes E9 25 01 00 00: jmp 0x4df84f
        __asm _emit 0xe9
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 144h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 18 B9 68 00: call dword ptr [0x68b918]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 75 07: jne 0x4df74b
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 04 01 00 00: jmp 0x4df84f
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 1C B9 68 00: call dword ptr [0x68b91c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4df76d
        __asm _emit 0x75
        __asm _emit 0x14
        push 9fh
        push 6790dch
        ; Exact mapped bytes E8 D8 95 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4df76d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x4df74b
        __asm _emit 0x75
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp - 144h]
        and cl, 7fh
        mov edx, dword ptr [ebp + 0ch]
        mov byte ptr [edx + 10h], cl
        cmp dword ptr [ebp - 128h], 0
        ; Exact mapped bytes 74 14: je 0x4df79f
        __asm _emit 0x74
        __asm _emit 0x14
        push 0a6h
        push 6790dch
        ; Exact mapped bytes E8 A6 95 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4df79f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4df782
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 124h]
        mov dword ptr [ecx + 0ch], edx
        push -1
        lea eax, [ebp - 140h]
        push eax
        lea ecx, [ebp - 148h]
        ; Exact mapped bytes E8 8A 2D FC FF: call 0x4a254f
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x2d
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 CA 5C 04 00: call 0x525498
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x5c
        __asm _emit 0x04
        __asm _emit 0x00
        push -1
        lea ecx, [ebp - 138h]
        push ecx
        lea ecx, [ebp - 14ch]
        ; Exact mapped bytes E8 6D 2D FC FF: call 0x4a254f
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x2d
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 8
        ; Exact mapped bytes E8 AA 5C 04 00: call 0x525498
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x5c
        __asm _emit 0x04
        __asm _emit 0x00
        push -1
        lea edx, [ebp - 130h]
        push edx
        lea ecx, [ebp - 150h]
        ; Exact mapped bytes E8 4D 2D FC FF: call 0x4a254f
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x2d
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 4
        ; Exact mapped bytes E8 8A 5C 04 00: call 0x525498
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x5c
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 B4 5C 04 00: call 0x5254ca
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x5c
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x4df829
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp + 0ch]
        add eax, 4
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 6F 5C 04 00: call 0x525498
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x5c
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 8
        ; Exact mapped bytes E8 96 5C 04 00: call 0x5254ca
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x5c
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x4df84a
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 4
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 8
        ; Exact mapped bytes E8 4E 5C 04 00: call 0x525498
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x5c
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
