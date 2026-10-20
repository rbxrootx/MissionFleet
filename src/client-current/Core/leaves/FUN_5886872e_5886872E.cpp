// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886872E .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_5886872e_5886872E() {
    __asm {
        push 8
        push 588ed3b0h
        ; Exact mapped bytes E8 26 A0 FC FF: call 0x58832760
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xa0
        __asm _emit 0xfc
        __asm _emit 0xff
        push 6
        ; Exact mapped bytes E8 DB B4 FF FF: call 0x58863c1c
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        and dword ptr [ebp - 4], 0
        ; Exact mapped bytes E8 7B FE FF FF: call 0x588685c6
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0fffffffeh
        ; Exact mapped bytes E8 10 00 00 00: call 0x58868767
        __asm _emit 0xe8
        __asm _emit 0x10
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
        ret
    }
}
