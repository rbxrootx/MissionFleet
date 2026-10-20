// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100D4DF0 .. +0x6E bytes.
extern "C" __declspec(naked) void FUN_100d4df0_100D4DF0() {
    __asm {
        push esi
        mov esi, ecx
        push 14ah
        push 20dh
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        and eax, 0e4fdh
        or eax, 405h
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes E8 EC 28 F7 FF: call 0x10047700
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x28
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 8]
        mov dword ptr [esi + 0a4h], 0
        push ecx
        push 384h
        mov ecx, esi
        ; Exact mapped bytes E8 D2 28 F7 FF: call 0x10047700
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x28
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        pop esi
        cmp dword ptr [eax + 170h], 32h
        ; Exact mapped bytes 7E 18: jle 0x100d4e55
        __asm _emit 0x7e
        __asm _emit 0x18
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x100d4e55
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 0c8h]
        push 0
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ret
        xor ecx, ecx
        push ecx
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ret
    }
}
