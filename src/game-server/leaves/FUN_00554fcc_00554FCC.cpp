// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00554FCC .. +0x1DB bytes.
extern "C" __declspec(naked) void FUN_00554fcc_00554FCC() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 38h], ecx
        mov dword ptr [ebp - 34h], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 30h], 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 C4 2D 00 00: call 0x557dc0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        push 3c1h
        push 5cfa08h
        mov eax, dword ptr [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 4E 61 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x61
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 28h]
        cmp dword ptr [ecx + 74h], 0
        ; Exact mapped bytes 75 14: jne 0x55502f
        __asm _emit 0x75
        __asm _emit 0x14
        push 3c2h
        push 5cfa08h
        ; Exact mapped bytes E8 D6 F9 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xf9
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55502f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x555012
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 28h]
        cmp dword ptr [eax + 78h], 0
        ; Exact mapped bytes 75 53: jne 0x555091
        __asm _emit 0x75
        __asm _emit 0x53
        mov ecx, dword ptr [ebp - 28h]
        cmp dword ptr [ecx + 4ch], 0
        ; Exact mapped bytes 75 14: jne 0x55505b
        __asm _emit 0x75
        __asm _emit 0x14
        push 3c5h
        push 5cfa08h
        ; Exact mapped bytes E8 AA F9 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xf9
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55505b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x55503e
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [eax + 4ch], 0
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 52 78: call dword ptr [edx + 0x78]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x78
        test eax, eax
        ; Exact mapped bytes 75 17: jne 0x555091
        __asm _emit 0x75
        __asm _emit 0x17
        push 5cfa6ch
        push 5cfaach
        ; Exact mapped bytes E8 8C AB F7 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xab
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E8 1B AD F7 FF: call 0x4cfdac
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xad
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 28h]
        cmp dword ptr [eax + 78h], 0
        ; Exact mapped bytes 75 14: jne 0x5550ae
        __asm _emit 0x75
        __asm _emit 0x14
        push 3cdh
        push 5cfa08h
        ; Exact mapped bytes E8 57 F9 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xf9
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5550ae
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x555091
        __asm _emit 0x75
        __asm _emit 0xdd
        lea edx, [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 20 E0 FF FF: call 0x5530e0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 24h]
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 75 09: jne 0x5550d5
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes EB 36: jmp 0x55510b
        __asm _emit 0xeb
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 34h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 CC 46 F5 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x46
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], esp
        mov edx, dword ptr [ebp - 34h]
        push edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        ; Exact mapped bytes E8 B8 BE F3 FF: call 0x490fc0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xbe
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        lea edx, [ebp - 2ch]
        push edx
        push 0
        push 0
        push 11012h
        mov eax, dword ptr [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 78h]
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 78h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 1A: je 0x555151
        __asm _emit 0x74
        __asm _emit 0x1a
        lea ecx, [ebp - 24h]
        push ecx
        push 5cfab0h
        ; Exact mapped bytes E8 D0 AA F7 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xaa
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 39 83 FF FF: call 0x54d48a
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 75 14: jne 0x55516b
        __asm _emit 0x75
        __asm _emit 0x14
        push 3deh
        push 5cfa08h
        ; Exact mapped bytes E8 9A F8 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xf8
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55516b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x555151
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ecx + 34h], edx
        mov eax, dword ptr [ebp - 38h]
        cmp dword ptr [eax + 34h], 0
        ; Exact mapped bytes 75 14: jne 0x555197
        __asm _emit 0x75
        __asm _emit 0x14
        push 3e2h
        push 5cfa08h
        ; Exact mapped bytes E8 6E F8 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xf8
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x555197
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x55517a
        __asm _emit 0x75
        __asm _emit 0xdd
        lea esp, [ebp - 4ch]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
