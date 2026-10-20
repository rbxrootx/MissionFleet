// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58861AC0 .. +0x78 bytes.
extern "C" __declspec(naked) void FUN_58861ac0_58861AC0() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        ; Exact mapped bytes 83 3D 80 99 96 58 00: cmp dword ptr [0x58969980], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 58: jne 0x58861b26
        __asm _emit 0x75
        __asm _emit 0x58
        push ebx
        mov ebx, dword ptr [ebp + 8]
        push edi
        mov edi, dword ptr [ebp + 0ch]
        test ebx, ebx
        ; Exact mapped bytes 74 3E: je 0x58861b18
        __asm _emit 0x74
        __asm _emit 0x3e
        test edi, edi
        ; Exact mapped bytes 74 3A: je 0x58861b18
        __asm _emit 0x74
        __asm _emit 0x3a
        push esi
        nop
        movzx ecx, byte ptr [ebx]
        lea ebx, [ebx + 1]
        movzx esi, byte ptr [edi]
        lea edi, [edi + 1]
        cmp ecx, esi
        ; Exact mapped bytes 74 19: je 0x58861b09
        __asm _emit 0x74
        __asm _emit 0x19
        lea eax, [ecx - 41h]
        cmp eax, 19h
        lea edx, [ecx + 20h]
        lea eax, [esi - 41h]
        cmova edx, ecx
        mov ecx, edx
        cmp eax, 19h
        ; Exact mapped bytes 77 03: ja 0x58861b09
        __asm _emit 0x77
        __asm _emit 0x03
        add esi, 20h
        mov eax, ecx
        sub eax, esi
        ; Exact mapped bytes 75 04: jne 0x58861b13
        __asm _emit 0x75
        __asm _emit 0x04
        test ecx, ecx
        ; Exact mapped bytes 75 CD: jne 0x58861ae0
        __asm _emit 0x75
        __asm _emit 0xcd
        pop esi
        pop edi
        pop ebx
        pop ebp
        ret
        push edi
        push ebx
        ; Exact mapped bytes E8 71 FF FF FF: call 0x58861a90
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        pop edi
        pop ebx
        pop ebp
        ret
        push 0
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0D 00 00 00: call 0x58861b40
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        pop ebp
        ret
    }
}
