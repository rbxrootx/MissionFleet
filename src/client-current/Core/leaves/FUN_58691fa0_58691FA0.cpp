// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58691FA0 .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_58691fa0_58691FA0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f0h]
        ; Exact mapped bytes E8 FB 2A EA FF: call 0x58534ab0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x2a
        __asm _emit 0xea
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 13: jne 0x58691fcc
        __asm _emit 0x75
        __asm _emit 0x13
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DD D6 FF FF: call 0x5868f6a0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 74 02: je 0x58691fca
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 1F: jmp 0x58691fe9
        __asm _emit 0xeb
        __asm _emit 0x1f
        ; Exact mapped bytes EB 1D: jmp 0x58691fe9
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0f0h]
        ; Exact mapped bytes E8 D6 2A EA FF: call 0x58534ab0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x2a
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 0A: jne 0x58691fe9
        __asm _emit 0x75
        __asm _emit 0x0a
        push 2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B7 D6 FF FF: call 0x5868f6a0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
