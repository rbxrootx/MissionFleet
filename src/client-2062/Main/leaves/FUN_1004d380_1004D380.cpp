// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1004D380 .. +0x6D bytes.
extern "C" __declspec(naked) void FUN_1004d380_1004D380() {
    __asm {
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 134h]
        test eax, eax
        ; Exact mapped bytes 75 5A: jne 0x1004d3e8
        __asm _emit 0x75
        __asm _emit 0x5a
        mov eax, dword ptr [esp + 0ch]
        ; Exact mapped bytes 66 3D 01 00: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 75 02: jne 0x1004d39a
        __asm _emit 0x75
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esp + 10h]
        mov esi, dword ptr [esp + 14h]
        and eax, 0ffffh
        and ecx, 0ffffh
        shl eax, 10h
        push 0
        push 0
        or eax, ecx
        push 0
        push eax
        push esi
        push 80010016h
        mov ecx, edi
        ; Exact mapped bytes E8 8A EB 11 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xeb
        __asm _emit 0x11
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 75 0F: jne 0x1004d3d9
        __asm _emit 0x75
        __asm _emit 0x0f
        mov dword ptr [edi + 134h], 10000000h
        pop edi
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp esi, 1
        ; Exact mapped bytes 75 0A: jne 0x1004d3e8
        __asm _emit 0x75
        __asm _emit 0x0a
        mov dword ptr [edi + 134h], 0
        pop edi
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
