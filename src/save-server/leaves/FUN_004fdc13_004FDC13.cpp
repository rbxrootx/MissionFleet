// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FDC13 .. +0x155 bytes.
extern "C" __declspec(naked) void FUN_004fdc13_004FDC13() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x4fdc39
        __asm _emit 0x75
        __asm _emit 0x14
        push 7dch
        push 674fe8h
        ; Exact mapped bytes E8 0C B1 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xb1
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fdc39
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4fdc1f
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 08 BF 68 00: call dword ptr [0x68bf08]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        and eax, 0ffffh
        sub eax, 0ea10h
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7C 0B: jl 0x4fdc6a
        __asm _emit 0x7c
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [eax + 40h]
        ; Exact mapped bytes 7C 14: jl 0x4fdc7e
        __asm _emit 0x7c
        __asm _emit 0x14
        push 7deh
        push 674fe8h
        ; Exact mapped bytes E8 C7 B0 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fdc7e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4fdc59
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 6ch], 0
        ; Exact mapped bytes 7F 14: jg 0x4fdca1
        __asm _emit 0x7f
        __asm _emit 0x14
        push 7e0h
        push 674fe8h
        ; Exact mapped bytes E8 A4 B0 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fdca1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4fdc84
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 2F 30 03 00: call 0x530cde
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x30
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4fdcc4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes 0F 8D 8C 00 00 00: jge 0x4fdd5f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        and ecx, 0ffffh
        mov edx, dword ptr [ebp + 0ch]
        and edx, 0ffffh
        shl edx, 10h
        or ecx, edx
        push ecx
        push 115h
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 45 BC FF FF: call 0x4f994c
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2B D9 02 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xd9
        __asm _emit 0x02
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 2A: jne 0x4fdd3e
        __asm _emit 0x75
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 C2 2F 03 00: call 0x530cde
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x2f
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 B7 2F 03 00: call 0x530cde
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x2f
        __asm _emit 0x03
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 12: je 0x4fdd3e
        __asm _emit 0x74
        __asm _emit 0x12
        push 675384h
        push 6753c0h
        ; Exact mapped bytes E8 DA 28 FA FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x28
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 6ch]
        sub eax, 1
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 7D 0E: jge 0x4fdd5a
        __asm _emit 0x7d
        __asm _emit 0x0e
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 CF 2F 03 00: call 0x530d29
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x2f
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 5C FF FF FF: jmp 0x4fdcbb
        __asm _emit 0xe9
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
