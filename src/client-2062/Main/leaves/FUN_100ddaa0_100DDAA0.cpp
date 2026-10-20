// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100DDAA0 .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_100ddaa0_100DDAA0() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 13a0h]
        and eax, 0e4fdh
        mov dword ptr [esi + 58h], 0
        or eax, 405h
        test ecx, ecx
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 74 12: je 0x100ddad8
        __asm _emit 0x74
        __asm _emit 0x12
        xor edx, edx
        mov dl, byte ptr [ecx + 25h]
        and dl, 1fh
        cmp dl, 1
        ; Exact mapped bytes 75 05: jne 0x100ddad8
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes A1 E4 56 1C 10: mov eax, dword ptr [0x101c56e4]
        __asm _emit 0xa1
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 64h
        push eax
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        mov ecx, dword ptr [esi + 30h]
        mov edx, dword ptr [esi + 94h]
        push edx
        push 0ee48h
        mov eax, dword ptr [ecx]
        push esi
        ; Exact mapped bytes FF 50 18: call dword ptr [eax + 0x18]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x18
        pop esi
        ret
    }
}
