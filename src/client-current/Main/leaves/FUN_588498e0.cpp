// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588498E0 .. +0x96 bytes.
extern "C" __declspec(naked) void FUN_588498e0() {
    __asm {
        ; Exact mapped bytes 66 8B 44 24 04: mov ax, word ptr [esp + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        ; Exact mapped bytes 66 89 85 C4 00 00 00: mov word ptr [ebp + 0xc4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        mov edi, dword ptr [ebp + 80h]
        cmp edi, dword ptr [ebp + 84h]
        ; Exact mapped bytes 76 05: jbe 0x58849905
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 6D 33 13 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x33
        __asm _emit 0x13
        __asm _emit 0x00
        mov esi, dword ptr [ebp + 74h]
        ; Exact mapped bytes EB 06: jmp 0x58849910
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp + 84h]
        cmp dword ptr [ebp + 80h], ebx
        ; Exact mapped bytes 76 05: jbe 0x58849923
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 4F 33 13 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x33
        __asm _emit 0x13
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 74h]
        test esi, esi
        ; Exact mapped bytes 74 04: je 0x5884992e
        __asm _emit 0x74
        __asm _emit 0x04
        cmp esi, eax
        ; Exact mapped bytes 74 05: je 0x58849933
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 3F 33 13 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x33
        __asm _emit 0x13
        __asm _emit 0x00
        cmp edi, ebx
        ; Exact mapped bytes 74 3E: je 0x58849975
        __asm _emit 0x74
        __asm _emit 0x3e
        test esi, esi
        ; Exact mapped bytes 75 32: jne 0x5884996d
        __asm _emit 0x75
        __asm _emit 0x32
        ; Exact mapped bytes E8 32 33 13 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x33
        __asm _emit 0x13
        __asm _emit 0x00
        xor eax, eax
        cmp edi, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x5884994c
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 26 33 13 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x33
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 0D 6C FD FF: call 0x58820560
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0xfd
        __asm _emit 0xff
        test esi, esi
        ; Exact mapped bytes 75 1A: jne 0x58849971
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes E8 16 33 13 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x33
        __asm _emit 0x13
        __asm _emit 0x00
        xor eax, eax
        cmp edi, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x58849968
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 0A 33 13 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x33
        __asm _emit 0x13
        __asm _emit 0x00
        add edi, 4
        ; Exact mapped bytes EB A3: jmp 0x58849910
        __asm _emit 0xeb
        __asm _emit 0xa3
        mov eax, dword ptr [esi]
        ; Exact mapped bytes EB D1: jmp 0x58849942
        __asm _emit 0xeb
        __asm _emit 0xd1
        mov eax, dword ptr [esi]
        ; Exact mapped bytes EB E9: jmp 0x5884995e
        __asm _emit 0xeb
        __asm _emit 0xe9
        pop edi
    }
}
