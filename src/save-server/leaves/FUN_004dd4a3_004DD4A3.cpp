// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DD4A3 .. +0x158 bytes.
extern "C" __declspec(naked) void FUN_004dd4a3_004DD4A3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4dd4cc
        __asm _emit 0x75
        __asm _emit 0x14
        push 128h
        push 676a8ch
        ; Exact mapped bytes E8 79 B8 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4dd4cc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4dd4af
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 0ch
        ; Exact mapped bytes E8 AF 78 04 00: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4dd4f5
        __asm _emit 0x74
        __asm _emit 0x14
        push 129h
        push 676a8ch
        ; Exact mapped bytes E8 50 B8 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4dd4f5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D7: jne 0x4dd4d2
        __asm _emit 0x75
        __asm _emit 0xd7
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 10h
        ; Exact mapped bytes E8 86 78 04 00: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4dd51e
        __asm _emit 0x74
        __asm _emit 0x14
        push 12ah
        push 676a8ch
        ; Exact mapped bytes E8 27 B8 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4dd51e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x4dd4fb
        __asm _emit 0x75
        __asm _emit 0xd7
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 10h
        ; Exact mapped bytes E8 31 78 04 00: call 0x524d60
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 5
        push eax
        ; Exact mapped bytes E8 28 EF FE FF: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xef
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes E8 27 45 05 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x45
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 0ch
        ; Exact mapped bytes E8 4F 78 04 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 61 B2 01 00: call 0x4f87c5
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xb2
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x4dd576
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 7D 61: jge 0x4dd5e2
        __asm _emit 0x7d
        __asm _emit 0x61
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        push edx
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 10h
        ; Exact mapped bytes E8 17 78 04 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [edx + eax*4]
        ; Exact mapped bytes E8 DA 77 04 00: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x77
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 2A: jne 0x4dd5e0
        __asm _emit 0x75
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [edx + eax*4]
        ; Exact mapped bytes E8 E3 77 04 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x77
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 0ch
        ; Exact mapped bytes E8 D3 77 04 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x77
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E5 B1 01 00: call 0x4f87c5
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 8B: jmp 0x4dd56d
        __asm _emit 0xeb
        __asm _emit 0x8b
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 B8 EE FE FF: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xee
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
