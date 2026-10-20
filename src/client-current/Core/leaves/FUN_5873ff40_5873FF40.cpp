// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5873FF40 .. +0x10D bytes.
extern "C" __declspec(naked) void FUN_5873ff40_5873FF40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5873ff5b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 3
        ; Exact mapped bytes 7D 2D: jge 0x5873ff8e
        __asm _emit 0x7d
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx*4 + 70h]
        ; Exact mapped bytes E8 50 4A D4 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x4a
        __asm _emit 0xd4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x5873ff8c
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 70h]
        mov dword ptr [ebp - 10h], edx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B5 F8 D5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xf8
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C4: jmp 0x5873ff52
        __asm _emit 0xeb
        __asm _emit 0xc4
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 11: je 0x5873ffab
        __asm _emit 0x74
        __asm _emit 0x11
        cmp dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes 74 37: je 0x5873ffd7
        __asm _emit 0x74
        __asm _emit 0x37
        cmp dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 74 5D: je 0x58740003
        __asm _emit 0x74
        __asm _emit 0x5d
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x5874002c
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov byte ptr [edx + 86h], 3
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 70h]
        mov dword ptr [ebp - 14h], eax
        push 5
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 6C F8 D5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xf8
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 55: jmp 0x5874002c
        __asm _emit 0xeb
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov byte ptr [edx + 86h], 5
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 70h]
        mov dword ptr [ebp - 18h], edx
        push 5
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 40 F8 D5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xf8
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 29: jmp 0x5874002c
        __asm _emit 0xeb
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov byte ptr [ecx + 86h], 7
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 70h]
        mov dword ptr [ebp - 1ch], ecx
        push 5
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 15 F8 D5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C9 94 D7 FF: call 0x584b9500
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x94
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        push 0
        push 7
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 AA DB FF FF: call 0x5873dbf0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
