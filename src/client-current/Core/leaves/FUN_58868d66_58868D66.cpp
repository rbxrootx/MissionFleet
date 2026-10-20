// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58868D66 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_58868d66_58868D66() {
    __asm {
        push 8
        push 588ed4d0h
        ; Exact mapped bytes E8 EE 99 FC FF: call 0x58832760
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x99
        __asm _emit 0xfc
        __asm _emit 0xff
        and dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 15 01 00 00: call 0x58868e93
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0fffffffeh
        ; Exact mapped bytes E8 12 00 00 00: call 0x58868d9c
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
