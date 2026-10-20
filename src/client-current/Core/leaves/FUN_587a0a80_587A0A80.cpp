// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A0A80 .. +0x92 bytes.
extern "C" __declspec(naked) void FUN_587a0a80_587A0A80() {
    __asm {
        mov ecx, dword ptr [esp + 4]
        cmp dword ptr [ecx + 9ch], 0
        ; Exact mapped bytes 0F 85 80 00 00 00: jne 0x587a0b11
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 8]
        add eax, 7
        cmp eax, 9
        ; Exact mapped bytes 77 6A: ja 0x587a0b07
        __asm _emit 0x77
        __asm _emit 0x6a
        ; Exact mapped bytes FF 24 85 14 0B 7A 58: jmp dword ptr [eax*4 + 0x587a0b14]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0x0b
        __asm _emit 0x7a
        __asm _emit 0x58
        mov dword ptr [ecx + 9ch], 588b801ch
        ret
        mov dword ptr [ecx + 9ch], 588b8038h
        ret
        mov dword ptr [ecx + 9ch], 588b8050h
        ret
        mov dword ptr [ecx + 9ch], 588b8060h
        ret
        mov dword ptr [ecx + 9ch], 588b8078h
        ret
        mov dword ptr [ecx + 9ch], 588b808ch
        ret
        mov dword ptr [ecx + 9ch], 588b80a0h
        ret
        mov dword ptr [ecx + 9ch], 588b80ach
        ret
        mov dword ptr [ecx + 9ch], 588b80c8h
        ret
        mov dword ptr [ecx + 9ch], 588b8000h
        ret
    }
}
