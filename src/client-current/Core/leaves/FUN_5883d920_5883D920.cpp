// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883D920 .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_5883d920_5883D920() {
    __asm {
        ; Exact mapped bytes 83 3D 88 8E 96 58 00: cmp dword ptr [0x58968e88], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x8e
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        push esi
        push edi
        mov esi, ecx
        mov edi, 58968e70h
        ; Exact mapped bytes 74 07: je 0x5883d939
        __asm _emit 0x74
        __asm _emit 0x07
        push edi
        ; Exact mapped bytes FF 15 20 42 89 58: call dword ptr [0x58894220]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push ebx
        xor ebx, ebx
        push 0f0000000h
        push 1
        push 588c1dc0h
        push ebx
        push esi
        mov dword ptr [esi + 1ch], ebx
        mov dword ptr [esi + 14h], ebx
        mov dword ptr [esi], ebx
        mov dword ptr [esi + 4], ebx
        mov dword ptr [esi + 8], ebx
        mov dword ptr [esi + 0ch], ebx
        mov byte ptr [esi + 10h], bl
        mov dword ptr [esi + 2ch], ebx
        mov dword ptr [esi + 40h], ebx
        mov dword ptr [esi + 48h], ebx
        mov dword ptr [esi + 44h], ebx
        mov dword ptr [esi + 20h], ebx
        ; Exact mapped bytes 66 89 5E 24: mov word ptr [esi + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5e
        __asm _emit 0x24
        mov dword ptr [esi + 28h], ebx
        mov dword ptr [esi + 4ch], ebx
        mov dword ptr [esi + 18h], ebx
        mov byte ptr [esi + 26h], bl
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [esi + 54h], ebx
        ; Exact mapped bytes FF 15 00 40 89 58: call dword ptr [0x58894000]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x5883d98f
        __asm _emit 0x75
        __asm _emit 0x02
        mov dword ptr [esi], ebx
        ; Exact mapped bytes 83 3D 88 8E 96 58 00: cmp dword ptr [0x58968e88], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x8e
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        pop ebx
        ; Exact mapped bytes 74 07: je 0x5883d9a0
        __asm _emit 0x74
        __asm _emit 0x07
        push edi
        ; Exact mapped bytes FF 15 1C 42 89 58: call dword ptr [0x5889421c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        pop edi
        mov eax, esi
        pop esi
        ret
    }
}
