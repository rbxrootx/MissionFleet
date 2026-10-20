// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1004F4C0 .. +0x6E bytes.
extern "C" __declspec(naked) void FUN_1004f4c0_1004F4C0() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0ch]
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov dword ptr [esi + 50h], 0
        mov bl, al
        or al, 4
        shr bl, 2
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0c0h]
        and ebx, 1
        cmp ecx, eax
        mov dword ptr [esi + 0bch], ecx
        ; Exact mapped bytes 74 17: je 0x1004f508
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        mov ecx, dword ptr [esi + 0bch]
        mov eax, dword ptr [esi + 0c0h]
        cmp ecx, eax
        ; Exact mapped bytes 75 E9: jne 0x1004f4f1
        __asm _emit 0x75
        __asm _emit 0xe9
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        and bl, 1
        ; Exact mapped bytes 66 33 D2: xor dx, dx
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xd2
        and eax, 0fffbh
        mov dl, bl
        mov dword ptr [esi + 50h], 40000000h
        shl edx, 2
        or edx, eax
        ; Exact mapped bytes 66 89 56 24: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
