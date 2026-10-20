// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00434F9D .. +0x17 bytes.
extern "C" __declspec(naked) void FUN_00434f9d_00434F9D() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes FF 74 24 08: push dword ptr [esp + 8]
        __asm _emit 0xff
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes E8 0B 00 00 00: call 0x434fb4
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 46 0C 01 00 00 00: mov dword ptr [esi + 0xc], 1
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
