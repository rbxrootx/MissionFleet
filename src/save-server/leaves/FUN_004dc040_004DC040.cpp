// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DC040 .. +0xE4 bytes.
extern "C" __declspec(naked) void FUN_004dc040_004DC040() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D8 DC F6 FF: call 0x449d30
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xdc
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 66: je 0x4dc0c7
        __asm _emit 0x74
        __asm _emit 0x66
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4]
        add edx, dword ptr [ecx + 40h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 1C: je 0x4dc093
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 74 14: je 0x4dc093
        __asm _emit 0x74
        __asm _emit 0x14
        push 0c5h
        push 67683ch
        ; Exact mapped bytes E8 B2 CC 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xcc
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4dc093
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D4: jne 0x4dc06d
        __asm _emit 0x75
        __asm _emit 0xd4
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 44h], 2
        ; Exact mapped bytes 75 25: jne 0x4dc0c7
        __asm _emit 0x75
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 14: je 0x4dc0c1
        __asm _emit 0x74
        __asm _emit 0x14
        push 0c7h
        push 67683ch
        ; Exact mapped bytes E8 84 CC 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xcc
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4dc0c1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DB: jne 0x4dc0a2
        __asm _emit 0x75
        __asm _emit 0xdb
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 3D DC F6 FF: call 0x449d10
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xdc
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 30: je 0x4dc10c
        __asm _emit 0x74
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 4]
        add ecx, dword ptr [eax + 40h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 14: je 0x4dc106
        __asm _emit 0x74
        __asm _emit 0x14
        push 0cdh
        push 67683ch
        ; Exact mapped bytes E8 3F CC 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xcc
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4dc106
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DC: jne 0x4dc0e8
        __asm _emit 0x75
        __asm _emit 0xdc
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 4
        ; Exact mapped bytes E8 B3 BA FE FF: call 0x4c7bce
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
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
