// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B2360 .. +0xFE bytes.
extern "C" __declspec(naked) void FUN_587b2360() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 88h]
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        xor ebx, ebx
        push edi
        cmp eax, dword ptr [ecx + 4]
        ; Exact mapped bytes 75 05: jne 0x587b237d
        __asm _emit 0x75
        __asm _emit 0x05
        mov ebx, 1
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x587b2397
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [esi + 138h]
        ; Exact mapped bytes 8B 0D C4 45 A2 58: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 9D 1E 0A 00: call 0x58854230
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x1e
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 2F: jne 0x587b23c6
        __asm _emit 0x75
        __asm _emit 0x2f
        test ebx, ebx
        ; Exact mapped bytes 74 08: je 0x587b23a3
        __asm _emit 0x74
        __asm _emit 0x08
        lea edi, [esi + 31ch]
        ; Exact mapped bytes EB 32: jmp 0x587b23d5
        __asm _emit 0xeb
        __asm _emit 0x32
        mov edx, dword ptr [esi + 31ch]
        xor edx, 0aaaaaaaah
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 79 EC FF FF: call 0x587b1030
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, 0aaaaaaaah
        pop edi
        mov dword ptr [esi + 31ch], eax
        pop esi
        pop ebx
        ret
        cmp eax, 1
        ; Exact mapped bytes 75 3D: jne 0x587b2408
        __asm _emit 0x75
        __asm _emit 0x3d
        test ebx, ebx
        ; Exact mapped bytes 74 6C: je 0x587b243b
        __asm _emit 0x74
        __asm _emit 0x6c
        lea edi, [esi + 3d0h]
        mov eax, dword ptr [edi]
        ; Exact mapped bytes 8B 0D FC 45 A2 58: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        push edi
        ; Exact mapped bytes E8 5C F2 FE FF: call 0x587a1640
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xf2
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [edi]
        xor ecx, 0aaaaaaaah
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 3C EC FF FF: call 0x587b1030
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, 0aaaaaaaah
        push eax
        mov dword ptr [edi], eax
        ; Exact mapped bytes 8B 0D FC 45 A2 58: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edi
        ; Exact mapped bytes E8 D8 F1 FE FF: call 0x587a15e0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xf1
        __asm _emit 0xfe
        __asm _emit 0xff
        test ebx, ebx
        ; Exact mapped bytes 74 2B: je 0x587b2437
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, dword ptr [esi + 3d0h]
        mov ecx, dword ptr [esi + 31ch]
        mov edx, dword ptr [esi + 138h]
        xor eax, 0aaaaaaaah
        push eax
        xor ecx, 0aaaaaaaah
        push ecx
        ; Exact mapped bytes 8B 0D C4 45 A2 58: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 59 1B 0A 00: call 0x58853f90
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x1b
        __asm _emit 0x0a
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        ret
        mov edx, dword ptr [esi + 3d0h]
        xor edx, 0aaaaaaaah
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 E1 EB FF FF: call 0x587b1030
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, 0aaaaaaaah
        pop edi
        mov dword ptr [esi + 3d0h], eax
        pop esi
        pop ebx
        ret
    }
}
