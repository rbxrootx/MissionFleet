// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 3059 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587956C0 .. +0xBF3 bytes.
extern "C" __declspec(naked) void CloseCGCDLL_segment_00() {
    __asm {
        ; Exact mapped bytes 8B 0D 28 45 A2 58: mov ecx, dword ptr [0x58a24528]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        xor esi, esi
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x587956db
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 35 28 45 A2 58: mov dword ptr [0x58a24528], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x28
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 2C 45 A2 58: mov ecx, dword ptr [0x58a2452c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x587956f3
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 35 2C 45 A2 58: mov dword ptr [0x58a2452c], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x2c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 30 45 A2 58: mov ecx, dword ptr [0x58a24530]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x5879570b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 35 30 45 A2 58: mov dword ptr [0x58a24530], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 38 45 A2 58: mov ecx, dword ptr [0x58a24538]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795723
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 35 38 45 A2 58: mov dword ptr [0x58a24538], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x38
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 34 45 A2 58: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x5879573b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 35 34 45 A2 58: mov dword ptr [0x58a24534], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 3C 45 A2 58: mov ecx, dword ptr [0x58a2453c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795753
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 35 3C 45 A2 58: mov dword ptr [0x58a2453c], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x3c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 40 45 A2 58: mov ecx, dword ptr [0x58a24540]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x5879576b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 35 40 45 A2 58: mov dword ptr [0x58a24540], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x40
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 44 45 A2 58: mov ecx, dword ptr [0x58a24544]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795783
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 35 44 45 A2 58: mov dword ptr [0x58a24544], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x44
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 48 45 A2 58: mov ecx, dword ptr [0x58a24548]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x5879579b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 35 48 45 A2 58: mov dword ptr [0x58a24548], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x48
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 4C 45 A2 58: mov ecx, dword ptr [0x58a2454c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x587957b3
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 35 4C 45 A2 58: mov dword ptr [0x58a2454c], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x4c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 58 45 A2 58: mov ecx, dword ptr [0x58a24558]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x587957cb
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 35 58 45 A2 58: mov dword ptr [0x58a24558], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x58
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 78 45 A2 58: mov ecx, dword ptr [0x58a24578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x587957e3
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 35 78 45 A2 58: mov dword ptr [0x58a24578], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x78
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0F: je 0x587957fc
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 35 88 45 A2 58: mov dword ptr [0x58a24588], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 8C 45 A2 58: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0F: je 0x58795815
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 35 8C 45 A2 58: mov dword ptr [0x58a2458c], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x8c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes A1 40 4A A2 58: mov eax, dword ptr [0x58a24a40]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        push edi
        ; Exact mapped bytes 8B 3D 88 C0 98 58: mov edi, dword ptr [0x5898c088]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 8B 0D 44 4A A2 58: mov ecx, dword ptr [0x58a24a44]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 8B 15 48 4A A2 58: mov edx, dword ptr [0x58a24a48]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes A1 4C 4A A2 58: mov eax, dword ptr [0x58a24a4c]
        __asm _emit 0xa1
        __asm _emit 0x4c
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes 8B 0D 84 45 A2 58: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795856
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 84 45 A2 58: mov dword ptr [0x58a24584], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 94 45 A2 58: mov ecx, dword ptr [0x58a24594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x5879586e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 94 45 A2 58: mov dword ptr [0x58a24594], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x94
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 00 48 A2 58: mov ecx, dword ptr [0x58a24800]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795886
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 00 48 A2 58: mov dword ptr [0x58a24800], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 04 48 A2 58: mov ecx, dword ptr [0x58a24804]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x5879589e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 04 48 A2 58: mov dword ptr [0x58a24804], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x04
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 08 48 A2 58: mov ecx, dword ptr [0x58a24808]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x587958b6
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 08 48 A2 58: mov dword ptr [0x58a24808], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D FC 47 A2 58: mov ecx, dword ptr [0x58a247fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x587958ce
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 FC 47 A2 58: mov dword ptr [0x58a247fc], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xfc
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 0C 48 A2 58: mov ecx, dword ptr [0x58a2480c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x587958e6
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 0C 48 A2 58: mov dword ptr [0x58a2480c], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x0c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D BC B1 A0 58: mov ecx, dword ptr [0x58a0b1bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0xb1
        __asm _emit 0xa0
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x587958fe
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 BC B1 A0 58: mov dword ptr [0x58a0b1bc], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xbc
        __asm _emit 0xb1
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D C0 B1 A0 58: mov ecx, dword ptr [0x58a0b1c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0xb1
        __asm _emit 0xa0
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795916
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 C0 B1 A0 58: mov dword ptr [0x58a0b1c0], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xc0
        __asm _emit 0xb1
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D A0 45 A2 58: mov ecx, dword ptr [0x58a245a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x5879592e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 A0 45 A2 58: mov dword ptr [0x58a245a0], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D A8 45 A2 58: mov ecx, dword ptr [0x58a245a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795946
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 A8 45 A2 58: mov dword ptr [0x58a245a8], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x5879595e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 9C 45 A2 58: mov dword ptr [0x58a2459c], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795976
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 98 45 A2 58: mov dword ptr [0x58a24598], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D AC 45 A2 58: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xac
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x5879598e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 AC 45 A2 58: mov dword ptr [0x58a245ac], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xac
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x587959a6
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 B4 45 A2 58: mov dword ptr [0x58a245b4], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D B8 45 A2 58: mov ecx, dword ptr [0x58a245b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x587959be
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 B8 45 A2 58: mov dword ptr [0x58a245b8], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xb8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D BC AD A0 58: mov ecx, dword ptr [0x58a0adbc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0xad
        __asm _emit 0xa0
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x587959d6
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 BC AD A0 58: mov dword ptr [0x58a0adbc], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xbc
        __asm _emit 0xad
        __asm _emit 0xa0
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D CC 48 A2 58: mov ecx, dword ptr [0x58a248cc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x587959ee
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 CC 48 A2 58: mov dword ptr [0x58a248cc], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xcc
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D A4 45 A2 58: mov ecx, dword ptr [0x58a245a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795a06
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 A4 45 A2 58: mov dword ptr [0x58a245a4], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xa4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D C4 45 A2 58: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795a1e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 C4 45 A2 58: mov dword ptr [0x58a245c4], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795a36
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 C0 45 A2 58: mov dword ptr [0x58a245c0], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D BC 45 A2 58: mov ecx, dword ptr [0x58a245bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795a4e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 BC 45 A2 58: mov dword ptr [0x58a245bc], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xbc
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D D0 45 A2 58: mov ecx, dword ptr [0x58a245d0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795a66
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 D0 45 A2 58: mov dword ptr [0x58a245d0], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xd0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D D4 45 A2 58: mov ecx, dword ptr [0x58a245d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795a7e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 D4 45 A2 58: mov dword ptr [0x58a245d4], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xd4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D E0 45 A2 58: mov ecx, dword ptr [0x58a245e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795a96
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 E0 45 A2 58: mov dword ptr [0x58a245e0], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xe0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D E4 45 A2 58: mov ecx, dword ptr [0x58a245e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795aae
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 E4 45 A2 58: mov dword ptr [0x58a245e4], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xe4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D EC 45 A2 58: mov ecx, dword ptr [0x58a245ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795ac6
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 EC 45 A2 58: mov dword ptr [0x58a245ec], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xec
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D E8 45 A2 58: mov ecx, dword ptr [0x58a245e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795ade
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 E8 45 A2 58: mov dword ptr [0x58a245e8], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D F0 45 A2 58: mov ecx, dword ptr [0x58a245f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795af6
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 F0 45 A2 58: mov dword ptr [0x58a245f0], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xf0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D F4 45 A2 58: mov ecx, dword ptr [0x58a245f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795b0e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 F4 45 A2 58: mov dword ptr [0x58a245f4], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xf4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 14 48 A2 58: mov ecx, dword ptr [0x58a24814]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795b26
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 14 48 A2 58: mov dword ptr [0x58a24814], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 1C 48 A2 58: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795b3e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 1C 48 A2 58: mov dword ptr [0x58a2481c], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 28 48 A2 58: mov ecx, dword ptr [0x58a24828]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795b56
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 28 48 A2 58: mov dword ptr [0x58a24828], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x28
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 24 46 A2 58: mov ecx, dword ptr [0x58a24624]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795b6e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 24 46 A2 58: mov dword ptr [0x58a24624], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x24
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 28 46 A2 58: mov ecx, dword ptr [0x58a24628]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795b86
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 28 46 A2 58: mov dword ptr [0x58a24628], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x28
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 2C 46 A2 58: mov ecx, dword ptr [0x58a2462c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795b9e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 2C 46 A2 58: mov dword ptr [0x58a2462c], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x2c
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 10 46 A2 58: mov ecx, dword ptr [0x58a24610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795bb6
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 10 46 A2 58: mov dword ptr [0x58a24610], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795bce
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 A4 46 A2 58: mov dword ptr [0x58a246a4], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D A8 46 A2 58: mov ecx, dword ptr [0x58a246a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795be6
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 A8 46 A2 58: mov dword ptr [0x58a246a8], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xa8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 08 46 A2 58: mov ecx, dword ptr [0x58a24608]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795bfe
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 08 46 A2 58: mov dword ptr [0x58a24608], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 0C 46 A2 58: mov ecx, dword ptr [0x58a2460c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795c16
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 0C 46 A2 58: mov dword ptr [0x58a2460c], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x0c
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 14 46 A2 58: mov ecx, dword ptr [0x58a24614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795c2e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 14 46 A2 58: mov dword ptr [0x58a24614], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 94 46 A2 58: mov ecx, dword ptr [0x58a24694]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795c46
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 94 46 A2 58: mov dword ptr [0x58a24694], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x94
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 98 46 A2 58: mov ecx, dword ptr [0x58a24698]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795c5e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 98 46 A2 58: mov dword ptr [0x58a24698], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 9C 46 A2 58: mov ecx, dword ptr [0x58a2469c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795c76
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 9C 46 A2 58: mov dword ptr [0x58a2469c], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x9c
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 90 46 A2 58: mov ecx, dword ptr [0x58a24690]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795c8e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 90 46 A2 58: mov dword ptr [0x58a24690], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795ca6
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 A0 46 A2 58: mov dword ptr [0x58a246a0], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D B8 46 A2 58: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795cbe
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 B8 46 A2 58: mov dword ptr [0x58a246b8], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D BC 46 A2 58: mov ecx, dword ptr [0x58a246bc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795cd6
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 BC 46 A2 58: mov dword ptr [0x58a246bc], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xbc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 4C 46 A2 58: mov ecx, dword ptr [0x58a2464c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795cee
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 4C 46 A2 58: mov dword ptr [0x58a2464c], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x4c
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 50 46 A2 58: mov ecx, dword ptr [0x58a24650]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795d06
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 50 46 A2 58: mov dword ptr [0x58a24650], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x50
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 54 46 A2 58: mov ecx, dword ptr [0x58a24654]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795d1e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 54 46 A2 58: mov dword ptr [0x58a24654], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x54
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 58 46 A2 58: mov ecx, dword ptr [0x58a24658]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795d36
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 58 46 A2 58: mov dword ptr [0x58a24658], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x58
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 74 46 A2 58: mov ecx, dword ptr [0x58a24674]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795d4e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 74 46 A2 58: mov dword ptr [0x58a24674], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x74
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 78 46 A2 58: mov ecx, dword ptr [0x58a24678]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795d66
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 78 46 A2 58: mov dword ptr [0x58a24678], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x78
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 7C 46 A2 58: mov ecx, dword ptr [0x58a2467c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795d7e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 7C 46 A2 58: mov dword ptr [0x58a2467c], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x7c
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 80 46 A2 58: mov ecx, dword ptr [0x58a24680]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795d96
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 80 46 A2 58: mov dword ptr [0x58a24680], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x80
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 84 46 A2 58: mov ecx, dword ptr [0x58a24684]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795dae
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 84 46 A2 58: mov dword ptr [0x58a24684], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x84
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 6C 46 A2 58: mov ecx, dword ptr [0x58a2466c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795dc6
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 6C 46 A2 58: mov dword ptr [0x58a2466c], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x6c
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 70 46 A2 58: mov ecx, dword ptr [0x58a24670]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795dde
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 70 46 A2 58: mov dword ptr [0x58a24670], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x70
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 68 46 A2 58: mov ecx, dword ptr [0x58a24668]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795df6
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 68 46 A2 58: mov dword ptr [0x58a24668], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x68
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D F0 46 A2 58: mov ecx, dword ptr [0x58a246f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795e0e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 F0 46 A2 58: mov dword ptr [0x58a246f0], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xf0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D F4 46 A2 58: mov ecx, dword ptr [0x58a246f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795e26
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 F4 46 A2 58: mov dword ptr [0x58a246f4], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xf4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D FC 46 A2 58: mov ecx, dword ptr [0x58a246fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795e3e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 FC 46 A2 58: mov dword ptr [0x58a246fc], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xfc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 14 47 A2 58: mov ecx, dword ptr [0x58a24714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795e56
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 14 47 A2 58: mov dword ptr [0x58a24714], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D C8 45 A2 58: mov ecx, dword ptr [0x58a245c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795e6e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 C8 45 A2 58: mov dword ptr [0x58a245c8], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xc8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D D8 46 A2 58: mov ecx, dword ptr [0x58a246d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795e86
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 D8 46 A2 58: mov dword ptr [0x58a246d8], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D DC 46 A2 58: mov ecx, dword ptr [0x58a246dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795e9e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 DC 46 A2 58: mov dword ptr [0x58a246dc], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xdc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D E0 46 A2 58: mov ecx, dword ptr [0x58a246e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795eb6
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 E0 46 A2 58: mov dword ptr [0x58a246e0], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xe0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D E4 46 A2 58: mov ecx, dword ptr [0x58a246e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795ece
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 E4 46 A2 58: mov dword ptr [0x58a246e4], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xe4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D EC 46 A2 58: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795ee6
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 EC 46 A2 58: mov dword ptr [0x58a246ec], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xec
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D CC 46 A2 58: mov ecx, dword ptr [0x58a246cc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795efe
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 CC 46 A2 58: mov dword ptr [0x58a246cc], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xcc
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D D0 46 A2 58: mov ecx, dword ptr [0x58a246d0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795f16
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 D0 46 A2 58: mov dword ptr [0x58a246d0], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xd0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 68 47 A2 58: mov ecx, dword ptr [0x58a24768]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795f2e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 68 47 A2 58: mov dword ptr [0x58a24768], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x68
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 6C 47 A2 58: mov ecx, dword ptr [0x58a2476c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795f46
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 6C 47 A2 58: mov dword ptr [0x58a2476c], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x6c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D E8 46 A2 58: mov ecx, dword ptr [0x58a246e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795f5e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 E8 46 A2 58: mov dword ptr [0x58a246e8], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 84 47 A2 58: mov ecx, dword ptr [0x58a24784]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795f76
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 84 47 A2 58: mov dword ptr [0x58a24784], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x84
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 88 47 A2 58: mov ecx, dword ptr [0x58a24788]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795f8e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 88 47 A2 58: mov dword ptr [0x58a24788], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x88
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795fa6
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 8C 47 A2 58: mov dword ptr [0x58a2478c], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 90 47 A2 58: mov ecx, dword ptr [0x58a24790]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795fbe
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 90 47 A2 58: mov dword ptr [0x58a24790], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 94 47 A2 58: mov ecx, dword ptr [0x58a24794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795fd6
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 94 47 A2 58: mov dword ptr [0x58a24794], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 98 47 A2 58: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58795fee
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 98 47 A2 58: mov dword ptr [0x58a24798], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 9C 47 A2 58: mov ecx, dword ptr [0x58a2479c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58796006
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 9C 47 A2 58: mov dword ptr [0x58a2479c], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x9c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D A0 47 A2 58: mov ecx, dword ptr [0x58a247a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x5879601e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 A0 47 A2 58: mov dword ptr [0x58a247a0], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xa0
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 38 46 A2 58: mov ecx, dword ptr [0x58a24638]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 10: je 0x58796038
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        xor ecx, ecx
        ; Exact mapped bytes 89 0D 38 46 A2 58: mov dword ptr [0x58a24638], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes A1 20 46 A2 58: mov eax, dword ptr [0x58a24620]
        __asm _emit 0xa1
        __asm _emit 0x20
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp eax, esi
        ; Exact mapped bytes 74 17: je 0x58796058
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D 38 46 A2 58: mov ecx, dword ptr [0x58a24638]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        xor eax, eax
        ; Exact mapped bytes A3 20 46 A2 58: mov dword ptr [0x58a24620], eax
        __asm _emit 0xa3
        __asm _emit 0x20
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 13: je 0x5879606f
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes A1 20 46 A2 58: mov eax, dword ptr [0x58a24620]
        __asm _emit 0xa1
        __asm _emit 0x20
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 89 35 38 46 A2 58: mov dword ptr [0x58a24638], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x38
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp eax, esi
        ; Exact mapped bytes 74 10: je 0x58796083
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 20 46 A2 58: mov dword ptr [0x58a24620], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x20
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 00 46 A2 58: mov ecx, dword ptr [0x58a24600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x5879609b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 00 46 A2 58: mov dword ptr [0x58a24600], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D B0 46 A2 58: mov ecx, dword ptr [0x58a246b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x587960b3
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 B0 46 A2 58: mov dword ptr [0x58a246b0], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xb0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 44 46 A2 58: mov ecx, dword ptr [0x58a24644]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x587960cb
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 44 46 A2 58: mov dword ptr [0x58a24644], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x44
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 5C 46 A2 58: mov ecx, dword ptr [0x58a2465c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x587960e3
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 5C 46 A2 58: mov dword ptr [0x58a2465c], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x5c
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D E0 4A A2 58: mov ecx, dword ptr [0x58a24ae0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x587960fb
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 E0 4A A2 58: mov dword ptr [0x58a24ae0], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xe0
        __asm _emit 0x4a
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 20 47 A2 58: mov ecx, dword ptr [0x58a24720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58796113
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 20 47 A2 58: mov dword ptr [0x58a24720], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x20
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 0C 47 A2 58: mov ecx, dword ptr [0x58a2470c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x5879612b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 0C 47 A2 58: mov dword ptr [0x58a2470c], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x0c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 10 47 A2 58: mov ecx, dword ptr [0x58a24710]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58796143
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 10 47 A2 58: mov dword ptr [0x58a24710], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x10
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 24 47 A2 58: mov ecx, dword ptr [0x58a24724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x5879615b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 24 47 A2 58: mov dword ptr [0x58a24724], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x24
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D D4 46 A2 58: mov ecx, dword ptr [0x58a246d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58796173
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 D4 46 A2 58: mov dword ptr [0x58a246d4], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xd4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 28 47 A2 58: mov ecx, dword ptr [0x58a24728]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x5879618b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 28 47 A2 58: mov dword ptr [0x58a24728], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x28
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 2C 47 A2 58: mov ecx, dword ptr [0x58a2472c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x587961a3
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 2C 47 A2 58: mov dword ptr [0x58a2472c], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x2c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 30 47 A2 58: mov ecx, dword ptr [0x58a24730]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x587961bb
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 30 47 A2 58: mov dword ptr [0x58a24730], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 34 47 A2 58: mov ecx, dword ptr [0x58a24734]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x587961d3
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 34 47 A2 58: mov dword ptr [0x58a24734], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x34
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp eax, esi
        ; Exact mapped bytes 74 11: je 0x587961ed
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        xor eax, eax
        ; Exact mapped bytes A3 F8 47 A2 58: mov dword ptr [0x58a247f8], eax
        __asm _emit 0xa3
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 44 47 A2 58: mov ecx, dword ptr [0x58a24744]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 13: je 0x5879620a
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 89 35 44 47 A2 58: mov dword ptr [0x58a24744], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x44
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 48 47 A2 58: mov ecx, dword ptr [0x58a24748]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 13: je 0x58796227
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 89 35 48 47 A2 58: mov dword ptr [0x58a24748], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x48
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 60 47 A2 58: mov ecx, dword ptr [0x58a24760]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 13: je 0x58796244
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 89 35 60 47 A2 58: mov dword ptr [0x58a24760], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x60
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp eax, esi
        ; Exact mapped bytes 74 10: je 0x58796258
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 F8 47 A2 58: mov dword ptr [0x58a247f8], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, 58a0b1c4h
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        cmp ecx, esi
        ; Exact mapped bytes 74 0A: je 0x58796270
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [edi], esi
        add edi, 4
        cmp edi, 58a0b1e4h
        ; Exact mapped bytes 7C E5: jl 0x58796260
        __asm _emit 0x7c
        __asm _emit 0xe5
        ; Exact mapped bytes 8B 0D 24 45 A2 58: mov ecx, dword ptr [0x58a24524]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        pop edi
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x58796294
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 24 45 A2 58: mov dword ptr [0x58a24524], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D F0 47 A2 58: mov ecx, dword ptr [0x58a247f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp ecx, esi
        ; Exact mapped bytes 74 0E: je 0x587962ac
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 35 F0 47 A2 58: mov dword ptr [0x58a247f0], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xf0
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, 1
        pop esi
        ret
    }
}
