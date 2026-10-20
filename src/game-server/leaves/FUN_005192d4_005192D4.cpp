// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005192D4 .. +0xEE bytes.
extern "C" __declspec(naked) void FUN_005192d4_005192D4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 69 CA 01 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xca
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 5B CD 01 00: call 0x53604b
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xcd
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 64h]
        and ecx, 0a000h
        neg ecx
        sbb ecx, ecx
        neg ecx
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 40 DE FF FF: call 0x517155
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 3D 38 8C 5C 00 FF: cmp dword ptr [0x5c8c38], -1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x38
        __asm _emit 0x8c
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0xff
        ; Exact mapped bytes 75 14: jne 0x519332
        __asm _emit 0x75
        __asm _emit 0x14
        push 4b9h
        push 5c8c2ch
        ; Exact mapped bytes E8 D3 B6 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xb6
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x519332
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x519315
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes 81 3D 38 8C 5C 00 47 00 04 00: cmp dword ptr [0x5c8c38], 0x40047
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x38
        __asm _emit 0x8c
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 7D 1A: jge 0x51935e
        __asm _emit 0x7d
        __asm _emit 0x1a
        cmp dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 7D 14: jge 0x51935e
        __asm _emit 0x7d
        __asm _emit 0x14
        push 4bah
        push 5c8c2ch
        ; Exact mapped bytes E8 A7 B6 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xb6
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51935e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D4: jne 0x519338
        __asm _emit 0x75
        __asm _emit 0xd4
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        add ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 4]
        add ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 4], ecx
        ; Exact mapped bytes 81 3D 38 8C 5C 00 47 00 04 00: cmp dword ptr [0x5c8c38], 0x40047
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x38
        __asm _emit 0x8c
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 7D 0F: jge 0x51939b
        __asm _emit 0x7d
        __asm _emit 0x0f
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 4]
        sub ecx, 2
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        add ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 0ch]
        add ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 0ch], ecx
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
