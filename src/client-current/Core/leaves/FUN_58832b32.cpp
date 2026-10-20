// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58832B32 .. +0x10 bytes.
extern "C" __declspec(naked) void FUN_58832b32() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes FF 15 18 42 89 58: call dword ptr [0x58894218]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 83 66 18 00: and dword ptr [esi + 0x18], 0
        __asm _emit 0x83
        __asm _emit 0x66
        __asm _emit 0x18
        __asm _emit 0x00
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
