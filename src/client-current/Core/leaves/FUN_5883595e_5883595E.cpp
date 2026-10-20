// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883595E .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_5883595e_5883595E() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes 80 3D 79 6B 96 58 3A: cmp byte ptr [0x58966b79], 0x3a
        __asm _emit 0x80
        __asm _emit 0x3d
        __asm _emit 0x79
        __asm _emit 0x6b
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x3a
        push esi
        ; Exact mapped bytes 75 19: jne 0x58835984
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes 80 3D 7A 6B 96 58 5C: cmp byte ptr [0x58966b7a], 0x5c
        __asm _emit 0x80
        __asm _emit 0x3d
        __asm _emit 0x7a
        __asm _emit 0x6b
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x5c
        ; Exact mapped bytes 75 10: jne 0x58835984
        __asm _emit 0x75
        __asm _emit 0x10
        mov esi, dword ptr [ebp + 8]
        push 58966b78h
        push esi
        ; Exact mapped bytes E8 1E 41 02 00: call 0x58859aa0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x41
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 0C: jmp 0x58835990
        __asm _emit 0xeb
        __asm _emit 0x0c
        push dword ptr [ebp + 0ch]
        mov esi, dword ptr [ebp + 8]
        push esi
        ; Exact mapped bytes E8 3F FE FF FF: call 0x588357cf
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        push 588f0d4ch
        ; Exact mapped bytes E8 B7 69 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x69
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes E8 0D 41 02 00: call 0x58859ab0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x41
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov al, 1
        pop esi
        pop ebp
        ret
    }
}
