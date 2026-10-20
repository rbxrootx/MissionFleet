// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1002BF80 .. +0x12 bytes.
extern "C" __declspec(naked) void FUN_1002bf80_1002BF80() {
    __asm {
        ; Exact mapped bytes 8B 41 24: mov eax, dword ptr [ecx + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x24
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 89 41 28: mov dword ptr [ecx + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x28
        ; Exact mapped bytes 89 41 2C: mov dword ptr [ecx + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x2c
        ; Exact mapped bytes 74 04: je 0x1002bf91
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 80 49 30 01: or byte ptr [ecx + 0x30], 1
        __asm _emit 0x80
        __asm _emit 0x49
        __asm _emit 0x30
        __asm _emit 0x01
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
