// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58821C70 .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_58821c70() {
    __asm {
        ; Exact mapped bytes 0F BF 81 A0 0C 00 00: movsx eax, word ptr [ecx + 0xca0]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x81
        __asm _emit 0xa0
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 77 4A: ja 0x58821cc6
        __asm _emit 0x77
        __asm _emit 0x4a
        ; Exact mapped bytes FF 24 85 CC 1C 82 58: jmp dword ptr [eax*4 + 0x58821ccc]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xcc
        __asm _emit 0x1c
        __asm _emit 0x82
        __asm _emit 0x58
        mov dword ptr [ecx + 50h], 12ch
        mov dword ptr [ecx + 54h], 190h
        mov dword ptr [esp + 8], 190h
        mov dword ptr [esp + 4], 12ch
        ; Exact mapped bytes E9 EA 15 0E 00: jmp 0x58903290
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0x15
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        add eax, 0fffffe0ch
        mov dword ptr [ecx + 50h], eax
        mov dword ptr [ecx + 54h], edx
        mov dword ptr [esp + 8], edx
        mov dword ptr [esp + 4], eax
        ; Exact mapped bytes E9 CA 15 0E 00: jmp 0x58903290
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x15
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
