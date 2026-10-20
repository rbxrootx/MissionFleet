// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875A120 .. +0x13 bytes.
extern "C" __declspec(naked) void FUN_5875a120() {
    __asm {
        ; Exact mapped bytes 8B 81 B0 00 00 00: mov eax, dword ptr [ecx + 0xb0]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 48 68: mov ecx, dword ptr [eax + 0x68]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x68
        ; Exact mapped bytes 49: dec ecx
        __asm _emit 0x49
        ; Exact mapped bytes 39 48 64: cmp dword ptr [eax + 0x64], ecx
        __asm _emit 0x39
        __asm _emit 0x48
        __asm _emit 0x64
        ; Exact mapped bytes 7D 03: jge 0x5875a132
        __asm _emit 0x7d
        __asm _emit 0x03
        ; Exact mapped bytes 89 48 64: mov dword ptr [eax + 0x64], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x64
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
