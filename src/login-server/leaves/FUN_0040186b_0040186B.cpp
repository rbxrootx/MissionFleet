// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040186B .. +0x7BE bytes.
extern "C" __declspec(naked) void FUN_0040186b_0040186B() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 81 EC 7C 01 00 00: sub esp, 0x17c
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 8D 84 FE FF FF: mov dword ptr [ebp - 0x17c], ecx
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 85 84 FE FF FF: mov eax, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8D 84 FE FF FF: mov ecx, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 91 34 01 00 00: mov edx, dword ptr [ecx + 0x134]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 90 64 01 00 00: mov dword ptr [eax + 0x164], edx
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 84 FE FF FF: mov eax, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8D 84 FE FF FF: mov ecx, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8A 91 3C 01 00 00: mov dl, byte ptr [ecx + 0x13c]
        __asm _emit 0x8a
        __asm _emit 0x91
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 88 90 94 01 00 00: mov byte ptr [eax + 0x194], dl
        __asm _emit 0x88
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 45 FC: lea eax, [ebp - 4]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 6F B3 02 00: call 0x42cc22
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xb3
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 45 E0 00 00: mov word ptr [ebp - 0x20], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 45 E2 00 00: mov word ptr [ebp - 0x1e], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 45 E4 00 00: mov word ptr [ebp - 0x1c], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4D FC: lea ecx, [ebp - 4]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes E8 F3 2A 00 00: call 0x4043c0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 DC: mov dword ptr [ebp - 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes 8D 4D FC: lea ecx, [ebp - 4]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes E8 08 2B 00 00: call 0x4043e0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 F0: mov dword ptr [ebp - 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes 8D 4D FC: lea ecx, [ebp - 4]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes E8 1D 2B 00 00: call 0x404400
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 45 F4: mov dword ptr [ebp - 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 8B 8D 84 FE FF FF: mov ecx, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 33 D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xd2
        ; Exact mapped bytes 8A 91 94 01 00 00: mov dl, byte ptr [ecx + 0x194]
        __asm _emit 0x8a
        __asm _emit 0x91
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 FA 01: cmp edx, 1
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 38 01 00 00: jne 0x401a35
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 45 F8: lea eax, [ebp - 8]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4D E0: lea ecx, [ebp - 0x20]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xe0
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 5D: push 0x5d
        __asm _emit 0x6a
        __asm _emit 0x5d
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 8B 95 84 FE FF FF: mov edx, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 82 60 01 00 00: mov eax, dword ptr [edx + 0x160]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 E1 FF 00 00: call 0x4118fe
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 D8: mov word ptr [ebp - 0x28], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes 8B 8D 84 FE FF FF: mov ecx, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 91 64 01 00 00: mov edx, dword ptr [ecx + 0x164]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 68 F8 80 44 00: push 0x4480f8
        __asm _emit 0x68
        __asm _emit 0xf8
        __asm _emit 0x80
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 8D 85 D8 FE FF FF: lea eax, [ebp - 0x128]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 6A FD: push -3
        __asm _emit 0x6a
        __asm _emit 0xfd
        ; Exact mapped bytes 8D 8D D8 FE FF FF: lea ecx, [ebp - 0x128]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 95 84 FE FF FF: mov edx, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 82 60 01 00 00: mov eax, dword ptr [edx + 0x160]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 9A FF 00 00: call 0x4118f8
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 D8: mov word ptr [ebp - 0x28], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes 8B 8D 84 FE FF FF: mov ecx, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 91 60 01 00 00: mov edx, dword ptr [ecx + 0x160]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 7E FF 00 00: call 0x4118f2
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C0: movsx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc0
        ; Exact mapped bytes 83 F8 64: cmp eax, 0x64
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x64
        ; Exact mapped bytes 0F 84 B0 00 00 00: je 0x401a30
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D E4: mov ecx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes 81 E1 FF FF 00 00: and ecx, 0xffff
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 E2: mov edx, dword ptr [ebp - 0x1e]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe2
        ; Exact mapped bytes 81 E2 FF FF 00 00: and edx, 0xffff
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 0F BF 45 E0: movsx eax, word ptr [ebp - 0x20]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xe0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8D D4 FE FF FF: lea ecx, [ebp - 0x12c]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 92 B1 02 00: call 0x42cb3e
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xb1
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CC: mov ecx, esp
        __asm _emit 0x8b
        __asm _emit 0xcc
        ; Exact mapped bytes 8D 55 FC: lea edx, [ebp - 4]
        __asm _emit 0x8d
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 D8 BB 00 00: call 0x40d590
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8D D4 FE FF FF: lea ecx, [ebp - 0x12c]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 5D 2A 00 00: call 0x404420
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 69: je 0x401a30
        __asm _emit 0x74
        __asm _emit 0x69
        ; Exact mapped bytes 8D 85 D4 FE FF FF: lea eax, [ebp - 0x12c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 8D 84 FE FF FF: mov ecx, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 81 C1 98 01 00 00: add ecx, 0x198
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 C1 29 00 00: call 0x4043a0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 00 00 01: push 0x1000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 95 84 FE FF FF: mov edx, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4A 04: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x04
        ; Exact mapped bytes E8 95 B6 00 00: call 0x40d08b
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 84 FE FF FF: mov eax, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 05 98 01 00 00: add eax, 0x198
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 95 84 FE FF FF: mov edx, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4A 04: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x04
        ; Exact mapped bytes E8 DC B6 00 00: call 0x40d0f0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 84 FE FF FF: mov eax, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 88 60 01 00 00: mov ecx, dword ptr [eax + 0x160]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 C6 FE 00 00: call 0x4118ec
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 F3 05 00 00: jmp 0x402023
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 DA 05 00 00: jmp 0x40200f
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 95 84 FE FF FF: mov edx, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8A 82 94 01 00 00: mov al, byte ptr [edx + 0x194]
        __asm _emit 0x8a
        __asm _emit 0x82
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 02: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 37 01 00 00: jne 0x401b83
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4D F8: lea ecx, [ebp - 8]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xf8
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 55 E0: lea edx, [ebp - 0x20]
        __asm _emit 0x8d
        __asm _emit 0x55
        __asm _emit 0xe0
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 6A 5D: push 0x5d
        __asm _emit 0x6a
        __asm _emit 0x5d
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 8B 85 84 FE FF FF: mov eax, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 88 60 01 00 00: mov ecx, dword ptr [eax + 0x160]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 92 FE 00 00: call 0x4118fe
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 D8: mov word ptr [ebp - 0x28], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes 8B 95 84 FE FF FF: mov edx, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 82 64 01 00 00: mov eax, dword ptr [edx + 0x164]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 68 38 81 44 00: push 0x448138
        __asm _emit 0x68
        __asm _emit 0x38
        __asm _emit 0x81
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8D D8 FE FF FF: lea ecx, [ebp - 0x128]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 6A FD: push -3
        __asm _emit 0x6a
        __asm _emit 0xfd
        ; Exact mapped bytes 8D 95 D8 FE FF FF: lea edx, [ebp - 0x128]
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 85 84 FE FF FF: mov eax, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 88 60 01 00 00: mov ecx, dword ptr [eax + 0x160]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 4B FE 00 00: call 0x4118f8
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 D8: mov word ptr [ebp - 0x28], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes 8B 95 84 FE FF FF: mov edx, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 82 60 01 00 00: mov eax, dword ptr [edx + 0x160]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 2F FE 00 00: call 0x4118f2
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C8: movsx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc8
        ; Exact mapped bytes 83 F9 64: cmp ecx, 0x64
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x64
        ; Exact mapped bytes 0F 84 AF 00 00 00: je 0x401b7e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 55 E4: mov edx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact mapped bytes 81 E2 FF FF 00 00: and edx, 0xffff
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 45 E2: mov eax, dword ptr [ebp - 0x1e]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe2
        ; Exact mapped bytes 25 FF FF 00 00: and eax, 0xffff
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 0F BF 4D E0: movsx ecx, word ptr [ebp - 0x20]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xe0
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8D 8D D0 FE FF FF: lea ecx, [ebp - 0x130]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xd0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 44 B0 02 00: call 0x42cb3e
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CC: mov ecx, esp
        __asm _emit 0x8b
        __asm _emit 0xcc
        ; Exact mapped bytes 8D 55 FC: lea edx, [ebp - 4]
        __asm _emit 0x8d
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 8A BA 00 00: call 0x40d590
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8D D0 FE FF FF: lea ecx, [ebp - 0x130]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xd0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 0F 29 00 00: call 0x404420
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 69: je 0x401b7e
        __asm _emit 0x74
        __asm _emit 0x69
        ; Exact mapped bytes 8D 85 D0 FE FF FF: lea eax, [ebp - 0x130]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 8D 84 FE FF FF: mov ecx, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 81 C1 98 01 00 00: add ecx, 0x198
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 73 28 00 00: call 0x4043a0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 00 00 02: push 0x2000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 95 84 FE FF FF: mov edx, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4A 04: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x04
        ; Exact mapped bytes E8 47 B5 00 00: call 0x40d08b
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 84 FE FF FF: mov eax, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 05 98 01 00 00: add eax, 0x198
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 95 84 FE FF FF: mov edx, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4A 04: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x04
        ; Exact mapped bytes E8 8E B5 00 00: call 0x40d0f0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 84 FE FF FF: mov eax, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 88 60 01 00 00: mov ecx, dword ptr [eax + 0x160]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 78 FD 00 00: call 0x4118ec
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 A5 04 00 00: jmp 0x402023
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 8C 04 00 00: jmp 0x40200f
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 95 84 FE FF FF: mov edx, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8A 82 94 01 00 00: mov al, byte ptr [edx + 0x194]
        __asm _emit 0x8a
        __asm _emit 0x82
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F8 03: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x03
        ; Exact mapped bytes 0F 85 33 02 00 00: jne 0x401dcd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x33
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 85 C0 FE FF FF 00 00: mov word ptr [ebp - 0x140], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 85 C2 FE FF FF 00 00: mov word ptr [ebp - 0x13e], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xc2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 85 C4 FE FF FF 00 00: mov word ptr [ebp - 0x13c], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4D F8: lea ecx, [ebp - 8]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xf8
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 55 E0: lea edx, [ebp - 0x20]
        __asm _emit 0x8d
        __asm _emit 0x55
        __asm _emit 0xe0
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 6A 5D: push 0x5d
        __asm _emit 0x6a
        __asm _emit 0x5d
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 8B 85 84 FE FF FF: mov eax, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 88 60 01 00 00: mov ecx, dword ptr [eax + 0x160]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 29 FD 00 00: call 0x4118fe
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 D8: mov word ptr [ebp - 0x28], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes 8D 55 F8: lea edx, [ebp - 8]
        __asm _emit 0x8d
        __asm _emit 0x55
        __asm _emit 0xf8
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 85 C0 FE FF FF: lea eax, [ebp - 0x140]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 5D: push 0x5d
        __asm _emit 0x6a
        __asm _emit 0x5d
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 8B 8D 84 FE FF FF: mov ecx, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 91 60 01 00 00: mov edx, dword ptr [ecx + 0x160]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 02 FD 00 00: call 0x4118fe
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 D8: mov word ptr [ebp - 0x28], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes 8B 85 84 FE FF FF: mov eax, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 88 64 01 00 00: mov ecx, dword ptr [eax + 0x164]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 68 78 81 44 00: push 0x448178
        __asm _emit 0x68
        __asm _emit 0x78
        __asm _emit 0x81
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 8D 95 D8 FE FF FF: lea edx, [ebp - 0x128]
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 6A FD: push -3
        __asm _emit 0x6a
        __asm _emit 0xfd
        ; Exact mapped bytes 8D 85 D8 FE FF FF: lea eax, [ebp - 0x128]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 8D 84 FE FF FF: mov ecx, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 91 60 01 00 00: mov edx, dword ptr [ecx + 0x160]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 BB FC 00 00: call 0x4118f8
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 D8: mov word ptr [ebp - 0x28], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes 8B 85 84 FE FF FF: mov eax, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 88 60 01 00 00: mov ecx, dword ptr [eax + 0x160]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 9F FC 00 00: call 0x4118f2
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF D0: movsx edx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd0
        ; Exact mapped bytes 83 FA 64: cmp edx, 0x64
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x64
        ; Exact mapped bytes 0F 84 69 01 00 00: je 0x401dc8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 45 E4: mov eax, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 25 FF FF 00 00: and eax, 0xffff
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D E2: mov ecx, dword ptr [ebp - 0x1e]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe2
        ; Exact mapped bytes 81 E1 FF FF 00 00: and ecx, 0xffff
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 0F BF 55 E0: movsx edx, word ptr [ebp - 0x20]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xe0
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 8D BC FE FF FF: lea ecx, [ebp - 0x144]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xbc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 B4 AE 02 00: call 0x42cb3e
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xae
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 C4 FE FF FF: mov eax, dword ptr [ebp - 0x13c]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 25 FF FF 00 00: and eax, 0xffff
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 8D C2 FE FF FF: mov ecx, dword ptr [ebp - 0x13e]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xc2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 81 E1 FF FF 00 00: and ecx, 0xffff
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 0F BF 95 C0 FE FF FF: movsx edx, word ptr [ebp - 0x140]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x95
        __asm _emit 0xc0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 8D B8 FE FF FF: lea ecx, [ebp - 0x148]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xb8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 80 AE 02 00: call 0x42cb3e
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xae
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CC: mov ecx, esp
        __asm _emit 0x8b
        __asm _emit 0xcc
        ; Exact mapped bytes 8D 45 FC: lea eax, [ebp - 4]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 C6 B8 00 00: call 0x40d590
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8D B8 FE FF FF: lea ecx, [ebp - 0x148]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xb8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 4B 27 00 00: call 0x404420
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 6A: je 0x401d43
        __asm _emit 0x74
        __asm _emit 0x6a
        ; Exact mapped bytes 8D 8D B8 FE FF FF: lea ecx, [ebp - 0x148]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xb8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8D 84 FE FF FF: mov ecx, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 81 C1 98 01 00 00: add ecx, 0x198
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 AF 26 00 00: call 0x4043a0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 00 00 02: push 0x2000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 8B 55 08: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 85 84 FE FF FF: mov eax, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 48 04: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes E8 83 B3 00 00: call 0x40d08b
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 84 FE FF FF: mov ecx, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 81 C1 98 01 00 00: add ecx, 0x198
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 08: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 85 84 FE FF FF: mov eax, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 48 04: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes E8 C9 B3 00 00: call 0x40d0f0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 84 FE FF FF: mov ecx, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 91 60 01 00 00: mov edx, dword ptr [ecx + 0x160]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 B3 FB 00 00: call 0x4118ec
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 E0 02 00 00: jmp 0x402023
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CC: mov ecx, esp
        __asm _emit 0x8b
        __asm _emit 0xcc
        ; Exact mapped bytes 8D 45 FC: lea eax, [ebp - 4]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 41 B8 00 00: call 0x40d590
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8D BC FE FF FF: lea ecx, [ebp - 0x144]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xbc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 C6 26 00 00: call 0x404420
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 6A: je 0x401dc8
        __asm _emit 0x74
        __asm _emit 0x6a
        ; Exact mapped bytes 8D 8D BC FE FF FF: lea ecx, [ebp - 0x144]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xbc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 8D 84 FE FF FF: mov ecx, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 81 C1 98 01 00 00: add ecx, 0x198
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 2A 26 00 00: call 0x4043a0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 00 00 01: push 0x1000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 8B 55 08: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 85 84 FE FF FF: mov eax, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 48 04: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes E8 FE B2 00 00: call 0x40d08b
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 84 FE FF FF: mov ecx, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 81 C1 98 01 00 00: add ecx, 0x198
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 08: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 85 84 FE FF FF: mov eax, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 48 04: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes E8 44 B3 00 00: call 0x40d0f0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D 84 FE FF FF: mov ecx, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 91 60 01 00 00: mov edx, dword ptr [ecx + 0x160]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 2E FB 00 00: call 0x4118ec
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 5B 02 00 00: jmp 0x402023
        __asm _emit 0xe9
        __asm _emit 0x5b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 42 02 00 00: jmp 0x40200f
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 84 FE FF FF: mov eax, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 8A 88 94 01 00 00: mov cl, byte ptr [eax + 0x194]
        __asm _emit 0x8a
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 F9 04: cmp ecx, 4
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x04
        ; Exact mapped bytes 0F 85 2B 02 00 00: jne 0x40200f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 85 A8 FE FF FF 00 00: mov word ptr [ebp - 0x158], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 85 AA FE FF FF 00 00: mov word ptr [ebp - 0x156], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xaa
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 85 AC FE FF FF 00 00: mov word ptr [ebp - 0x154], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 55 F8: lea edx, [ebp - 8]
        __asm _emit 0x8d
        __asm _emit 0x55
        __asm _emit 0xf8
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 45 E0: lea eax, [ebp - 0x20]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xe0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 5D: push 0x5d
        __asm _emit 0x6a
        __asm _emit 0x5d
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 8B 8D 84 FE FF FF: mov ecx, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 91 60 01 00 00: mov edx, dword ptr [ecx + 0x160]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 DF FA 00 00: call 0x4118fe
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 D8: mov word ptr [ebp - 0x28], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes 8D 45 F8: lea eax, [ebp - 8]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8D A8 FE FF FF: lea ecx, [ebp - 0x158]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xa8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 5D: push 0x5d
        __asm _emit 0x6a
        __asm _emit 0x5d
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 8B 95 84 FE FF FF: mov edx, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 82 60 01 00 00: mov eax, dword ptr [edx + 0x160]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 B8 FA 00 00: call 0x4118fe
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 D8: mov word ptr [ebp - 0x28], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes 8B 8D 84 FE FF FF: mov ecx, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 91 64 01 00 00: mov edx, dword ptr [ecx + 0x164]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 68 28 82 44 00: push 0x448228
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x82
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 8D 85 D8 FE FF FF: lea eax, [ebp - 0x128]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 0C: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x0c
        ; Exact mapped bytes 6A FD: push -3
        __asm _emit 0x6a
        __asm _emit 0xfd
        ; Exact mapped bytes 8D 8D D8 FE FF FF: lea ecx, [ebp - 0x128]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 95 84 FE FF FF: mov edx, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 82 60 01 00 00: mov eax, dword ptr [edx + 0x160]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 71 FA 00 00: call 0x4118f8
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 D8: mov word ptr [ebp - 0x28], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes 8B 8D 84 FE FF FF: mov ecx, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 91 60 01 00 00: mov edx, dword ptr [ecx + 0x160]
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 55 FA 00 00: call 0x4118f2
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C0: movsx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc0
        ; Exact mapped bytes 83 F8 64: cmp eax, 0x64
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x64
        ; Exact mapped bytes 0F 84 66 01 00 00: je 0x40200f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4D E4: mov ecx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes 81 E1 FF FF 00 00: and ecx, 0xffff
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 55 E2: mov edx, dword ptr [ebp - 0x1e]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe2
        ; Exact mapped bytes 81 E2 FF FF 00 00: and edx, 0xffff
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 0F BF 45 E0: movsx eax, word ptr [ebp - 0x20]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xe0
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8D A4 FE FF FF: lea ecx, [ebp - 0x15c]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 69 AC 02 00: call 0x42cb3e
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xac
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8D AC FE FF FF: mov ecx, dword ptr [ebp - 0x154]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 81 E1 FF FF 00 00: and ecx, 0xffff
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 95 AA FE FF FF: mov edx, dword ptr [ebp - 0x156]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0xaa
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 81 E2 FF FF 00 00: and edx, 0xffff
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 0F BF 85 A8 FE FF FF: movsx eax, word ptr [ebp - 0x158]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 8D A0 FE FF FF: lea ecx, [ebp - 0x160]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xa0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 34 AC 02 00: call 0x42cb3e
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xac
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CC: mov ecx, esp
        __asm _emit 0x8b
        __asm _emit 0xcc
        ; Exact mapped bytes 8D 55 FC: lea edx, [ebp - 4]
        __asm _emit 0x8d
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 7A B6 00 00: call 0x40d590
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8D A4 FE FF FF: lea ecx, [ebp - 0x15c]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 FF 24 00 00: call 0x404420
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 69: je 0x401f8e
        __asm _emit 0x74
        __asm _emit 0x69
        ; Exact mapped bytes 8D 85 A4 FE FF FF: lea eax, [ebp - 0x15c]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xa4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 8D 84 FE FF FF: mov ecx, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 81 C1 98 01 00 00: add ecx, 0x198
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 63 24 00 00: call 0x4043a0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 00 00 01: push 0x1000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 95 84 FE FF FF: mov edx, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4A 04: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x04
        ; Exact mapped bytes E8 37 B1 00 00: call 0x40d08b
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 84 FE FF FF: mov eax, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 05 98 01 00 00: add eax, 0x198
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 95 84 FE FF FF: mov edx, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4A 04: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x04
        ; Exact mapped bytes E8 7E B1 00 00: call 0x40d0f0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 84 FE FF FF: mov eax, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 88 60 01 00 00: mov ecx, dword ptr [eax + 0x160]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 68 F9 00 00: call 0x4118ec
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 95 00 00 00: jmp 0x402023
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B CC: mov ecx, esp
        __asm _emit 0x8b
        __asm _emit 0xcc
        ; Exact mapped bytes 8D 55 FC: lea edx, [ebp - 4]
        __asm _emit 0x8d
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 F6 B5 00 00: call 0x40d590
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 8D A0 FE FF FF: lea ecx, [ebp - 0x160]
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0xa0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 7B 24 00 00: call 0x404420
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 66: je 0x40200f
        __asm _emit 0x74
        __asm _emit 0x66
        ; Exact mapped bytes 8D 85 A0 FE FF FF: lea eax, [ebp - 0x160]
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 8D 84 FE FF FF: mov ecx, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 81 C1 98 01 00 00: add ecx, 0x198
        __asm _emit 0x81
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 DF 23 00 00: call 0x4043a0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 68 00 00 00 02: push 0x2000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 95 84 FE FF FF: mov edx, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4A 04: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x04
        ; Exact mapped bytes E8 B3 B0 00 00: call 0x40d08b
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 84 FE FF FF: mov eax, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 05 98 01 00 00: add eax, 0x198
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 95 84 FE FF FF: mov edx, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4A 04: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x04
        ; Exact mapped bytes E8 FA B0 00 00: call 0x40d0f0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 85 84 FE FF FF: mov eax, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 88 60 01 00 00: mov ecx, dword ptr [eax + 0x160]
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes E8 E4 F8 00 00: call 0x4118ec
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 14: jmp 0x402023
        __asm _emit 0xeb
        __asm _emit 0x14
        ; Exact mapped bytes 8B 95 84 FE FF FF: mov edx, dword ptr [ebp - 0x17c]
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 82 60 01 00 00: mov eax, dword ptr [edx + 0x160]
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 CB F8 00 00: call 0x4118ec
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
