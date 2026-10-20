// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042DC19 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_0042dc19_0042DC19() {
    __asm {
        ; Exact mapped bytes A1 0C 9B 44 00: mov eax, dword ptr [0x449b0c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x9b
        __asm _emit 0x44
        __asm _emit 0x00
        push ebx
        mov ebx, dword ptr [esp + 8]
        push esi
        mov esi, ecx
        push edi
        test ebx, ebx
        mov dword ptr [esi], eax
        ; Exact mapped bytes 74 36: je 0x42dc63
        __asm _emit 0x74
        __asm _emit 0x36
        mov eax, ebx
        shr eax, 10h
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 0B: jne 0x42dc42
        __asm _emit 0x75
        __asm _emit 0x0b
        movzx eax, bx
        push eax
        ; Exact mapped bytes E8 3D 49 00 00: call 0x43257d
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 21: jmp 0x42dc63
        __asm _emit 0xeb
        __asm _emit 0x21
        push ebx
        ; Exact mapped bytes FF 15 60 C2 43 00: call dword ptr [0x43c260]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 74 14: je 0x42dc63
        __asm _emit 0x74
        __asm _emit 0x14
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 C1 FD FF FF: call 0x42da18
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push edi
        push ebx
        push dword ptr [esi]
        ; Exact mapped bytes E8 60 0F FF FF: call 0x41ebc0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x0f
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
