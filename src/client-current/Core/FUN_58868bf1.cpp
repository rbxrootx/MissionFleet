// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58868BF1 .. +0x87 bytes.
extern "C" __declspec(naked) void FUN_58868bf1() {
    __asm {
        push 0
        mov eax, 58892d94h
        ; Exact mapped bytes E8 3B 99 FC FF: call 0x58832538
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x99
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 80 3D 7C 99 96 58 00: cmp byte ptr [0x5896997c], 0
        __asm _emit 0x80
        __asm _emit 0x3d
        __asm _emit 0x7c
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 2D: je 0x58868c33
        __asm _emit 0x74
        __asm _emit 0x2d
        and dword ptr [ebp - 4], 0
        ; Exact mapped bytes A1 58 74 90 58: mov eax, dword ptr [0x58907458]
        __asm _emit 0xa1
        __asm _emit 0x58
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0x58
        cmp eax, -1
        ; Exact mapped bytes 74 16: je 0x58868c2a
        __asm _emit 0x74
        __asm _emit 0x16
        push eax
        ; Exact mapped bytes E8 79 6B 00 00: call 0x5886f793
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x6b
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 74 0A: je 0x58868c2a
        __asm _emit 0x74
        __asm _emit 0x0a
        xor eax, eax
        cmp edi, -1
        cmove edi, eax
        ; Exact mapped bytes EB 46: jmp 0x58868c70
        __asm _emit 0xeb
        __asm _emit 0x46
        ; Exact mapped bytes E8 3A FE FF FF: call 0x58868a69
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 3D: jmp 0x58868c70
        __asm _emit 0xeb
        __asm _emit 0x3d
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        mov esi, eax
        ; Exact mapped bytes A1 58 74 90 58: mov eax, dword ptr [0x58907458]
        __asm _emit 0xa1
        __asm _emit 0x58
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0x58
        mov dword ptr [ebp - 4], 1
        cmp eax, -1
        ; Exact mapped bytes 74 16: je 0x58868c62
        __asm _emit 0x74
        __asm _emit 0x16
        push eax
        ; Exact mapped bytes E8 4E 6B 00 00: call 0x5886f7a0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x6b
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 74 0A: je 0x58868c62
        __asm _emit 0x74
        __asm _emit 0x0a
        xor eax, eax
        cmp edi, -1
        cmove edi, eax
        ; Exact mapped bytes EB 07: jmp 0x58868c69
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes E8 02 FE FF FF: call 0x58868a69
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        push esi
        ; Exact mapped bytes FF 15 0C 44 89 58: call dword ptr [0x5889440c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, edi
        ; Exact mapped bytes E8 9E 98 FC FF: call 0x58832515
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x98
        __asm _emit 0xfc
        __asm _emit 0xff
        ret
    }
}
