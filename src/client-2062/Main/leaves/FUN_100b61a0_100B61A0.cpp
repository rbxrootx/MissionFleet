// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B61A0 .. +0x75 bytes.
extern "C" __declspec(naked) void FUN_100b61a0_100B61A0() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, eax
        and ecx, 1f00h
        cmp ecx, 200h
        ; Exact mapped bytes 75 5C: jne 0x100b6213
        __asm _emit 0x75
        __asm _emit 0x5c
        mov edx, dword ptr [esi + 4]
        and eax, 0e4fdh
        or ah, 4
        mov dword ptr [esi + 50h], edx
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov dword ptr [esi + 54h], 0ffffff38h
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 32h
        ; Exact mapped bytes 7E 23: jle 0x100b6201
        __asm _emit 0x7e
        __asm _emit 0x23
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x100b6201
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [eax + 0c8h]
        push 0
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov dword ptr [esi + 0b4h], 0
        pop esi
        ret
        xor ecx, ecx
        push ecx
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov dword ptr [esi + 0b4h], 0
        pop esi
        ret
    }
}
