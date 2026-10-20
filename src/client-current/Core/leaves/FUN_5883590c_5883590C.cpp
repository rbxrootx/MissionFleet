// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883590C .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_5883590c_5883590C() {
    __asm {
        push ebp
        mov ebp, esp
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        push 0
        ; Exact mapped bytes FF 15 04 42 89 58: call dword ptr [0x58894204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 13: jne 0x58835934
        __asm _emit 0x75
        __asm _emit 0x13
        push 588f0d48h
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D2 07 03 00: call 0x58866100
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x00
        pop ecx
        pop ecx
        xor al, al
        pop ebp
        ret
        push 5ch
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 71 99 01 00: call 0x5884f2af
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x99
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x5883594b
        __asm _emit 0x74
        __asm _emit 0x07
        xor ecx, ecx
        ; Exact mapped bytes 66 89 08: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        ; Exact mapped bytes EB 0F: jmp 0x5883595a
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 588f0d48h
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A8 07 03 00: call 0x58866100
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x00
        pop ecx
        pop ecx
        mov al, 1
        pop ebp
        ret
    }
}
