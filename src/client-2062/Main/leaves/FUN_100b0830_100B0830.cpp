// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B0830 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_100b0830_100B0830() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 8]
        and eax, 0e1fdh
        push ecx
        or eax, 105h
        push 132h
        mov ecx, esi
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes E8 AB 6E F9 FF: call 0x10047700
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x6e
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0e0h]
        mov ecx, esi
        or byte ptr [eax + 24h], 0fh
        ; Exact mapped bytes E8 7A 06 00 00: call 0x100b0ee0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        ret
    }
}
