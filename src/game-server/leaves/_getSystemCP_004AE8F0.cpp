// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AE8F0 .. +0x59 bytes.
extern "C" __declspec(naked) void _getSystemCP_004AE8F0() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes C7 05 54 ED 5D 00 00 00 00 00: mov dword ptr [0x5ded54], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], -2
        ; Exact mapped bytes 75 12: jne 0x4ae915
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes C7 05 54 ED 5D 00 01 00 00 00: mov dword ptr [0x5ded54], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 44 23 5E 00: call dword ptr [0x5e2344]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB 32: jmp 0x4ae947
        __asm _emit 0xeb
        __asm _emit 0x32
        cmp dword ptr [ebp + 8], -3
        ; Exact mapped bytes 75 12: jne 0x4ae92d
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes C7 05 54 ED 5D 00 01 00 00 00: mov dword ptr [0x5ded54], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 98 22 5E 00: call dword ptr [0x5e2298]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB 1A: jmp 0x4ae947
        __asm _emit 0xeb
        __asm _emit 0x1a
        cmp dword ptr [ebp + 8], -4
        ; Exact mapped bytes 75 11: jne 0x4ae944
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes C7 05 54 ED 5D 00 01 00 00 00: mov dword ptr [0x5ded54], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 24 F0 5D 00: mov eax, dword ptr [0x5df024]
        __asm _emit 0xa1
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes EB 03: jmp 0x4ae947
        __asm _emit 0xeb
        __asm _emit 0x03
        mov eax, dword ptr [ebp + 8]
        pop ebp
        ret
    }
}
