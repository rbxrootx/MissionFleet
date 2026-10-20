// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00450BD9 .. +0x1B7 bytes.
extern "C" __declspec(naked) void FUN_00450bd9_00450BD9() {
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
        push 67702ch
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes E8 5D 96 08 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x08
        __asm _emit 0x00
        push 5efh
        push 67702ch
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1ch]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes E8 44 96 08 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x96
        __asm _emit 0x08
        __asm _emit 0x00
        push 1
        push 4
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 3D 28 05 00: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x450c41
        __asm _emit 0x75
        __asm _emit 0x14
        push 5f1h
        push 67702ch
        ; Exact mapped bytes E8 04 81 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x81
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x450c41
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x450c1c
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 25: je 0x450c72
        __asm _emit 0x74
        __asm _emit 0x25
        push 1
        push 4
        mov edx, dword ptr [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 0C 28 05 00: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x450c72
        __asm _emit 0x75
        __asm _emit 0x14
        push 5f3h
        push 67702ch
        ; Exact mapped bytes E8 D3 80 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x80
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x450c72
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CF: jne 0x450c47
        __asm _emit 0x75
        __asm _emit 0xcf
        push 1
        push 10h
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        ; Exact mapped bytes E8 E1 27 05 00: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x27
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x450c9d
        __asm _emit 0x75
        __asm _emit 0x14
        push 5f4h
        push 67702ch
        ; Exact mapped bytes E8 A8 80 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x80
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x450c9d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x450c78
        __asm _emit 0x75
        __asm _emit 0xd5
        push 1
        push 10h
        mov eax, dword ptr [ebp + 18h]
        push eax
        ; Exact mapped bytes E8 B6 27 05 00: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x27
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x450cc8
        __asm _emit 0x75
        __asm _emit 0x14
        push 5f5h
        push 67702ch
        ; Exact mapped bytes E8 7D 80 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x80
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x450cc8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x450ca3
        __asm _emit 0x75
        __asm _emit 0xd5
        push 1
        mov edx, dword ptr [ebp + 1ch]
        mov eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        ; Exact mapped bytes E8 87 27 05 00: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x27
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x450cf7
        __asm _emit 0x75
        __asm _emit 0x14
        push 5f6h
        push 67702ch
        ; Exact mapped bytes E8 4E 80 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x80
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x450cf7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D1: jne 0x450cce
        __asm _emit 0x75
        __asm _emit 0xd1
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 09: je 0x450d0c
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], 0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 63fc70h
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 1ch]
        ; Exact mapped bytes E8 36 A0 0F 00: call 0x54ad56
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xa0
        __asm _emit 0x0f
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7D 07: jge 0x450d2b
        __asm _emit 0x7d
        __asm _emit 0x07
        mov eax, 80004005h
        ; Exact mapped bytes EB 5C: jmp 0x450d87
        __asm _emit 0xeb
        __asm _emit 0x5c
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1ch]
        mov edx, dword ptr [ecx + 1ch]
        mov dword ptr [ebp - 4], edx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 2ch
        ; Exact mapped bytes E8 80 16 0E 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x16
        __asm _emit 0x0e
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp + 14h]
        push eax
        ; Exact mapped bytes FF 15 AC BE 68 00: call dword ptr [0x68beac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 02 AE 0D 00: call 0x52bb5b
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xae
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 1ch]
        mov dword ptr [edx + 4], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 41 A8 0D 00: call 0x52b5ac
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xa8
        __asm _emit 0x0d
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
