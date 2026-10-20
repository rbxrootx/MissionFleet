// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883055D .. +0x20 bytes.
extern "C" __declspec(naked) void FUN_5883055d() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes C7 06 F8 19 8C 58: mov dword ptr [esi], 0x588c19f8
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0xf8
        __asm _emit 0x19
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes E8 3C 01 00 00: call 0x588306a8
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 8D 4E 18: lea ecx, [esi + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x4e
        __asm _emit 0x18
        ; Exact mapped bytes E8 8B 98 CD FF: call 0x58509e00
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x98
        __asm _emit 0xcd
        __asm _emit 0xff
        ; Exact mapped bytes C7 06 E8 3B 8A 58: mov dword ptr [esi], 0x588a3be8
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
