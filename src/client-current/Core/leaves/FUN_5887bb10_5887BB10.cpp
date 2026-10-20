// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887BB10 .. +0x18D bytes.
extern "C" __declspec(naked) void FUN_5887bb10_5887BB10() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 10h
        ; Exact mapped bytes 83 3D 80 99 96 58 00: cmp dword ptr [0x58969980], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 41: jne 0x5887bb62
        __asm _emit 0x75
        __asm _emit 0x41
        mov eax, dword ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 75 19: jne 0x5887bb41
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes E8 42 69 FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x69
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 73 54 FD FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x54
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, 7fffffffh
        mov esp, ebp
        pop ebp
        ret
        mov ecx, dword ptr [ebp + 0ch]
        test ecx, ecx
        ; Exact mapped bytes 74 E0: je 0x5887bb28
        __asm _emit 0x74
        __asm _emit 0xe0
        mov edx, dword ptr [ebp + 10h]
        cmp edx, 7fffffffh
        ; Exact mapped bytes 77 D5: ja 0x5887bb28
        __asm _emit 0x77
        __asm _emit 0xd5
        push edx
        push ecx
        push eax
        ; Exact mapped bytes E8 B5 CE FF FF: call 0x58878a10
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov esp, ebp
        pop ebp
        ret
        push esi
        mov esi, dword ptr [ebp + 10h]
        test esi, esi
        ; Exact mapped bytes 75 09: jne 0x5887bb73
        __asm _emit 0x75
        __asm _emit 0x09
        xor edx, edx
        mov eax, edx
        pop esi
        mov esp, ebp
        pop ebp
        ret
        push edi
        mov edi, dword ptr [ebp + 8]
        test edi, edi
        ; Exact mapped bytes 75 1D: jne 0x5887bb98
        __asm _emit 0x75
        __asm _emit 0x1d
        ; Exact mapped bytes E8 EF 68 FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x68
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 20 54 FD FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x54
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, 7fffffffh
        pop edi
        mov eax, edx
        pop esi
        mov esp, ebp
        pop ebp
        ret
        push ebx
        mov ebx, dword ptr [ebp + 0ch]
        test ebx, ebx
        ; Exact mapped bytes 74 08: je 0x5887bba8
        __asm _emit 0x74
        __asm _emit 0x08
        cmp esi, 7fffffffh
        ; Exact mapped bytes 76 1E: jbe 0x5887bbc6
        __asm _emit 0x76
        __asm _emit 0x1e
        ; Exact mapped bytes E8 C2 68 FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 F3 53 FD FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x53
        __asm _emit 0xfd
        __asm _emit 0xff
        pop ebx
        mov edx, 7fffffffh
        pop edi
        mov eax, edx
        pop esi
        mov esp, ebp
        pop ebp
        ret
        mov byte ptr [ebp - 4], 0
        ; Exact mapped bytes E8 D1 CF FE FF: call 0x58868ba0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xcf
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [eax + 4ch]
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [eax + 48h]
        mov dword ptr [ebp - 8], ecx
        lea ecx, [ebp - 0ch]
        push ecx
        push eax
        ; Exact mapped bytes E8 39 13 FF FF: call 0x5886cf21
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x13
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 8]
        push eax
        push dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 8B 13 FF FF: call 0x5886cf7f
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x13
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        add esp, 10h
        mov eax, dword ptr [ecx + 350h]
        test al, 2
        ; Exact mapped bytes 75 0D: jne 0x5887bc11
        __asm _emit 0x75
        __asm _emit 0x0d
        or eax, 2
        mov dword ptr [ecx + 350h], eax
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 0ch]
        push esi
        push ebx
        mov eax, dword ptr [eax + 0a4h]
        test eax, eax
        ; Exact mapped bytes 75 24: jne 0x5887bc44
        __asm _emit 0x75
        __asm _emit 0x24
        push edi
        ; Exact mapped bytes E8 EA CD FF FF: call 0x58878a10
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov edx, eax
        cmp byte ptr [ebp - 4], 0
        ; Exact mapped bytes 74 63: je 0x5887bc94
        __asm _emit 0x74
        __asm _emit 0x63
        mov eax, dword ptr [ebp - 10h]
        pop ebx
        pop edi
        pop esi
        and dword ptr [eax + 350h], 0fffffffdh
        mov eax, edx
        mov esp, ebp
        pop ebp
        ret
        push esi
        push edi
        push 1001h
        push eax
        ; Exact mapped bytes E8 D6 09 00 00: call 0x5887c627
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        test eax, eax
        ; Exact mapped bytes 75 29: jne 0x5887bc81
        __asm _emit 0x75
        __asm _emit 0x29
        ; Exact mapped bytes E8 12 68 FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x68
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        cmp byte ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0A: je 0x5887bc73
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 10h]
        and dword ptr [eax + 350h], 0fffffffdh
        pop ebx
        mov edx, 7fffffffh
        pop edi
        mov eax, edx
        pop esi
        mov esp, ebp
        pop ebp
        ret
        cmp byte ptr [ebp - 4], 0
        lea edx, [eax - 2]
        ; Exact mapped bytes 74 0A: je 0x5887bc94
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 10h]
        and dword ptr [ecx + 350h], 0fffffffdh
        pop ebx
        pop edi
        mov eax, edx
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
