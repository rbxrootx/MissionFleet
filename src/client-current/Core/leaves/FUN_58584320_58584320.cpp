// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58584320 .. +0x168 bytes.
extern "C" __declspec(naked) void FUN_58584320_58584320() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EE BE 23 00: call 0x587c0220
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xbe
        __asm _emit 0x23
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1db8h]
        ; Exact mapped bytes E8 30 D7 FD FF: call 0x58561a70
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xd7
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E1 01 00 00: call 0x58584530
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 91 00 00 00: je 0x585843ef
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A1 12 F1 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x12
        __asm _emit 0xf1
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B7 01 00 00: call 0x58584530
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 75 2E: jne 0x585843ad
        __asm _emit 0x75
        __asm _emit 0x2e
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 17: je 0x585843a2
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 18h], edx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 E8: call dword ptr [ebp - 0x18]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe8
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x585843a9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 44: jmp 0x585843ef
        __asm _emit 0xeb
        __asm _emit 0x44
        ; Exact mapped bytes EB 3D: jmp 0x585843ea
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 5B 12 F1 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x12
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 17: je 0x585843dd
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 20h], ecx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 E0: call dword ptr [ebp - 0x20]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe0
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x585843e4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes E9 65 FF FF FF: jmp 0x58584354
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0f0h], 0
        ; Exact mapped bytes 74 27: je 0x58584422
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f0h]
        mov dword ptr [ebp - 2ch], edx
        push 14h
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 22 CC 2A 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xcc
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0f0h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 1d30h], 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 1d30h], 1
        push 74h
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1d38h
        push ecx
        ; Exact mapped bytes E8 C1 89 2C 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x89
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 1db4h], 0
        ; Exact mapped bytes 74 27: je 0x58584485
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1db4h]
        mov dword ptr [ebp - 30h], ecx
        push 14h
        mov edx, dword ptr [ebp - 30h]
        push edx
        ; Exact mapped bytes E8 BF CB 2A 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xcb
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 1db4h], 0
        pop esi
        mov esp, ebp
    }
}
