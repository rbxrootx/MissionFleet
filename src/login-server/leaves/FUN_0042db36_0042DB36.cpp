// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042DB36 .. +0x1E bytes.
extern "C" __declspec(naked) void FUN_0042db36_0042DB36() {
    __asm {
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 83 78 F8 00: cmp dword ptr [eax - 8], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0xf8
        __asm _emit 0x00
        ; Exact mapped bytes 74 15: je 0x42db53
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 83 78 F4 00: cmp dword ptr [eax - 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0xf4
        __asm _emit 0x00
        ; Exact mapped bytes 7C 05: jl 0x42db49
        __asm _emit 0x7c
        __asm _emit 0x05
        ; Exact mapped bytes E9 99 FF FF FF: jmp 0x42dae2
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 68 B8 DC 44 00: push 0x44dcb8
        __asm _emit 0x68
        __asm _emit 0xb8
        __asm _emit 0xdc
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes E8 E1 01 00 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
