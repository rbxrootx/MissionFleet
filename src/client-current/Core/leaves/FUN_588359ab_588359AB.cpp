// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588359AB .. +0x4F bytes.
extern "C" __declspec(naked) void FUN_588359ab_588359AB() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes 66 83 3D 82 6C 96 58 3A: cmp word ptr [0x58966c82], 0x3a
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x82
        __asm _emit 0x6c
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x3a
        push esi
        ; Exact mapped bytes 75 1A: jne 0x588359d3
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes 66 83 3D 84 6C 96 58 5C: cmp word ptr [0x58966c84], 0x5c
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x84
        __asm _emit 0x6c
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x5c
        ; Exact mapped bytes 75 10: jne 0x588359d3
        __asm _emit 0x75
        __asm _emit 0x10
        mov esi, dword ptr [ebp + 8]
        push 58966c80h
        push esi
        ; Exact mapped bytes E8 2F 07 03 00: call 0x58866100
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 0C: jmp 0x588359df
        __asm _emit 0xeb
        __asm _emit 0x0c
        push dword ptr [ebp + 0ch]
        mov esi, dword ptr [ebp + 8]
        push esi
        ; Exact mapped bytes E8 2D FF FF FF: call 0x5883590c
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        push 588f0d5ch
        ; Exact mapped bytes E8 C2 6E 00 00: call 0x5883c8ad
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x6e
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes E8 8E 06 03 00: call 0x58866080
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x06
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov al, 1
        pop esi
        pop ebp
        ret
    }
}
