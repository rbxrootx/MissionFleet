// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BCF80 .. +0xD8 bytes.
extern "C" __declspec(naked) void FUN_004bcf80_004BCF80() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 83 EC 10: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x10
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 89 4D F0: mov dword ptr [ebp - 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 68 9B 00 00 00: push 0x9b
        __asm _emit 0x68
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 E8 44 67 00: push 0x6744e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 F0: mov eax, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 C1 D2 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xd2
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 55 F0: mov edx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 41 08: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x08
        ; Exact mapped bytes 3B 42 0C: cmp eax, dword ptr [edx + 0xc]
        __asm _emit 0x3b
        __asm _emit 0x42
        __asm _emit 0x0c
        ; Exact mapped bytes 0F 84 A0 00 00 00: je 0x4bd051
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 81 79 08 FF FF FF 7F: cmp dword ptr [ecx + 8], 0x7fffffff
        __asm _emit 0x81
        __asm _emit 0x79
        __asm _emit 0x08
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 76 14: jbe 0x4bcfd1
        __asm _emit 0x76
        __asm _emit 0x14
        ; Exact mapped bytes 68 A1 00 00 00: push 0xa1
        __asm _emit 0x68
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 E8 44 67 00: push 0x6744e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes E8 74 BD 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xbd
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 01: je 0x4bcfd1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 75 DA: jne 0x4bcfb1
        __asm _emit 0x75
        __asm _emit 0xda
        ; Exact mapped bytes C7 45 FC 00 00 00 00: mov dword ptr [ebp - 4], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 F0: mov eax, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 83 78 08 00: cmp dword ptr [eax + 8], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 74 40: je 0x4bd027
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 68 A6 00 00 00: push 0xa6
        __asm _emit 0x68
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 E8 44 67 00: push 0x6744e8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 51 08: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes D1 E2: shl edx, 1
        __asm _emit 0xd1
        __asm _emit 0xe2
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 D4 F0 00 00: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 89 45 F8: mov dword ptr [ebp - 8], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 8B 45 F8: mov eax, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 89 45 FC: mov dword ptr [ebp - 4], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 51 08: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes D1 E2: shl edx, 1
        __asm _emit 0xd1
        __asm _emit 0xe2
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 45 F0: mov eax, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 48 04: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 FC: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 DC 82 FA FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x82
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 45 F0: mov eax, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 48 04: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 89 4D F4: mov dword ptr [ebp - 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes 8B 55 F4: mov edx, dword ptr [ebp - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xf4
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 70 F4 00 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 8B 45 F0: mov eax, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 89 48 04: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 8B 55 F0: mov edx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 45 F0: mov eax, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 48 08: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        ; Exact mapped bytes 89 4A 0C: mov dword ptr [edx + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x0c
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
