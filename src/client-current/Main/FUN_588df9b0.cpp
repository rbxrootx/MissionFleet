// Complete Ghidra body ranges for the selected function.
// 5 discontiguous segments; total 1431 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588DF9B0 .. +0x3BF bytes.
extern "C" __declspec(naked) void FUN_588df9b0_segment_00() {
    __asm {
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 68 4C 95 98 58: push 0x5898954c
        __asm _emit 0x68
        __asm _emit 0x4c
        __asm _emit 0x95
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 33 C4: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xc4
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 44 24 18: lea eax, [esp + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 89 74 24 14: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes C7 06 EC 10 9A 58: mov dword ptr [esi], 0x589a10ec
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0xec
        __asm _emit 0x10
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes 8B 86 0C 10 00 00: mov eax, dword ptr [esi + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes C7 44 24 20 03 00 00 00: mov dword ptr [esp + 0x20], 3
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 84 25 04 00 00: je 0x588dfe1e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x25
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 28 60 00 00: mov ecx, dword ptr [esi + 0x6028]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x28
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x588dfa11
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 9E 28 60 00 00: mov dword ptr [esi + 0x6028], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x28
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E D8 60 00 00: mov ecx, dword ptr [esi + 0x60d8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xd8
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x588dfa29
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 9E D8 60 00 00: mov dword ptr [esi + 0x60d8], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xd8
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 74 14 00 00: mov ecx, dword ptr [esi + 0x1474]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x74
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x588dfa41
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 9E 74 14 00 00: mov dword ptr [esi + 0x1474], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x74
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 70 14 00 00: mov ecx, dword ptr [esi + 0x1470]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x70
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x588dfa59
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 9E 70 14 00 00: mov dword ptr [esi + 0x1470], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x70
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 6C 14 00 00: mov ecx, dword ptr [esi + 0x146c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x6c
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x588dfa71
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 9E 6C 14 00 00: mov dword ptr [esi + 0x146c], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x6c
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E FC 60 00 00: mov ecx, dword ptr [esi + 0x60fc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xfc
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x588dfa89
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 9E FC 60 00 00: mov dword ptr [esi + 0x60fc], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xfc
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E F4 12 00 00: mov ecx, dword ptr [esi + 0x12f4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xf4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x588dfaa1
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 9E F4 12 00 00: mov dword ptr [esi + 0x12f4], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xf4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E F8 12 00 00: mov ecx, dword ptr [esi + 0x12f8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xf8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x588dfab9
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 9E F8 12 00 00: mov dword ptr [esi + 0x12f8], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xf8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 20 60 00 00: mov ecx, dword ptr [esi + 0x6020]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x20
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x588dfad1
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 9E 20 60 00 00: mov dword ptr [esi + 0x6020], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x20
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 24 60 00 00: mov ecx, dword ptr [esi + 0x6024]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x588dfae9
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 9E 24 60 00 00: mov dword ptr [esi + 0x6024], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E EC 12 00 00: mov ecx, dword ptr [esi + 0x12ec]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xec
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x588dfb01
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 9E EC 12 00 00: mov dword ptr [esi + 0x12ec], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xec
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E E8 12 00 00: mov ecx, dword ptr [esi + 0x12e8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x588dfb19
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 9E E8 12 00 00: mov dword ptr [esi + 0x12e8], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E E4 12 00 00: mov ecx, dword ptr [esi + 0x12e4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xe4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x588dfb31
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 9E E4 12 00 00: mov dword ptr [esi + 0x12e4], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xe4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E E0 12 00 00: mov ecx, dword ptr [esi + 0x12e0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xe0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x588dfb49
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 9E E0 12 00 00: mov dword ptr [esi + 0x12e0], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xe0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E FC 12 00 00: mov ecx, dword ptr [esi + 0x12fc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xfc
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x588dfb61
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 9E FC 12 00 00: mov dword ptr [esi + 0x12fc], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xfc
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E B0 12 00 00: mov ecx, dword ptr [esi + 0x12b0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xb0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x588dfb79
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 9E B0 12 00 00: mov dword ptr [esi + 0x12b0], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xb0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E B4 12 00 00: mov ecx, dword ptr [esi + 0x12b4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xb4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x588dfb91
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 9E B4 12 00 00: mov dword ptr [esi + 0x12b4], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xb4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E A8 12 00 00: mov ecx, dword ptr [esi + 0x12a8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xa8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x588dfba9
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 9E A8 12 00 00: mov dword ptr [esi + 0x12a8], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xa8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E AC 12 00 00: mov ecx, dword ptr [esi + 0x12ac]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xac
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x588dfbc1
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 9E AC 12 00 00: mov dword ptr [esi + 0x12ac], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xac
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E B8 12 00 00: mov ecx, dword ptr [esi + 0x12b8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xb8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x588dfbd9
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 9E B8 12 00 00: mov dword ptr [esi + 0x12b8], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xb8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E BC 12 00 00: mov ecx, dword ptr [esi + 0x12bc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xbc
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x588dfbf1
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 9E BC 12 00 00: mov dword ptr [esi + 0x12bc], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xbc
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E C8 12 00 00: mov ecx, dword ptr [esi + 0x12c8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xc8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x588dfc09
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 9E C8 12 00 00: mov dword ptr [esi + 0x12c8], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xc8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E CC 12 00 00: mov ecx, dword ptr [esi + 0x12cc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xcc
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x588dfc21
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 9E CC 12 00 00: mov dword ptr [esi + 0x12cc], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xcc
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 78 01 00 00: mov ecx, dword ptr [esi + 0x178]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x588dfc39
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 9E 78 01 00 00: mov dword ptr [esi + 0x178], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E D8 12 00 00: mov ecx, dword ptr [esi + 0x12d8]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xd8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x588dfc51
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 9E D8 12 00 00: mov dword ptr [esi + 0x12d8], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xd8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E DC 12 00 00: mov ecx, dword ptr [esi + 0x12dc]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xdc
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x588dfc69
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 9E DC 12 00 00: mov dword ptr [esi + 0x12dc], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xdc
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 00 61 00 00: mov ecx, dword ptr [esi + 0x6100]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x588dfc81
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 9E 00 61 00 00: mov dword ptr [esi + 0x6100], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 04 61 00 00: mov ecx, dword ptr [esi + 0x6104]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x588dfc99
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 9E 04 61 00 00: mov dword ptr [esi + 0x6104], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x04
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 0C 10 00 00: mov eax, dword ptr [esi + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 4A: je 0x588dfced
        __asm _emit 0x74
        __asm _emit 0x4a
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes F6 40 0A 07: test byte ptr [eax + 0xa], 7
        __asm _emit 0xf6
        __asm _emit 0x40
        __asm _emit 0x0a
        __asm _emit 0x07
        ; Exact mapped bytes 76 2B: jbe 0x588dfcd6
        __asm _emit 0x76
        __asm _emit 0x2b
        ; Exact mapped bytes 8D BE DC 60 00 00: lea edi, [esi + 0x60dc]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0xdc
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0A: je 0x588dfcc1
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 1F: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1f
        ; Exact mapped bytes 8B 86 0C 10 00 00: mov eax, dword ptr [esi + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 40 0A: movzx eax, word ptr [eax + 0xa]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x40
        __asm _emit 0x0a
        ; Exact mapped bytes 45: inc ebp
        __asm _emit 0x45
        ; Exact mapped bytes 83 E0 07: and eax, 7
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x07
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 3B E8: cmp ebp, eax
        __asm _emit 0x3b
        __asm _emit 0xe8
        ; Exact mapped bytes 7C DB: jl 0x588dfcb1
        __asm _emit 0x7c
        __asm _emit 0xdb
        ; Exact mapped bytes 8B 86 0C 10 00 00: mov eax, dword ptr [esi + 0x100c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 48 18: movzx ecx, word ptr [eax + 0x18]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x48
        __asm _emit 0x18
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 10 48 A2 58: mov ecx, dword ptr [0x58a24810]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes E8 93 A8 00 00: call 0x588ea580
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 8C AE FF FF: call 0x588dab80
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xae
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 86 90 60 00 00: mov eax, dword ptr [esi + 0x6090]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3D 00 00 04 00: cmp eax, 0x40000
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 74 0E: je 0x588dfd0f
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 3D 00 00 05 00: cmp eax, 0x50000
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 74 07: je 0x588dfd0f
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 3D 00 00 06 00: cmp eax, 0x60000
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 75 49: jne 0x588dfd58
        __asm _emit 0x75
        __asm _emit 0x49
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 3A 6B FF FF: call 0x588d6850
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 A3 6B FF FF: call 0x588d68c0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 CC 69 FF FF: call 0x588d66f0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x69
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 8E 4C 60 00 00: mov ecx, dword ptr [esi + 0x604c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x4c
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x588dfd3c
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 02: mov eax, dword ptr [edx]
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 89 9E 4C 60 00 00: mov dword ptr [esi + 0x604c], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x4c
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 71 04: cmp dword ptr [ecx + 4], esi
        __asm _emit 0x39
        __asm _emit 0x71
        __asm _emit 0x04
        ; Exact mapped bytes 75 11: jne 0x588dfd58
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 8A 9C 0C 02 00: mov ecx, dword ptr [edx + 0x20c9c]
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0x9c
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 08 72 EC FF: call 0x587a6f60
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x72
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 8D BE B4 00 00 00: lea edi, [esi + 0xb4]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BD 24 00 00 00: mov ebp, 0x24
        __asm _emit 0xbd
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 07: mov eax, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x07
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 0B: je 0x588dfd74
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 D3 CE 09 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xce
        __asm _emit 0x09
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588DFD74 .. +0x18 bytes.
extern "C" __declspec(naked) void FUN_588df9b0_segment_01() {
    __asm {
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 83 ED 01: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xed
        __asm _emit 0x01
        ; Exact mapped bytes 75 E7: jne 0x588dfd63
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes 8B 86 44 01 00 00: mov eax, dword ptr [esi + 0x144]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 0F: je 0x588dfd95
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 B6 CE 09 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xce
        __asm _emit 0x09
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588DFD95 .. +0x10 bytes.
extern "C" __declspec(naked) void FUN_588df9b0_segment_02() {
    __asm {
        ; Exact mapped bytes 8B 86 54 01 00 00: mov eax, dword ptr [esi + 0x154]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 0F: je 0x588dfdae
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 9D CE 09 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xce
        __asm _emit 0x09
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588DFDAE .. +0x192 bytes.
extern "C" __declspec(naked) void FUN_588df9b0_segment_03() {
    __asm {
        ; Exact mapped bytes 8B 8E F0 12 00 00: mov ecx, dword ptr [esi + 0x12f0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xf0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x588dfdc6
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 9E F0 12 00 00: mov dword ptr [esi + 0x12f0], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xf0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 08 13 00 00: mov ecx, dword ptr [esi + 0x1308]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x08
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x588dfdde
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 9E 08 13 00 00: mov dword ptr [esi + 0x1308], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x08
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 ED: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xed
        ; Exact mapped bytes 39 9E 0C 13 00 00: cmp dword ptr [esi + 0x130c], ebx
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0x0c
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 76 36: jbe 0x588dfe1e
        __asm _emit 0x76
        __asm _emit 0x36
        ; Exact mapped bytes 8D BE 20 13 00 00: lea edi, [esi + 0x1320]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0x20
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 8B 4F F0: mov ecx, dword ptr [edi - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0xf0
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0B: je 0x588dfe02
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 5F F0: mov dword ptr [edi - 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0xf0
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0A: je 0x588dfe12
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 1F: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1f
        ; Exact mapped bytes 45: inc ebp
        __asm _emit 0x45
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 3B AE 0C 13 00 00: cmp ebp, dword ptr [esi + 0x130c]
        __asm _emit 0x3b
        __asm _emit 0xae
        __asm _emit 0x0c
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 72 D2: jb 0x588dfdf0
        __asm _emit 0x72
        __asm _emit 0xd2
        ; Exact mapped bytes 8B 8E 88 00 00 00: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x588dfe36
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 9E 88 00 00 00: mov dword ptr [esi + 0x88], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E C0 12 00 00: mov ecx, dword ptr [esi + 0x12c0]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xc0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x588dfe4e
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 9E C0 12 00 00: mov dword ptr [esi + 0x12c0], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xc0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E C4 12 00 00: mov ecx, dword ptr [esi + 0x12c4]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xc4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x588dfe66
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 9E C4 12 00 00: mov dword ptr [esi + 0x12c4], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xc4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D BE 2C 65 00 00: lea edi, [esi + 0x652c]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0x2c
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BD 06 00 00 00: mov ebp, 6
        __asm _emit 0xbd
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F E8: mov ecx, dword ptr [edi - 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0xe8
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0B: je 0x588dfe83
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 5F E8: mov dword ptr [edi - 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0xe8
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0A: je 0x588dfe93
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 1F: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1f
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 83 ED 01: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xed
        __asm _emit 0x01
        ; Exact mapped bytes 75 D6: jne 0x588dfe71
        __asm _emit 0x75
        __asm _emit 0xd6
        ; Exact mapped bytes 8D BE C8 63 00 00: lea edi, [esi + 0x63c8]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0xc8
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes BD 40 00 00 00: mov ebp, 0x40
        __asm _emit 0xbd
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 20: mov ecx, dword ptr [edi + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x20
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0B: je 0x588dfeb8
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 5F 20: mov dword ptr [edi + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x20
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0A: je 0x588dfec8
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 1F: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1f
        ; Exact mapped bytes 83 C7 04: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xc7
        __asm _emit 0x04
        ; Exact mapped bytes 83 ED 01: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xed
        __asm _emit 0x01
        ; Exact mapped bytes 75 D6: jne 0x588dfea6
        __asm _emit 0x75
        __asm _emit 0xd6
        ; Exact mapped bytes 8B 8E 5C 13 00 00: mov ecx, dword ptr [esi + 0x135c]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x5c
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x588dfee8
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 9E 5C 13 00 00: mov dword ptr [esi + 0x135c], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x5c
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 58 13 00 00: mov ecx, dword ptr [esi + 0x1358]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x58
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x588dff00
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 9E 58 13 00 00: mov dword ptr [esi + 0x1358], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x58
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 60 13 00 00: mov ecx, dword ptr [esi + 0x1360]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x60
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x588dff18
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 9E 60 13 00 00: mov dword ptr [esi + 0x1360], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x60
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 8E 64 13 00 00: mov ecx, dword ptr [esi + 0x1364]
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x64
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 0E: je 0x588dff30
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes 8B 10: mov edx, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes 89 9E 64 13 00 00: mov dword ptr [esi + 0x1364], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x64
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 86 58 14 00 00: mov eax, dword ptr [esi + 0x1458]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B C3: cmp eax, ebx
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 09: je 0x588dff43
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 02 CD 09 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xcd
        __asm _emit 0x09
        __asm _emit 0x00
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588DFF43 .. +0x1E bytes.
extern "C" __declspec(naked) void FUN_588df9b0_segment_04() {
    __asm {
        ; Exact mapped bytes 8B 86 4C 14 00 00: mov eax, dword ptr [esi + 0x144c]
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x4c
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 89 9E 58 14 00 00: mov dword ptr [esi + 0x1458], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x58
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 5C 14 00 00: mov dword ptr [esi + 0x145c], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x5c
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 9E 60 14 00 00: mov dword ptr [esi + 0x1460], ebx
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x60
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 E1 CC 09 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xcc
        __asm _emit 0x09
        __asm _emit 0x00
    }
}
