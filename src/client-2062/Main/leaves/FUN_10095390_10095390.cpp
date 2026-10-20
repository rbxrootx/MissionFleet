// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10095390 .. +0xAA bytes.
extern "C" __declspec(naked) void FUN_10095390_10095390() {
    __asm {
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 44 24 08: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 89 4C 24 00: mov dword ptr [esp], ecx
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 95 00 00 00: je 0x10095436
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 10: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 86 89 00 00 00: jbe 0x10095436
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B 1D A0 50 17 10: mov ebx, dword ptr [0x101750a0]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B 6C 24 14: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 89 44 24 18: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes EB 04: jmp 0x100953c5
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 8B 4C 24 10: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8A 45 00: mov al, byte ptr [ebp]
        __asm _emit 0x8a
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 84 C0: test al, al
        __asm _emit 0x84
        __asm _emit 0xc0
        ; Exact mapped bytes 75 27: jne 0x100953f3
        __asm _emit 0x75
        __asm _emit 0x27
        ; Exact mapped bytes 8B 71 6C: mov esi, dword ptr [ecx + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x71
        __asm _emit 0x6c
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 74 51: je 0x10095424
        __asm _emit 0x74
        __asm _emit 0x51
        ; Exact mapped bytes 8D 7D 01: lea edi, [ebp + 1]
        __asm _emit 0x8d
        __asm _emit 0x7d
        __asm _emit 0x01
        ; Exact mapped bytes 8B 46 70: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x70
        ; Exact mapped bytes 8B 40 6C: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x6c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 09: je 0x100953ed
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 8B 76 54: mov esi, dword ptr [esi + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x76
        __asm _emit 0x54
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 EB: jne 0x100953d6
        __asm _emit 0x75
        __asm _emit 0xeb
        ; Exact mapped bytes EB 37: jmp 0x10095424
        __asm _emit 0xeb
        __asm _emit 0x37
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 74 33: je 0x10095424
        __asm _emit 0x74
        __asm _emit 0x33
        ; Exact mapped bytes EB 29: jmp 0x1009541c
        __asm _emit 0xeb
        __asm _emit 0x29
        ; Exact mapped bytes 3C 01: cmp al, 1
        __asm _emit 0x3c
        __asm _emit 0x01
        ; Exact mapped bytes 75 2D: jne 0x10095424
        __asm _emit 0x75
        __asm _emit 0x2d
        ; Exact mapped bytes 8B 71 64: mov esi, dword ptr [ecx + 0x64]
        __asm _emit 0x8b
        __asm _emit 0x71
        __asm _emit 0x64
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 74 26: je 0x10095424
        __asm _emit 0x74
        __asm _emit 0x26
        ; Exact mapped bytes 8D 7D 01: lea edi, [ebp + 1]
        __asm _emit 0x8d
        __asm _emit 0x7d
        __asm _emit 0x01
        ; Exact mapped bytes 8B 4E 70: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x70
        ; Exact mapped bytes 8B 41 6C: mov eax, dword ptr [ecx + 0x6c]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x6c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 09: je 0x10095418
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 8B 76 54: mov esi, dword ptr [esi + 0x54]
        __asm _emit 0x8b
        __asm _emit 0x76
        __asm _emit 0x54
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 EB: jne 0x10095401
        __asm _emit 0x75
        __asm _emit 0xeb
        ; Exact mapped bytes EB 0C: jmp 0x10095424
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 74 08: je 0x10095424
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 EC 02 F8 FF: call 0x10015710
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x02
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 44 24 18: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 83 C5 60: add ebp, 0x60
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x60
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 89 44 24 18: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 75 8F: jne 0x100953c1
        __asm _emit 0x75
        __asm _emit 0x8f
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
