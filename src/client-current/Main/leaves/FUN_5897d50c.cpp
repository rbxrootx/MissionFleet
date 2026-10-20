// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897D50C .. +0xB bytes.
extern "C" __declspec(naked) void FUN_5897d50c() {
    __asm {
        ; Exact mapped bytes C7 05 00 FC 9C 58 FF FF FF FF: mov dword ptr [0x589cfc00], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0xfc
        __asm _emit 0x9c
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
