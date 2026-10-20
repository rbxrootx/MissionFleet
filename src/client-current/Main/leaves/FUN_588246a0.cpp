// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588246A0 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_588246a0() {
    __asm {
        ; Exact mapped bytes 66 83 49 24 04: or word ptr [ecx + 0x24], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x49
        __asm _emit 0x24
        __asm _emit 0x04
        mov eax, 1
        ; Exact mapped bytes 66 09 41 24: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        push esi
        mov esi, 0e1ffh
        ; Exact mapped bytes 66 23 D6: and dx, si
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd6
        mov esi, 100h
        ; Exact mapped bytes 66 0B D6: or dx, si
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd6
        ; Exact mapped bytes 66 89 51 24: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        mov byte ptr [ecx + 60h], al
        ; Exact mapped bytes E8 C1 34 00 00: call 0x58827b90
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0
        ; Exact mapped bytes E8 34 95 FF FF: call 0x5881dc10
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x95
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        ret
    }
}
