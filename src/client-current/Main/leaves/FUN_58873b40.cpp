// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58873B40 .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_58873b40() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, 0e1ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 100h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 4E 24 05: or word ptr [esi + 0x24], 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x05
        mov eax, 0fffdh
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 8]
        push ecx
        push 212h
        mov ecx, esi
        ; Exact mapped bytes E8 A7 24 F4 FF: call 0x587b6020
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x24
        __asm _emit 0xf4
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0f4h]
        ; Exact mapped bytes 66 83 48 24 0F: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0f
        mov ecx, esi
        pop esi
        ; Exact mapped bytes E9 64 F5 FF FF: jmp 0x588730f0
        __asm _emit 0xe9
        __asm _emit 0x64
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
