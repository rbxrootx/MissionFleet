// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886A41C .. +0x19 bytes.
extern "C" __declspec(naked) void FUN_5886a41c() {
    __asm {
        ; Exact mapped bytes A9 00 00 08 00: test eax, 0x80000
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 74 06: je 0x5886a429
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes B8 00 00 00 00: mov eax, 0
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes DC 05 40 53 8C 58: fadd qword ptr [0x588c5340]
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x53
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes B8 00 00 00 00: mov eax, 0
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
