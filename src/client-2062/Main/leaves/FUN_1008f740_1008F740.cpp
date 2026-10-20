// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1008F740 .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_1008f740_1008F740() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        and eax, 1f00h
        cmp eax, 500h
        ; Exact mapped bytes 75 2D: jne 0x1008f780
        __asm _emit 0x75
        __asm _emit 0x2d
        ; Exact mapped bytes 8B 0D E4 56 1C 10: mov ecx, dword ptr [0x101c56e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 64h
        push esi
        mov ecx, dword ptr [ecx + 30h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 64h]
        and eax, 0e1ffh
        or eax, 105h
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes E8 50 64 07 00: call 0x10105bd0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x64
        __asm _emit 0x07
        __asm _emit 0x00
        pop esi
        ret
    }
}
