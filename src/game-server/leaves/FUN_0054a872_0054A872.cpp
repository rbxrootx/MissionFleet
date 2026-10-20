// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054A872 .. +0x158 bytes.
extern "C" __declspec(naked) void FUN_0054a872_0054A872() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57f151h
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
        sub esp, 18h
        push ebx
        push esi
        push edi
        ; Exact mapped bytes E8 C0 A6 FF FF: call 0x544f55
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xa6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 114h], 0
        ; Exact mapped bytes 74 11: je 0x54a8b5
        __asm _emit 0x74
        __asm _emit 0x11
        push 36h
        push 5cc7f0h
        ; Exact mapped bytes E8 50 A1 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xa1
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54a8b5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x54a898
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes E8 83 AB FF FF: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xab
        __asm _emit 0xff
        __asm _emit 0xff
        xor edx, edx
        mov dl, byte ptr [eax + 14h]
        test edx, edx
        ; Exact mapped bytes 74 17: je 0x54a8e0
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 114h], 0ffffffffh
        mov eax, 1
        ; Exact mapped bytes E9 D9 00 00 00: jmp 0x54a9b9
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes FF 15 70 2A 5E 00: call dword ptr [0x5e2a70]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7D 1C: jge 0x54a90d
        __asm _emit 0x7d
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 F8 2A 00 00: call 0x54d3f2
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 5cc8bch
        ; Exact mapped bytes E8 10 53 F8 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x53
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E9 A3 00 00 00: jmp 0x54a9b0
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 114h], 1
        ; Exact mapped bytes E8 9A EE FA FF: call 0x4f97b9
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xee
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 58h], 54aa5eh
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 5ch], 0
        ; Exact mapped bytes 75 74: jne 0x54a9a9
        __asm _emit 0x75
        __asm _emit 0x74
        push 56h
        push 5cc7f0h
        push 40h
        ; Exact mapped bytes E8 1C 27 FA FF: call 0x4ed05f
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x27
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 0D: je 0x54a960
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 55 0A 00 00: call 0x54b3b0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x54a967
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 1ch], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [eax + 5ch], ecx
        ; Exact mapped bytes E8 5F AC FE FF: call 0x5355e1
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x54a997
        __asm _emit 0x75
        __asm _emit 0x11
        push 57h
        push 5cc7f0h
        ; Exact mapped bytes E8 6E A0 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xa0
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54a997
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x54a97d
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes E8 3F AC FE FF: call 0x5355e1
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BE 0A 00 00: call 0x54b467
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 09: jmp 0x54a9b9
        __asm _emit 0xeb
        __asm _emit 0x09
        push 0
        ; Exact mapped bytes E8 13 00 00 00: call 0x54a9ca
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
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
