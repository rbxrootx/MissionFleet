// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AED60 .. +0x17 bytes.
extern "C" __declspec(naked) void FUN_004aed60_004AED60() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 83 3D 8C 02 5E 00 00: cmp dword ptr [0x5e028c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 07: je 0x4aed73
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes A1 7C 02 5E 00: mov eax, dword ptr [0x5e027c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x4aed75
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
