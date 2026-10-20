// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004196CF .. +0x18 bytes.
extern "C" __declspec(naked) void FUN_004196cf_004196CF() {
    __asm {
        ; Exact mapped bytes F6 41 71 10: test byte ptr [ecx + 0x71], 0x10
        __asm _emit 0xf6
        __asm _emit 0x41
        __asm _emit 0x71
        __asm _emit 0x10
        ; Exact mapped bytes 74 0F: je 0x4196e4
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 41 6C: mov eax, dword ptr [ecx + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x6c
        ; Exact mapped bytes 24 01: and al, 1
        __asm _emit 0x24
        __asm _emit 0x01
        ; Exact mapped bytes F6 D8: neg al
        __asm _emit 0xf6
        __asm _emit 0xd8
        ; Exact mapped bytes 1B C0: sbb eax, eax
        __asm _emit 0x1b
        __asm _emit 0xc0
        ; Exact mapped bytes 24 F0: and al, 0xf0
        __asm _emit 0x24
        __asm _emit 0xf0
        ; Exact mapped bytes 83 C0 20: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x20
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
