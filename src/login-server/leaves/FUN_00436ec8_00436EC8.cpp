// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00436EC8 .. +0x1A bytes.
extern "C" __declspec(naked) void FUN_00436ec8_00436EC8() {
    __asm {
        ; Exact mapped bytes 8B 0D 44 F9 44 00: mov ecx, dword ptr [0x44f944]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0xf9
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0D: je 0x436edf
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes FF 74 24 08: push dword ptr [esp + 8]
        __asm _emit 0xff
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes FF 74 24 08: push dword ptr [esp + 8]
        __asm _emit 0xff
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes E8 7B FE FF FF: call 0x436d5a
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
