// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C5400 .. +0xE bytes.
extern "C" __declspec(naked) void FUN_587c5400() {
    __asm {
        ; Exact mapped bytes 83 79 24 10: cmp dword ptr [ecx + 0x24], 0x10
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 72 04: jb 0x587c540a
        __asm _emit 0x72
        __asm _emit 0x04
        ; Exact mapped bytes 8B 41 10: mov eax, dword ptr [ecx + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x10
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 8D 41 10: lea eax, [ecx + 0x10]
        __asm _emit 0x8d
        __asm _emit 0x41
        __asm _emit 0x10
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
