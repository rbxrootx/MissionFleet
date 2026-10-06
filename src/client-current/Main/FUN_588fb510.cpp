// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588FB510 .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_588fb510() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 83 E8 00: sub eax, 0
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x00
        ; Exact mapped bytes BA 01 00 00 00: mov edx, 1
        __asm _emit 0xba
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 38: je 0x588fb556
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 74 1C: je 0x588fb53e
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes 2B C2: sub eax, edx
        __asm _emit 0x2b
        __asm _emit 0xc2
        ; Exact mapped bytes 75 3E: jne 0x588fb564
        __asm _emit 0x75
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 41 60: mov eax, dword ptr [ecx + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x60
        ; Exact mapped bytes BA FE FF 00 00: mov edx, 0xfffe
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 49 64: mov ecx, dword ptr [ecx + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x64
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 41 60: mov eax, dword ptr [ecx + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x60
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes BE FE FF 00 00: mov esi, 0xfffe
        __asm _emit 0xbe
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 21 70 24: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        ; Exact mapped bytes 8B 49 64: mov ecx, dword ptr [ecx + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x64
        ; Exact mapped bytes 66 09 51 24: or word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 41 60: mov eax, dword ptr [ecx + 0x60]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x60
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes 8B 49 64: mov ecx, dword ptr [ecx + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x64
        ; Exact mapped bytes 66 09 51 24: or word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
