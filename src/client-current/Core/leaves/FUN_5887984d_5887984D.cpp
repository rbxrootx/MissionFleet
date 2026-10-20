// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887984D .. +0x107 bytes.
extern "C" __declspec(naked) void FUN_5887984d_5887984D() {
    __asm {
        push 1ch
        push 588ed710h
        ; Exact mapped bytes E8 07 8F FB FF: call 0x58832760
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x8f
        __asm _emit 0xfb
        __asm _emit 0xff
        push 7
        ; Exact mapped bytes E8 BC A3 FE FF: call 0x58863c1c
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xa3
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        or ebx, 0ffffffffh
        mov dword ptr [ebp - 1ch], ebx
        xor edi, edi
        mov dword ptr [ebp - 4], edi
        mov dword ptr [ebp - 2ch], edi
        cmp edi, 80h
        ; Exact mapped bytes 7D 44: jge 0x588798bb
        __asm _emit 0x7d
        __asm _emit 0x44
        mov eax, dword ptr [edi*4 + 589699b0h]
        mov dword ptr [ebp - 28h], eax
        test eax, eax
        ; Exact mapped bytes 75 54: jne 0x588798d9
        __asm _emit 0x75
        __asm _emit 0x54
        ; Exact mapped bytes E8 9D FD FF FF: call 0x58879627
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [edi*4 + 589699b0h], eax
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x588798bb
        __asm _emit 0x74
        __asm _emit 0x26
        ; Exact mapped bytes 83 05 B0 9B 96 58 40: add dword ptr [0x58969bb0], 0x40
        __asm _emit 0x83
        __asm _emit 0x05
        __asm _emit 0xb0
        __asm _emit 0x9b
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x40
        mov ebx, edi
        shl ebx, 6
        push ebx
        ; Exact mapped bytes E8 CE FE FF FF: call 0x58879775
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov eax, ebx
        sar eax, 6
        mov eax, dword ptr [eax*4 + 589699b0h]
        mov byte ptr [eax + 28h], 1
        mov dword ptr [ebp - 1ch], ebx
        mov dword ptr [ebp - 4], 0fffffffeh
        ; Exact mapped bytes E8 90 00 00 00: call 0x58879957
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, ebx
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
        ret
        lea ecx, [eax + 0e00h]
        mov dword ptr [ebp - 20h], ecx
        mov esi, eax
        push 38h
        pop eax
        mov dword ptr [ebp - 24h], esi
        cmp esi, ecx
        ; Exact mapped bytes 74 60: je 0x5887994e
        __asm _emit 0x74
        __asm _emit 0x60
        test byte ptr [esi + 28h], 1
        ; Exact mapped bytes 75 1A: jne 0x5887990e
        __asm _emit 0x75
        __asm _emit 0x1a
        push esi
        ; Exact mapped bytes FF 15 20 42 89 58: call dword ptr [0x58894220]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        test byte ptr [esi + 28h], 1
        ; Exact mapped bytes 74 11: je 0x58879912
        __asm _emit 0x74
        __asm _emit 0x11
        push esi
        ; Exact mapped bytes FF 15 1C 42 89 58: call dword ptr [0x5889421c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 20h]
        push 38h
        pop eax
        add esi, eax
        ; Exact mapped bytes EB D5: jmp 0x588798e7
        __asm _emit 0xeb
        __asm _emit 0xd5
        sub esi, dword ptr [ebp - 28h]
        mov eax, esi
        cdq
        push 38h
        pop ecx
        idiv ecx
        shl edi, 6
        lea esi, [edi + eax]
        mov edx, esi
        sar edx, 6
        mov ecx, esi
        and ecx, 3fh
        imul ecx, ecx, 38h
        mov eax, dword ptr [edx*4 + 589699b0h]
        mov byte ptr [eax + ecx + 28h], 1
        mov eax, dword ptr [edx*4 + 589699b0h]
        mov dword ptr [eax + ecx + 18h], ebx
        mov ebx, esi
        ; Exact mapped bytes E9 6A FF FF FF: jmp 0x588798b8
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        inc edi
        ; Exact mapped bytes E9 18 FF FF FF: jmp 0x5887986c
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
