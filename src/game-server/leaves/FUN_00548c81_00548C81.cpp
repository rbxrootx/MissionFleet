// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00548C81 .. +0x12 bytes.
extern "C" __declspec(naked) void FUN_00548c81_00548C81() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes A1 48 EB 5D 00: mov eax, dword ptr [0x5deb48]
        __asm _emit 0xa1
        __asm _emit 0x48
        __asm _emit 0xeb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 C0 01: add eax, 1
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x01
        ; Exact mapped bytes A3 48 EB 5D 00: mov dword ptr [0x5deb48], eax
        __asm _emit 0xa3
        __asm _emit 0x48
        __asm _emit 0xeb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
