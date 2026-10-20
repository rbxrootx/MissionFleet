// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004345D1 .. +0xE bytes.
extern "C" __declspec(naked) void FUN_004345d1_004345D1() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes E8 A5 01 00 00: call 0x43477e
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 66 20 00: and dword ptr [esi + 0x20], 0
        __asm _emit 0x83
        __asm _emit 0x66
        __asm _emit 0x20
        __asm _emit 0x00
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
