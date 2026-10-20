// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58507390 .. +0x45 bytes.
extern "C" __declspec(naked) void FUN_58507390_58507390() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes E8 FF 90 32 00: call 0x5883049d
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x32
        __asm _emit 0x00
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 75 06: jne 0x585073ab
        __asm _emit 0x75
        __asm _emit 0x06
        mov byte ptr [ebp - 1], 1
        ; Exact mapped bytes EB 04: jmp 0x585073af
        __asm _emit 0xeb
        __asm _emit 0x04
        mov byte ptr [ebp - 1], 0
        mov cl, byte ptr [ebp - 1]
        mov byte ptr [ebp - 2], cl
        movzx edx, byte ptr [ebp - 2]
        test edx, edx
        ; Exact mapped bytes 74 0B: je 0x585073c8
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 09 28 00 00: call 0x58509bd0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 50 FE FF FF: call 0x58507220
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
