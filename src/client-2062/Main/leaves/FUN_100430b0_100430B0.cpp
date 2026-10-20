// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100430B0 .. +0xD5 bytes.
extern "C" __declspec(naked) void FUN_100430b0_100430B0() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0fch]
        test eax, eax
        ; Exact mapped bytes 0F 84 C2 00 00 00: je 0x10043183
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 5ch]
        test eax, eax
        ; Exact mapped bytes 0F 85 B7 00 00 00: jne 0x10043183
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 108h]
        mov eax, 40000000h
        cmp ecx, eax
        ; Exact mapped bytes 0F 85 86 00 00 00: jne 0x10043165
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 118h], eax
        ; Exact mapped bytes 75 0C: jne 0x100430f3
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [esi + 0d0h], 2
        ; Exact mapped bytes EB 23: jmp 0x10043116
        __asm _emit 0xeb
        __asm _emit 0x23
        cmp dword ptr [esi + 110h], eax
        ; Exact mapped bytes 75 11: jne 0x1004310c
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [esi + 0cch]
        add eax, 2
        mov dword ptr [esi + 0d0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x10043116
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [esi + 0d0h], 5
        mov eax, dword ptr [esi + 124h]
        mov ecx, dword ptr [esi + 0a8h]
        imul eax, dword ptr [esi + 0d0h]
        add eax, ecx
        mov ecx, 0e10h
        cdq
        idiv ecx
        test edx, edx
        mov dword ptr [esi + 0a8h], edx
        ; Exact mapped bytes 7D 08: jge 0x10043145
        __asm _emit 0x7d
        __asm _emit 0x08
        add edx, ecx
        mov dword ptr [esi + 0a8h], edx
        mov edx, dword ptr [esi + 0a8h]
        push 2
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 CB 08 00 00: call 0x10043a20
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a8h]
        push 1
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 BB 08 00 00: call 0x10043a20
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 164h]
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x10043183
        __asm _emit 0x74
        __asm _emit 0x14
        mov edx, dword ptr [esi + 130h]
        mov eax, dword ptr [esi + 0a8h]
        add edx, eax
        push edx
        ; Exact mapped bytes E8 FD 78 FE FF: call 0x1002aa80
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x78
        __asm _emit 0xfe
        __asm _emit 0xff
        pop esi
        ret
    }
}
