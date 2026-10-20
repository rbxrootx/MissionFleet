// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58858299 .. +0x120 bytes.
extern "C" __declspec(naked) void FUN_58858299_58858299() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 254h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 8]
        push esi
        mov esi, dword ptr [ebp + 0ch]
        test esi, esi
        ; Exact mapped bytes 75 15: jne 0x588582ce
        __asm _emit 0x75
        __asm _emit 0x15
        ; Exact mapped bytes E8 B1 A1 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 E2 8C FF FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0xff
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 63: jmp 0x58858331
        __asm _emit 0xeb
        __asm _emit 0x63
        test eax, eax
        ; Exact mapped bytes 74 E7: je 0x588582b9
        __asm _emit 0x74
        __asm _emit 0xe7
        push ebx
        push edi
        xor ebx, ebx
        lea ecx, [ebp - 254h]
        push ebx
        push ebx
        push ebx
        push ecx
        push ebx
        push eax
        ; Exact mapped bytes FF 15 60 42 89 58: call dword ptr [0x58894260]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov edi, eax
        cmp edi, -1
        ; Exact mapped bytes 75 4F: jne 0x5885833e
        __asm _emit 0x75
        __asm _emit 0x4f
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        push 2
        pop esi
        sub eax, esi
        ; Exact mapped bytes 74 29: je 0x58858325
        __asm _emit 0x74
        __asm _emit 0x29
        sub eax, 1
        ; Exact mapped bytes 74 24: je 0x58858325
        __asm _emit 0x74
        __asm _emit 0x24
        sub eax, 5
        ; Exact mapped bytes 74 12: je 0x58858318
        __asm _emit 0x74
        __asm _emit 0x12
        sub eax, 0ah
        ; Exact mapped bytes 74 1A: je 0x58858325
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes E8 5F A1 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], 16h
        ; Exact mapped bytes EB 14: jmp 0x5885832c
        __asm _emit 0xeb
        __asm _emit 0x14
        ; Exact mapped bytes E8 52 A1 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], 0ch
        ; Exact mapped bytes EB 07: jmp 0x5885832c
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes E8 45 A1 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], esi
        or eax, 0ffffffffh
        pop edi
        pop ebx
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        pop esi
        ; Exact mapped bytes E8 14 8D FD FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x8d
        __asm _emit 0xfd
        __asm _emit 0xff
        leave
        ret
        mov eax, dword ptr [ebp - 254h]
        xor ecx, ecx
        cmp eax, 80h
        cmove eax, ecx
        mov dword ptr [esi], eax
        lea eax, [ebp - 250h]
        push eax
        ; Exact mapped bytes E8 76 01 00 00: call 0x588584d2
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 8], eax
        lea eax, [ebp - 248h]
        push eax
        mov dword ptr [esi + 0ch], edx
        ; Exact mapped bytes E8 64 01 00 00: call 0x588584d2
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 10h], eax
        lea eax, [ebp - 240h]
        push eax
        mov dword ptr [esi + 14h], edx
        ; Exact mapped bytes E8 52 01 00 00: call 0x588584d2
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 18h], eax
        mov eax, dword ptr [ebp - 234h]
        mov dword ptr [esi + 20h], eax
        lea eax, [ebp - 228h]
        push eax
        lea eax, [esi + 24h]
        mov dword ptr [esi + 1ch], edx
        push 104h
        push eax
        ; Exact mapped bytes E8 DC EB 00 00: call 0x58866f80
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x588583af
        __asm _emit 0x75
        __asm _emit 0x04
        mov eax, edi
        ; Exact mapped bytes EB 80: jmp 0x5885832f
        __asm _emit 0xeb
        __asm _emit 0x80
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        ; Exact mapped bytes E8 20 8C FF FF: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
