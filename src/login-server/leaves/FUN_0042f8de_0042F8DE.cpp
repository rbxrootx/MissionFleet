// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042F8DE .. +0x20 bytes.
extern "C" __declspec(naked) void FUN_0042f8de_0042F8DE() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B 74 24 08: mov esi, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 83 7E 28 00: cmp dword ptr [esi + 0x28], 0
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x28
        __asm _emit 0x00
        ; Exact mapped bytes 75 0E: jne 0x42f8f7
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes E8 E9 1C 00 00: call 0x4315d9
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 46 28 1C DC 43 00: mov dword ptr [esi + 0x28], 0x43dc1c
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x28
        __asm _emit 0x1c
        __asm _emit 0xdc
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 58: pop eax
        __asm _emit 0x58
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
