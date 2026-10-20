// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58858EC4 .. +0x14 bytes.
extern "C" __declspec(naked) void FUN_58858ec4() {
    __asm {
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 38 41 14: cmp byte ptr [ecx + 0x14], al
        __asm _emit 0x38
        __asm _emit 0x41
        __asm _emit 0x14
        ; Exact mapped bytes 74 03: je 0x58858ece
        __asm _emit 0x74
        __asm _emit 0x03
        ; Exact mapped bytes 88 41 14: mov byte ptr [ecx + 0x14], al
        __asm _emit 0x88
        __asm _emit 0x41
        __asm _emit 0x14
        ; Exact mapped bytes 89 41 08: mov dword ptr [ecx + 8], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x08
        ; Exact mapped bytes 89 41 0C: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0c
        ; Exact mapped bytes 89 41 10: mov dword ptr [ecx + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x10
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
