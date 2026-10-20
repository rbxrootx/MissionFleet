// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C4E20 .. +0x11 bytes.
extern "C" __declspec(naked) void FUN_587c4e20() {
    __asm {
        ; Exact mapped bytes 8B 41 24: mov eax, dword ptr [ecx + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x24
        ; Exact mapped bytes 83 38 00: cmp dword ptr [eax], 0
        __asm _emit 0x83
        __asm _emit 0x38
        __asm _emit 0x00
        ; Exact mapped bytes 74 06: je 0x587c4e2e
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 8B 49 34: mov ecx, dword ptr [ecx + 0x34]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x34
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
