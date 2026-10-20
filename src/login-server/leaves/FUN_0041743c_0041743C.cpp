// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041743C .. +0x1B bytes.
extern "C" __declspec(naked) void FUN_0041743c_0041743C() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes E8 64 B8 FF FF: call 0x412ca8
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F6 44 24 08 01: test byte ptr [esp + 8], 1
        __asm _emit 0xf6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        ; Exact mapped bytes 74 06: je 0x417451
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 6A F5 01 00: call 0x4369bb
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
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
