// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FA7C7 .. +0x10C bytes.
extern "C" __declspec(naked) void FUN_004fa7c7_004FA7C7() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 32ch
        push 5c60d0h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 7C 09 00 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34h
        push ecx
        ; Exact mapped bytes FF 15 6C 25 5E 00: call dword ptr [0x5e256c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 35: jne 0x4fa830
        __asm _emit 0x75
        __asm _emit 0x35
        ; Exact mapped bytes 8B 15 78 E8 5D 00: mov edx, dword ptr [0x5de878]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        and edx, 2
        test edx, edx
        ; Exact mapped bytes 74 12: je 0x4fa81a
        __asm _emit 0x74
        __asm _emit 0x12
        push 5c6190h
        push 5c61c0h
        ; Exact mapped bytes E8 FE 53 FD FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x53
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 30h]
        add ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 30h], ecx
        xor eax, eax
        ; Exact mapped bytes E9 9C 00 00 00: jmp 0x4fa8cc
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 30h], 0
        ; Exact mapped bytes 74 35: je 0x4fa86e
        __asm _emit 0x74
        __asm _emit 0x35
        push 5c61c4h
        push 5c6200h
        ; Exact mapped bytes E8 CD 53 FD FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x53
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        mov ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x4fa868
        __asm _emit 0x74
        __asm _emit 0x14
        push 33eh
        push 5c60d0h
        ; Exact mapped bytes E8 9D A1 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xa1
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fa868
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4fa84b
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes A1 78 E8 5D 00: mov eax, dword ptr [0x5de878]
        __asm _emit 0xa1
        __asm _emit 0x78
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        and eax, 2
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x4fa88b
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34h
        push ecx
        push 5c6204h
        ; Exact mapped bytes E8 85 A7 03 00: call 0x535010
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xa7
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 38h], 36ah
        ; Exact mapped bytes 74 30: je 0x4fa8c7
        __asm _emit 0x74
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 4]
        add eax, 34h
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 60: call dword ptr [edx + 0x60]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x60
        test eax, eax
        ; Exact mapped bytes 75 1A: jne 0x4fa8c7
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 4]
        add eax, 34h
        push eax
        ; Exact mapped bytes FF 15 70 25 5E 00: call dword ptr [0x5e2570]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34h
        push ecx
        ; Exact mapped bytes FF 15 88 25 5E 00: call dword ptr [0x5e2588]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
