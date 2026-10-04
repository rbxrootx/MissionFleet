// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5884FD30 .. +0x57E bytes.
// Source symbol alias: FUN_5884fd30.
extern "C" __declspec(naked) void FUN_5884fd30() {
    __asm {
        // 0x5884FD30: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5884FD32: push 0x589851eb
        __asm _emit 0x68
        __asm _emit 0xEB
        __asm _emit 0x51
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5884FD37: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884FD3D: push eax
        __asm _emit 0x50
        // 0x5884FD3E: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x5884FD41: push ebx
        __asm _emit 0x53
        // 0x5884FD42: push ebp
        __asm _emit 0x55
        // 0x5884FD43: push esi
        __asm _emit 0x56
        // 0x5884FD44: push edi
        __asm _emit 0x57
        // 0x5884FD45: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5884FD4A: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5884FD4C: push eax
        __asm _emit 0x50
        // 0x5884FD4D: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5884FD51: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884FD57: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x5884FD59: mov dword ptr [esp + 0x14], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5884FD5D: mov eax, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5884FD61: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5884FD65: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5884FD69: mov esi, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5884FD6D: mov edi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5884FD71: push eax
        __asm _emit 0x50
        // 0x5884FD72: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5884FD76: push ecx
        __asm _emit 0x51
        // 0x5884FD77: push edx
        __asm _emit 0x52
        // 0x5884FD78: push esi
        __asm _emit 0x56
        // 0x5884FD79: push edi
        __asm _emit 0x57
        // 0x5884FD7A: push eax
        __asm _emit 0x50
        // 0x5884FD7B: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x5884FD7D: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0x34
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884FD82: mov dword ptr [ebp], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5884FD89: or word ptr [ebp + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4D
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5884FD8E: mov dword ptr [ebp + 0x54], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0x54
        // 0x5884FD91: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5884FD93: mov dword ptr [ebp + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0x50
        // 0x5884FD96: mov dword ptr [ebp + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884FD9D: mov dword ptr [ebp + 0x5c], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0x5C
        // 0x5884FDA0: push 0x198
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884FDA5: mov dword ptr [esp + 0x28], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5884FDA9: mov dword ptr [ebp], 0x5899e8a0
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0xA0
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5884FDB0: mov byte ptr [ebp + 0x60], 0
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0x60
        __asm _emit 0x00
        // 0x5884FDB4: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0xCE
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5884FDB9: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884FDBC: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5884FDC0: mov byte ptr [esp + 0x24], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5884FDC5: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x5884FDC7: je 0x5884fdda
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5884FDC9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5884FDCB: push esi
        __asm _emit 0x56
        // 0x5884FDCC: push 0x5899e8c8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5884FDD1: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884FDD3: call 0x588f3d70
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0x3F
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5884FDD8: jmp 0x5884fddc
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884FDDA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884FDDC: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5884FDE1: mov dword ptr [ebp + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x64
        // 0x5884FDE4: mov ebx, 0x589b9b30
        __asm _emit 0xBB
        __asm _emit 0x30
        __asm _emit 0x9B
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x5884FDE9: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884FDF0: sub esp, 0x114
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884FDF6: mov edi, esp
        __asm _emit 0x8B
        __asm _emit 0xFC
        // 0x5884FDF8: mov ecx, 0x45
        __asm _emit 0xB9
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884FDFD: mov esi, ebx
        __asm _emit 0x8B
        __asm _emit 0xF3
        // 0x5884FDFF: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x5884FE01: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x5884FE03: call 0x5884f210
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884FE08: add ebx, 0x114
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884FE0E: cmp ebx, 0x589ba5f8
        __asm _emit 0x81
        __asm _emit 0xFB
        __asm _emit 0xF8
        __asm _emit 0xA5
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x5884FE14: jl 0x5884fdf0
        __asm _emit 0x7C
        __asm _emit 0xDA
        // 0x5884FE16: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5884FE18: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0xCE
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5884FE1D: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5884FE1F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884FE22: mov dword ptr [esp + 0x3c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5884FE26: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5884FE28: mov byte ptr [esp + 0x24], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5884FE2D: cmp esi, edi
        __asm _emit 0x3B
        __asm _emit 0xF7
        // 0x5884FE2F: je 0x5884fe58
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x5884FE31: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5884FE35: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5884FE39: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5884FE3D: add ecx, 0x64
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x64
        // 0x5884FE40: push ecx
        __asm _emit 0x51
        // 0x5884FE41: push edi
        __asm _emit 0x57
        // 0x5884FE42: push edi
        __asm _emit 0x57
        // 0x5884FE43: push edx
        __asm _emit 0x52
        // 0x5884FE44: push eax
        __asm _emit 0x50
        // 0x5884FE45: push ebp
        __asm _emit 0x55
        // 0x5884FE46: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5884FE48: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0x33
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884FE4D: mov dword ptr [esi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5884FE53: mov dword ptr [esi + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x50
        // 0x5884FE56: jmp 0x5884fe5a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884FE58: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5884FE5A: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5884FE5C: mov byte ptr [esp + 0x28], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x00
        // 0x5884FE61: mov dword ptr [ebp + 0x6c], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0x6C
        // 0x5884FE64: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0xCD
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5884FE69: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5884FE6B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884FE6E: mov dword ptr [esp + 0x3c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5884FE72: mov byte ptr [esp + 0x24], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x03
        // 0x5884FE77: cmp esi, edi
        __asm _emit 0x3B
        __asm _emit 0xF7
        // 0x5884FE79: je 0x5884fea2
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x5884FE7B: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5884FE7F: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5884FE83: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5884FE87: add ecx, 0x64
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x64
        // 0x5884FE8A: push ecx
        __asm _emit 0x51
        // 0x5884FE8B: push edi
        __asm _emit 0x57
        // 0x5884FE8C: push edi
        __asm _emit 0x57
        // 0x5884FE8D: push edx
        __asm _emit 0x52
        // 0x5884FE8E: push eax
        __asm _emit 0x50
        // 0x5884FE8F: push ebp
        __asm _emit 0x55
        // 0x5884FE90: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5884FE92: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0x33
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884FE97: mov dword ptr [esi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5884FE9D: mov dword ptr [esi + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x50
        // 0x5884FEA0: jmp 0x5884fea4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884FEA2: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5884FEA4: lea ecx, [ebp + 0x74]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x74
        // 0x5884FEA7: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5884FEAC: mov dword ptr [ebp + 0x70], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0x70
        // 0x5884FEAF: mov dword ptr [esp + 0x38], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5884FEB3: lea eax, [ebp + 0x124]
        __asm _emit 0x8D
        __asm _emit 0x85
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884FEB9: mov dword ptr [esp + 0x2c], 4
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884FEC1: mov edi, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5884FEC5: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5884FEC7: add edi, 0x46
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x46
        // 0x5884FECA: mov dword ptr [esp + 0x3c], 8
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884FED2: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x5884FED4: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0xCD
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5884FED9: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5884FEDB: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884FEDE: mov dword ptr [esp + 0x18], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5884FEE2: mov byte ptr [esp + 0x24], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5884FEE7: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5884FEE9: je 0x5884ff2a
        __asm _emit 0x74
        __asm _emit 0x3F
        // 0x5884FEEB: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884FEF0: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0x16
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5884FEF5: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5884FEF9: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884FEFC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884FEFE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884FF00: push 0xc8c8c8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0xC8
        __asm _emit 0xC8
        __asm _emit 0x00
        // 0x5884FF05: lea edx, [edi + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x2C
        // 0x5884FF08: push edx
        __asm _emit 0x52
        // 0x5884FF09: lea edx, [ecx + 0x1a4]
        __asm _emit 0x8D
        __asm _emit 0x91
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884FF0F: push edx
        __asm _emit 0x52
        // 0x5884FF10: push edi
        __asm _emit 0x57
        // 0x5884FF11: add ecx, 0xa4
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884FF17: push ecx
        __asm _emit 0x51
        // 0x5884FF18: mov ecx, dword ptr [0x58a24554]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x54
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884FF1E: push ecx
        __asm _emit 0x51
        // 0x5884FF1F: push eax
        __asm _emit 0x50
        // 0x5884FF20: push ebp
        __asm _emit 0x55
        // 0x5884FF21: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5884FF23: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0x33
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x5884FF28: jmp 0x5884ff2c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884FF2A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884FF2C: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x5884FF2E: mov byte ptr [esp + 0x28], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x00
        // 0x5884FF33: mov dword ptr [ebx - 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x80
        // 0x5884FF36: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0xCD
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5884FF3B: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5884FF3D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884FF40: mov dword ptr [esp + 0x18], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5884FF44: mov byte ptr [esp + 0x24], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x05
        // 0x5884FF49: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5884FF4B: je 0x5884ff8f
        __asm _emit 0x74
        __asm _emit 0x42
        // 0x5884FF4D: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884FF52: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0x15
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5884FF57: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5884FF5B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884FF5E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884FF60: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5884FF62: push 0x141414
        __asm _emit 0x68
        __asm _emit 0x14
        __asm _emit 0x14
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5884FF67: lea edx, [edi + 0x2d]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x2D
        // 0x5884FF6A: push edx
        __asm _emit 0x52
        // 0x5884FF6B: lea edx, [ecx + 0x1a5]
        __asm _emit 0x8D
        __asm _emit 0x91
        __asm _emit 0xA5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884FF71: push edx
        __asm _emit 0x52
        // 0x5884FF72: lea edx, [edi + 1]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x01
        // 0x5884FF75: push edx
        __asm _emit 0x52
        // 0x5884FF76: add ecx, 0xa5
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xA5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884FF7C: push ecx
        __asm _emit 0x51
        // 0x5884FF7D: mov ecx, dword ptr [0x58a24554]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x54
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884FF83: push ecx
        __asm _emit 0x51
        // 0x5884FF84: push eax
        __asm _emit 0x50
        // 0x5884FF85: push ebp
        __asm _emit 0x55
        // 0x5884FF86: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5884FF88: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0x32
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x5884FF8D: jmp 0x5884ff91
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884FF8F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884FF91: mov dword ptr [ebx], eax
        __asm _emit 0x89
        __asm _emit 0x03
        // 0x5884FF93: mov eax, dword ptr [ebx - 0x80]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x80
        // 0x5884FF96: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x5884FF99: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5884FF9E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884FFA0: je 0x5884ffd3
        __asm _emit 0x74
        __asm _emit 0x31
        // 0x5884FFA2: mov edx, 0x5898c922
        __asm _emit 0xBA
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5884FFA7: mov esi, 0x80
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884FFAC: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x5884FFAE: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5884FFB0: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5884FFB6: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5884FFB8: je 0x5884ffcb
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5884FFBA: mov cl, byte ptr [edx + eax]
        __asm _emit 0x8A
        __asm _emit 0x0C
        __asm _emit 0x02
        // 0x5884FFBD: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5884FFBF: je 0x5884ffcb
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5884FFC1: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x5884FFC3: inc eax
        __asm _emit 0x40
        // 0x5884FFC4: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x5884FFC7: jne 0x5884ffb0
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x5884FFC9: jmp 0x5884ffcf
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5884FFCB: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5884FFCD: jne 0x5884ffd0
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x5884FFCF: dec eax
        __asm _emit 0x48
        // 0x5884FFD0: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884FFD3: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x5884FFD5: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x5884FFD8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884FFDA: je 0x58850013
        __asm _emit 0x74
        __asm _emit 0x37
        // 0x5884FFDC: mov edx, 0x5898c922
        __asm _emit 0xBA
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5884FFE1: mov esi, 0x80
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884FFE6: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x5884FFE8: jmp 0x5884fff0
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x5884FFEA: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884FFF0: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5884FFF6: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5884FFF8: je 0x5885000b
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5884FFFA: mov cl, byte ptr [edx + eax]
        __asm _emit 0x8A
        __asm _emit 0x0C
        __asm _emit 0x02
        // 0x5884FFFD: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5884FFFF: je 0x5885000b
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58850001: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x58850003: inc eax
        __asm _emit 0x40
        // 0x58850004: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x58850007: jne 0x5884fff0
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x58850009: jmp 0x5885000f
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5885000B: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5885000D: jne 0x58850010
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x5885000F: dec eax
        __asm _emit 0x48
        // 0x58850010: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850013: mov esi, dword ptr [ebx - 0x80]
        __asm _emit 0x8B
        __asm _emit 0x73
        __asm _emit 0x80
        // 0x58850016: mov eax, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5885001A: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x40
        // 0x5885001D: add eax, 0x190
        __asm _emit 0x05
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850022: mov word ptr [esi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x26
        // 0x58850026: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58850028: je 0x58850030
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5885002A: push esi
        __asm _emit 0x56
        // 0x5885002B: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0x2F
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58850030: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x58850033: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58850035: je 0x5885003d
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58850037: push esi
        __asm _emit 0x56
        // 0x58850038: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0x2E
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5885003D: mov esi, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x33
        // 0x5885003F: mov eax, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58850043: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x40
        // 0x58850046: add eax, 0x18f
        __asm _emit 0x05
        __asm _emit 0x8F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885004B: mov word ptr [esi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x26
        // 0x5885004F: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58850051: je 0x58850059
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58850053: push esi
        __asm _emit 0x56
        // 0x58850054: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0x2E
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58850059: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x5885005C: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5885005E: je 0x58850066
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58850060: push esi
        __asm _emit 0x56
        // 0x58850061: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0x2E
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58850066: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x58850069: add edi, 0x14
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x14
        // 0x5885006C: sub dword ptr [esp + 0x3c], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x58850071: jne 0x5884fed2
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x5B
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58850077: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58850079: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0xCB
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5885007E: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58850080: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58850083: mov dword ptr [esp + 0x3c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58850087: mov byte ptr [esp + 0x24], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x06
        // 0x5885008C: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5885008E: je 0x588500c0
        __asm _emit 0x74
        __asm _emit 0x30
        // 0x58850090: mov edx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58850094: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58850098: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5885009C: add edx, 0x12c
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588500A2: push edx
        __asm _emit 0x52
        // 0x588500A3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588500A5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588500A7: push eax
        __asm _emit 0x50
        // 0x588500A8: push ecx
        __asm _emit 0x51
        // 0x588500A9: push ebp
        __asm _emit 0x55
        // 0x588500AA: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588500AC: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0x30
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588500B1: mov dword ptr [esi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588500B7: mov dword ptr [esi + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588500BE: jmp 0x588500c2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588500C0: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x588500C2: mov edi, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588500C6: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588500C8: mov byte ptr [esp + 0x28], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x00
        // 0x588500CD: mov dword ptr [edi], esi
        __asm _emit 0x89
        __asm _emit 0x37
        // 0x588500CF: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0xCB
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x588500D4: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x588500D6: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588500D9: mov dword ptr [esp + 0x3c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588500DD: mov byte ptr [esp + 0x24], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x07
        // 0x588500E2: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588500E4: je 0x58850116
        __asm _emit 0x74
        __asm _emit 0x30
        // 0x588500E6: mov edx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588500EA: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588500EE: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588500F2: add edx, 0x12c
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588500F8: push edx
        __asm _emit 0x52
        // 0x588500F9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588500FB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588500FD: push eax
        __asm _emit 0x50
        // 0x588500FE: push ecx
        __asm _emit 0x51
        // 0x588500FF: push ebp
        __asm _emit 0x55
        // 0x58850100: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58850102: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0x30
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58850107: mov dword ptr [esi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5885010D: mov dword ptr [esi + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850114: jmp 0x58850118
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58850116: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58850118: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5885011A: mov byte ptr [esp + 0x28], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x00
        // 0x5885011F: mov dword ptr [edi + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x77
        __asm _emit 0x10
        // 0x58850122: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0xCB
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x58850127: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58850129: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5885012C: mov dword ptr [esp + 0x3c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58850130: mov byte ptr [esp + 0x24], 8
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58850135: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58850137: je 0x5885016f
        __asm _emit 0x74
        __asm _emit 0x36
        // 0x58850139: mov edx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5885013D: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58850141: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58850145: add edx, 0xc8
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885014B: push edx
        __asm _emit 0x52
        // 0x5885014C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5885014E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58850150: add eax, 0x6d
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x6D
        // 0x58850153: push eax
        __asm _emit 0x50
        // 0x58850154: add ecx, 0x35
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x35
        // 0x58850157: push ecx
        __asm _emit 0x51
        // 0x58850158: push ebp
        __asm _emit 0x55
        // 0x58850159: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885015B: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0x30
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58850160: mov dword ptr [esi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58850166: mov dword ptr [esi + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885016D: jmp 0x58850171
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5885016F: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58850171: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58850173: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850178: mov byte ptr [esp + 0x28], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x00
        // 0x5885017D: mov dword ptr [edi + 0x20], esi
        __asm _emit 0x89
        __asm _emit 0x77
        __asm _emit 0x20
        // 0x58850180: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0x2B
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58850185: mov ecx, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x10
        // 0x58850188: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885018D: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x8E
        __asm _emit 0x2B
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58850192: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58850195: sub dword ptr [esp + 0x2c], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x01
        // 0x5885019A: mov dword ptr [esp + 0x38], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5885019E: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x588501A0: jne 0x5884fec1
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x1B
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588501A6: mov eax, dword ptr [ebp + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588501AC: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588501AF: mov dword ptr [ebp + 0x1bc], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588501B5: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x588501B8: mov dword ptr [ebp + 0x1c0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588501BE: mov eax, dword ptr [ebp + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x6C
        // 0x588501C1: mov ecx, 0xbfff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588501C6: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588501CA: mov ecx, dword ptr [ebp + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x6C
        // 0x588501CD: push 0xf0
        __asm _emit 0x68
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588501D2: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0x2B
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588501D7: mov ecx, dword ptr [ebp + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x70
        // 0x588501DA: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588501DF: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0x2B
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588501E4: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588501E9: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0xCA
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x588501EE: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588501F1: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588501F5: mov byte ptr [esp + 0x24], 9
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x09
        // 0x588501FA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588501FC: je 0x5885024d
        __asm _emit 0x74
        __asm _emit 0x4F
        // 0x588501FE: mov ecx, dword ptr [ebp + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x64
        // 0x58850201: cmp dword ptr [ecx + 0x160], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850208: jle 0x58850214
        __asm _emit 0x7E
        __asm _emit 0x0A
        // 0x5885020A: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850210: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58850212: jne 0x58850216
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x58850214: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58850216: mov edx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5885021A: add edx, 0x64
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x64
        // 0x5885021D: push edx
        __asm _emit 0x52
        // 0x5885021E: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58850222: add edx, 0xf6
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xF6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850228: push edx
        __asm _emit 0x52
        // 0x58850229: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5885022D: add edx, 0xff
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850233: push edx
        __asm _emit 0x52
        // 0x58850234: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885023A: push ecx
        __asm _emit 0x51
        // 0x5885023B: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58850241: push ebp
        __asm _emit 0x55
        // 0x58850242: push ecx
        __asm _emit 0x51
        // 0x58850243: push edx
        __asm _emit 0x52
        // 0x58850244: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58850246: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0xDB
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5885024B: jmp 0x5885024f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5885024D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885024F: mov dword ptr [ebp + 0x1c4], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850255: mov ax, word ptr [ebp + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x24
        // 0x58850259: mov ecx, 0xe5ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885025E: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x58850261: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850266: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x58850269: mov word ptr [ebp + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x24
        // 0x5885026D: mov eax, 0xfff0
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850272: and word ptr [ebp + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x45
        __asm _emit 0x24
        // 0x58850276: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58850278: mov dword ptr [ebp + 0x1a4], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885027E: mov dword ptr [ebp + 0x1a8], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xA8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850284: mov dword ptr [ebp + 0x1ac], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885028A: mov dword ptr [ebp + 0x1b0], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xB0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850290: mov dword ptr [ebp + 0x1b4], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xB4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58850296: mov dword ptr [ebp + 0x1b8], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885029C: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x5885029E: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588502A2: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588502A9: pop ecx
        __asm _emit 0x59
        // 0x588502AA: pop edi
        __asm _emit 0x5F
        // 0x588502AB: pop esi
        __asm _emit 0x5E
        // 0x588502AC: pop ebp
        __asm _emit 0x5D
        // 0x588502AD: pop ebx
        __asm _emit 0x5B
    }
}
