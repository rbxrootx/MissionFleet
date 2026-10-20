// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00473E3D .. +0x230 bytes.
extern "C" __declspec(naked) void FUN_00473e3d_00473E3D() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57bdech
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
        sub esp, 44h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 50h]
        mov ecx, 11h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 3ch], ecx
        push 53h
        push 5bb2ech
        push 24h
        ; Exact mapped bytes E8 B7 91 07 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x91
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 0F: je 0x473e9e
        __asm _emit 0x74
        __asm _emit 0x0f
        push 18h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F7 CF F9 FF: call 0x410e90
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xcf
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x473ea5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 3ch]
        add edx, 64h
        mov esi, esp
        push edx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 12 49 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x49
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x473f09
        __asm _emit 0x74
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 3ch]
        add eax, 64h
        mov esi, esp
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F8 48 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        add ecx, 64h
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CE D0 F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xd0
        __asm _emit 0xf9
        __asm _emit 0xff
        push 1
        push 5bb320h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 BF D0 F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xd0
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 47: jmp 0x473f50
        __asm _emit 0xeb
        __asm _emit 0x47
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 3A: je 0x473f49
        __asm _emit 0x74
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 1A: je 0x473f3b
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 AA 48 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x473f42
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov dword ptr [ebp - 10h], 0
        xor eax, eax
        ; Exact mapped bytes E9 01 01 00 00: jmp 0x474051
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 75: je 0x473fcb
        __asm _emit 0x74
        __asm _emit 0x75
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 30 65 F9 FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x65
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 07 65 F9 FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x65
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        push 1
        push 0
        push 80020f01h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B7 32 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 4A: je 0x473fc9
        __asm _emit 0x74
        __asm _emit 0x4a
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 3A: je 0x473fbf
        __asm _emit 0x74
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 24h], ecx
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 1A: je 0x473fb1
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 34 48 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x473fb8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov dword ptr [ebp - 10h], 0
        mov eax, 1
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x474051
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 44: jmp 0x47400f
        __asm _emit 0xeb
        __asm _emit 0x44
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 3A: je 0x47400b
        __asm _emit 0x74
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 2ch], edx
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 1A: je 0x473ffd
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 2ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 E8 47 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x474004
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov dword ptr [ebp - 10h], 0
        xor eax, eax
        ; Exact mapped bytes EB 42: jmp 0x474051
        __asm _emit 0xeb
        __asm _emit 0x42
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 3A: je 0x47404f
        __asm _emit 0x74
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 34h], ecx
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 1A: je 0x474041
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 A4 47 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x47
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 07: jmp 0x474048
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 50h], 0
        mov dword ptr [ebp - 10h], 0
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
        add esp, 50h
        cmp ebp, esp
        ; Exact mapped bytes E8 79 47 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x47
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
