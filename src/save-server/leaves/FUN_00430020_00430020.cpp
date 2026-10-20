// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00430020 .. +0xEF bytes.
extern "C" __declspec(naked) void FUN_00430020_00430020() {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        push 1
        push ebp
        ; Exact mapped bytes FF 15 28 BA 68 00: call dword ptr [0x68ba28]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 C1 00 00 00: je 0x4300f9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 28 0A 67 00: mov edi, dword ptr [0x670a28]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x28
        __asm _emit 0x0a
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes A1 98 50 68 00: mov eax, dword ptr [0x685098]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [esp + 10h], 11h
        xor esi, esi
        test edi, edi
        ; Exact mapped bytes 76 5E: jbe 0x4300af
        __asm _emit 0x76
        __asm _emit 0x5e
        mov ebx, eax
        shr ebx, 1
        cmp esi, ebx
        ; Exact mapped bytes 72 15: jb 0x43006e
        __asm _emit 0x72
        __asm _emit 0x15
        cmp dword ptr [ebp], 0
        ; Exact mapped bytes 75 0F: jne 0x43006e
        __asm _emit 0x75
        __asm _emit 0x0f
        push 1
        push ebp
        ; Exact mapped bytes FF 15 28 BA 68 00: call dword ptr [0x68ba28]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 7D: je 0x4300e9
        __asm _emit 0x74
        __asm _emit 0x7d
        ; Exact mapped bytes EB 3C: jmp 0x4300aa
        __asm _emit 0xeb
        __asm _emit 0x3c
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esp + 10h]
        imul eax, ecx
        mov dword ptr [esp + 10h], eax
        mov edx, dword ptr [esp + 10h]
        mov eax, dword ptr [esp + 10h]
        imul edx, eax
        mov dword ptr [esp + 10h], edx
        mov ecx, dword ptr [esp + 10h]
        mov edx, dword ptr [esp + 10h]
        imul ecx, edx
        mov dword ptr [esp + 10h], ecx
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esp + 10h]
        imul eax, ecx
        mov dword ptr [esp + 10h], eax
        inc esi
        cmp esi, edi
        ; Exact mapped bytes 72 A6: jb 0x430055
        __asm _emit 0x72
        __asm _emit 0xa6
        ; Exact mapped bytes 8B 1D AC B7 68 00: mov ebx, dword ptr [0x68b7ac]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xac
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 28 0A 67 00 1E 00 00 00: mov dword ptr [0x670a28], 0x1e
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x28
        __asm _emit 0x0a
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, 6
        cmp edi, 1bh
        mov esi, edi
        ; Exact mapped bytes 7E 05: jle 0x4300d0
        __asm _emit 0x7e
        __asm _emit 0x05
        mov esi, 1bh
        push 1
        push ebp
        ; Exact mapped bytes FF 15 28 BA 68 00: call dword ptr [0x68ba28]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x4300f9
        __asm _emit 0x74
        __asm _emit 0x1c
        cmp esi, 14h
        ; Exact mapped bytes 7F 1D: jg 0x4300ff
        __asm _emit 0x7f
        __asm _emit 0x1d
        push 0
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        inc edi
        ; Exact mapped bytes EB DB: jmp 0x4300c4
        __asm _emit 0xeb
        __asm _emit 0xdb
        ; Exact mapped bytes 89 35 98 50 68 00: mov dword ptr [0x685098], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x98
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 28 0A 67 00 E8 03 00 00: mov dword ptr [0x670a28], 0x3e8
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x28
        __asm _emit 0x0a
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
        lea ecx, [esi - 14h]
        mov edx, 1
        shl edx, cl
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        inc edi
        ; Exact mapped bytes EB B5: jmp 0x4300c4
        __asm _emit 0xeb
        __asm _emit 0xb5
    }
}
