// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58819C20 .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_58819c20() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 74h]
        ; Exact mapped bytes E8 95 E5 0E 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xe5
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, -1
        mov eax, dword ptr [esi + 8ch]
        mov ecx, 2
        ; Exact mapped bytes 74 06: je 0x58819c41
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes EB 09: jmp 0x58819c4a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, 0fffdh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov edx, 0e1ffh
        ; Exact mapped bytes 66 23 C2: and ax, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc2
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
        ; Exact mapped bytes 66 09 4E 24: or word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 4E 24 05: or word ptr [esi + 0x24], 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x05
        pop esi
        ret
    }
}
