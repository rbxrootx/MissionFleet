// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00436845 .. +0x20 bytes.
extern "C" __declspec(naked) void FUN_00436845_00436845() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes E8 18 00 00 00: call 0x436865
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F6 44 24 08 01: test byte ptr [esp + 8], 1
        __asm _emit 0xf6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        ; Exact mapped bytes 74 0B: je 0x43685f
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes B9 E8 F7 44 00: mov ecx, 0x44f7e8
        __asm _emit 0xb9
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes E8 AE 0F FE FF: call 0x41780d
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x0f
        __asm _emit 0xfe
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
