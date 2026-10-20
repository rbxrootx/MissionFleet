// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FF110 .. +0x17A bytes.
extern "C" __declspec(naked) void FUN_004ff110_004FF110() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 14h], ecx
        push 1ach
        push 6756ach
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 34 B1 FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xb1
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        sub edx, 2bh
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 0e6h
        ; Exact mapped bytes 0F 87 22 01 00 00: ja 0x4ff26a
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        xor eax, eax
        mov al, byte ptr [ecx + 4ff292h]
        ; Exact mapped bytes FF 24 85 8A F2 4F 00: jmp dword ptr [eax*4 + 0x4ff28a]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x8a
        __asm _emit 0xf2
        __asm _emit 0x4f
        __asm _emit 0x00
        lea edx, [ebp - 4]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 92 A4 00 00 00: call dword ptr [edx + 0xa4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x4ff184
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes E9 00 01 00 00: jmp 0x4ff284
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 3C C4 02 00: call 0x52b5d4
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 9A C4 02 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 8], 4eh
        ; Exact mapped bytes 0F 85 B9 00 00 00: jne 0x4ff265
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 8], 0fffffdf8h
        ; Exact mapped bytes 74 10: je 0x4ff1ce
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 8], 0fffffdeeh
        ; Exact mapped bytes 0F 85 97 00 00 00: jne 0x4ff265
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 8], 0fffffdf8h
        ; Exact mapped bytes 75 38: jne 0x4ff21e
        __asm _emit 0x75
        __asm _emit 0x38
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 60h], 0
        ; Exact mapped bytes 75 2D: jne 0x4ff21c
        __asm _emit 0x75
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 74 0D: je 0x4ff205
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 75 17: jne 0x4ff21c
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 AD 28 FD FF: call 0x4d1ac6
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x28
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 47: jmp 0x4ff265
        __asm _emit 0xeb
        __asm _emit 0x47
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 8], 0fffffdeeh
        ; Exact mapped bytes 75 3B: jne 0x4ff265
        __asm _emit 0x75
        __asm _emit 0x3b
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 0b0h], 0
        ; Exact mapped bytes 75 2F: jne 0x4ff265
        __asm _emit 0x75
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 74 0F: je 0x4ff24e
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 75 17: jne 0x4ff265
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 64 28 FD FF: call 0x4d1ac6
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x28
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 1A: jmp 0x4ff284
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 48 28 FD FF: call 0x4d1ac6
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x28
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
