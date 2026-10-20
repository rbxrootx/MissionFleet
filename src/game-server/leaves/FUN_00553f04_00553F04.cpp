// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00553F04 .. +0x168 bytes.
extern "C" __declspec(naked) void FUN_00553f04_00553F04() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 28h], ecx
        push 247h
        push 5cfa08h
        mov eax, dword ptr [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 3D 72 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x72
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 28h]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 74 14: je 0x553f40
        __asm _emit 0x74
        __asm _emit 0x14
        push 248h
        push 5cfa08h
        ; Exact mapped bytes E8 C5 0A FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x0a
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x553f40
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x553f23
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 28h]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x553f63
        __asm _emit 0x75
        __asm _emit 0x14
        push 249h
        push 5cfa08h
        ; Exact mapped bytes E8 A2 0A FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x0a
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x553f63
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x553f46
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 25: je 0x553f94
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        push 14h
        mov edx, dword ptr [ebp + 14h]
        push edx
        ; Exact mapped bytes E8 DA BE F7 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xbe
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x553f94
        __asm _emit 0x75
        __asm _emit 0x14
        push 24bh
        push 5cfa08h
        ; Exact mapped bytes E8 71 0A FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x0a
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x553f94
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CF: jne 0x553f69
        __asm _emit 0x75
        __asm _emit 0xcf
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 A0 F0 FF FF: call 0x553042
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 28h], eax
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 90 D8 00 00 00: call dword ptr [eax + 0xd8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        cmp dword ptr [ecx + 34h], 0
        ; Exact mapped bytes 75 14: jne 0x553fd3
        __asm _emit 0x75
        __asm _emit 0x14
        push 250h
        push 5cfa08h
        ; Exact mapped bytes E8 32 0A FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x0a
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x553fd3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x553fb6
        __asm _emit 0x75
        __asm _emit 0xdd
        lea eax, [ebp - 20h]
        push eax
        ; Exact mapped bytes 66 8B 4D 10: mov cx, word ptr [ebp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x10
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        ; Exact mapped bytes E8 93 9B FF FF: call 0x54db7e
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp + 14h], eax
        mov eax, dword ptr [ebp - 28h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 92 C8 00 00 00: call dword ptr [edx + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 92 FB 00 00: call 0x563b9b
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 28h]
        add eax, 20h
        push eax
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 34h]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 58e540h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 A0 29 5E 00: call dword ptr [0x5e29a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 90 CC 00 00 00: call dword ptr [eax + 0xcc]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        push 25dh
        push 5cfa08h
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        ; Exact mapped bytes E8 00 71 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x71
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 24h]
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
