// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58901E60 .. +0x165 bytes.
// Source symbol alias: FUN_58901e60.
extern "C" __declspec(naked) void FUN_58901e60() {
    __asm {
        // 0x58901E60: push ebp
        __asm _emit 0x55
        // 0x58901E61: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58901E63: and esp, 0xfffffff8
        __asm _emit 0x83
        __asm _emit 0xE4
        __asm _emit 0xF8
        // 0x58901E66: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58901E68: push 0x5898a738
        __asm _emit 0x68
        __asm _emit 0x38
        __asm _emit 0xA7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58901E6D: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58901E73: push eax
        __asm _emit 0x50
        // 0x58901E74: sub esp, 0x30
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x30
        // 0x58901E77: push ebx
        __asm _emit 0x53
        // 0x58901E78: push esi
        __asm _emit 0x56
        // 0x58901E79: push edi
        __asm _emit 0x57
        // 0x58901E7A: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58901E7F: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58901E81: push eax
        __asm _emit 0x50
        // 0x58901E82: lea eax, [esp + 0x40]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58901E86: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58901E8C: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58901E90: mov dword ptr [ecx + 4], 0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58901E97: lea esi, [ecx + 8]
        __asm _emit 0x8D
        __asm _emit 0x71
        __asm _emit 0x08
        // 0x58901E9A: mov ebx, 3
        __asm _emit 0xBB
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58901E9F: nop
        __asm _emit 0x90
        // 0x58901EA0: push 0x33
        __asm _emit 0x6A
        __asm _emit 0x33
        // 0x58901EA2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58901EA4: push esi
        __asm _emit 0x56
        // 0x58901EA5: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x9E
        __asm _emit 0xAD
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58901EAA: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58901EAD: add esi, 0x47
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x47
        // 0x58901EB0: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x58901EB3: jne 0x58901ea0
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x58901EB5: mov edi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x58901EB8: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x58901EBA: lea edx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x58901EBD: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58901EC0: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x58901EC2: inc eax
        __asm _emit 0x40
        // 0x58901EC3: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x58901EC5: jne 0x58901ec0
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x58901EC7: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58901EC9: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58901ECD: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58901ECF: jle 0x58901fb6
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58901ED5: lea esi, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x70
        __asm _emit 0x01
        // 0x58901ED8: push esi
        __asm _emit 0x56
        // 0x58901ED9: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0xF6
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58901EDE: push esi
        __asm _emit 0x56
        // 0x58901EDF: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x58901EE1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58901EE3: push ebx
        __asm _emit 0x53
        // 0x58901EE4: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0xAD
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58901EE9: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58901EEC: push edi
        __asm _emit 0x57
        // 0x58901EED: push esi
        __asm _emit 0x56
        // 0x58901EEE: push ebx
        __asm _emit 0x53
        // 0x58901EEF: call 0x58731b60
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0xFC
        __asm _emit 0xE2
        __asm _emit 0xFF
        // 0x58901EF4: lea ecx, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58901EF8: call 0x588ffdb0
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0xDE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58901EFD: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58901EFF: mov dword ptr [esp + 0x48], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x58901F03: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58901F07: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58901F09: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58901F0B: jle 0x58901f3a
        __asm _emit 0x7E
        __asm _emit 0x2D
        // 0x58901F0D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58901F10: mov cl, byte ptr [esi + ebx]
        __asm _emit 0x8A
        __asm _emit 0x0C
        __asm _emit 0x1E
        // 0x58901F13: cmp cl, byte ptr [edi + 0x589a24cc]
        __asm _emit 0x3A
        __asm _emit 0x8F
        __asm _emit 0xCC
        __asm _emit 0x24
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x58901F19: jne 0x58901f35
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x58901F1B: lea edx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58901F1F: push edx
        __asm _emit 0x52
        // 0x58901F20: lea ecx, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58901F24: mov dword ptr [esp + 0x24], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58901F28: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58901F2C: call 0x58901de0
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58901F31: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58901F35: inc esi
        __asm _emit 0x46
        // 0x58901F36: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x58901F38: jl 0x58901f10
        __asm _emit 0x7C
        __asm _emit 0xD6
        // 0x58901F3A: inc edi
        __asm _emit 0x47
        // 0x58901F3B: cmp edi, 4
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x04
        // 0x58901F3E: jb 0x58901f03
        __asm _emit 0x72
        __asm _emit 0xC3
        // 0x58901F40: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58901F44: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58901F48: push eax
        __asm _emit 0x50
        // 0x58901F49: lea ecx, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58901F4D: mov dword ptr [esp + 0x20], 5
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58901F55: call 0x58901de0
        __asm _emit 0xE8
        __asm _emit 0x86
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58901F5A: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58901F5E: sub ecx, dword ptr [esp + 0x30]
        __asm _emit 0x2B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58901F62: test ecx, 0xfffffff8
        __asm _emit 0xF7
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58901F68: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58901F6C: je 0x58901f7b
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x58901F6E: lea edx, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58901F72: push edx
        __asm _emit 0x52
        // 0x58901F73: push ebx
        __asm _emit 0x53
        // 0x58901F74: call 0x58901870
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58901F79: jmp 0x58901f81
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x58901F7B: push ebx
        __asm _emit 0x53
        // 0x58901F7C: call 0x589017f0
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58901F81: push ebx
        __asm _emit 0x53
        // 0x58901F82: call 0x5897ce26
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0xAE
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58901F87: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58901F8B: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58901F8D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58901F90: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x58901F92: je 0x58901f9d
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58901F94: push eax
        __asm _emit 0x50
        // 0x58901F95: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0xAC
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58901F9A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58901F9D: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58901FA1: push eax
        __asm _emit 0x50
        // 0x58901FA2: mov dword ptr [esp + 0x34], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58901FA6: mov dword ptr [esp + 0x38], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58901FAA: mov dword ptr [esp + 0x3c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58901FAE: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0xAC
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58901FB3: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58901FB6: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58901FBA: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58901FC1: pop ecx
        __asm _emit 0x59
        // 0x58901FC2: pop edi
        __asm _emit 0x5F
        // 0x58901FC3: pop esi
        __asm _emit 0x5E
        // 0x58901FC4: pop ebx
        __asm _emit 0x5B
    }
}
