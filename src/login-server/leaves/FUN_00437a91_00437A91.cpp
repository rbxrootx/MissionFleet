// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00437A91 .. +0x18 bytes.
extern "C" __declspec(naked) void FUN_00437a91_00437A91() {
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
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 69 6E FF FF: call 0x42e908
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x6e
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 4E 5C FF: or dword ptr [esi + 0x5c], 0xffffffff
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x5c
        __asm _emit 0xff
        ; Exact mapped bytes 8B C6: mov eax, esi
        __asm _emit 0x8b
        __asm _emit 0xc6
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
