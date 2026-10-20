// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58779CE0 .. +0x12 bytes.
extern "C" __declspec(naked) void FUN_58779ce0() {
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
        ; Exact mapped bytes C7 06 94 68 99 58: mov dword ptr [esi], 0x58996894
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0x94
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes E8 50 2F 20 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x2f
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
