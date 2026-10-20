// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886867D .. +0x54 bytes.
extern "C" __declspec(naked) void FUN_5886867d_5886867D() {
    __asm {
        push 8
        push 588ed3f0h
        ; Exact mapped bytes E8 D7 A0 FC FF: call 0x58832760
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xa0
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes A1 CC 98 96 58: mov eax, dword ptr [0x589698cc]
        __asm _emit 0xa1
        __asm _emit 0xcc
        __asm _emit 0x98
        __asm _emit 0x96
        __asm _emit 0x58
        nop
        test eax, eax
        ; Exact mapped bytes 75 2E: jne 0x588686c1
        __asm _emit 0x75
        __asm _emit 0x2e
        push 6
        ; Exact mapped bytes E8 82 B5 FF FF: call 0x58863c1c
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        and dword ptr [ebp - 4], 0
        ; Exact mapped bytes A1 CC 98 96 58: mov eax, dword ptr [0x589698cc]
        __asm _emit 0xa1
        __asm _emit 0xcc
        __asm _emit 0x98
        __asm _emit 0x96
        __asm _emit 0x58
        nop
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x588686b5
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes E8 18 FF FF FF: call 0x588685c6
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes F0 FF 05 CC 98 96 58: lock inc dword ptr [0x589698cc]
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0xcc
        __asm _emit 0x98
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 4], 0fffffffeh
        ; Exact mapped bytes E8 10 00 00 00: call 0x588686d1
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
