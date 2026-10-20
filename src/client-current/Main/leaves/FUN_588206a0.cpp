// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588206A0 .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_588206a0() {
    __asm {
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [edi + 0c80h]
        mov esi, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 BB 7A 0E 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x7a
        __asm _emit 0x0e
        __asm _emit 0x00
        sub esi, eax
        sub esi, 0ah
        mov eax, esi
        test eax, eax
        ; Exact mapped bytes 7E 29: jle 0x588206e9
        __asm _emit 0x7e
        __asm _emit 0x29
        mov ecx, dword ptr [edi + 0c80h]
        imul eax, eax, 64h
        mov ecx, dword ptr [ecx + 88h]
        sub ecx, 0ah
        cdq
        idiv ecx
        mov edx, dword ptr [edi + 8]
        mov ecx, dword ptr [edi + 0c94h]
        sub edx, eax
        sub edx, 0eh
        push edx
        ; Exact mapped bytes E8 77 2C 0E 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x2c
        __asm _emit 0x0e
        __asm _emit 0x00
        pop edi
        pop esi
        ret
    }
}
