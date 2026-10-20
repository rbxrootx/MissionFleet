// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042D000 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_0042d000_0042D000() {
    __asm {
        mov eax, 43aa50h
        ; Exact mapped bytes E8 FE 25 FF FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xff
        push ecx
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ecx], 43e488h
        and dword ptr [ebp - 4], 0
        ; Exact mapped bytes E8 36 00 00 00: call 0x42d053
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ret
    }
}
