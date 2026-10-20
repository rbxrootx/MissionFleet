// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58748BC0 .. +0x13 bytes.
extern "C" __declspec(naked) void FUN_58748bc0() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 D6 6E 0B 00: call 0x587ffaa0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x6e
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes C7 00 01 00 00 00: mov dword ptr [eax], 1
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
