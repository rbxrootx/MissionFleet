// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00553460 .. +0x14F bytes.
extern "C" __declspec(naked) void FUN_00553460_00553460() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 33eh
        push 67c1e0h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 E1 6D F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x6d
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 34h], 0
        ; Exact mapped bytes 74 14: je 0x55349c
        __asm _emit 0x74
        __asm _emit 0x14
        push 33fh
        push 67c1e0h
        ; Exact mapped bytes E8 A9 58 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x58
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55349c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x55347f
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 38h], 0
        ; Exact mapped bytes 74 14: je 0x5534bf
        __asm _emit 0x74
        __asm _emit 0x14
        push 340h
        push 67c1e0h
        ; Exact mapped bytes E8 86 58 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5534bf
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x5534a2
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 8]
        add edx, 38h
        push edx
        push 1
        push 0
        ; Exact mapped bytes FF 15 2C C3 68 00: call dword ptr [0x68c32c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 09: je 0x5534e8
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 12 8A FF FF: call 0x54befa
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x8a
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 38h], 0
        ; Exact mapped bytes 75 14: jne 0x553505
        __asm _emit 0x75
        __asm _emit 0x14
        push 345h
        push 67c1e0h
        ; Exact mapped bytes E8 40 58 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x58
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x553505
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x5534e8
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 8]
        add eax, 34h
        push eax
        push 0
        push 1012h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 38h]
        push edx
        ; Exact mapped bytes FF 15 B4 C2 68 00: call dword ptr [0x68c2b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 43: je 0x553572
        __asm _emit 0x74
        __asm _emit 0x43
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 38h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 38h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x553559
        __asm _emit 0x74
        __asm _emit 0x14
        push 34bh
        push 67c1e0h
        ; Exact mapped bytes E8 EC 57 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x57
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x553559
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D0: jne 0x55352f
        __asm _emit 0x75
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 38h], 0
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 88 89 FF FF: call 0x54befa
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x89
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 34h], 0
        ; Exact mapped bytes 75 14: jne 0x55358f
        __asm _emit 0x75
        __asm _emit 0x14
        push 34fh
        push 67c1e0h
        ; Exact mapped bytes E8 B6 57 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x57
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55358f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x553572
        __asm _emit 0x75
        __asm _emit 0xdd
        push 351h
        push 67c1e0h
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 B8 6C F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x6c
        __asm _emit 0xf8
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
