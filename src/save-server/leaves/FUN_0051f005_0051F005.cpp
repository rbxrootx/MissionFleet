// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051F005 .. +0x137 bytes.
extern "C" __declspec(naked) void FUN_0051f005_0051F005() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58ee61h
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
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 20h], ecx
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffff0fbfh
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x51f043
        __asm _emit 0x74
        __asm _emit 0x11
        push 38h
        push 6792bch
        ; Exact mapped bytes E8 02 9D 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51f043
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x51f026
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 0b4h], 63a868h
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x51f068
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 4
        ; Exact mapped bytes 0F 8D B7 00 00 00: jge 0x51f129
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx*8 + 63ae4ch]
        and edx, dword ptr [ebp + 8]
        and edx, 0f000h
        test edx, edx
        ; Exact mapped bytes 0F 84 97 00 00 00: je 0x51f124
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax*8 + 63ae48h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 9D 56 FF FF: call 0x51473d
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 7B: jne 0x51f124
        __asm _emit 0x75
        __asm _emit 0x7b
        push 42h
        push 6792bch
        push 0a4h
        ; Exact mapped bytes E8 45 D0 FA FF: call 0x4cc0ff
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xd0
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 0F: je 0x51f0d9
        __asm _emit 0x74
        __asm _emit 0x0f
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 3C 95 FE FF: call 0x508610
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x95
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x51f0e0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 18h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx*8 + 63ae48h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax*8 + 63ae4ch]
        or ecx, 56000000h
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 6B 96 FE FF: call 0x508786
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x96
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x51f124
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 53 A4 FC FF: call 0x4e9577
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xa4
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes E9 36 FF FF FF: jmp 0x51f05f
        __asm _emit 0xe9
        __asm _emit 0x36
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
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
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
