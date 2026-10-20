// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886EEB3 .. +0x18B bytes.
extern "C" __declspec(naked) void FUN_5886eeb3_5886EEB3() {
    __asm {
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 18: jne 0x5886eed9
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes E8 A9 35 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x35
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C7 00 16 00 00 00: mov dword ptr [eax], 0x16
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 DA 20 FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x20
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 83 C8 FF: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0xff
        ; Exact mapped bytes E9 61 01 00 00: jmp 0x5886f03a
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes C1 E8 0D: shr eax, 0xd
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x0d
        ; Exact mapped bytes 43: inc ebx
        __asm _emit 0x43
        ; Exact mapped bytes 84 C3: test bl, al
        __asm _emit 0x84
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 84 4A 01 00 00: je 0x5886f036
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes C1 E8 0C: shr eax, 0xc
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x0c
        ; Exact mapped bytes 84 C3: test bl, al
        __asm _emit 0x84
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 85 38 01 00 00: jne 0x5886f036
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes D1 E8: shr eax, 1
        __asm _emit 0xd1
        __asm _emit 0xe8
        ; Exact mapped bytes 84 C3: test bl, al
        __asm _emit 0x84
        __asm _emit 0xc3
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 74 0E: je 0x5886ef1c
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 6A 10: push 0x10
        __asm _emit 0x6a
        __asm _emit 0x10
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 83 C0 0C: add eax, 0xc
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x0c
        ; Exact mapped bytes F0 09 08: lock or dword ptr [eax], ecx
        __asm _emit 0xf0
        __asm _emit 0x09
        __asm _emit 0x08
        ; Exact mapped bytes E9 1A 01 00 00: jmp 0x5886f036
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C0 0C: add eax, 0xc
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x0c
        ; Exact mapped bytes F0 09 18: lock or dword ptr [eax], ebx
        __asm _emit 0xf0
        __asm _emit 0x09
        __asm _emit 0x18
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes A9 C0 04 00 00: test eax, 0x4c0
        __asm _emit 0xa9
        __asm _emit 0xc0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 09: jne 0x5886ef39
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes FF 75 08: push dword ptr [ebp + 8]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes E8 34 24 00 00: call 0x5887136c
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 8B 48 04: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 89 08: mov dword ptr [eax], ecx
        __asm _emit 0x89
        __asm _emit 0x08
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 70 18: mov esi, dword ptr [eax + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x70
        __asm _emit 0x18
        ; Exact mapped bytes 8B 78 04: mov edi, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x04
        ; Exact mapped bytes E8 06 DD FF FF: call 0x5886cc56
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 B6 FA FF FF: call 0x5886ea0e
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 83 C4 10: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x10
        ; Exact mapped bytes 89 41 08: mov dword ptr [ecx + 8], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x08
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 8B 50 08: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 0F 84 AF 00 00 00: je 0x5886f01e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 FA FF: cmp edx, -1
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 A6 00 00 00: je 0x5886f01e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes A8 06: test al, 6
        __asm _emit 0xa8
        __asm _emit 0x06
        ; Exact mapped bytes 75 5D: jne 0x5886efdd
        __asm _emit 0x75
        __asm _emit 0x5d
        ; Exact mapped bytes FF 75 08: push dword ptr [ebp + 8]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes E8 CE DC FF FF: call 0x5886cc56
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 83 F8 FF: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 74 35: je 0x5886efc3
        __asm _emit 0x74
        __asm _emit 0x35
        ; Exact mapped bytes FF 75 08: push dword ptr [ebp + 8]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes E8 C0 DC FF FF: call 0x5886cc56
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 83 F8 FE: cmp eax, -2
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xfe
        ; Exact mapped bytes 74 27: je 0x5886efc3
        __asm _emit 0x74
        __asm _emit 0x27
        ; Exact mapped bytes 8B 75 08: mov esi, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 B1 DC FF FF: call 0x5886cc56
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes C1 FF 06: sar edi, 6
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0x06
        ; Exact mapped bytes E8 A6 DC FF FF: call 0x5886cc56
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 83 E0 3F: and eax, 0x3f
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x3f
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 6B C8 38: imul ecx, eax, 0x38
        __asm _emit 0x6b
        __asm _emit 0xc8
        __asm _emit 0x38
        ; Exact mapped bytes 8B 04 BD B0 99 96 58: mov eax, dword ptr [edi*4 + 0x589699b0]
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0xbd
        __asm _emit 0xb0
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 03 C1: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xc1
        ; Exact mapped bytes EB 05: jmp 0x5886efc8
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes B8 30 75 90 58: mov eax, 0x58907530
        __asm _emit 0xb8
        __asm _emit 0x30
        __asm _emit 0x75
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 8A 40 28: mov al, byte ptr [eax + 0x28]
        __asm _emit 0x8a
        __asm _emit 0x40
        __asm _emit 0x28
        ; Exact mapped bytes 24 82: and al, 0x82
        __asm _emit 0x24
        __asm _emit 0x82
        ; Exact mapped bytes 3C 82: cmp al, 0x82
        __asm _emit 0x3c
        __asm _emit 0x82
        ; Exact mapped bytes 75 0C: jne 0x5886efdd
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 6A 20: push 0x20
        __asm _emit 0x6a
        __asm _emit 0x20
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 83 C0 0C: add eax, 0xc
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x0c
        ; Exact mapped bytes F0 09 08: lock or dword ptr [eax], ecx
        __asm _emit 0xf0
        __asm _emit 0x09
        __asm _emit 0x08
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 81 78 18 00 02 00 00: cmp dword ptr [eax + 0x18], 0x200
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 26: jne 0x5886f00f
        __asm _emit 0x75
        __asm _emit 0x26
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes C1 E8 06: shr eax, 6
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x06
        ; Exact mapped bytes 84 C3: test bl, al
        __asm _emit 0x84
        __asm _emit 0xc3
        ; Exact mapped bytes 74 18: je 0x5886f00c
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 8B 40 0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes C1 E8 08: shr eax, 8
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        ; Exact mapped bytes 84 C3: test bl, al
        __asm _emit 0x84
        __asm _emit 0xc3
        ; Exact mapped bytes 75 0A: jne 0x5886f00c
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes C7 40 18 00 10 00 00: mov dword ptr [eax + 0x18], 0x1000
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 8B 08: mov ecx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes FF 48 08: dec dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 8A 11: mov dl, byte ptr [ecx]
        __asm _emit 0x8a
        __asm _emit 0x11
        ; Exact mapped bytes 41: inc ecx
        __asm _emit 0x41
        ; Exact mapped bytes 89 08: mov dword ptr [eax], ecx
        __asm _emit 0x89
        __asm _emit 0x08
        ; Exact mapped bytes 0F B6 C2: movzx eax, dl
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc2
        ; Exact mapped bytes EB 1B: jmp 0x5886f039
        __asm _emit 0xeb
        __asm _emit 0x1b
        ; Exact mapped bytes 6A 08: push 8
        __asm _emit 0x6a
        __asm _emit 0x08
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 6A 10: push 0x10
        __asm _emit 0x6a
        __asm _emit 0x10
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 0F 45 CE: cmovne ecx, esi
        __asm _emit 0x0f
        __asm _emit 0x45
        __asm _emit 0xce
        ; Exact mapped bytes 83 C0 0C: add eax, 0xc
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x0c
        ; Exact mapped bytes F0 09 08: lock or dword ptr [eax], ecx
        __asm _emit 0xf0
        __asm _emit 0x09
        __asm _emit 0x08
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 83 61 08 00: and dword ptr [ecx + 8], 0
        __asm _emit 0x83
        __asm _emit 0x61
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 83 C8 FF: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0xff
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
