// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58861433 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_58861433_58861433() {
    __asm {
        mov eax, dword ptr [ecx]
        test eax, eax
        ; Exact mapped bytes 75 13: jne 0x5886144c
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes E8 31 10 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 62 FB FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xfb
        __asm _emit 0xfe
        __asm _emit 0xff
        xor al, al
        ret
        push eax
        ; Exact mapped bytes E8 2D 4B FF FF: call 0x58855f7f
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x4b
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        ret
    }
}
