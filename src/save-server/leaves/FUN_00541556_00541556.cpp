// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00541556 .. +0x11A bytes.
extern "C" __declspec(naked) void FUN_00541556_00541556() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        ; Exact mapped bytes 83 3D 74 57 67 00 FF: cmp dword ptr [0x675774], -1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x57
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0xff
        ; Exact mapped bytes 74 0A: je 0x541572
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes A1 74 57 67 00: mov eax, dword ptr [0x675774]
        __asm _emit 0xa1
        __asm _emit 0x74
        __asm _emit 0x57
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes E9 F7 00 00 00: jmp 0x541669
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes FF 15 0C BE 68 00: call dword ptr [0x68be0c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x541597
        __asm _emit 0x75
        __asm _emit 0x14
        push 0bah
        push 675764h
        ; Exact mapped bytes E8 AE 77 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x77
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x541597
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x54157d
        __asm _emit 0x75
        __asm _emit 0xe0
        push 6757a4h
        push 0
        push 0
        push 0
        push 0
        push 2
        push 0
        push 0
        push 0
        push 190h
        push 0
        push 0
        push 0
        push 48h
        ; Exact mapped bytes FF 15 C4 BF 68 00: call dword ptr [0x68bfc4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 A0 B6 68 00: call dword ptr [0x68b6a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 11: je 0x5415e6
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 40 B4 68 00: call dword ptr [0x68b440]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xb4
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 675774h
        push 36h
        push 36h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 FC B4 68 00: call dword ptr [0x68b4fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xb4
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x541611
        __asm _emit 0x75
        __asm _emit 0x14
        push 0bfh
        push 675764h
        ; Exact mapped bytes E8 34 77 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x77
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x541611
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CF: jne 0x5415e6
        __asm _emit 0x75
        __asm _emit 0xcf
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 18: je 0x541635
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 40 B4 68 00: call dword ptr [0x68b440]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xb4
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 30 B6 68 00: call dword ptr [0x68b630]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        push edx
        push 0
        ; Exact mapped bytes FF 15 04 BE 68 00: call dword ptr [0x68be04]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 74 57 67 00 FF: cmp dword ptr [0x675774], -1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x74
        __asm _emit 0x57
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0xff
        ; Exact mapped bytes 75 14: jne 0x54165e
        __asm _emit 0x75
        __asm _emit 0x14
        push 0c6h
        push 675764h
        ; Exact mapped bytes E8 E7 76 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x76
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54165e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x541641
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes A1 74 57 67 00: mov eax, dword ptr [0x675774]
        __asm _emit 0xa1
        __asm _emit 0x74
        __asm _emit 0x57
        __asm _emit 0x67
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
