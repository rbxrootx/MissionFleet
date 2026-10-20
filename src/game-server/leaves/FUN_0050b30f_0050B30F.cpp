// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050B30F .. +0x106 bytes.
extern "C" __declspec(naked) void FUN_0050b30f_0050B30F() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57ec04h
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
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 587c7ch
        mov dword ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A2 67 03 00: call 0x541ae8
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x67
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x50b35c
        __asm _emit 0x74
        __asm _emit 0x12
        push 5cba74h
        push 5cbaa0h
        ; Exact mapped bytes E8 BC 48 FC FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x48
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 DA 00 00 00: call 0x50b43e
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 28h
        ; Exact mapped bytes E8 12 78 02 00: call 0x532b81
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x50b384
        __asm _emit 0x75
        __asm _emit 0x11
        push 38h
        push 5cba5ch
        ; Exact mapped bytes E8 81 96 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x96
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50b384
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x50b364
        __asm _emit 0x75
        __asm _emit 0xda
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 24h], 0
        ; Exact mapped bytes 74 15: je 0x50b3a8
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 24h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 24h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 68: call dword ptr [edx + 0x68]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x68
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 24h], 0
        ; Exact mapped bytes 74 11: je 0x50b3c2
        __asm _emit 0x74
        __asm _emit 0x11
        push 3ch
        push 5cba5ch
        ; Exact mapped bytes E8 43 96 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x96
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50b3c2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x50b3a8
        __asm _emit 0x75
        __asm _emit 0xe0
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 28h
        ; Exact mapped bytes E8 1D BD FD FF: call 0x4e70f4
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xbd
        __asm _emit 0xfd
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 20h
        ; Exact mapped bytes E8 66 24 FE FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1ch
        ; Exact mapped bytes E8 57 24 FE FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 37 C9 FE FF: call 0x4f7d3b
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xc9
        __asm _emit 0xfe
        __asm _emit 0xff
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
