// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00562B89 .. +0xC0 bytes.
extern "C" __declspec(naked) void FUN_00562b89_00562B89() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 3b5h
        push 67c6f0h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 BA 76 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x76
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x562bc3
        __asm _emit 0x75
        __asm _emit 0x14
        push 3b6h
        push 67c6f0h
        ; Exact mapped bytes E8 82 61 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x61
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x562bc3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x562ba6
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 09 3D FF FF: call 0x5568da
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x3d
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 4
        ; Exact mapped bytes 74 04: je 0x562bda
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 68: jmp 0x562c42
        __asm _emit 0xeb
        __asm _emit 0x68
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 64h], 0
        ; Exact mapped bytes 74 1F: je 0x562c02
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 64h]
        push edx
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x562c02
        __asm _emit 0x75
        __asm _emit 0x0e
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A5 ED FE FF: call 0x5519a3
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xed
        __asm _emit 0xfe
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 40: jmp 0x562c42
        __asm _emit 0xeb
        __asm _emit 0x40
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 64h], 0
        ; Exact mapped bytes 74 25: je 0x562c30
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 64h]
        push edx
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x562c30
        __asm _emit 0x75
        __asm _emit 0x14
        push 3c3h
        push 67c6f0h
        ; Exact mapped bytes E8 15 61 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x61
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x562c30
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CC: jne 0x562c02
        __asm _emit 0x75
        __asm _emit 0xcc
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 64h]
        push edx
        ; Exact mapped bytes E8 6D CC F6 FF: call 0x4cf8af
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xcc
        __asm _emit 0xf6
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
