// Complete Ghidra body ranges; intervening unowned gaps are excluded.
// Total body size: 502 bytes across one range.

// Ghidra range: 0x587E2E80 .. +0x1F6 bytes.
extern "C" __declspec(naked) void FUN_587E2E80_segment_00() {
    __asm {
        // 0x587E2E80: mov eax, dword ptr [0x58a245c0]
        __asm _emit 0xA1
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E2E85: push ebx
        __asm _emit 0x53
        // 0x587E2E86: push esi
        __asm _emit 0x56
        // 0x587E2E87: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587E2E89: mov dword ptr [0x58a24580], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E2E8F: mov ecx, dword ptr [eax + 0x150]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E2E95: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587E2E97: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x587E2E9A: push edi
        __asm _emit 0x57
        // 0x587E2E9B: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587E2E9D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587E2E9F: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E2EA6: call 0x587e0e40
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0xDF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587E2EAB: mov ecx, dword ptr [0x58a245bc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xBC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E2EB1: call 0x588890f0
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0x62
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x587E2EB6: mov ecx, dword ptr [0x58a247fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E2EBC: push 0x30000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x587E2EC1: call 0x588c0bd0
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0xDD
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x587E2EC6: movzx ecx, word ptr [esi + 0x60]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x587E2ECA: push ecx
        __asm _emit 0x51
        // 0x587E2ECB: mov ecx, dword ptr [esi + 0xdac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E2ED1: call 0x588ed750
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0xA8
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587E2ED6: mov ecx, dword ptr [esi + 0xdac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E2EDC: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587E2EDE: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587E2EE1: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587E2EE3: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E2EE9: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587E2EEB: cmp dword ptr [ecx + 0xc], edi
        __asm _emit 0x39
        __asm _emit 0x79
        __asm _emit 0x0C
        // 0x587E2EEE: jne 0x587e2efd
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x587E2EF0: mov ecx, dword ptr [esi + 0xdcc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xCC
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E2EF6: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587E2EF8: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587E2EFB: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587E2EFD: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xA1
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E2F02: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587E2F05: mov dl, byte ptr [esi + 0x61]
        __asm _emit 0x8A
        __asm _emit 0x56
        __asm _emit 0x61
        // 0x587E2F08: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587E2F0A: lea ebx, [ecx + 1]
        __asm _emit 0x8D
        __asm _emit 0x59
        __asm _emit 0x01
        // 0x587E2F0D: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587E2F0F: je 0x587e2f39
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x587E2F11: push ebp
        __asm _emit 0x55
        // 0x587E2F12: mov ebp, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0xA8
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E2F18: cmp byte ptr [ebp + 0x35c], dl
        __asm _emit 0x38
        __asm _emit 0x95
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E2F1E: jne 0x587e2f2a
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x587E2F20: cmp dword ptr [eax + 0xec], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E2F26: je 0x587e2f2a
        __asm _emit 0x74
        __asm _emit 0x02
        // 0x587E2F28: add ecx, ebx
        __asm _emit 0x03
        __asm _emit 0xCB
        // 0x587E2F2A: mov eax, dword ptr [eax + 0xce4]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xE4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E2F30: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587E2F32: jne 0x587e2f12
        __asm _emit 0x75
        __asm _emit 0xDE
        // 0x587E2F34: pop ebp
        __asm _emit 0x5D
        // 0x587E2F35: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587E2F37: jne 0x587e2f4b
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x587E2F39: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E2F3F: mov ecx, dword ptr [ecx + 0xdb8]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xB8
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E2F45: push ebx
        __asm _emit 0x53
        // 0x587E2F46: call 0x588b2700
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0xF7
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x587E2F4B: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x587E2F4F: mov eax, 0xe1ff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E2F54: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x587E2F57: mov dword ptr [esi + 0xe0c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x0C
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E2F5D: mov dword ptr [esi + 0xe14], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x14
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E2F63: mov dword ptr [esi + 0xe18], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x18
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E2F69: mov dword ptr [esi + 0xe1c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x1C
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E2F6F: mov ecx, 0x100
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E2F74: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD1
        // 0x587E2F77: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x587E2F7B: mov edx, 0xfffd
        __asm _emit 0xBA
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E2F80: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x587E2F84: or word ptr [esi + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x5E
        __asm _emit 0x24
        // 0x587E2F88: or word ptr [esi + 0x24], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587E2F8D: mov ecx, dword ptr [esi + 0x1044]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E2F93: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587E2F95: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587E2F98: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587E2F9A: mov ecx, dword ptr [esi + 0x1048]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x48
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E2FA0: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587E2FA2: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587E2FA5: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587E2FA7: mov ecx, dword ptr [esi + 0x104c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E2FAD: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587E2FAF: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587E2FB2: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587E2FB4: push edi
        __asm _emit 0x57
        // 0x587E2FB5: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587E2FB7: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0xFD
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587E2FBC: mov ecx, dword ptr [0x58a24590]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x90
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E2FC2: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587E2FC4: je 0x587e2fcd
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x587E2FC6: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587E2FC8: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587E2FCB: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587E2FCD: cmp dword ptr [esi + 0xd78], edi
        __asm _emit 0x39
        __asm _emit 0xBE
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E2FD3: jne 0x587e2fe2
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x587E2FD5: mov ecx, dword ptr [esi + 0xdbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E2FDB: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587E2FDD: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587E2FE0: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587E2FE2: mov dword ptr [0x58a248d8], edi
        __asm _emit 0x89
        __asm _emit 0x3D
        __asm _emit 0xD8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E2FE8: mov ecx, dword ptr [esi + 0xdd4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E2FEE: call 0x5884e640
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0xB6
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x587E2FF3: mov ecx, dword ptr [0x58a248cc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xCC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E2FF9: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587E2FFB: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587E2FFE: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587E3000: mov ecx, dword ptr [0x58a248cc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xCC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E3006: call 0x58770530
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0xD5
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587E300B: cmp dword ptr [esi + 0xe08], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0x08
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E3011: jne 0x587e3041
        __asm _emit 0x75
        __asm _emit 0x2E
        // 0x587E3013: mov eax, dword ptr [esi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E3019: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587E301B: je 0x587e3041
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x587E301D: cmp dword ptr [eax + 0xcc4], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0xC4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E3023: je 0x587e3041
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x587E3025: push ebx
        __asm _emit 0x53
        // 0x587E3026: push edi
        __asm _emit 0x57
        // 0x587E3027: push edi
        __asm _emit 0x57
        // 0x587E3028: push eax
        __asm _emit 0x50
        // 0x587E3029: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E302E: mov ecx, dword ptr [eax + 0xdb0]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xB0
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E3034: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x587E3036: call 0x58798d60
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0x5D
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x587E303B: mov dword ptr [esi + 0xe08], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x08
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E3041: mov eax, dword ptr [esi + 0x4f4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E3047: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E304C: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587E3050: mov eax, dword ptr [esi + 0x4f8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E3056: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x587E3058: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587E305C: mov esi, dword ptr [esi + 0x4fc]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0xFC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E3062: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587E3064: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x587E3068: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E306E: pop edi
        __asm _emit 0x5F
        // 0x587E306F: pop esi
        __asm _emit 0x5E
        // 0x587E3070: pop ebx
        __asm _emit 0x5B
        // 0x587E3071: jmp 0x587ba670
        __asm _emit 0xE9
        __asm _emit 0xFA
        __asm _emit 0x75
        __asm _emit 0xFD
        __asm _emit 0xFF
    }
}
