// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5896CB70 .. +0xB bytes.
extern "C" __declspec(naked) void FUN_5896cb70() {
    __asm {
        ; Exact mapped bytes C7 01 A8 29 9A 58: mov dword ptr [ecx], 0x589a29a8
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0xa8
        __asm _emit 0x29
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes E9 E5 61 F9 FF: jmp 0x58902d60
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0x61
        __asm _emit 0xf9
        __asm _emit 0xff
    }
}
