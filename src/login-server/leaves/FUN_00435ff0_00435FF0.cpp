// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00435FF0 .. +0xEA bytes.
extern "C" __declspec(naked) void FUN_00435ff0_00435FF0() {
    __asm {
        mov eax, 43a974h
        ; Exact mapped bytes E8 0E 96 FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x96
        __asm _emit 0xfe
        __asm _emit 0xff
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [ebp - 10h], esi
        ; Exact mapped bytes E8 16 03 00 00: call 0x43631e
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        xor edi, edi
        mov dword ptr [esi], 43e0a8h
        cmp dword ptr [ebp + 8], edi
        mov dword ptr [ebp - 4], edi
        ; Exact mapped bytes 74 0E: je 0x436026
        __asm _emit 0x74
        __asm _emit 0x0e
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1C B1 FE FF: call 0x42113c
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xb1
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        mov dword ptr [esi + 78h], eax
        ; Exact mapped bytes EB 03: jmp 0x436029
        __asm _emit 0xeb
        __asm _emit 0x03
        mov dword ptr [esi + 78h], edi
        ; Exact mapped bytes E8 85 FC FF FF: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, eax
        push 435d25h
        lea ecx, [ebx + 1070h]
        ; Exact mapped bytes E8 73 0D 00 00: call 0x436db3
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax + 4], esi
        ; Exact mapped bytes FF 15 DC C1 43 00: call dword ptr [0x43c1dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        mov dword ptr [esi + 28h], eax
        ; Exact mapped bytes FF 15 E4 C1 43 00: call dword ptr [0x43c1e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [esi + 2ch], eax
        mov dword ptr [ebx + 4], esi
        mov dword ptr [esi + 68h], edi
        mov dword ptr [esi + 8ch], edi
        mov dword ptr [esi + 90h], edi
        mov dword ptr [esi + 7ch], edi
        mov dword ptr [esi + 88h], edi
        mov dword ptr [esi + 0a8h], edi
        mov dword ptr [esi + 80h], edi
        ; Exact mapped bytes 66 89 BE B2 00 00 00: mov word ptr [esi + 0xb2], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 BE B0 00 00 00: mov word ptr [esi + 0xb0], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 70h], edi
        mov dword ptr [esi + 0ach], edi
        mov dword ptr [esi + 0a0h], edi
        mov dword ptr [esi + 0a4h], edi
        mov dword ptr [esi + 94h], edi
        mov dword ptr [esi + 98h], edi
        mov dword ptr [esi + 0b4h], edi
        mov dword ptr [esi + 0bch], edi
        mov dword ptr [esi + 84h], edi
        mov dword ptr [esi + 0b8h], 200h
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
