// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886B6A8 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_5886b6a8_5886B6A8() {
    __asm {
        push ebp
        mov ebp, esp
        add esp, 0fffffd30h
        push ebx
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1E 00 00 00: call 0x5886b6db
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        wait
        ; Exact mapped bytes D9 BD 5C FF FF FF: fnstcw word ptr [ebp - 0xa4]
        __asm _emit 0xd9
        __asm _emit 0xbd
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        and byte ptr [ebp - 2c8h], 0fdh
        ; Exact mapped bytes E8 8D CB 00 00: call 0x58878260
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 82 FE FF FF: call 0x5886b55a
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop ebx
        leave
        ret
    }
}
