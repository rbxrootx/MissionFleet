// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B3B8C .. +0x19 bytes.
extern "C" __declspec(naked) void FUN_004b3b8c_004B3B8C() {
    __asm {
        ; Exact mapped bytes A9 00 00 08 00: test eax, 0x80000
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 74 06: je 0x4b3b99
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes B8 07 00 00 00: mov eax, 7
        __asm _emit 0xb8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes DC 05 50 C7 58 00: fadd qword ptr [0x58c750]
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x50
        __asm _emit 0xc7
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
