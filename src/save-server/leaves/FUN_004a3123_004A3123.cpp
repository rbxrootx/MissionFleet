// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A3123 .. +0xFA bytes.
extern "C" __declspec(naked) void FUN_004a3123_004A3123() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58ccf9h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C6 A7 09 00: call 0x53d910
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xa7
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 636e78h
        push 636e38h
        push 1
        push 636e4ch
        push 636e40h
        ; Exact mapped bytes FF 15 B0 B9 68 00: call dword ptr [0x68b9b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 D4 6C 68 00: mov dword ptr [0x686cd4], eax
        __asm _emit 0xa3
        __asm _emit 0xd4
        __asm _emit 0x6c
        __asm _emit 0x68
        __asm _emit 0x00
        push 636e38h
        push 0
        push 636e5ch
        push 636e40h
        ; Exact mapped bytes FF 15 B0 B9 68 00: call dword ptr [0x68b9b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 D0 6C 68 00: mov dword ptr [0x686cd0], eax
        __asm _emit 0xa3
        __asm _emit 0xd0
        __asm _emit 0x6c
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D E0 6C 68 00 00: cmp dword ptr [0x686ce0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xe0
        __asm _emit 0x6c
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 11: je 0x4a31ac
        __asm _emit 0x74
        __asm _emit 0x11
        push 77h
        push 673c10h
        ; Exact mapped bytes E8 99 5B 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x5b
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a31ac
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4a3192
        __asm _emit 0x75
        __asm _emit 0xe0
        push 4a2f54h
        ; Exact mapped bytes E8 A4 50 FC FF: call 0x468260
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x50
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes A3 E0 6C 68 00: mov dword ptr [0x686ce0], eax
        __asm _emit 0xa3
        __asm _emit 0xe0
        __asm _emit 0x6c
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D E4 6C 68 00 00: cmp dword ptr [0x686ce4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0x6c
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 11: je 0x4a31de
        __asm _emit 0x74
        __asm _emit 0x11
        push 7ah
        push 673c20h
        ; Exact mapped bytes E8 67 5B 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x5b
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a31de
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4a31c4
        __asm _emit 0x75
        __asm _emit 0xe0
        push 4a30c6h
        ; Exact mapped bytes E8 52 9C FC FF: call 0x46ce40
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x9c
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes A3 E4 6C 68 00: mov dword ptr [0x686ce4], eax
        __asm _emit 0xa3
        __asm _emit 0xe4
        __asm _emit 0x6c
        __asm _emit 0x68
        __asm _emit 0x00
        push 4
        push 2
        ; Exact mapped bytes E8 61 9B FC FF: call 0x46cd60
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x9b
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
