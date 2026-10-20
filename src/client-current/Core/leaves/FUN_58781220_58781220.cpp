// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58781220 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_58781220_58781220() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 10h
        ; Exact mapped bytes E8 8C 57 D0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x57
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0B: jmp 0x58781244
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6F AE D0 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xae
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 20: je 0x5878126a
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8E AC D0 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xac
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 67 37 D0 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x37
        __asm _emit 0xd0
        __asm _emit 0xff
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 0A: jne 0x58781268
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7A AC D0 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xac
        __asm _emit 0xd0
        __asm _emit 0xff
        ; Exact mapped bytes EB 04: jmp 0x5878126c
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB CF: jmp 0x58781239
        __asm _emit 0xeb
        __asm _emit 0xcf
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
