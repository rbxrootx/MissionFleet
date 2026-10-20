// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58874B63 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_58874b63_58874B63() {
    __asm {
        push 8
        push 588ed690h
        ; Exact mapped bytes E8 F1 DB FB FF: call 0x58832760
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xdb
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        push dword ptr [eax]
        ; Exact mapped bytes E8 A3 F0 FE FF: call 0x58863c1c
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        and dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 2A 00 00 00: call 0x58874bb0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0fffffffeh
        ; Exact mapped bytes E8 12 00 00 00: call 0x58874ba4
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
