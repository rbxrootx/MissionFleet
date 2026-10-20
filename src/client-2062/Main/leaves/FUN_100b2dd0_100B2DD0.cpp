// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B2DD0 .. +0x71 bytes.
extern "C" __declspec(naked) void FUN_100b2dd0_100B2DD0() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov edx, 3
        ; Exact mapped bytes 66 81 66 24 FD FF: and word ptr [esi + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        lea ecx, [esi + 50h]
        mov edi, 0fffeh
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x100b2de7
        __asm _emit 0x75
        __asm _emit 0xf4
        mov eax, dword ptr [esi + 0c4h]
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x100b2e1a
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [eax]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0c4h]
        mov eax, dword ptr [eax + 4]
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        mov dword ptr [esi + 0c4h], 0
        ; Exact mapped bytes 66 83 BE CC 00 00 00 00: cmp word ptr [esi + 0xcc], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 09: je 0x100b2e2d
        __asm _emit 0x74
        __asm _emit 0x09
        push 0
        mov ecx, esi
        ; Exact mapped bytes E8 53 05 00 00: call 0x100b3380
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        pop edi
        and ecx, 0e5ffh
        or ch, 5
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        pop esi
        ret
    }
}
