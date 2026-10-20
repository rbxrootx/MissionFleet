// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58821DB0 .. +0x4F bytes.
extern "C" __declspec(naked) void FUN_58821db0() {
    __asm {
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [edi + 0c80h]
        mov esi, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 AB 63 0E 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x63
        __asm _emit 0x0e
        __asm _emit 0x00
        sub esi, eax
        sub esi, 9
        mov eax, esi
        test eax, eax
        ; Exact mapped bytes 7E 2C: jle 0x58821dfc
        __asm _emit 0x7e
        __asm _emit 0x2c
        mov ecx, dword ptr [edi + 0c80h]
        imul eax, eax, 7bh
        mov ecx, dword ptr [ecx + 88h]
        sub ecx, 9
        cdq
        idiv ecx
        mov edx, dword ptr [edi + 8]
        mov ecx, dword ptr [edi + 0c94h]
        sub edx, eax
        add edx, 0afh
        push edx
        ; Exact mapped bytes E8 64 15 0E 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x15
        __asm _emit 0x0e
        __asm _emit 0x00
        pop edi
        pop esi
        ret
    }
}
