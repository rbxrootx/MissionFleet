// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00504AF2 .. +0x24E bytes.
extern "C" __declspec(naked) void FUN_00504af2_00504AF2() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57d38ch
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
        push 5c7650h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 21 66 FF FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x66
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
        ; Exact mapped bytes E8 8C CD 02 00: call 0x531916
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xcd
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x504b9a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 3ch], 10h
        ; Exact mapped bytes EB 0A: jmp 0x504ba4
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
        ; Exact mapped bytes 7D 16: jge 0x504bea
        __asm _emit 0x7d
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 1ch], 80h
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 2ch], 0
        ; Exact mapped bytes EB 09: jmp 0x504bf3
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
        ; Exact mapped bytes 75 60: jne 0x504c65
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
        ; Exact mapped bytes 75 31: jne 0x504c5e
        __asm _emit 0x75
        __asm _emit 0x31
        push 1a3h
        push 5c7650h
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes E8 F0 83 FE FF: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [edx + 2ch], eax
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 18h], 0
        ; Exact mapped bytes EB 07: jmp 0x504c65
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp + 10h], 0
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 75 5A: jne 0x504cc8
        __asm _emit 0x75
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 2ch], 0
        ; Exact mapped bytes 75 14: jne 0x504c8b
        __asm _emit 0x75
        __asm _emit 0x14
        push 1afh
        push 5c7650h
        ; Exact mapped bytes E8 7A FD 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xfd
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x504c8b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x504c6e
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 7D CC 02 00: call 0x531916
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 2ch]
        push ecx
        ; Exact mapped bytes E8 AC B1 FC FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xb1
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x504cc2
        __asm _emit 0x75
        __asm _emit 0x14
        push 1b0h
        push 5c7650h
        ; Exact mapped bytes E8 43 FD 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xfd
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x504cc2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 C9: jne 0x504c91
        __asm _emit 0x75
        __asm _emit 0xc9
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 2ch]
        add ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 28h], ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 1D CC 02 00: call 0x5318fc
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x504cee
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 28h]
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes EB 09: jmp 0x504cf7
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
        ; Exact mapped bytes 74 14: je 0x504d1d
        __asm _emit 0x74
        __asm _emit 0x14
        push 1b5h
        push 5c7650h
        ; Exact mapped bytes E8 E8 FC 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x504d1d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x504d00
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
