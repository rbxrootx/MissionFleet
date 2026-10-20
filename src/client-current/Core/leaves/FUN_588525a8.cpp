// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588525A8 .. +0x1E bytes.
extern "C" __declspec(naked) void FUN_588525a8() {
    __asm {
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B BE 04 04 00 00: mov edi, dword ptr [esi + 0x404]
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 F8 F5 FF FF: call 0x58851bb1
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 FF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 75 04: jne 0x588525c1
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes 03 C6: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xc6
        ; Exact mapped bytes EB 02: jmp 0x588525c3
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 03 C7: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xc7
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
