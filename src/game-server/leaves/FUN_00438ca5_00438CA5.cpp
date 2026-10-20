// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00438CA5 .. +0x1EC bytes.
extern "C" __declspec(naked) void FUN_00438ca5_00438CA5() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        push edi
        mov dword ptr [ebp - 4], 0cccccccch
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0c000008dh
        ; Exact mapped bytes 0F 87 96 00 00 00: ja 0x438d5b
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0c000008dh
        ; Exact mapped bytes 0F 84 E3 00 00 00: je 0x438db5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0c0000006h
        ; Exact mapped bytes 77 55: ja 0x438d30
        __asm _emit 0x77
        __asm _emit 0x55
        cmp dword ptr [ebp - 4], 0c0000006h
        ; Exact mapped bytes 0F 84 28 01 00 00: je 0x438e10
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 80000003h
        ; Exact mapped bytes 77 28: ja 0x438d19
        __asm _emit 0x77
        __asm _emit 0x28
        cmp dword ptr [ebp - 4], 80000003h
        ; Exact mapped bytes 0F 84 99 00 00 00: je 0x438d97
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 80000001h
        ; Exact mapped bytes 0F 84 28 01 00 00: je 0x438e33
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 80000002h
        ; Exact mapped bytes 74 79: je 0x438d8d
        __asm _emit 0x74
        __asm _emit 0x79
        ; Exact mapped bytes E9 28 01 00 00: jmp 0x438e41
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 80000004h
        ; Exact mapped bytes 74 7F: je 0x438da1
        __asm _emit 0x74
        __asm _emit 0x7f
        cmp dword ptr [ebp - 4], 0c0000005h
        ; Exact mapped bytes 74 58: je 0x438d83
        __asm _emit 0x74
        __asm _emit 0x58
        ; Exact mapped bytes E9 11 01 00 00: jmp 0x438e41
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ffffff8h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 84h
        ; Exact mapped bytes 0F 87 F8 00 00 00: ja 0x438e41
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        xor edx, edx
        mov dl, byte ptr [eax + 438ea9h]
        ; Exact mapped bytes FF 24 95 91 8E 43 00: jmp dword ptr [edx*4 + 0x438e91]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x91
        __asm _emit 0x8e
        __asm _emit 0x43
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3fffff72h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 6fh
        ; Exact mapped bytes 0F 87 D0 00 00 00: ja 0x438e41
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        xor edx, edx
        mov dl, byte ptr [eax + 438f5ah]
        ; Exact mapped bytes FF 24 95 2E 8F 43 00: jmp dword ptr [edx*4 + 0x438f2e]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x2e
        __asm _emit 0x8f
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, 5b5d38h
        ; Exact mapped bytes E9 F4 00 00 00: jmp 0x438e81
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 5b5d4ch
        ; Exact mapped bytes E9 EA 00 00 00: jmp 0x438e81
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 5b5d64h
        ; Exact mapped bytes E9 E0 00 00 00: jmp 0x438e81
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 5b5d70h
        ; Exact mapped bytes E9 D6 00 00 00: jmp 0x438e81
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 5b5d7ch
        ; Exact mapped bytes E9 CC 00 00 00: jmp 0x438e81
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 5b5d94h
        ; Exact mapped bytes E9 C2 00 00 00: jmp 0x438e81
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 5b5dach
        ; Exact mapped bytes E9 B8 00 00 00: jmp 0x438e81
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 5b5dc0h
        ; Exact mapped bytes E9 AE 00 00 00: jmp 0x438e81
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 5b5dd4h
        ; Exact mapped bytes E9 A4 00 00 00: jmp 0x438e81
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 5b5dech
        ; Exact mapped bytes E9 9A 00 00 00: jmp 0x438e81
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 5b5dfch
        ; Exact mapped bytes E9 90 00 00 00: jmp 0x438e81
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 5b5e0ch
        ; Exact mapped bytes E9 86 00 00 00: jmp 0x438e81
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 5b5e1ch
        ; Exact mapped bytes EB 7F: jmp 0x438e81
        __asm _emit 0xeb
        __asm _emit 0x7f
        mov eax, 5b5e30h
        ; Exact mapped bytes EB 78: jmp 0x438e81
        __asm _emit 0xeb
        __asm _emit 0x78
        mov eax, 5b5e40h
        ; Exact mapped bytes EB 71: jmp 0x438e81
        __asm _emit 0xeb
        __asm _emit 0x71
        mov eax, 5b5e54h
        ; Exact mapped bytes EB 6A: jmp 0x438e81
        __asm _emit 0xeb
        __asm _emit 0x6a
        mov eax, 5b5e64h
        ; Exact mapped bytes EB 63: jmp 0x438e81
        __asm _emit 0xeb
        __asm _emit 0x63
        mov eax, 5b5e78h
        ; Exact mapped bytes EB 5C: jmp 0x438e81
        __asm _emit 0xeb
        __asm _emit 0x5c
        mov eax, 5b5e94h
        ; Exact mapped bytes EB 55: jmp 0x438e81
        __asm _emit 0xeb
        __asm _emit 0x55
        mov eax, 5b5ea4h
        ; Exact mapped bytes EB 4E: jmp 0x438e81
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov eax, 5b5eb8h
        ; Exact mapped bytes EB 47: jmp 0x438e81
        __asm _emit 0xeb
        __asm _emit 0x47
        mov eax, 5b5ec4h
        ; Exact mapped bytes EB 40: jmp 0x438e81
        __asm _emit 0xeb
        __asm _emit 0x40
        mov esi, esp
        push 0
        push 200h
        push 5d3068h
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edi, esp
        push 5b5ed4h
        ; Exact mapped bytes FF 15 3C 24 5E 00: call dword ptr [0x5e243c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp edi, esp
        ; Exact mapped bytes E8 77 F9 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xf9
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        push 0a00h
        ; Exact mapped bytes FF 15 40 24 5E 00: call dword ptr [0x5e2440]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 64 F9 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xf9
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, 5d3068h
        pop edi
        pop esi
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 53 F9 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xf9
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
