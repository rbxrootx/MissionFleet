// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5896CB30 .. +0xD bytes.
extern "C" __declspec(naked) void FUN_5896cb30() {
    __asm {
        ; Exact mapped bytes C7 01 94 2E 9A 58: mov dword ptr [ecx], 0x589a2e94
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x94
        __asm _emit 0x2e
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes FF 0D 14 85 A2 58: dec dword ptr [0x58a28514]
        __asm _emit 0xff
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
