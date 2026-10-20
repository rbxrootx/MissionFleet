// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58867450 .. +0x5E bytes.
extern "C" __declspec(naked) void FUN_58867450_58867450() {
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
        ; Exact mapped bytes 75 3A: jne 0x5886749c
        __asm _emit 0x75
        __asm _emit 0x3a
        test esi, esi
        ; Exact mapped bytes 75 15: jne 0x5886747b
        __asm _emit 0x75
        __asm _emit 0x15
        ; Exact mapped bytes E8 04 B0 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 35 9B FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x9b
        __asm _emit 0xfe
        __asm _emit 0xff
        xor eax, eax
        pop esi
        pop ebp
        ret
        mov cl, byte ptr [esi]
        mov edx, esi
        test cl, cl
        ; Exact mapped bytes 74 26: je 0x588674a9
        __asm _emit 0x74
        __asm _emit 0x26
        lea eax, [ecx - 61h]
        cmp al, 19h
        ; Exact mapped bytes 77 05: ja 0x5886748f
        __asm _emit 0x77
        __asm _emit 0x05
        sub cl, 20h
        mov byte ptr [edx], cl
        mov cl, byte ptr [edx + 1]
        inc edx
        test cl, cl
        ; Exact mapped bytes 75 EC: jne 0x58867483
        __asm _emit 0x75
        __asm _emit 0xec
        mov eax, esi
        pop esi
        pop ebp
        ret
        push 0
        push -1
        push esi
        ; Exact mapped bytes E8 0A 00 00 00: call 0x588674b0
        __asm _emit 0xe8
        __asm _emit 0x0a
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
