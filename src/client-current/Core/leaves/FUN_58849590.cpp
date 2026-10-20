// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58849590 .. +0x17 bytes.
extern "C" __declspec(naked) void FUN_58849590() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 80 7D 0C 00: cmp byte ptr [ebp + 0xc], 0
        __asm _emit 0x80
        __asm _emit 0x7d
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 75 0C: jne 0x588495a5
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 8B 4D 10: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes 89 88 A4 AF 06 00: mov dword ptr [eax + 0x6afa4], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0xa4
        __asm _emit 0xaf
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
