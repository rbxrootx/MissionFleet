// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055E90C .. +0xFF bytes.
extern "C" __declspec(naked) void _CanActivate_COleClientItem__MAEHXZ_0055E90C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push esi
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 2ch], 4
        ; Exact mapped bytes 75 07: jne 0x55e926
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 E0 00 00 00: jmp 0x55ea06
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 54h], 0
        ; Exact mapped bytes 0F 85 C2 00 00 00: jne 0x55e9f5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 5deccch
        ; Exact mapped bytes E8 43 50 00 00: call 0x563980
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 74 23: je 0x55e96c
        __asm _emit 0x74
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes E8 71 30 FE FF: call 0x5419c5
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x30
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 62 94 FF FF: call 0x557dc0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x94
        __asm _emit 0xff
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 74 0A: je 0x55e96c
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 71: jne 0x55e9ec
        __asm _emit 0x75
        __asm _emit 0x71
        ; Exact mapped bytes E8 B3 E1 FD FF: call 0x53cb33
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xe1
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 1E: je 0x55e9a7
        __asm _emit 0x74
        __asm _emit 0x1e
        push 585e68h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 FA C6 F9 FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xc6
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x55e9a7
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 97 E6 FD FF: call 0x53d039
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xe6
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB DC: jmp 0x55e983
        __asm _emit 0xeb
        __asm _emit 0xdc
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        push 585e68h
        ; Exact mapped bytes E8 70 C7 F9 FF: call 0x4fb125
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xc7
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 2B: jne 0x55e9ec
        __asm _emit 0x75
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F7 93 FF FF: call 0x557dc0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x93
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 50 68: call dword ptr [eax + 0x68]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x68
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 50 6C: call dword ptr [eax + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x6c
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 54h], edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 54h]
        ; Exact mapped bytes E8 4C D1 FD FF: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xd1
        __asm _emit 0xfd
        __asm _emit 0xff
        neg eax
        sbb eax, eax
        neg eax
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
