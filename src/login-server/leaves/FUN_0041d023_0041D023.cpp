// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041D023 .. +0x17 bytes.
extern "C" __declspec(naked) void FUN_0041d023_0041D023() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes FF 76 0C: push dword ptr [esi + 0xc]
        __asm _emit 0xff
        __asm _emit 0x76
        __asm _emit 0x0c
        ; Exact mapped bytes E8 E7 08 01 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes FF 76 24: push dword ptr [esi + 0x24]
        __asm _emit 0xff
        __asm _emit 0x76
        __asm _emit 0x24
        ; Exact mapped bytes E8 DF 08 01 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
