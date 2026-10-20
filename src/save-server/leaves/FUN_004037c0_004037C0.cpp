// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004037C0 .. +0x11C bytes.
extern "C" __declspec(naked) void FUN_004037c0_004037C0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 83 EC 50: sub esp, 0x50
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x50
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 7D B0: lea edi, [ebp - 0x50]
        __asm _emit 0x8d
        __asm _emit 0x7d
        __asm _emit 0xb0
        ; Exact mapped bytes B9 14 00 00 00: mov ecx, 0x14
        __asm _emit 0xb9
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 CC CC CC CC: mov eax, 0xcccccccc
        __asm _emit 0xb8
        __asm _emit 0xcc
        __asm _emit 0xcc
        __asm _emit 0xcc
        __asm _emit 0xcc
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes 89 4D FC: mov dword ptr [ebp - 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 48 04: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 83 C1 01: add ecx, 1
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 89 4A 04: mov dword ptr [edx + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x04
        ; Exact mapped bytes 8B F4: mov esi, esp
        __asm _emit 0x8b
        __asm _emit 0xf4
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 80 00 00 00: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 03: push 3
        __asm _emit 0x6a
        __asm _emit 0x03
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 68 00 00 00 80: push 0x80000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes 8B 45 FC: mov eax, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 83 C0 08: add eax, 8
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x08
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 D0 B7 68 00: call dword ptr [0x68b7d0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 3B F4: cmp esi, esp
        __asm _emit 0x3b
        __asm _emit 0xf4
        ; Exact mapped bytes E8 DC 15 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x15
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 F8: mov dword ptr [ebp - 8], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 83 7D F8 FF: cmp dword ptr [ebp - 8], -1
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 0F 84 A5 00 00 00: je 0x4038c6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B F4: mov esi, esp
        __asm _emit 0x8b
        __asm _emit 0xf4
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 83 C1 4C: add ecx, 0x4c
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x4c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 F8: mov edx, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xf8
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 3B F4: cmp esi, esp
        __asm _emit 0x3b
        __asm _emit 0xf4
        ; Exact mapped bytes E8 B1 15 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x15
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 8B F4: mov esi, esp
        __asm _emit 0x8b
        __asm _emit 0xf4
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 45 F0: lea eax, [ebp - 0x10]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 04: push 4
        __asm _emit 0x6a
        __asm _emit 0x04
        ; Exact mapped bytes 8D 4D F4: lea ecx, [ebp - 0xc]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 F8: mov edx, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xf8
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 C8 B7 68 00: call dword ptr [0x68b7c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 3B F4: cmp esi, esp
        __asm _emit 0x3b
        __asm _emit 0xf4
        ; Exact mapped bytes E8 92 15 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x15
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x403869
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 8B 45 0C: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 83 E8 01: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        ; Exact mapped bytes 89 45 0C: mov dword ptr [ebp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 83 7D 0C 00: cmp dword ptr [ebp + 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 7E 3F: jle 0x4038ae
        __asm _emit 0x7e
        __asm _emit 0x3f
        ; Exact mapped bytes 8B F4: mov esi, esp
        __asm _emit 0x8b
        __asm _emit 0xf4
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D F4: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes 83 C1 50: add ecx, 0x50
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 F8: mov edx, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xf8
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 3B F4: cmp esi, esp
        __asm _emit 0x3b
        __asm _emit 0xf4
        ; Exact mapped bytes E8 63 15 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x15
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 8B F4: mov esi, esp
        __asm _emit 0x8b
        __asm _emit 0xf4
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 45 F0: lea eax, [ebp - 0x10]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 04: push 4
        __asm _emit 0x6a
        __asm _emit 0x04
        ; Exact mapped bytes 8D 4D F4: lea ecx, [ebp - 0xc]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 F8: mov edx, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xf8
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 C8 B7 68 00: call dword ptr [0x68b7c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 3B F4: cmp esi, esp
        __asm _emit 0x3b
        __asm _emit 0xf4
        ; Exact mapped bytes E8 44 15 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x15
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB B2: jmp 0x403860
        __asm _emit 0xeb
        __asm _emit 0xb2
        ; Exact mapped bytes 8B F4: mov esi, esp
        __asm _emit 0x8b
        __asm _emit 0xf4
        ; Exact mapped bytes 8B 45 F8: mov eax, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 C4 B7 68 00: call dword ptr [0x68b7c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 3B F4: cmp esi, esp
        __asm _emit 0x3b
        __asm _emit 0xf4
        ; Exact mapped bytes E8 2F 15 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x15
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 F4: mov eax, dword ptr [ebp - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes EB 03: jmp 0x4038c9
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 83 C8 FF: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0xff
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 83 C4 50: add esp, 0x50
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x50
        ; Exact mapped bytes 3B EC: cmp ebp, esp
        __asm _emit 0x3b
        __asm _emit 0xec
        ; Exact mapped bytes E8 1A 15 06 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x15
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
