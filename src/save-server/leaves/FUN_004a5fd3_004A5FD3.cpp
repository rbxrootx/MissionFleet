// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A5FD3 .. +0x10B bytes.
extern "C" __declspec(naked) void FUN_004a5fd3_004A5FD3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 102h
        push 67d5f0h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 6E 42 03 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x42
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 5ch]
        mov eax, dword ptr [edx + 14h]
        and eax, 1000h
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4a6018
        __asm _emit 0x75
        __asm _emit 0x14
        push 103h
        push 67d5f0h
        ; Exact mapped bytes E8 2D 2D 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x2d
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a6018
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D4: jne 0x4a5ff2
        __asm _emit 0x75
        __asm _emit 0xd4
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 5ch]
        mov ecx, dword ptr [eax + 14h]
        and ecx, 2000h
        test ecx, ecx
        ; Exact mapped bytes 75 14: jne 0x4a6045
        __asm _emit 0x75
        __asm _emit 0x14
        push 104h
        push 67d5f0h
        ; Exact mapped bytes E8 00 2D 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x2d
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a6045
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D3: jne 0x4a601e
        __asm _emit 0x75
        __asm _emit 0xd3
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 5ch]
        cmp dword ptr [ecx + 2ah], 0
        ; Exact mapped bytes 75 14: jne 0x4a606b
        __asm _emit 0x75
        __asm _emit 0x14
        push 105h
        push 67d5f0h
        ; Exact mapped bytes E8 DA 2C 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x2c
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a606b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x4a604b
        __asm _emit 0x75
        __asm _emit 0xda
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 5ch]
        cmp dword ptr [ecx + 2eh], 0
        ; Exact mapped bytes 75 14: jne 0x4a6091
        __asm _emit 0x75
        __asm _emit 0x14
        push 106h
        push 67d5f0h
        ; Exact mapped bytes E8 B4 2C 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x2c
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a6091
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x4a6071
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E8 84 02 00: call 0x4ce587
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 5ch]
        mov dword ptr [edx + 4], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 5ch]
        push ecx
        ; Exact mapped bytes E8 1C DF FD FF: call 0x483fd0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xdf
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 3D 85 02 00: call 0x4ce5fc
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 08: je 0x4a60cd
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 07: jmp 0x4a60d4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 2
        mov eax, dword ptr [ebp - 0ch]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
