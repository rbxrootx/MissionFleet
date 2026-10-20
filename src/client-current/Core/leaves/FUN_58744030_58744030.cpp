// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58744030 .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_58744030_58744030() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes FF 15 24 45 89 58: call dword ptr [0x58894524]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 48 CC 10 00: call 0x58850c8d
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xcc
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 9ch]
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes E8 13 CC 10 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xcc
        __asm _emit 0x10
        __asm _emit 0x00
        cdq
        mov ecx, 2710h
        idiv ecx
        mov dword ptr [ebp - 8], edx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 20 71 07 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x71
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a0h]
        ; Exact mapped bytes E8 82 C4 D8 FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xc4
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
