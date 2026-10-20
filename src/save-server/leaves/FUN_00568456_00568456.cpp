// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00568456 .. +0x18E bytes.
extern "C" __declspec(naked) void FUN_00568456_00568456() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 18 05 00 00: call 0x56898a
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1F: je 0x56849a
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 18 C3 68 00: call dword ptr [0x68c318]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 14h
        push ecx
        ; Exact mapped bytes FF 15 B0 C2 68 00: call dword ptr [0x68c2b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E9 28 01 00 00: jmp 0x5685c2
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 1ch], 0
        ; Exact mapped bytes 74 12: je 0x5684b5
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax + 24h]
        cmp edx, dword ptr [ecx + 20h]
        ; Exact mapped bytes 0F 85 A4 00 00 00: jne 0x568559
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 28h], 0
        ; Exact mapped bytes 75 14: jne 0x5684d2
        __asm _emit 0x75
        __asm _emit 0x14
        push 95h
        push 67b070h
        ; Exact mapped bytes E8 73 08 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x08
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5684d2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x5684b5
        __asm _emit 0x75
        __asm _emit 0xdd
        push 96h
        push 67b070h
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 20h]
        mov ecx, dword ptr [ebp - 14h]
        add eax, dword ptr [ecx + 28h]
        imul eax, eax, 24h
        push eax
        ; Exact mapped bytes E8 DC 3B F6 FF: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x3b
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 20h]
        mov edx, dword ptr [ebp - 14h]
        add ecx, dword ptr [edx + 28h]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 20h], ecx
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 74 32: je 0x568550
        __asm _emit 0x74
        __asm _emit 0x32
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 24h]
        imul eax, eax, 24h
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 C8 CD EF FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xcd
        __asm _emit 0xef
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 1ch]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 5C 3F F6 FF: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x3f
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 1ch], edx
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x568576
        __asm _emit 0x75
        __asm _emit 0x14
        push 9fh
        push 67b070h
        ; Exact mapped bytes E8 CF 07 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x07
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x568576
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x568559
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x568599
        __asm _emit 0x75
        __asm _emit 0x14
        push 0a0h
        push 67b070h
        ; Exact mapped bytes E8 AC 07 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x07
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x568599
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x56857c
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 24h]
        imul edx, edx, 24h
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 1ch]
        add ecx, edx
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 24h]
        add eax, 1
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 24h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 20h], eax
        mov esi, dword ptr [ebp + 8]
        mov ecx, 5
        mov edi, dword ptr [ebp - 4]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
