// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587AFEB0 .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_587afeb0() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B 71 38: mov esi, dword ptr [ecx + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x71
        __asm _emit 0x38
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 74 10: je 0x587afec8
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 83 FE 64: cmp esi, 0x64
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0x64
        ; Exact mapped bytes 8B 41 34: mov eax, dword ptr [ecx + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x34
        ; Exact mapped bytes 7F 0D: jg 0x587afecd
        __asm _emit 0x7f
        __asm _emit 0x0d
        ; Exact mapped bytes 6B C0 64: imul eax, eax, 0x64
        __asm _emit 0x6b
        __asm _emit 0xc0
        __asm _emit 0x64
        ; Exact mapped bytes 99: cdq
        __asm _emit 0x99
        ; Exact mapped bytes F7 FE: idiv esi
        __asm _emit 0xf7
        __asm _emit 0xfe
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes B8 64 00 00 00: mov eax, 0x64
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
