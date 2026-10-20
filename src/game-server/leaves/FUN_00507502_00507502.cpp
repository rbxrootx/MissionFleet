// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00507502 .. +0xF9 bytes.
extern "C" __declspec(naked) void FUN_00507502_00507502() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 09: je 0x50751b
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp + 8], 8000h
        ; Exact mapped bytes 72 11: jb 0x50752c
        __asm _emit 0x72
        __asm _emit 0x11
        push 76h
        push 5ca348h
        ; Exact mapped bytes E8 D9 D4 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xd4
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50752c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x50750c
        __asm _emit 0x75
        __asm _emit 0xda
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 26: je 0x50755e
        __asm _emit 0x74
        __asm _emit 0x26
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 09: je 0x507547
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp + 0ch], 8000h
        ; Exact mapped bytes 72 11: jb 0x507558
        __asm _emit 0x72
        __asm _emit 0x11
        push 78h
        push 5ca348h
        ; Exact mapped bytes E8 AD D4 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xd4
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x507558
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x507538
        __asm _emit 0x75
        __asm _emit 0xda
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 22: je 0x507586
        __asm _emit 0x74
        __asm _emit 0x22
        push 585e80h
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 B9 3E FF FF: call 0x4fb42a
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x3e
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x507586
        __asm _emit 0x75
        __asm _emit 0x11
        push 7ah
        push 5ca348h
        ; Exact mapped bytes E8 7F D4 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xd4
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x507586
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D2: jne 0x50755e
        __asm _emit 0x75
        __asm _emit 0xd2
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 22: je 0x5075b4
        __asm _emit 0x74
        __asm _emit 0x22
        push 585e68h
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 8B 3E FF FF: call 0x4fb42a
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x3e
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x5075b4
        __asm _emit 0x75
        __asm _emit 0x11
        push 7ch
        push 5ca348h
        ; Exact mapped bytes E8 51 D4 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xd4
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5075b4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D2: jne 0x50758c
        __asm _emit 0x75
        __asm _emit 0xd2
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 58h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [eax + 5ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 44h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 40h], edx
        ; Exact mapped bytes 83 3D C0 5D 5C 00 00: cmp dword ptr [0x5c5dc0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xc0
        __asm _emit 0x5d
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0B: jne 0x5075f2
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 58: call dword ptr [edx + 0x58]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x58
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
