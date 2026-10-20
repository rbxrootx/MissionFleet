// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58972830 .. +0x17 bytes.
extern "C" __declspec(naked) void FUN_58972830() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes C7 06 2C 30 9A 58: mov dword ptr [esi], 0x589a302c
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0x2c
        __asm _emit 0x30
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes E8 62 01 00 00: call 0x589729a0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 AB 00 00 00: call 0x589728f0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
