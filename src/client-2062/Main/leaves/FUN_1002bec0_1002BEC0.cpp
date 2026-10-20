// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1002BEC0 .. +0x5E bytes.
extern "C" __declspec(naked) void FUN_1002bec0_1002BEC0() {
    __asm {
        mov edx, dword ptr [ecx + 34h]
        xor eax, eax
        push esi
        test edx, edx
        ; Exact mapped bytes 74 50: je 0x1002bf1a
        __asm _emit 0x74
        __asm _emit 0x50
        mov esi, dword ptr [esp + 8]
        cmp dword ptr [edx + 18h], esi
        ; Exact mapped bytes 74 08: je 0x1002bedb
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [edx]
        test edx, edx
        ; Exact mapped bytes 74 41: je 0x1002bf1a
        __asm _emit 0x74
        __asm _emit 0x41
        ; Exact mapped bytes EB F3: jmp 0x1002bece
        __asm _emit 0xeb
        __asm _emit 0xf3
        ; Exact mapped bytes 66 8B 42 28: mov ax, word ptr [edx + 0x28]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x28
        shr eax, 2
        and eax, 0ffh
        cmp eax, 10h
        ; Exact mapped bytes 73 06: jae 0x1002bef2
        __asm _emit 0x73
        __asm _emit 0x06
        dec byte ptr [eax + ecx + 4]
        ; Exact mapped bytes EB 04: jmp 0x1002bef6
        __asm _emit 0xeb
        __asm _emit 0x04
        dec byte ptr [eax + ecx - 2]
        mov esi, dword ptr [ecx + 20h]
        mov dword ptr [ecx + 1ch], 0
        mov dword ptr [ecx + 18h], 0
        mov eax, dword ptr [edx + 24h]
        sub esi, eax
        push edx
        mov dword ptr [ecx + 20h], esi
        ; Exact mapped bytes E8 4B FF FF FF: call 0x1002be60
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
