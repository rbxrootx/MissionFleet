// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58855C66 .. +0x16 bytes.
extern "C" __declspec(naked) void FUN_58855c66() {
    __asm {
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes C7 41 24 08 00 00 00: mov dword ptr [ecx + 0x24], 8
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 41 28 0A 00 00 00: mov dword ptr [ecx + 0x28], 0xa
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x28
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 89 CF FF FF: call 0x58852c04
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
