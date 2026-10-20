// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00401370 .. +0x3D1 bytes.
extern "C" __declspec(naked) void FUN_00401370_00401370() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 67 93 43 00: push 0x439367
        __asm _emit 0x68
        __asm _emit 0x67
        __asm _emit 0x93
        __asm _emit 0x43
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
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 83 EC 4C: sub esp, 0x4c
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x4c
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 89 65 F0: mov dword ptr [ebp - 0x10], esp
        __asm _emit 0x89
        __asm _emit 0x65
        __asm _emit 0xf0
        ; Exact mapped bytes 89 4D E4: mov dword ptr [ebp - 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes C7 45 FC 00 00 00 00: mov dword ptr [ebp - 4], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 E4: mov eax, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 83 C0 08: add eax, 8
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x08
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D E4: mov ecx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes E8 F6 FD FF FF: call 0x4011a1
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D E4: mov ecx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes 83 C1 08: add ecx, 8
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x08
        ; Exact mapped bytes E8 54 C6 00 00: call 0x40da0a
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 E0: mov dword ptr [ebp - 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe0
        ; Exact mapped bytes 83 7D E0 00: cmp dword ptr [ebp - 0x20], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xe0
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 54 03 00 00: je 0x401717
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D E4: mov ecx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes 83 C1 08: add ecx, 8
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x08
        ; Exact mapped bytes E8 32 31 00 00: call 0x404500
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 45 EC 00 00 00 00: mov dword ptr [ebp - 0x14], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x4013e0
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 8B 4D EC: mov ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 83 C1 01: add ecx, 1
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 89 4D EC: mov dword ptr [ebp - 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 8B 55 E4: mov edx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact mapped bytes 8B 4A 04: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x04
        ; Exact mapped bytes E8 35 31 00 00: call 0x404520
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 DC: mov dword ptr [ebp - 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes 8B 45 EC: mov eax, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 3B 45 DC: cmp eax, dword ptr [ebp - 0x24]
        __asm _emit 0x3b
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes 0F 8D FA 02 00 00: jge 0x4016f4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xfa
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D E4: mov ecx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes 81 C1 28 01 00 00: add ecx, 0x128
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 27 2E 00 00: call 0x404230
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 8B 55 E4: mov edx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact mapped bytes 81 C2 2C 01 00 00: add edx, 0x12c
        __asm _emit 0x81
        __asm _emit 0xc2
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 15 2E 00 00: call 0x404230
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D E4: mov ecx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes 81 C1 28 01 00 00: add ecx, 0x128
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 47 CB 02 00: call 0x42df75
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xcb
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 D8: mov dword ptr [ebp - 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes 8B 45 EC: mov eax, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D E4: mov ecx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes 8B 49 04: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x04
        ; Exact mapped bytes E8 00 31 00 00: call 0x404540
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 D4: mov dword ptr [ebp - 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd4
        ; Exact mapped bytes 8B 55 D8: mov edx, dword ptr [ebp - 0x28]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xd8
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 45 D4: mov eax, dword ptr [ebp - 0x2c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xd4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 64 C2 43 00: call dword ptr [0x43c264]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 85 02 00 00: jne 0x4016de
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D EC: mov ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 E4: mov edx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact mapped bytes 8B 4A 04: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x04
        ; Exact mapped bytes E8 D8 30 00 00: call 0x404540
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 D0: mov dword ptr [ebp - 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 45 D0: mov eax, dword ptr [ebp - 0x30]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xd0
        ; Exact mapped bytes 83 78 30 01: cmp dword ptr [eax + 0x30], 1
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x30
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 3D 02 00 00: jne 0x4016b5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D EC: mov ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 E4: mov edx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact mapped bytes 8B 4A 04: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x04
        ; Exact mapped bytes E8 B9 30 00 00: call 0x404540
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 CC: mov dword ptr [ebp - 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xcc
        ; Exact mapped bytes 68 E0 80 44 00: push 0x4480e0
        __asm _emit 0x68
        __asm _emit 0xe0
        __asm _emit 0x80
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 CC: mov eax, dword ptr [ebp - 0x34]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xcc
        ; Exact mapped bytes 83 C0 1C: add eax, 0x1c
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x1c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 68 C2 43 00: call dword ptr [0x43c268]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 64: je 0x401504
        __asm _emit 0x74
        __asm _emit 0x64
        ; Exact mapped bytes 8B 4D EC: mov ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 E4: mov edx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact mapped bytes 8B 4A 04: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x04
        ; Exact mapped bytes E8 91 30 00 00: call 0x404540
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 C8: mov dword ptr [ebp - 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xc8
        ; Exact mapped bytes 68 EC 80 44 00: push 0x4480ec
        __asm _emit 0x68
        __asm _emit 0xec
        __asm _emit 0x80
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 C8: mov eax, dword ptr [ebp - 0x38]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xc8
        ; Exact mapped bytes 83 C0 1C: add eax, 0x1c
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x1c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 68 C2 43 00: call dword ptr [0x43c268]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 3C: je 0x401504
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 4D E4: mov ecx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes 81 C1 2C 01 00 00: add ecx, 0x12c
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 3A 2E 00 00: call 0x404310
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 C4: mov dword ptr [ebp - 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xc4
        ; Exact mapped bytes 8B 4D EC: mov ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 E4: mov edx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact mapped bytes 8B 4A 04: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x04
        ; Exact mapped bytes E8 58 30 00 00: call 0x404540
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 C0: mov dword ptr [ebp - 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 45 C4: mov eax, dword ptr [ebp - 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xc4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D C0: mov ecx, dword ptr [ebp - 0x40]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xc0
        ; Exact mapped bytes 83 C1 1C: add ecx, 0x1c
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x1c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 64 C2 43 00: call dword ptr [0x43c264]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 85 9E 01 00 00: jne 0x4016a2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 E4: mov edx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact mapped bytes 83 BA 30 01 00 00 00: cmp dword ptr [edx + 0x130], 0
        __asm _emit 0x83
        __asm _emit 0xba
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 8E 00 00 00: je 0x4015a2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 EC: mov eax, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D E4: mov ecx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes 8B 49 04: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x04
        ; Exact mapped bytes E8 1D 30 00 00: call 0x404540
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 BC: mov dword ptr [ebp - 0x44], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xbc
        ; Exact mapped bytes 8B 55 BC: mov edx, dword ptr [ebp - 0x44]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xbc
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8A 42 18: mov al, byte ptr [edx + 0x18]
        __asm _emit 0x8a
        __asm _emit 0x42
        __asm _emit 0x18
        ; Exact mapped bytes 3D DC 00 00 00: cmp eax, 0xdc
        __asm _emit 0x3d
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 56 01 00 00: jne 0x40168f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D EC: mov ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 E4: mov edx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact mapped bytes 8B 4A 04: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x04
        ; Exact mapped bytes E8 F8 2F 00 00: call 0x404540
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 B8: mov dword ptr [ebp - 0x48], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xb8
        ; Exact mapped bytes 8B 45 B8: mov eax, dword ptr [ebp - 0x48]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xb8
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8A 48 19: mov cl, byte ptr [eax + 0x19]
        __asm _emit 0x8a
        __asm _emit 0x48
        __asm _emit 0x19
        ; Exact mapped bytes 83 F9 47: cmp ecx, 0x47
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x47
        ; Exact mapped bytes 0F 85 33 01 00 00: jne 0x40168f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 EC: mov edx, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 45 E4: mov eax, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 8B 48 04: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes E8 D5 2F 00 00: call 0x404540
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 B4: mov dword ptr [ebp - 0x4c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xb4
        ; Exact mapped bytes 8B 4D B4: mov ecx, dword ptr [ebp - 0x4c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xb4
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 8A 51 1A: mov dl, byte ptr [ecx + 0x1a]
        __asm _emit 0x8a
        __asm _emit 0x51
        __asm _emit 0x1a
        ; Exact mapped bytes 83 FA 14: cmp edx, 0x14
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x14
        ; Exact mapped bytes 0F 85 10 01 00 00: jne 0x40168f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 EC: mov eax, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D E4: mov ecx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes 8B 49 04: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x04
        ; Exact mapped bytes E8 B2 2F 00 00: call 0x404540
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 B0: mov dword ptr [ebp - 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xb0
        ; Exact mapped bytes 8B 55 B0: mov edx, dword ptr [ebp - 0x50]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xb0
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8A 42 1B: mov al, byte ptr [edx + 0x1b]
        __asm _emit 0x8a
        __asm _emit 0x42
        __asm _emit 0x1b
        ; Exact mapped bytes 83 F8 01: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 ED 00 00 00: jne 0x40168f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D EC: mov ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 E4: mov edx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact mapped bytes 8B 4A 04: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x04
        ; Exact mapped bytes E8 89 BA 00 00: call 0x40d03c
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 E4: mov eax, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 05 40 01 00 00: add eax, 0x140
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 4D EC: lea ecx, [ebp - 0x14]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 E4: mov edx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact mapped bytes 8B 4A 04: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x04
        ; Exact mapped bytes E8 29 BC 00 00: call 0x40d1f4
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 E4: mov eax, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 05 50 01 00 00: add eax, 0x150
        __asm _emit 0x05
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 4D EC: lea ecx, [ebp - 0x14]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 E4: mov edx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact mapped bytes 8B 4A 04: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x04
        ; Exact mapped bytes E8 CD BC 00 00: call 0x40d2b0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 E4: mov eax, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 05 48 01 00 00: add eax, 0x148
        __asm _emit 0x05
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 4D EC: lea ecx, [ebp - 0x14]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 E4: mov edx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact mapped bytes 8B 4A 04: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x04
        ; Exact mapped bytes E8 23 BC 00 00: call 0x40d21e
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 E4: mov eax, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 05 4C 01 00 00: add eax, 0x14c
        __asm _emit 0x05
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 4D EC: lea ecx, [ebp - 0x14]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 E4: mov edx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact mapped bytes 8B 4A 04: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x04
        ; Exact mapped bytes E8 38 BC 00 00: call 0x40d24b
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4D E8: lea ecx, [ebp - 0x18]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes E8 95 2C 00 00: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 AC: mov dword ptr [ebp - 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xac
        ; Exact mapped bytes C6 45 FC 01: mov byte ptr [ebp - 4], 1
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x01
        ; Exact mapped bytes 8B 45 E4: mov eax, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 05 44 01 00 00: add eax, 0x144
        __asm _emit 0x05
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 4D E8: lea ecx, [ebp - 0x18]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes E8 B1 C6 02 00: call 0x42dce4
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xc6
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4D E8: lea ecx, [ebp - 0x18]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes E8 B7 B4 02 00: call 0x42caf2
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xb4
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4D E8: lea ecx, [ebp - 0x18]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 55 EC: lea edx, [ebp - 0x14]
        __asm _emit 0x8d
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 45 E4: mov eax, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 8B 48 04: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes E8 2A BC 00 00: call 0x40d278
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4D EC: lea ecx, [ebp - 0x14]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 E4: mov edx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact mapped bytes 8B 4A 04: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x04
        ; Exact mapped bytes E8 05 BA 00 00: call 0x40d062
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 45 EC: lea eax, [ebp - 0x14]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D E4: mov ecx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes E8 DA 0C 00 00: call 0x402343
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4D EC: lea ecx, [ebp - 0x14]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4D E4: mov ecx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes E8 F6 01 00 00: call 0x40186b
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 55 EC: lea edx, [ebp - 0x14]
        __asm _emit 0x8d
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 4D E4: mov ecx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes E8 A8 09 00 00: call 0x402029
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C6 45 FC 00: mov byte ptr [ebp - 4], 0
        __asm _emit 0xc6
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4D E8: lea ecx, [ebp - 0x18]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes E8 1E C5 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xc5
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 11: jmp 0x4016a0
        __asm _emit 0xeb
        __asm _emit 0x11
        ; Exact mapped bytes 6A 06: push 6
        __asm _emit 0x6a
        __asm _emit 0x06
        ; Exact mapped bytes 8B 45 EC: mov eax, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D E4: mov ecx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes 8B 49 04: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x04
        ; Exact mapped bytes E8 9C B9 00 00: call 0x40d03c
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 11: jmp 0x4016b3
        __asm _emit 0xeb
        __asm _emit 0x11
        ; Exact mapped bytes 6A 05: push 5
        __asm _emit 0x6a
        __asm _emit 0x05
        ; Exact mapped bytes 8B 55 EC: mov edx, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 45 E4: mov eax, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 8B 48 04: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes E8 89 B9 00 00: call 0x40d03c
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 27: jmp 0x4016dc
        __asm _emit 0xeb
        __asm _emit 0x27
        ; Exact mapped bytes 8B 4D EC: mov ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 E4: mov edx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact mapped bytes 8B 4A 04: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x04
        ; Exact mapped bytes E8 7C 2E 00 00: call 0x404540
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 A8: mov dword ptr [ebp - 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes 8B 45 A8: mov eax, dword ptr [ebp - 0x58]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes 83 78 30 02: cmp dword ptr [eax + 0x30], 2
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x30
        __asm _emit 0x02
        ; Exact mapped bytes 75 0C: jne 0x4016dc
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 4D EC: mov ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4D E4: mov ecx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes E8 80 00 00 00: call 0x40175c
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 16: jmp 0x4016f4
        __asm _emit 0xeb
        __asm _emit 0x16
        ; Exact mapped bytes 6A 04: push 4
        __asm _emit 0x6a
        __asm _emit 0x04
        ; Exact mapped bytes 8B 55 EC: mov edx, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 45 E4: mov eax, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 8B 48 04: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes E8 4D B9 00 00: call 0x40d03c
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 E3 FC FF FF: jmp 0x4013d7
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D E4: mov ecx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes 83 C1 08: add ecx, 8
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x08
        ; Exact mapped bytes E8 E1 2D 00 00: call 0x4044e0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D E4: mov ecx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes 83 C1 08: add ecx, 8
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x08
        ; Exact mapped bytes E8 B6 2D 00 00: call 0x4044c0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 A4: mov dword ptr [ebp - 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xa4
        ; Exact mapped bytes 83 7D A4 00: cmp dword ptr [ebp - 0x5c], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xa4
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 B7 FC FF FF: je 0x4013ce
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb7
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 0E: jmp 0x401727
        __asm _emit 0xeb
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 4D E4: mov ecx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes E8 98 00 00 00: call 0x4017b9
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 27 17 40 00: mov eax, 0x401727
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x17
        __asm _emit 0x40
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes C7 45 FC FF FF FF FF: mov dword ptr [ebp - 4], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4D E4: mov ecx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes 8B 51 04: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes C7 82 BC 0C 00 00 01 00 00 00: mov dword ptr [edx + 0xcbc], 1
        __asm _emit 0xc7
        __asm _emit 0x82
        __asm _emit 0xbc
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D F4: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf4
    }
}
