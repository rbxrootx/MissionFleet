// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00437EB3 .. +0x10 bytes.
extern "C" __declspec(naked) void _FlushClipboard_COleDataSource__SGXXZ_00437EB3() {
    __asm {
        ; Exact mapped bytes E8 0B 00 00 00: call 0x437ec3
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 06: je 0x437ec2
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes FF 25 30 C6 43 00: jmp dword ptr [0x43c630]
        __asm _emit 0xff
        __asm _emit 0x25
        __asm _emit 0x30
        __asm _emit 0xc6
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
