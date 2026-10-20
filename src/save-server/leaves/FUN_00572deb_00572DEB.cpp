// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00572DEB .. +0x179 bytes.
extern "C" __declspec(naked) void FUN_00572deb_00572DEB() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 F3 F8 58 00: push 0x58f8f3
        __asm _emit 0x68
        __asm _emit 0xf3
        __asm _emit 0xf8
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 EC 0C: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x0c
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 89 4D E8: mov dword ptr [ebp - 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes 68 C8 01 00 00: push 0x1c8
        __asm _emit 0x68
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 14 CD 67 00: push 0x67cd14
        __asm _emit 0x68
        __asm _emit 0x14
        __asm _emit 0xcd
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 E8: mov eax, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 41 74 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x74
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes 83 7D 08 00: cmp dword ptr [ebp + 8], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 74 23: je 0x572e48
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 12 06 F3 FF: call 0x4a3442
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x06
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 14: jne 0x572e48
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 68 C9 01 00 00: push 0x1c9
        __asm _emit 0x68
        __asm _emit 0xc9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 14 CD 67 00: push 0x67cd14
        __asm _emit 0x68
        __asm _emit 0x14
        __asm _emit 0xcd
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes E8 FD 5E FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x5e
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 01: je 0x572e48
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
        ; Exact mapped bytes 75 D1: jne 0x572e1f
        __asm _emit 0x75
        __asm _emit 0xd1
        ; Exact mapped bytes 83 7D 0C 00: cmp dword ptr [ebp + 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 74 23: je 0x572e77
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 8B 45 0C: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 E3 05 F3 FF: call 0x4a3442
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x05
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 14: jne 0x572e77
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 68 CA 01 00 00: push 0x1ca
        __asm _emit 0x68
        __asm _emit 0xca
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 14 CD 67 00: push 0x67cd14
        __asm _emit 0x68
        __asm _emit 0x14
        __asm _emit 0xcd
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes E8 CE 5E FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x5e
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 01: je 0x572e77
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 75 D1: jne 0x572e4e
        __asm _emit 0x75
        __asm _emit 0xd1
        ; Exact mapped bytes 8B 55 E8: mov edx, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe8
        ; Exact mapped bytes 83 BA AC 00 00 00 00: cmp dword ptr [edx + 0xac], 0
        __asm _emit 0x83
        __asm _emit 0xba
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 C4 00 00 00: je 0x572f51
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 7D 0C 00: cmp dword ptr [ebp + 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 75 15: jne 0x572ea8
        __asm _emit 0x75
        __asm _emit 0x15
        ; Exact mapped bytes 68 03 F0 00 00: push 0xf003
        __asm _emit 0x68
        __asm _emit 0x03
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D E8: mov ecx, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes 81 C1 B0 00 00 00: add ecx, 0xb0
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 DA 6D F6 FF: call 0x4d9c80
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x6d
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 12: jmp 0x572eba
        __asm _emit 0xeb
        __asm _emit 0x12
        ; Exact mapped bytes 8B 45 0C: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D E8: mov ecx, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes 81 C1 B0 00 00 00: add ecx, 0xb0
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 E3 9C F5 FF: call 0x4ccb9d
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x9c
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8D 4D F0: lea ecx, [ebp - 0x10]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E8 45 1E FB FF: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x1e
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes C7 45 FC 00 00 00 00: mov dword ptr [ebp - 4], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4D F0: lea ecx, [ebp - 0x10]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 E8: mov edx, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe8
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 8B 4D E8: mov ecx, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes FF 90 38 01 00 00: call dword ptr [eax + 0x138]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 11: jne 0x572ef0
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes C7 45 FC FF FF FF FF: mov dword ptr [ebp - 4], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 4D F0: lea ecx, [ebp - 0x10]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E8 FE 99 F5 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x99
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes EB 61: jmp 0x572f51
        __asm _emit 0xeb
        __asm _emit 0x61
        ; Exact mapped bytes 8D 4D EC: lea ecx, [ebp - 0x14]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes E8 0F 1E FB FF: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x1e
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes C6 45 FC 01: mov byte ptr [ebp - 4], 1
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x01
        ; Exact mapped bytes 8B 4D E8: mov ecx, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes 81 C1 B0 00 00 00: add ecx, 0xb0
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 A0 1E FB FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x1e
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 4D F0: lea ecx, [ebp - 0x10]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E8 97 1E FB FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x1e
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 03 E0 00 00: push 0xe003
        __asm _emit 0x68
        __asm _emit 0x03
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4D EC: lea ecx, [ebp - 0x14]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 87 1F F9 FF: call 0x504ea9
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x1f
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 8D 4D EC: lea ecx, [ebp - 0x14]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes E8 80 1E FB FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x1e
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 55 E8: mov edx, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe8
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 8B 4D E8: mov ecx, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes FF 50 58: call dword ptr [eax + 0x58]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x58
        ; Exact mapped bytes C6 45 FC 00: mov byte ptr [ebp - 4], 0
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4D EC: lea ecx, [ebp - 0x14]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes E8 AA 99 F5 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x99
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes C7 45 FC FF FF FF FF: mov dword ptr [ebp - 4], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8D 4D F0: lea ecx, [ebp - 0x10]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E8 9B 99 F5 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x99
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D F4: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
