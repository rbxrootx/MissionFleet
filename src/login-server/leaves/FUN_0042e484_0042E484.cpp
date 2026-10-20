// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042E484 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_0042e484_0042E484() {
    __asm {
        cmp dword ptr [esp + 8], 110h
        ; Exact mapped bytes 75 2B: jne 0x42e4b9
        __asm _emit 0x75
        __asm _emit 0x2b
        push dword ptr [esp + 4]
        ; Exact mapped bytes E8 68 0E 00 00: call 0x42f2ff
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 43d710h
        ; Exact mapped bytes E8 FD 42 00 00: call 0x43279f
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        test eax, eax
        pop ecx
        ; Exact mapped bytes 74 0C: je 0x42e4b4
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [eax]
        mov ecx, eax
        ; Exact mapped bytes FF 92 BC 00 00 00: call dword ptr [edx + 0xbc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 07: jmp 0x42e4bb
        __asm _emit 0xeb
        __asm _emit 0x07
        push 1
        pop eax
        ; Exact mapped bytes EB 02: jmp 0x42e4bb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
