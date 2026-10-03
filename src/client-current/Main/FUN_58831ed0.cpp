// Complete Ghidra body ranges; the 10-byte gap is excluded.
// Total body size: 2805 bytes across two ranges.

// Ghidra range: 0x58831ED0 .. +0x8E7 bytes.
extern "C" __declspec(naked) void FUN_58831ed0_segment_00() {
    __asm {
        // 0x58831ED0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58831ED2: push 0x589840e8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58831ED7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831EDD: push eax
        __asm _emit 0x50
        // 0x58831EDE: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x58831EE1: push ebx
        __asm _emit 0x53
        // 0x58831EE2: push ebp
        __asm _emit 0x55
        // 0x58831EE3: push esi
        __asm _emit 0x56
        // 0x58831EE4: push edi
        __asm _emit 0x57
        // 0x58831EE5: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58831EEA: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58831EEC: push eax
        __asm _emit 0x50
        // 0x58831EED: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58831EF1: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831EF7: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58831EF9: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58831EFD: mov eax, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58831F01: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58831F05: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58831F09: mov edi, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58831F0D: mov ebx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58831F11: push eax
        __asm _emit 0x50
        // 0x58831F12: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58831F16: push ecx
        __asm _emit 0x51
        // 0x58831F17: push edx
        __asm _emit 0x52
        // 0x58831F18: push edi
        __asm _emit 0x57
        // 0x58831F19: push ebx
        __asm _emit 0x53
        // 0x58831F1A: push eax
        __asm _emit 0x50
        // 0x58831F1B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58831F1D: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0x12
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58831F22: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58831F28: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58831F2D: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x50
        // 0x58831F30: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58831F32: mov dword ptr [esi + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x58831F35: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831F3C: mov dword ptr [esi + 0x5c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x5C
        // 0x58831F3F: mov dword ptr [esi], 0x5899e164
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x64
        __asm _emit 0xE1
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58831F45: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58831F4B: mov eax, dword ptr [ecx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x58831F4E: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58831F52: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x58831F55: mov dword ptr [esp + 0x3c], 0x66
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831F5D: mov dword ptr [esp + 0x40], 0x198
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831F65: mov dword ptr [esp + 0x38], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831F6D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58831F70: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58831F72: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0xAC
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58831F77: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58831F79: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58831F7C: mov dword ptr [esp + 0x2c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58831F80: mov byte ptr [esp + 0x24], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x58831F85: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x58831F87: je 0x58831ffd
        __asm _emit 0x74
        __asm _emit 0x74
        // 0x58831F89: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x58831F8C: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58831F90: cmp dword ptr [eax + 0x164], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831F96: jle 0x58831faf
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58831F98: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58831F9A: jl 0x58831faf
        __asm _emit 0x7C
        __asm _emit 0x13
        // 0x58831F9C: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831FA2: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58831FA4: je 0x58831faf
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58831FA6: mov edx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58831FAA: mov ebp, dword ptr [edx + eax]
        __asm _emit 0x8B
        __asm _emit 0x2C
        __asm _emit 0x02
        // 0x58831FAD: jmp 0x58831fb1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58831FAF: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58831FB1: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58831FB5: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58831FB9: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58831FBB: push ebx
        __asm _emit 0x53
        // 0x58831FBC: push ebx
        __asm _emit 0x53
        // 0x58831FBD: push eax
        __asm _emit 0x50
        // 0x58831FBE: push ecx
        __asm _emit 0x51
        // 0x58831FBF: push esi
        __asm _emit 0x56
        // 0x58831FC0: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58831FC2: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0x11
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58831FC7: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58831FCD: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x50
        // 0x58831FD0: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x58831FD2: je 0x58831fff
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x58831FD4: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x58831FD7: mov dword ptr [edi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x0C
        // 0x58831FDA: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x58831FDD: mov dword ptr [edi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x10
        // 0x58831FE0: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x58831FE3: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x58831FE6: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x58831FE9: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58831FEC: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x58831FEF: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58831FF2: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x1C
        // 0x58831FF5: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58831FF8: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        // 0x58831FFB: jmp 0x58831fff
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58831FFD: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58831FFF: mov eax, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58832003: mov dword ptr [esi + eax - 0x134], edi
        __asm _emit 0x89
        __asm _emit 0xBC
        __asm _emit 0x06
        __asm _emit 0xCC
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5883200A: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x5883200D: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58832011: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832016: add dword ptr [esp + 0x3c], eax
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5883201A: sub dword ptr [esp + 0x38], eax
        __asm _emit 0x29
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5883201E: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58832022: jne 0x58831f70
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58832028: mov edi, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5883202C: lea eax, [esi + 0x6c]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5883202F: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58832033: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58832037: lea ecx, [eax + 0x4f]
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0x4F
        // 0x5883203A: mov dword ptr [esp + 0x40], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5883203E: lea ebp, [eax + 0x9c]
        __asm _emit 0x8D
        __asm _emit 0xA8
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832044: mov dword ptr [esp + 0x38], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883204C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58832050: push 0x90
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832055: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0xAB
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5883205A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5883205D: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58832061: mov byte ptr [esp + 0x24], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x58832066: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58832068: je 0x58832096
        __asm _emit 0x74
        __asm _emit 0x2C
        // 0x5883206A: push ebx
        __asm _emit 0x53
        // 0x5883206B: push ebx
        __asm _emit 0x53
        // 0x5883206C: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58832071: lea edx, [edi + 0xaf]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xAF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832077: push edx
        __asm _emit 0x52
        // 0x58832078: mov edx, dword ptr [esp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x5883207C: push ebp
        __asm _emit 0x55
        // 0x5883207D: lea ecx, [edi + 0x83]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832083: push ecx
        __asm _emit 0x51
        // 0x58832084: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5883208A: push edx
        __asm _emit 0x52
        // 0x5883208B: push ecx
        __asm _emit 0x51
        // 0x5883208C: push esi
        __asm _emit 0x56
        // 0x5883208D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5883208F: call 0x5878a280
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0x81
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x58832094: jmp 0x58832098
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58832096: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58832098: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5883209C: add dword ptr [esp + 0x40], 0x51
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x51
        // 0x588320A1: mov dword ptr [ecx], eax
        __asm _emit 0x89
        __asm _emit 0x01
        // 0x588320A3: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x588320A6: add ebp, 0x88
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588320AC: sub dword ptr [esp + 0x38], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x01
        // 0x588320B1: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588320B5: mov dword ptr [esp + 0x3c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588320B9: jne 0x58832050
        __asm _emit 0x75
        __asm _emit 0x95
        // 0x588320BB: push 0x10c
        __asm _emit 0x68
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588320C0: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x89
        __asm _emit 0xAB
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588320C5: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588320C8: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588320CC: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588320D0: mov byte ptr [esp + 0x24], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x03
        // 0x588320D5: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588320D7: je 0x5883210b
        __asm _emit 0x74
        __asm _emit 0x32
        // 0x588320D9: push ebx
        __asm _emit 0x53
        // 0x588320DA: push ebx
        __asm _emit 0x53
        // 0x588320DB: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588320E0: lea edx, [edi + 0x12c]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588320E6: push edx
        __asm _emit 0x52
        // 0x588320E7: lea ecx, [ebp + 0x118]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588320ED: push ecx
        __asm _emit 0x51
        // 0x588320EE: lea edx, [edi + 0xd0]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588320F4: push edx
        __asm _emit 0x52
        // 0x588320F5: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588320FB: lea ecx, [ebp + 0x53]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x53
        // 0x588320FE: push ecx
        __asm _emit 0x51
        // 0x588320FF: push edx
        __asm _emit 0x52
        // 0x58832100: push ebx
        __asm _emit 0x53
        // 0x58832101: push esi
        __asm _emit 0x56
        // 0x58832102: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58832104: call 0x58761090
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0xEF
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58832109: jmp 0x5883210d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5883210B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5883210D: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x5883210F: mov byte ptr [esp + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58832113: mov dword ptr [esi + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x58832116: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0xAB
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5883211B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5883211E: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58832122: mov byte ptr [esp + 0x24], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58832127: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58832129: je 0x5883215d
        __asm _emit 0x74
        __asm _emit 0x32
        // 0x5883212B: push ebx
        __asm _emit 0x53
        // 0x5883212C: push ebx
        __asm _emit 0x53
        // 0x5883212D: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58832132: lea ecx, [edi + 0x142]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832138: push ecx
        __asm _emit 0x51
        // 0x58832139: lea edx, [ebp + 0xc5]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883213F: push edx
        __asm _emit 0x52
        // 0x58832140: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58832146: add edi, 0x133
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883214C: push edi
        __asm _emit 0x57
        // 0x5883214D: lea ecx, [ebp + 0x4c]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x4C
        // 0x58832150: push ecx
        __asm _emit 0x51
        // 0x58832151: push edx
        __asm _emit 0x52
        // 0x58832152: push ebx
        __asm _emit 0x53
        // 0x58832153: push esi
        __asm _emit 0x56
        // 0x58832154: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58832156: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0x11
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5883215B: jmp 0x5883215f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5883215D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5883215F: mov dword ptr [esi + 0x7c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x58832162: lea eax, [esi + 0x80]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832168: add ebp, 0xd6
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0xD6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883216E: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58832172: mov dword ptr [esp + 0x3c], 0x96
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883217A: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5883217E: mov dword ptr [esp + 0x38], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58832182: mov dword ptr [esp + 0x40], 0x258
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883218A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832190: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58832192: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0xAA
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58832197: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58832199: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5883219C: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588321A0: mov byte ptr [esp + 0x24], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x05
        // 0x588321A5: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588321A7: je 0x58832222
        __asm _emit 0x74
        __asm _emit 0x79
        // 0x588321A9: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x588321AC: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588321B0: cmp dword ptr [eax + 0x164], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588321B6: jle 0x588321cf
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588321B8: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588321BA: jl 0x588321cf
        __asm _emit 0x7C
        __asm _emit 0x13
        // 0x588321BC: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588321C2: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588321C4: je 0x588321cf
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588321C6: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588321CA: mov ebp, dword ptr [ecx + eax]
        __asm _emit 0x8B
        __asm _emit 0x2C
        __asm _emit 0x01
        // 0x588321CD: jmp 0x588321d1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588321CF: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x588321D1: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588321D5: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588321D9: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588321DB: push ebx
        __asm _emit 0x53
        // 0x588321DC: push ebx
        __asm _emit 0x53
        // 0x588321DD: add edx, 0x157
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588321E3: push edx
        __asm _emit 0x52
        // 0x588321E4: push eax
        __asm _emit 0x50
        // 0x588321E5: push esi
        __asm _emit 0x56
        // 0x588321E6: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588321E8: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0x0F
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588321ED: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588321F3: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x50
        // 0x588321F6: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x588321F8: je 0x58832224
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x588321FA: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x10
        // 0x588321FD: mov dword ptr [edi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x58832200: mov edx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x14
        // 0x58832203: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x58832206: mov dword ptr [edi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x10
        // 0x58832209: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5883220B: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x5883220E: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58832211: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x58832214: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58832217: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x1C
        // 0x5883221A: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x5883221D: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        // 0x58832220: jmp 0x58832224
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58832222: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58832224: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58832228: mov eax, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5883222C: add dword ptr [esp + 0x3c], 5
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x05
        // 0x58832231: add dword ptr [esp + 0x38], 0x23
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x23
        // 0x58832236: add eax, 0x14
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x14
        // 0x58832239: mov dword ptr [ecx], edi
        __asm _emit 0x89
        __asm _emit 0x39
        // 0x5883223B: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5883223E: cmp eax, 0x280
        __asm _emit 0x3D
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832243: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58832247: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5883224B: mov dword ptr [esp + 0x2c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5883224F: jl 0x58832190
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x3B
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58832255: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883225A: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0xA9
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5883225F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58832262: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58832266: mov byte ptr [esp + 0x24], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x06
        // 0x5883226B: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5883226D: je 0x588322c0
        __asm _emit 0x74
        __asm _emit 0x51
        // 0x5883226F: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x58832272: cmp dword ptr [ecx + 0x160], 0x15
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x15
        // 0x58832279: jle 0x5883228d
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5883227B: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832281: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58832283: je 0x5883228d
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58832285: lea edx, [ecx + 0x540]
        __asm _emit 0x8D
        __asm _emit 0x91
        __asm _emit 0x40
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883228B: jmp 0x5883228f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5883228D: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5883228F: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58832293: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58832295: add ecx, 0x157
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883229B: push ecx
        __asm _emit 0x51
        // 0x5883229C: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588322A0: add ecx, 0xc8
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588322A6: push ecx
        __asm _emit 0x51
        // 0x588322A7: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588322AD: push edx
        __asm _emit 0x52
        // 0x588322AE: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588322B4: push esi
        __asm _emit 0x56
        // 0x588322B5: push edx
        __asm _emit 0x52
        // 0x588322B6: push ecx
        __asm _emit 0x51
        // 0x588322B7: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588322B9: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0xBA
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x588322BE: jmp 0x588322c2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588322C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588322C2: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588322C7: mov byte ptr [esp + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588322CB: mov dword ptr [esi + 0x88], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588322D1: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0xA9
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588322D6: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588322D9: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588322DD: mov byte ptr [esp + 0x24], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x07
        // 0x588322E2: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588322E4: je 0x58832337
        __asm _emit 0x74
        __asm _emit 0x51
        // 0x588322E6: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588322E9: cmp dword ptr [ecx + 0x160], 0x16
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x16
        // 0x588322F0: jle 0x58832304
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x588322F2: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588322F8: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588322FA: je 0x58832304
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588322FC: add ecx, 0x580
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x80
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832302: jmp 0x58832306
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58832304: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58832306: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5883230A: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5883230C: add edx, 0x157
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832312: push edx
        __asm _emit 0x52
        // 0x58832313: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58832317: add edx, 0xf9
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xF9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883231D: push edx
        __asm _emit 0x52
        // 0x5883231E: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58832324: push ecx
        __asm _emit 0x51
        // 0x58832325: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5883232B: push esi
        __asm _emit 0x56
        // 0x5883232C: push ecx
        __asm _emit 0x51
        // 0x5883232D: push edx
        __asm _emit 0x52
        // 0x5883232E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58832330: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x6B
        __asm _emit 0xBA
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58832335: jmp 0x58832339
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58832337: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58832339: mov dword ptr [esi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883233F: mov eax, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x58832342: mov ecx, 0x20
        __asm _emit 0xB9
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832347: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5883234B: mov word ptr [eax + 0x9c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832352: mov dword ptr [esp + 0x3c], 0x68
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883235A: mov dword ptr [esp + 0x40], 0x1a0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832362: mov dword ptr [esp + 0x38], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883236A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832370: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58832372: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0xA8
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58832377: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58832379: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5883237C: mov dword ptr [esp + 0x2c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58832380: mov byte ptr [esp + 0x24], 8
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58832385: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x58832387: je 0x588323fd
        __asm _emit 0x74
        __asm _emit 0x74
        // 0x58832389: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x5883238C: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58832390: cmp dword ptr [eax + 0x164], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832396: jle 0x588323af
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58832398: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5883239A: jl 0x588323af
        __asm _emit 0x7C
        __asm _emit 0x13
        // 0x5883239C: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588323A2: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588323A4: je 0x588323af
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588323A6: mov edx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588323AA: mov ebp, dword ptr [eax + edx]
        __asm _emit 0x8B
        __asm _emit 0x2C
        __asm _emit 0x10
        // 0x588323AD: jmp 0x588323b1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588323AF: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x588323B1: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588323B5: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588323B9: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588323BB: push ebx
        __asm _emit 0x53
        // 0x588323BC: push ebx
        __asm _emit 0x53
        // 0x588323BD: push eax
        __asm _emit 0x50
        // 0x588323BE: push ecx
        __asm _emit 0x51
        // 0x588323BF: push esi
        __asm _emit 0x56
        // 0x588323C0: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588323C2: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0x0D
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588323C7: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588323CD: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x50
        // 0x588323D0: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x588323D2: je 0x588323ff
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x588323D4: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x588323D7: mov dword ptr [edi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x0C
        // 0x588323DA: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x588323DD: mov dword ptr [edi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x10
        // 0x588323E0: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x588323E3: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x588323E6: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x588323E9: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588323EC: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x588323EF: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x588323F2: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x1C
        // 0x588323F5: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x588323F8: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        // 0x588323FB: jmp 0x588323ff
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588323FD: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588323FF: mov eax, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58832403: mov dword ptr [esi + eax - 0x110], edi
        __asm _emit 0x89
        __asm _emit 0xBC
        __asm _emit 0x06
        __asm _emit 0xF0
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5883240A: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x5883240D: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58832411: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832416: add dword ptr [esp + 0x3c], eax
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5883241A: sub dword ptr [esp + 0x38], eax
        __asm _emit 0x29
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5883241E: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58832422: jne 0x58832370
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58832428: mov edi, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5883242C: lea eax, [esi + 0x98]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832432: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58832436: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5883243A: lea ecx, [eax + 0x155]
        __asm _emit 0x8D
        __asm _emit 0x88
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832440: mov dword ptr [esp + 0x40], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58832444: lea ebp, [eax + 0x19d]
        __asm _emit 0x8D
        __asm _emit 0xA8
        __asm _emit 0x9D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883244A: mov dword ptr [esp + 0x38], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832452: push 0x90
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832457: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0xA7
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5883245C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5883245F: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58832463: mov byte ptr [esp + 0x24], 9
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x09
        // 0x58832468: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5883246A: je 0x58832498
        __asm _emit 0x74
        __asm _emit 0x2C
        // 0x5883246C: push ebx
        __asm _emit 0x53
        // 0x5883246D: push ebx
        __asm _emit 0x53
        // 0x5883246E: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58832473: lea edx, [edi + 0xaf]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xAF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832479: push edx
        __asm _emit 0x52
        // 0x5883247A: mov edx, dword ptr [esp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x5883247E: push ebp
        __asm _emit 0x55
        // 0x5883247F: lea ecx, [edi + 0x83]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832485: push ecx
        __asm _emit 0x51
        // 0x58832486: mov ecx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5883248C: push edx
        __asm _emit 0x52
        // 0x5883248D: push ecx
        __asm _emit 0x51
        // 0x5883248E: push esi
        __asm _emit 0x56
        // 0x5883248F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58832491: call 0x5878a280
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0x7D
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x58832496: jmp 0x5883249a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58832498: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5883249A: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5883249E: add dword ptr [esp + 0x40], 0x50
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x50
        // 0x588324A3: mov dword ptr [ecx], eax
        __asm _emit 0x89
        __asm _emit 0x01
        // 0x588324A5: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x588324A8: add ebp, 0x91
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588324AE: sub dword ptr [esp + 0x38], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x01
        // 0x588324B3: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588324B7: mov dword ptr [esp + 0x3c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588324BB: jne 0x58832452
        __asm _emit 0x75
        __asm _emit 0x95
        // 0x588324BD: push 0x10c
        __asm _emit 0x68
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588324C2: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0xA7
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588324C7: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588324CA: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588324CE: mov ebp, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588324D2: mov byte ptr [esp + 0x24], 0xa
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x0A
        // 0x588324D7: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588324D9: je 0x58832510
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x588324DB: push ebx
        __asm _emit 0x53
        // 0x588324DC: push ebx
        __asm _emit 0x53
        // 0x588324DD: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588324E2: lea edx, [edi + 0x12c]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588324E8: push edx
        __asm _emit 0x52
        // 0x588324E9: lea ecx, [ebp + 0x21e]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x1E
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588324EF: push ecx
        __asm _emit 0x51
        // 0x588324F0: lea edx, [edi + 0xd0]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588324F6: push edx
        __asm _emit 0x52
        // 0x588324F7: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588324FD: lea ecx, [ebp + 0x159]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832503: push ecx
        __asm _emit 0x51
        // 0x58832504: push edx
        __asm _emit 0x52
        // 0x58832505: push ebx
        __asm _emit 0x53
        // 0x58832506: push esi
        __asm _emit 0x56
        // 0x58832507: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58832509: call 0x58761090
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0xEB
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x5883250E: jmp 0x58832512
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58832510: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58832512: mov dword ptr [esi + 0xa4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832518: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x5883251A: mov byte ptr [esp + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5883251E: mov dword ptr [esi + 0xa8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832524: mov dword ptr [esi + 0xac], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883252A: mov dword ptr [esi + 0xb0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832530: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0xA7
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58832535: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58832538: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5883253C: mov byte ptr [esp + 0x24], 0xb
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x0B
        // 0x58832541: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58832543: je 0x5883257a
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x58832545: push ebx
        __asm _emit 0x53
        // 0x58832546: push ebx
        __asm _emit 0x53
        // 0x58832547: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5883254C: lea ecx, [edi + 0x142]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832552: push ecx
        __asm _emit 0x51
        // 0x58832553: lea edx, [ebp + 0x1cb]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0xCB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832559: push edx
        __asm _emit 0x52
        // 0x5883255A: mov edx, dword ptr [0x58a24534]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58832560: add edi, 0x133
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832566: push edi
        __asm _emit 0x57
        // 0x58832567: lea ecx, [ebp + 0x152]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883256D: push ecx
        __asm _emit 0x51
        // 0x5883256E: push edx
        __asm _emit 0x52
        // 0x5883256F: push ebx
        __asm _emit 0x53
        // 0x58832570: push esi
        __asm _emit 0x56
        // 0x58832571: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58832573: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0x0D
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58832578: jmp 0x5883257c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5883257A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5883257C: mov dword ptr [esi + 0xb4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832582: lea eax, [esi + 0xb8]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832588: add ebp, 0x1dc
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0xDC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883258E: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58832592: mov dword ptr [esp + 0x3c], 0x96
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883259A: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5883259E: mov dword ptr [esp + 0x38], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588325A2: mov dword ptr [esp + 0x40], 0x258
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588325AA: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588325B0: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588325B2: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x97
        __asm _emit 0xA6
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588325B7: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588325B9: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588325BC: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588325C0: mov byte ptr [esp + 0x24], 0xc
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588325C5: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588325C7: je 0x58832642
        __asm _emit 0x74
        __asm _emit 0x79
        // 0x588325C9: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x588325CC: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588325D0: cmp dword ptr [eax + 0x164], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588325D6: jle 0x588325ef
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588325D8: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588325DA: jl 0x588325ef
        __asm _emit 0x7C
        __asm _emit 0x13
        // 0x588325DC: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588325E2: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588325E4: je 0x588325ef
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588325E6: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588325EA: mov ebp, dword ptr [eax + ecx]
        __asm _emit 0x8B
        __asm _emit 0x2C
        __asm _emit 0x08
        // 0x588325ED: jmp 0x588325f1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588325EF: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x588325F1: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588325F5: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588325F9: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588325FB: push ebx
        __asm _emit 0x53
        // 0x588325FC: push ebx
        __asm _emit 0x53
        // 0x588325FD: add edx, 0x157
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832603: push edx
        __asm _emit 0x52
        // 0x58832604: push eax
        __asm _emit 0x50
        // 0x58832605: push esi
        __asm _emit 0x56
        // 0x58832606: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58832608: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0x0B
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5883260D: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58832613: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x50
        // 0x58832616: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x58832618: je 0x58832644
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x5883261A: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x10
        // 0x5883261D: mov dword ptr [edi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x58832620: mov edx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x14
        // 0x58832623: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x58832626: mov dword ptr [edi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x10
        // 0x58832629: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5883262B: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x5883262E: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58832631: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x58832634: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58832637: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x1C
        // 0x5883263A: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x5883263D: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        // 0x58832640: jmp 0x58832644
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58832642: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58832644: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58832648: mov eax, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5883264C: add dword ptr [esp + 0x3c], 5
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x05
        // 0x58832651: add dword ptr [esp + 0x38], 0x23
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x23
        // 0x58832656: add eax, 0x14
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x14
        // 0x58832659: mov dword ptr [ecx], edi
        __asm _emit 0x89
        __asm _emit 0x39
        // 0x5883265B: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5883265E: cmp eax, 0x280
        __asm _emit 0x3D
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832663: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58832667: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5883266B: mov dword ptr [esp + 0x2c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5883266F: jl 0x588325b0
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x3B
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58832675: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883267A: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xCF
        __asm _emit 0xA5
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5883267F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58832682: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58832686: mov byte ptr [esp + 0x24], 0xd
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x0D
        // 0x5883268B: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5883268D: je 0x588326e0
        __asm _emit 0x74
        __asm _emit 0x51
        // 0x5883268F: mov edx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x60
        // 0x58832692: cmp dword ptr [edx + 0x160], 0x15
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x15
        // 0x58832699: jle 0x588326ad
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5883269B: mov edx, dword ptr [edx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588326A1: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x588326A3: je 0x588326ad
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588326A5: add edx, 0x540
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x40
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588326AB: jmp 0x588326af
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588326AD: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588326AF: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588326B3: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588326B5: add ecx, 0x157
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588326BB: push ecx
        __asm _emit 0x51
        // 0x588326BC: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588326C0: add ecx, 0x1ce
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xCE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588326C6: push ecx
        __asm _emit 0x51
        // 0x588326C7: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588326CD: push edx
        __asm _emit 0x52
        // 0x588326CE: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588326D4: push esi
        __asm _emit 0x56
        // 0x588326D5: push edx
        __asm _emit 0x52
        // 0x588326D6: push ecx
        __asm _emit 0x51
        // 0x588326D7: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588326D9: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0xB6
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x588326DE: jmp 0x588326e2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588326E0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588326E2: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588326E7: mov byte ptr [esp + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588326EB: mov dword ptr [esi + 0xc0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588326F1: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0xA5
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588326F6: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588326F9: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588326FD: mov byte ptr [esp + 0x24], 0xe
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x0E
        // 0x58832702: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58832704: je 0x58832757
        __asm _emit 0x74
        __asm _emit 0x51
        // 0x58832706: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x58832709: cmp dword ptr [ecx + 0x160], 0x16
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x16
        // 0x58832710: jle 0x58832724
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x58832712: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832718: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5883271A: je 0x58832724
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5883271C: add ecx, 0x580
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x80
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832722: jmp 0x58832726
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58832724: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58832726: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5883272A: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5883272C: add edx, 0x157
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832732: push edx
        __asm _emit 0x52
        // 0x58832733: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58832737: add edx, 0x1ff
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xFF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883273D: push edx
        __asm _emit 0x52
        // 0x5883273E: mov edx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58832744: push ecx
        __asm _emit 0x51
        // 0x58832745: mov ecx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5883274B: push esi
        __asm _emit 0x56
        // 0x5883274C: push ecx
        __asm _emit 0x51
        // 0x5883274D: push edx
        __asm _emit 0x52
        // 0x5883274E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58832750: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0x4B
        __asm _emit 0xB6
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58832755: jmp 0x58832759
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58832757: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58832759: mov dword ptr [esi + 0xc4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883275F: mov eax, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832765: mov ecx, 0x20
        __asm _emit 0xB9
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883276A: mov word ptr [eax + 0x9c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832771: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x58832774: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58832779: mov byte ptr [esp + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5883277D: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x9E
        __asm _emit 0x05
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58832782: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832788: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5883278D: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x8E
        __asm _emit 0x05
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58832792: mov eax, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x58832795: mov edx, 0xfffd
        __asm _emit 0xBA
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883279A: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5883279E: mov eax, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588327A4: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588327A6: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588327AA: lea edi, [esi + 0xb8]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588327B0: mov ebp, 2
        __asm _emit 0xBD
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588327B5: jmp 0x588327c0
        __asm _emit 0xEB
        __asm _emit 0x09
    }
}

// Ghidra range: 0x588327C0 .. +0x20E bytes.
extern "C" __declspec(naked) void FUN_58831ed0_segment_01() {
    __asm {
        // 0x588327C0: mov ecx, dword ptr [edi - 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xC8
        // 0x588327C3: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588327C8: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0x05
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588327CD: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588327CF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588327D4: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0x05
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588327D9: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588327DC: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x588327DF: jne 0x588327c0
        __asm _emit 0x75
        __asm _emit 0xDF
        // 0x588327E1: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588327E7: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588327EC: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0x05
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588327F1: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588327F7: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588327FC: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0x05
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58832801: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832807: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x5883280A: mov eax, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832810: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x58832813: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832819: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883281E: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0x04
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58832823: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832829: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883282E: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0x04
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58832833: mov eax, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832839: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x5883283C: mov eax, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832842: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x58832845: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58832847: mov dword ptr [esi + 0xc8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883284D: mov dword ptr [esi + 0xcc], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832853: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0xA3
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58832858: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5883285A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5883285D: mov dword ptr [esp + 0x40], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58832861: mov byte ptr [esp + 0x24], 0xf
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x58832866: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x58832868: je 0x588328de
        __asm _emit 0x74
        __asm _emit 0x74
        // 0x5883286A: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x5883286D: cmp dword ptr [eax + 0x164], 0x146
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832877: jle 0x5883288b
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x58832879: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883287F: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58832881: je 0x5883288b
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58832883: mov ebp, dword ptr [eax + 0x518]
        __asm _emit 0x8B
        __asm _emit 0xA8
        __asm _emit 0x18
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832889: jmp 0x5883288d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5883288B: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5883288D: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58832891: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58832895: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58832897: push ebx
        __asm _emit 0x53
        // 0x58832898: push ebx
        __asm _emit 0x53
        // 0x58832899: sub edx, -0x80
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x80
        // 0x5883289C: push edx
        __asm _emit 0x52
        // 0x5883289D: add eax, 0x4d
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x4D
        // 0x588328A0: push eax
        __asm _emit 0x50
        // 0x588328A1: push esi
        __asm _emit 0x56
        // 0x588328A2: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588328A4: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0x08
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588328A9: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588328AF: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x50
        // 0x588328B2: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x588328B4: je 0x588328e0
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x588328B6: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x10
        // 0x588328B9: mov dword ptr [edi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x588328BC: mov edx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x14
        // 0x588328BF: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x588328C2: mov dword ptr [edi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x10
        // 0x588328C5: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x588328C7: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x588328CA: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588328CD: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x588328D0: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x588328D3: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x1C
        // 0x588328D6: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x588328D9: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        // 0x588328DC: jmp 0x588328e0
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588328DE: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588328E0: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588328E2: mov byte ptr [esp + 0x28], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588328E6: mov dword ptr [esi + 0x74], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x74
        // 0x588328E9: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0xA3
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588328EE: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588328F0: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588328F3: mov dword ptr [esp + 0x40], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588328F7: mov byte ptr [esp + 0x24], 0x10
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588328FC: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588328FE: je 0x58832978
        __asm _emit 0x74
        __asm _emit 0x78
        // 0x58832900: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x58832903: cmp dword ptr [eax + 0x164], 0x146
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883290D: jle 0x58832921
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5883290F: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832915: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58832917: je 0x58832921
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58832919: mov ebp, dword ptr [eax + 0x518]
        __asm _emit 0x8B
        __asm _emit 0xA8
        __asm _emit 0x18
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883291F: jmp 0x58832923
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58832921: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58832923: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58832927: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5883292B: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5883292D: push ebx
        __asm _emit 0x53
        // 0x5883292E: push ebx
        __asm _emit 0x53
        // 0x5883292F: sub eax, -0x80
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x80
        // 0x58832932: push eax
        __asm _emit 0x50
        // 0x58832933: add ecx, 0x151
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832939: push ecx
        __asm _emit 0x51
        // 0x5883293A: push esi
        __asm _emit 0x56
        // 0x5883293B: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5883293D: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0x08
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58832942: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58832948: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x50
        // 0x5883294B: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x5883294D: je 0x5883297a
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x5883294F: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x58832952: mov dword ptr [edi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x0C
        // 0x58832955: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x58832958: mov dword ptr [edi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x10
        // 0x5883295B: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x5883295E: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x58832961: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x58832964: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58832967: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x5883296A: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x5883296D: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x1C
        // 0x58832970: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58832973: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        // 0x58832976: jmp 0x5883297a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58832978: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5883297A: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x5883297D: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832982: mov dword ptr [esi + 0xa0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832988: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5883298C: mov eax, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58832992: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58832994: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58832998: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5883299A: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5883299E: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588329A2: mov edx, 0xe5ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588329A7: mov eax, 0x500
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588329AC: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588329AF: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x588329B2: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588329B6: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588329B8: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588329BC: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588329C3: pop ecx
        __asm _emit 0x59
        // 0x588329C4: pop edi
        __asm _emit 0x5F
        // 0x588329C5: pop esi
        __asm _emit 0x5E
        // 0x588329C6: pop ebp
        __asm _emit 0x5D
        // 0x588329C7: pop ebx
        __asm _emit 0x5B
        // 0x588329C8: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x588329CB: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
