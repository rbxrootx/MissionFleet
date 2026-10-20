// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E9AA8 .. +0x24E bytes.
extern "C" __declspec(naked) void FUN_004e9aa8_004E9AA8() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58cecch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        add eax, 10h
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 52 20: call dword ptr [edx + 0x20]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x20
        mov dword ptr [ebp - 4], 0
        push 17dh
        push 674180h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 6B 07 FF FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x07
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 14h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 20h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 38h], 0
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 34h], 0
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx], 0
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 4], 1
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 0ch], 0ffffffffh
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 9F BB 03 00: call 0x5256df
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xbb
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x4e9b50
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 3ch], 10h
        ; Exact mapped bytes EB 0A: jmp 0x4e9b5a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 3ch], 40h
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 40h], 89h
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [ecx + 2ch], edx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 18h], 1
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 8], 0
        cmp dword ptr [ebp + 10h], 80h
        ; Exact mapped bytes 7D 16: jge 0x4e9ba0
        __asm _emit 0x7d
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 1ch], 80h
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 2ch], 0
        ; Exact mapped bytes EB 09: jmp 0x4e9ba9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 1ch], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 1ch]
        mov dword ptr [ebp + 10h], ecx
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 2ch], 0
        ; Exact mapped bytes 75 60: jne 0x4e9c1b
        __asm _emit 0x75
        __asm _emit 0x60
        push 0
        push 0
        push 0
        push 3
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 20h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 20h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 58: call dword ptr [edx + 0x58]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 8], eax
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 75 31: jne 0x4e9c14
        __asm _emit 0x75
        __asm _emit 0x31
        push 1a3h
        push 674180h
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes E8 DA 24 FE FF: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [edx + 2ch], eax
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 18h], 0
        ; Exact mapped bytes EB 07: jmp 0x4e9c1b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp + 10h], 0
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 75 5A: jne 0x4e9c7e
        __asm _emit 0x75
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 2ch], 0
        ; Exact mapped bytes 75 14: jne 0x4e9c41
        __asm _emit 0x75
        __asm _emit 0x14
        push 1afh
        push 674180h
        ; Exact mapped bytes E8 04 F1 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xf1
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e9c41
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4e9c24
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 90 BA 03 00: call 0x5256df
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 2ch]
        push ecx
        ; Exact mapped bytes E8 06 98 FB FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x98
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e9c78
        __asm _emit 0x75
        __asm _emit 0x14
        push 1b0h
        push 674180h
        ; Exact mapped bytes E8 CD F0 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xf0
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e9c78
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 C9: jne 0x4e9c47
        __asm _emit 0x75
        __asm _emit 0xc9
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 2ch]
        add ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 28h], ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 30 BA 03 00: call 0x5256c5
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x4e9ca4
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 28h]
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes EB 09: jmp 0x4e9cad
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 2ch]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 24h], edx
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 34h], 0
        ; Exact mapped bytes 74 14: je 0x4e9cd3
        __asm _emit 0x74
        __asm _emit 0x14
        push 1b5h
        push 674180h
        ; Exact mapped bytes E8 72 F0 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xf0
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e9cd3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4e9cb6
        __asm _emit 0x75
        __asm _emit 0xdd
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
