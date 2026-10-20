// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C3E50 .. +0x45 bytes.
extern "C" __declspec(naked) void FUN_004c3e50_004C3E50() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes A1 B4 F0 5D 00: mov eax, dword ptr [0x5df0b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 72 55 FE FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x55
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        xor ecx, ecx
        cmp eax, 3
        sete cl
        ; Exact mapped bytes 89 0D A4 F0 5D 00: mov dword ptr [0x5df0a4], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        push 1
        push 4c3ea0h
        ; Exact mapped bytes FF 15 1C 22 5E 00: call dword ptr [0x5e221c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 B8 F0 5D 00: mov edx, dword ptr [0x5df0b8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        and edx, 4
        test edx, edx
        ; Exact mapped bytes 75 0A: jne 0x4c3e93
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes C7 05 B8 F0 5D 00 00 00 00 00: mov dword ptr [0x5df0b8], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xb8
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebp
        ret
    }
}
