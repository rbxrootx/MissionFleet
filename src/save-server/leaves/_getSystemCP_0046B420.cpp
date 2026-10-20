// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046B420 .. +0x59 bytes.
extern "C" __declspec(naked) void _getSystemCP_0046B420() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes C7 05 BC 72 68 00 00 00 00 00: mov dword ptr [0x6872bc], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xbc
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], -2
        ; Exact mapped bytes 75 12: jne 0x46b445
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes C7 05 BC 72 68 00 01 00 00 00: mov dword ptr [0x6872bc], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xbc
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 78 B9 68 00: call dword ptr [0x68b978]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 32: jmp 0x46b477
        __asm _emit 0xeb
        __asm _emit 0x32
        cmp dword ptr [ebp + 8], -3
        ; Exact mapped bytes 75 12: jne 0x46b45d
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes C7 05 BC 72 68 00 01 00 00 00: mov dword ptr [0x6872bc], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xbc
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 A4 B8 68 00: call dword ptr [0x68b8a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 1A: jmp 0x46b477
        __asm _emit 0xeb
        __asm _emit 0x1a
        cmp dword ptr [ebp + 8], -4
        ; Exact mapped bytes 75 11: jne 0x46b474
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes C7 05 BC 72 68 00 01 00 00 00: mov dword ptr [0x6872bc], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xbc
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 50 75 68 00: mov eax, dword ptr [0x687550]
        __asm _emit 0xa1
        __asm _emit 0x50
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 03: jmp 0x46b477
        __asm _emit 0xeb
        __asm _emit 0x03
        mov eax, dword ptr [ebp + 8]
        pop ebp
        ret
    }
}
