// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1007E3B0 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_1007e3b0_1007E3B0() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 74h]
        ; Exact mapped bytes E8 D5 5A 08 00: call 0x10103e90
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x5a
        __asm _emit 0x08
        __asm _emit 0x00
        cmp eax, -1
        mov eax, dword ptr [esi + 8ch]
        ; Exact mapped bytes 74 18: je 0x1007e3de
        __asm _emit 0x74
        __asm _emit 0x18
        or byte ptr [eax + 24h], 2
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        and eax, 0e1ffh
        or eax, 107h
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        pop esi
        ret
        ; Exact mapped bytes 66 81 60 24 FD FF: and word ptr [eax + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        and eax, 0e1ffh
        or eax, 107h
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        pop esi
        ret
    }
}
