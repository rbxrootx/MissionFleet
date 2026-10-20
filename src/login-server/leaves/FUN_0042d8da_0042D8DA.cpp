// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042D8DA .. +0x12 bytes.
extern "C" __declspec(naked) void FUN_0042d8da_0042D8DA() {
    __asm {
        ; Exact mapped bytes 8B 4C 24 04: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes A1 F4 99 44 00: mov eax, dword ptr [0x4499f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x99
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 89 0D F4 99 44 00: mov dword ptr [0x4499f4], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x99
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
