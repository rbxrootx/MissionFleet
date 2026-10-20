// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587E8060 .. +0x12 bytes.
extern "C" __declspec(naked) void FUN_587e8060() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 8B 46 14: mov eax, dword ptr [esi + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x14
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes C7 06 88 BD 99 58: mov dword ptr [esi], 0x5899bd88
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0x88
        __asm _emit 0xbd
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes E8 D0 4B 19 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x4b
        __asm _emit 0x19
        __asm _emit 0x00
    }
}
