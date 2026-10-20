// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00414C33 .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_00414c33_00414C33() {
    __asm {
        push esi
        push edi
        mov esi, ecx
        xor edi, edi
        ; Exact mapped bytes 66 39 7E 30: cmp word ptr [esi + 0x30], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x7e
        __asm _emit 0x30
        ; Exact mapped bytes 7E 23: jle 0x414c62
        __asm _emit 0x7e
        __asm _emit 0x23
        mov ecx, dword ptr [esi + 38h]
        push dword ptr [esp + 0ch]
        ; Exact mapped bytes 0F BF C7: movsx eax, di
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc7
        shl eax, 4
        mov eax, dword ptr [eax + ecx]
        push eax
        ; Exact mapped bytes E8 80 9C 00 00: call 0x41e8d5
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        test eax, eax
        pop ecx
        ; Exact mapped bytes 74 07: je 0x414c62
        __asm _emit 0x74
        __asm _emit 0x07
        inc edi
        ; Exact mapped bytes 66 3B 7E 30: cmp di, word ptr [esi + 0x30]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x7e
        __asm _emit 0x30
        ; Exact mapped bytes 7C DD: jl 0x414c3f
        __asm _emit 0x7c
        __asm _emit 0xdd
        ; Exact mapped bytes 66 3B 7E 30: cmp di, word ptr [esi + 0x30]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x7e
        __asm _emit 0x30
        ; Exact mapped bytes 75 0E: jne 0x414c76
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [esi]
        push 0
        push 402h
        mov ecx, esi
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        ; Exact mapped bytes 66 8B C7: mov ax, di
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xc7
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
