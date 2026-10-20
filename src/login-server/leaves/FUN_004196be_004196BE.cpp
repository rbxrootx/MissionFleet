// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004196BE .. +0x11 bytes.
extern "C" __declspec(naked) void FUN_004196be_004196BE() {
    __asm {
        ; Exact mapped bytes F6 41 71 10: test byte ptr [ecx + 0x71], 0x10
        __asm _emit 0xf6
        __asm _emit 0x41
        __asm _emit 0x71
        __asm _emit 0x10
        ; Exact mapped bytes 74 08: je 0x4196cc
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 58: pop eax
        __asm _emit 0x58
        ; Exact mapped bytes 84 41 6C: test byte ptr [ecx + 0x6c], al
        __asm _emit 0x84
        __asm _emit 0x41
        __asm _emit 0x6c
        ; Exact mapped bytes 75 02: jne 0x4196ce
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
