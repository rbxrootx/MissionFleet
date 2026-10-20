// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040FBC0 .. +0x163 bytes.
extern "C" __declspec(naked) void FUN_0040fbc0_0040FBC0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 58 9A 57 00: push 0x579a58
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x9a
        __asm _emit 0x57
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
        ; Exact mapped bytes 83 EC 1C: sub esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x1c
        ; Exact mapped bytes B8 CC CC CC CC: mov eax, 0xcccccccc
        __asm _emit 0xb8
        __asm _emit 0xcc
        __asm _emit 0xcc
        __asm _emit 0xcc
        __asm _emit 0xcc
        ; Exact mapped bytes 89 45 D8: mov dword ptr [ebp - 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes 89 45 DC: mov dword ptr [ebp - 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes 89 45 E0: mov dword ptr [ebp - 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe0
        ; Exact mapped bytes 89 45 E4: mov dword ptr [ebp - 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 89 45 E8: mov dword ptr [ebp - 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 89 45 EC: mov dword ptr [ebp - 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 89 45 F0: mov dword ptr [ebp - 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 89 4D E0: mov dword ptr [ebp - 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe0
        ; Exact mapped bytes 8B 45 E0: mov eax, dword ptr [ebp - 0x20]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe0
        ; Exact mapped bytes C7 00 A4 10 58 00: mov dword ptr [eax], 0x5810a4
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0xa4
        __asm _emit 0x10
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 6A 16: push 0x16
        __asm _emit 0x6a
        __asm _emit 0x16
        ; Exact mapped bytes 68 10 0E 5A 00: push 0x5a0e10
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x0e
        __asm _emit 0x5a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 08: push 8
        __asm _emit 0x6a
        __asm _emit 0x08
        ; Exact mapped bytes E8 24 D4 0D 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xd4
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 89 45 EC: mov dword ptr [ebp - 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes C7 45 FC 00 00 00 00: mov dword ptr [ebp - 4], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 7D EC 00: cmp dword ptr [ebp - 0x14], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xec
        __asm _emit 0x00
        ; Exact mapped bytes 74 11: je 0x40fc33
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 8B 4D E0: mov ecx, dword ptr [ebp - 0x20]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe0
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4D EC: mov ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes E8 72 69 07 00: call 0x4865a0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x69
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 DC: mov dword ptr [ebp - 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes EB 07: jmp 0x40fc3a
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes C7 45 DC 00 00 00 00: mov dword ptr [ebp - 0x24], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 DC: mov edx, dword ptr [ebp - 0x24]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xdc
        ; Exact mapped bytes 89 55 F0: mov dword ptr [ebp - 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf0
        ; Exact mapped bytes C7 45 FC FF FF FF FF: mov dword ptr [ebp - 4], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 45 E0: mov eax, dword ptr [ebp - 0x20]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe0
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 89 48 18: mov dword ptr [eax + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x18
        ; Exact mapped bytes 6A 17: push 0x17
        __asm _emit 0x6a
        __asm _emit 0x17
        ; Exact mapped bytes 68 10 0E 5A 00: push 0x5a0e10
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x0e
        __asm _emit 0x5a
        __asm _emit 0x00
        ; Exact mapped bytes 68 80 00 00 00: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 D2 D3 0D 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xd3
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 89 45 E4: mov dword ptr [ebp - 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes C7 45 FC 01 00 00 00: mov dword ptr [ebp - 4], 1
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 7D E4 00: cmp dword ptr [ebp - 0x1c], 0
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xe4
        __asm _emit 0x00
        ; Exact mapped bytes 74 15: je 0x40fc89
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 8B 55 0C: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 45 08: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D E4: mov ecx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes E8 6C 17 06 00: call 0x4713f0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x17
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 D8: mov dword ptr [ebp - 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes EB 07: jmp 0x40fc90
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes C7 45 D8 00 00 00 00: mov dword ptr [ebp - 0x28], 0
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D D8: mov ecx, dword ptr [ebp - 0x28]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xd8
        ; Exact mapped bytes 89 4D E8: mov dword ptr [ebp - 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes C7 45 FC FF FF FF FF: mov dword ptr [ebp - 4], 0xffffffff
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 55 E0: mov edx, dword ptr [ebp - 0x20]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe0
        ; Exact mapped bytes 8B 45 E8: mov eax, dword ptr [ebp - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes 89 42 1C: mov dword ptr [edx + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 4D 0C: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 08: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 4D E0: mov ecx, dword ptr [ebp - 0x20]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe0
        ; Exact mapped bytes E8 3B 01 00 00: call 0x40fdf1
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 E0: mov eax, dword ptr [ebp - 0x20]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe0
        ; Exact mapped bytes C6 80 F0 00 00 00 09: mov byte ptr [eax + 0xf0], 9
        __asm _emit 0xc6
        __asm _emit 0x80
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x09
        ; Exact mapped bytes 8B 4D E0: mov ecx, dword ptr [ebp - 0x20]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe0
        ; Exact mapped bytes C6 81 F1 00 00 00 1B: mov byte ptr [ecx + 0xf1], 0x1b
        __asm _emit 0xc6
        __asm _emit 0x81
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1b
        ; Exact mapped bytes 8B 55 E0: mov edx, dword ptr [ebp - 0x20]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe0
        ; Exact mapped bytes C6 82 F2 00 00 00 0D: mov byte ptr [edx + 0xf2], 0xd
        __asm _emit 0xc6
        __asm _emit 0x82
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 45 E0: mov eax, dword ptr [ebp - 0x20]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe0
        ; Exact mapped bytes C6 80 F3 00 00 00 1D: mov byte ptr [eax + 0xf3], 0x1d
        __asm _emit 0xc6
        __asm _emit 0x80
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1d
        ; Exact mapped bytes 8B 4D E0: mov ecx, dword ptr [ebp - 0x20]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe0
        ; Exact mapped bytes C6 81 F4 00 00 00 05: mov byte ptr [ecx + 0xf4], 5
        __asm _emit 0xc6
        __asm _emit 0x81
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        ; Exact mapped bytes 8B 55 E0: mov edx, dword ptr [ebp - 0x20]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe0
        ; Exact mapped bytes C6 82 F5 00 00 00 15: mov byte ptr [edx + 0xf5], 0x15
        __asm _emit 0xc6
        __asm _emit 0x82
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x15
        ; Exact mapped bytes 8B 45 E0: mov eax, dword ptr [ebp - 0x20]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe0
        ; Exact mapped bytes C6 80 F6 00 00 00 00: mov byte ptr [eax + 0xf6], 0
        __asm _emit 0xc6
        __asm _emit 0x80
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D E0: mov ecx, dword ptr [ebp - 0x20]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe0
        ; Exact mapped bytes C6 81 F7 00 00 00 08: mov byte ptr [ecx + 0xf7], 8
        __asm _emit 0xc6
        __asm _emit 0x81
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        ; Exact mapped bytes 8B 45 E0: mov eax, dword ptr [ebp - 0x20]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe0
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
        ; Exact mapped bytes 83 C4 28: add esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x28
        ; Exact mapped bytes 3B EC: cmp ebp, esp
        __asm _emit 0x3b
        __asm _emit 0xec
        ; Exact mapped bytes E8 C3 8A 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x8a
        __asm _emit 0x09
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
