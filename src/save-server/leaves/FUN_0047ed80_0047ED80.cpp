// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047ED80 .. +0x45 bytes.
extern "C" __declspec(naked) void FUN_0047ed80_0047ED80() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes A1 C8 75 68 00: mov eax, dword ptr [0x6875c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 B2 69 FE FF: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x69
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        xor ecx, ecx
        cmp eax, 3
        sete cl
        ; Exact mapped bytes 89 0D B8 75 68 00: mov dword ptr [0x6875b8], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push 1
        push 47edd0h
        ; Exact mapped bytes FF 15 2C B8 68 00: call dword ptr [0x68b82c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 CC 75 68 00: mov edx, dword ptr [0x6875cc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        and edx, 4
        test edx, edx
        ; Exact mapped bytes 75 0A: jne 0x47edc3
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes C7 05 CC 75 68 00 00 00 00 00: mov dword ptr [0x6875cc], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xcc
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebp
        ret
    }
}
