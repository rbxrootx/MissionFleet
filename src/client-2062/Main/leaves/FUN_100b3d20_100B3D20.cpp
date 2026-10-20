// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B3D20 .. +0x87 bytes.
extern "C" __declspec(naked) void FUN_100b3d20_100B3D20() {
    __asm {
        push esi
        push edi
        mov edi, ecx
        ; Exact mapped bytes 66 8B 47 24: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 74 78: je 0x100b3da4
        __asm _emit 0x74
        __asm _emit 0x78
        and eax, 1f00h
        ; Exact mapped bytes 66 3D 00 01: cmp ax, 0x100
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 74 06: je 0x100b3d3d
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 3D 00 04: cmp ax, 0x400
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 75 43: jne 0x100b3d80
        __asm _emit 0x75
        __asm _emit 0x43
        mov ecx, edi
        ; Exact mapped bytes E8 2C 3A F9 FF: call 0x10047770
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x3a
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [edi + 4]
        mov ecx, dword ptr [edi + 6ch]
        cmp eax, ecx
        ; Exact mapped bytes 75 32: jne 0x100b3d80
        __asm _emit 0x75
        __asm _emit 0x32
        ; Exact mapped bytes 66 8B 47 24: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x24
        mov ecx, eax
        and ecx, 1f00h
        ; Exact mapped bytes 66 81 F9 00 02: cmp cx, 0x200
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 75 0F: jne 0x100b3d70
        __asm _emit 0x75
        __asm _emit 0x0f
        or al, 0fh
        mov ecx, edi
        ; Exact mapped bytes 66 89 47 24: mov word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x24
        ; Exact mapped bytes E8 82 FE FF FF: call 0x100b3bf0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 10: jmp 0x100b3d80
        __asm _emit 0xeb
        __asm _emit 0x10
        ; Exact mapped bytes 66 81 F9 00 05: cmp cx, 0x500
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x05
        ; Exact mapped bytes 75 09: jne 0x100b3d80
        __asm _emit 0x75
        __asm _emit 0x09
        and eax, 0fff0h
        ; Exact mapped bytes 66 89 47 24: mov word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x24
        mov ecx, dword ptr [edi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x100b3da4
        __asm _emit 0x74
        __asm _emit 0x1d
        mov esi, dword ptr [ecx + 38h]
        mov eax, dword ptr [edi + 3ch]
        cmp esi, eax
        ; Exact mapped bytes 74 0E: je 0x100b3d9f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        test esi, esi
        mov ecx, esi
        ; Exact mapped bytes 75 EB: jne 0x100b3d87
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        pop edi
        pop esi
        ret
    }
}
