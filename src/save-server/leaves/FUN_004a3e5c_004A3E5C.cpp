// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A3E5C .. +0x12E bytes.
extern "C" __declspec(naked) void FUN_004a3e5c_004A3E5C() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58d33eh
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
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 90h]
        and ecx, 80000h
        test ecx, ecx
        ; Exact mapped bytes 0F 84 BE 00 00 00: je 0x4a3f59
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx + 1ch], 0
        ; Exact mapped bytes 0F 84 B1 00 00 00: je 0x4a3f59
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4a3ecd
        __asm _emit 0x75
        __asm _emit 0x14
        push 0a1h
        push 674ab0h
        ; Exact mapped bytes E8 78 4E 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x4e
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a3ecd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4a3ea8
        __asm _emit 0x75
        __asm _emit 0xd5
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 2C 0E 08 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x0e
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        push 104h
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 A9 91 02 00: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x91
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        push 104h
        push 464h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 97 8B 08 00: call 0x52ca99
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x8b
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 30 77 08 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x77
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7D 0A: jge 0x4a3f17
        __asm _emit 0x7d
        __asm _emit 0x0a
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 3D 88 02 00: call 0x4cc752
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 33: jmp 0x4a3f4a
        __asm _emit 0xeb
        __asm _emit 0x33
        push -1
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 B2 92 02 00: call 0x4cd1d3
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x92
        __asm _emit 0x02
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 ED 85 02 00: call 0x4cc51a
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        or ecx, 1
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 A7 89 02 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x89
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 2D: jmp 0x4a3f77
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 93 89 02 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x89
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 80h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0D 8A 02 00: call 0x4cc978
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x8a
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        or ecx, 1
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp + 8]
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
