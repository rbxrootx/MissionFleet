// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A3CE6 .. +0x176 bytes.
extern "C" __declspec(naked) void FUN_004a3ce6_004A3CE6() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58d32bh
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
        ; Exact mapped bytes 0F 84 09 01 00 00: je 0x4a3e2e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx + 1ch], 0
        ; Exact mapped bytes 0F 84 FC 00 00 00: je 0x4a3e2e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfc
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
        ; Exact mapped bytes 75 14: jne 0x4a3d57
        __asm _emit 0x75
        __asm _emit 0x14
        push 82h
        push 674ab0h
        ; Exact mapped bytes E8 EE 4F 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x4f
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a3d57
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4a3d32
        __asm _emit 0x75
        __asm _emit 0xd5
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 A2 0F 08 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x0f
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        push 104h
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 1F 93 02 00: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x93
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        push 104h
        push 464h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 0D 8D 08 00: call 0x52ca99
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x8d
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 A6 78 08 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x78
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7D 0A: jge 0x4a3da1
        __asm _emit 0x7d
        __asm _emit 0x0a
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 B3 89 02 00: call 0x4cc752
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x89
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 0A: jmp 0x4a3dab
        __asm _emit 0xeb
        __asm _emit 0x0a
        push -1
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 28 94 02 00: call 0x4cd1d3
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x94
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 D9 0F 08 00: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x0f
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 68: jne 0x4a3e1f
        __asm _emit 0x75
        __asm _emit 0x68
        push 104h
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 D4 92 02 00: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        push 104h
        push 465h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 C2 8C 08 00: call 0x52ca99
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x8c
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 5B 78 08 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x78
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7D 0A: jge 0x4a3dec
        __asm _emit 0x7d
        __asm _emit 0x0a
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 68 89 02 00: call 0x4cc752
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x89
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 33: jmp 0x4a3e1f
        __asm _emit 0xeb
        __asm _emit 0x33
        push -1
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 DD 93 02 00: call 0x4cd1d3
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x93
        __asm _emit 0x02
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 18 87 02 00: call 0x4cc51a
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x87
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        or ecx, 1
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 D2 8A 02 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x8a
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 2A: jmp 0x4a3e49
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 BE 8A 02 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x8a
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 78h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3B 8B 02 00: call 0x4cc978
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x8b
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
