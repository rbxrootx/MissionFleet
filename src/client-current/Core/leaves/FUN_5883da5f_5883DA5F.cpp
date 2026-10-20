// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883DA5F .. +0x6F bytes.
extern "C" __declspec(naked) void FUN_5883da5f_5883DA5F() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes 83 3D 88 8E 96 58 00: cmp dword ptr [0x58968e88], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x8e
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        push ebx
        push esi
        push edi
        mov esi, ecx
        ; Exact mapped bytes 74 0B: je 0x5883da7b
        __asm _emit 0x74
        __asm _emit 0x0b
        push 58968e70h
        ; Exact mapped bytes FF 15 20 42 89 58: call dword ptr [0x58894220]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov edi, dword ptr [ebp + 8]
        xor ebx, ebx
        cmp dword ptr [esi + 0ch], edi
        ; Exact mapped bytes 72 05: jb 0x5883da8a
        __asm _emit 0x72
        __asm _emit 0x05
        cmp dword ptr [esi + 4], ebx
        ; Exact mapped bytes 75 25: jne 0x5883daaf
        __asm _emit 0x75
        __asm _emit 0x25
        mov dword ptr [esi + 0ch], ebx
        cmp dword ptr [esi + 4], ebx
        ; Exact mapped bytes 74 0C: je 0x5883da9e
        __asm _emit 0x74
        __asm _emit 0x0c
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 66 BB 01 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov dword ptr [esi + 4], ebx
        push edi
        ; Exact mapped bytes E8 6C BB 01 00: call 0x58859610
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [esi + 4], eax
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x5883dab1
        __asm _emit 0x74
        __asm _emit 0x05
        mov dword ptr [esi + 0ch], edi
        mov bl, 1
        ; Exact mapped bytes 83 3D 88 8E 96 58 00: cmp dword ptr [0x58968e88], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x8e
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x5883dac5
        __asm _emit 0x74
        __asm _emit 0x0b
        push 58968e70h
        ; Exact mapped bytes FF 15 1C 42 89 58: call dword ptr [0x5889421c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        pop edi
        pop esi
        mov al, bl
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
