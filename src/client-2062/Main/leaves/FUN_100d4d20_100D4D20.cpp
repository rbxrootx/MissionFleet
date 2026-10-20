// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100D4D20 .. +0xCB bytes.
extern "C" __declspec(naked) void FUN_100d4d20_100D4D20() {
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
        mov ecx, dword ptr [esi + 98h]
        and eax, 0e1fdh
        or eax, 105h
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov dword ptr [ecx + 50h], 1
        mov eax, dword ptr [esi + 98h]
        mov ecx, esi
        or byte ptr [eax + 24h], 2
        mov edx, dword ptr [esi + 9ch]
        mov dword ptr [edx + 50h], 6
        mov eax, dword ptr [esi + 9ch]
        ; Exact mapped bytes 66 81 60 24 FD FF: and word ptr [eax + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0a0h]
        mov dword ptr [eax + 50h], 1
        mov eax, dword ptr [esi + 0a0h]
        or byte ptr [eax + 24h], 2
        ; Exact mapped bytes E8 73 29 F7 FF: call 0x10047700
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x29
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 98h]
        cmp dword ptr [ecx + 50h], 6
        ; Exact mapped bytes 75 09: jne 0x100d4da2
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [esi + 30h]
        push 0
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes EB 13: jmp 0x100d4db5
        __asm _emit 0xeb
        __asm _emit 0x13
        mov eax, dword ptr [esi + 9ch]
        cmp dword ptr [eax + 50h], 6
        ; Exact mapped bytes 75 0D: jne 0x100d4dbb
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 30h]
        push 1
        mov edx, dword ptr [ecx]
        push 2
        push esi
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        pop esi
        cmp dword ptr [eax + 170h], 32h
        ; Exact mapped bytes 7E 18: jle 0x100d4de2
        __asm _emit 0x7e
        __asm _emit 0x18
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x100d4de2
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 0c8h]
        push 0
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        ret
        xor ecx, ecx
        push ecx
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        ret
    }
}
