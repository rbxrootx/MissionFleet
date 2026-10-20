// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043068D .. +0x19 bytes.
extern "C" __declspec(naked) void FUN_0043068d_0043068D() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes E8 84 15 00 00: call 0x431c19
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 06 F0 DD 43 00: mov dword ptr [esi], 0x43ddf0
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0xf0
        __asm _emit 0xdd
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes C7 46 28 01 00 00 00: mov dword ptr [esi + 0x28], 1
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
