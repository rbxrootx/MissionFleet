// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887027D .. +0x93 bytes.
extern "C" __declspec(naked) void FUN_5887027d_5887027D() {
    __asm {
        push 0ch
        push 588ed5d0h
        ; Exact mapped bytes E8 D7 24 FC FF: call 0x58832760
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x24
        __asm _emit 0xfc
        __asm _emit 0xff
        xor esi, esi
        mov dword ptr [ebp - 1ch], esi
        mov eax, dword ptr [ebp + 8]
        push dword ptr [eax]
        ; Exact mapped bytes E8 DD 94 00 00: call 0x58879775
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov dword ptr [ebp - 4], esi
        mov eax, dword ptr [ebp + 0ch]
        mov eax, dword ptr [eax]
        mov edi, dword ptr [eax]
        mov edx, edi
        sar edx, 6
        mov eax, edi
        and eax, 3fh
        imul ecx, eax, 38h
        mov eax, dword ptr [edx*4 + 589699b0h]
        test byte ptr [eax + ecx + 28h], 1
        ; Exact mapped bytes 74 21: je 0x588702df
        __asm _emit 0x74
        __asm _emit 0x21
        push edi
        ; Exact mapped bytes E8 2D 97 00 00: call 0x588799f1
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        ; Exact mapped bytes FF 15 9C 41 89 58: call dword ptr [0x5889419c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 1D: jne 0x588702ed
        __asm _emit 0x75
        __asm _emit 0x1d
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        mov esi, eax
        ; Exact mapped bytes E8 7D 21 FF FF: call 0x5886245a
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x21
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], esi
        ; Exact mapped bytes E8 8B 21 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x21
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 9
        or esi, 0ffffffffh
        mov dword ptr [ebp - 1ch], esi
        mov dword ptr [ebp - 4], 0fffffffeh
        ; Exact mapped bytes E8 17 00 00 00: call 0x58870313
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
