// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004945B4 .. +0x1B7 bytes.
extern "C" __declspec(naked) void FUN_004945b4_004945B4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        sub eax, 0bch
        mov dword ptr [ebp - 8], eax
        push 5eeh
        push 5ca8a4h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes E8 82 6B 06 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x6b
        __asm _emit 0x06
        __asm _emit 0x00
        push 5efh
        push 5ca8a4h
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1ch]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes E8 69 6B 06 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x6b
        __asm _emit 0x06
        __asm _emit 0x00
        push 1
        push 4
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 52 B8 03 00: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xb8
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x49461c
        __asm _emit 0x75
        __asm _emit 0x14
        push 5f1h
        push 5ca8a4h
        ; Exact mapped bytes E8 E9 03 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x49461c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x4945f7
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 25: je 0x49464d
        __asm _emit 0x74
        __asm _emit 0x25
        push 1
        push 4
        mov edx, dword ptr [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 21 B8 03 00: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xb8
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x49464d
        __asm _emit 0x75
        __asm _emit 0x14
        push 5f3h
        push 5ca8a4h
        ; Exact mapped bytes E8 B8 03 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x03
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x49464d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CF: jne 0x494622
        __asm _emit 0x75
        __asm _emit 0xcf
        push 1
        push 10h
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        ; Exact mapped bytes E8 F6 B7 03 00: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xb7
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x494678
        __asm _emit 0x75
        __asm _emit 0x14
        push 5f4h
        push 5ca8a4h
        ; Exact mapped bytes E8 8D 03 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x03
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x494678
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x494653
        __asm _emit 0x75
        __asm _emit 0xd5
        push 1
        push 10h
        mov eax, dword ptr [ebp + 18h]
        push eax
        ; Exact mapped bytes E8 CB B7 03 00: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xb7
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4946a3
        __asm _emit 0x75
        __asm _emit 0x14
        push 5f5h
        push 5ca8a4h
        ; Exact mapped bytes E8 62 03 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x03
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4946a3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x49467e
        __asm _emit 0x75
        __asm _emit 0xd5
        push 1
        mov edx, dword ptr [ebp + 1ch]
        mov eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        ; Exact mapped bytes E8 9C B7 03 00: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xb7
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4946d2
        __asm _emit 0x75
        __asm _emit 0x14
        push 5f6h
        push 5ca8a4h
        ; Exact mapped bytes E8 33 03 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x03
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4946d2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D1: jne 0x4946a9
        __asm _emit 0x75
        __asm _emit 0xd1
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 09: je 0x4946e7
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], 0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 58d610h
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 1ch]
        ; Exact mapped bytes E8 EB 7B 0B 00: call 0x54c2e6
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x7b
        __asm _emit 0x0b
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7D 07: jge 0x494706
        __asm _emit 0x7d
        __asm _emit 0x07
        mov eax, 80004005h
        ; Exact mapped bytes EB 5C: jmp 0x494762
        __asm _emit 0xeb
        __asm _emit 0x5c
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1ch]
        mov edx, dword ptr [ecx + 1ch]
        mov dword ptr [ebp - 4], edx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 2ch
        ; Exact mapped bytes E8 4D 18 0A 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x18
        __asm _emit 0x0a
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp + 14h]
        push eax
        ; Exact mapped bytes FF 15 A8 28 5E 00: call dword ptr [0x5e28a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C7 79 0A 00: call 0x53c0fb
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x79
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 1ch]
        mov dword ptr [edx + 4], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 06 74 0A 00: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x74
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 1ch]
        mov dword ptr [ecx + 8], eax
        mov edx, dword ptr [ebp + 1ch]
        mov dword ptr [edx + 0ch], 0
        mov eax, dword ptr [ebp + 1ch]
        mov dword ptr [eax + 10h], 0
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
