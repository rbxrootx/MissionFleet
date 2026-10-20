// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58868D19 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_58868d19_58868D19() {
    __asm {
        push 8
        push 588ed4b0h
        ; Exact mapped bytes E8 3B 9A FC FF: call 0x58832760
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x9a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        push dword ptr [eax]
        ; Exact mapped bytes E8 ED AE FF FF: call 0x58863c1c
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xae
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        and dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 C1 01 00 00: call 0x58868efd
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0fffffffeh
        ; Exact mapped bytes E8 12 00 00 00: call 0x58868d5a
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
