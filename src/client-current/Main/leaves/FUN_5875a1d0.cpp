// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875A1D0 .. +0x71 bytes.
extern "C" __declspec(naked) void FUN_5875a1d0() {
    __asm {
        mov eax, dword ptr [esp + 8]
        push esi
        mov esi, ecx
        cmp eax, 2
        ; Exact mapped bytes 74 5F: je 0x5875a23b
        __asm _emit 0x74
        __asm _emit 0x5f
        cmp eax, 0f230h
        ; Exact mapped bytes 75 58: jne 0x5875a23b
        __asm _emit 0x75
        __asm _emit 0x58
        mov eax, dword ptr [esp + 8]
        cmp eax, dword ptr [esi + 0b0h]
        ; Exact mapped bytes 75 4C: jne 0x5875a23b
        __asm _emit 0x75
        __asm _emit 0x4c
        mov eax, dword ptr [esi + 0a4h]
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x5875a215
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        and cl, 1fh
        cmp cl, 5
        ; Exact mapped bytes 75 0C: jne 0x5875a215
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [esi + 0a4h]
        push esi
        ; Exact mapped bytes E8 1B 71 0C 00: call 0x58821330
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x71
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a8h]
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x5875a23b
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes 66 8B 50 24: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        and dl, 1fh
        cmp dl, 5
        ; Exact mapped bytes 75 0C: jne 0x5875a23b
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [esi + 0a8h]
        push esi
        ; Exact mapped bytes E8 95 88 0C 00: call 0x58822ad0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x88
        __asm _emit 0x0c
        __asm _emit 0x00
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
