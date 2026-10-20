// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588618F0 .. +0x5E bytes.
extern "C" __declspec(naked) void FUN_588618f0_588618F0() {
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
        push esi
        mov esi, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 3A: jne 0x5886193c
        __asm _emit 0x75
        __asm _emit 0x3a
        test esi, esi
        ; Exact mapped bytes 75 15: jne 0x5886191b
        __asm _emit 0x75
        __asm _emit 0x15
        ; Exact mapped bytes E8 64 0B 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 95 F6 FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xf6
        __asm _emit 0xfe
        __asm _emit 0xff
        xor eax, eax
        pop esi
        pop ebp
        ret
        mov cl, byte ptr [esi]
        mov edx, esi
        test cl, cl
        ; Exact mapped bytes 74 26: je 0x58861949
        __asm _emit 0x74
        __asm _emit 0x26
        lea eax, [ecx - 41h]
        cmp al, 19h
        ; Exact mapped bytes 77 05: ja 0x5886192f
        __asm _emit 0x77
        __asm _emit 0x05
        add cl, 20h
        mov byte ptr [edx], cl
        mov cl, byte ptr [edx + 1]
        inc edx
        test cl, cl
        ; Exact mapped bytes 75 EC: jne 0x58861923
        __asm _emit 0x75
        __asm _emit 0xec
        mov eax, esi
        pop esi
        pop ebp
        ret
        push 0
        push -1
        push esi
        ; Exact mapped bytes E8 2A 00 00 00: call 0x58861970
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov eax, esi
        pop esi
        pop ebp
        ret
    }
}
