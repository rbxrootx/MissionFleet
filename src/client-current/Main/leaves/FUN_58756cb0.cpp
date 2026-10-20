// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58756CB0 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_58756cb0() {
    __asm {
        mov eax, 1
        ; Exact mapped bytes 66 09 41 24: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 49 24 04: or word ptr [ecx + 0x24], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x49
        __asm _emit 0x24
        __asm _emit 0x04
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
        mov dword ptr [ecx + 5f8h], 0
        mov dword ptr [ecx + 5fch], eax
        pop esi
        ret
    }
}
