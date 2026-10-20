// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10022940 .. +0xF3 bytes.
extern "C" __declspec(naked) void FUN_10022940_10022940() {
    __asm {
        push esi
        mov esi, ecx
        push -5ah
        push 320h
        mov ecx, dword ptr [esi + 0b0h]
        mov dword ptr [esi + 78h], 18eh
        mov dword ptr [esi + 80h], 17ch
        ; Exact mapped bytes E8 6A C3 0D 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xc3
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b4h]
        push -5ah
        push 320h
        ; Exact mapped bytes E8 58 C3 0D 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xc3
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b8h]
        push -5ah
        push 320h
        ; Exact mapped bytes E8 46 C3 0D 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xc3
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0bch]
        push -5ah
        push 320h
        ; Exact mapped bytes E8 34 C3 0D 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xc3
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0c0h]
        push 0ffffff66h
        push 370h
        ; Exact mapped bytes E8 1F C3 0D 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xc3
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 D8 01 00 00: call 0x10022b90
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0ach]
        mov ecx, dword ptr [esp + 14h]
        test ecx, ecx
        mov dword ptr [eax + 54h], ecx
        ; Exact mapped bytes 74 28: je 0x100229f1
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [ecx + 18h]
        add ecx, 20h
        mov dword ptr [eax + 0ch], edx
        mov edx, dword ptr [ecx - 4]
        mov dword ptr [eax + 10h], edx
        mov edx, dword ptr [ecx]
        add eax, 14h
        mov dword ptr [eax], edx
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [eax + 8], edx
        mov ecx, dword ptr [ecx + 0ch]
        mov dword ptr [eax + 0ch], ecx
        mov eax, dword ptr [esi + 0ach]
        mov edx, dword ptr [esp + 18h]
        mov ecx, dword ptr [esp + 0ch]
        or byte ptr [eax + 24h], 1
        mov eax, dword ptr [esp + 8]
        mov dword ptr [esi + 0a4h], eax
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        and eax, 0e1ffh
        mov dword ptr [esi + 0a8h], edx
        mov edx, dword ptr [esp + 10h]
        or eax, 105h
        mov dword ptr [esi + 58h], ecx
        mov dword ptr [esi + 5ch], edx
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        pop esi
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
