// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58830DFD .. +0x19 bytes.
extern "C" __declspec(naked) void FUN_58830dfd() {
    __asm {
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 12: je 0x58830e15
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 83 E8 08: sub eax, 8
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x08
        ; Exact mapped bytes 81 38 DD DD 00 00: cmp dword ptr [eax], 0xdddd
        __asm _emit 0x81
        __asm _emit 0x38
        __asm _emit 0xdd
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x58830e15
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 EC 87 02 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x87
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
