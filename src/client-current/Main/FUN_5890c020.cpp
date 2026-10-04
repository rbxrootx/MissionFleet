// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5890C020 .. +0x195 bytes.
// Source symbol alias: FUN_5890c020.
extern "C" __declspec(naked) void FUN_5890c020() {
    __asm {
        // 0x5890C020: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5890C022: push 0x5898ab3c
        __asm _emit 0x68
        __asm _emit 0x3C
        __asm _emit 0xAB
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5890C027: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890C02D: push eax
        __asm _emit 0x50
        // 0x5890C02E: push ebx
        __asm _emit 0x53
        // 0x5890C02F: push ebp
        __asm _emit 0x55
        // 0x5890C030: push esi
        __asm _emit 0x56
        // 0x5890C031: push edi
        __asm _emit 0x57
        // 0x5890C032: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5890C037: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5890C039: push eax
        __asm _emit 0x50
        // 0x5890C03A: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5890C03E: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890C044: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5890C046: test dword ptr [0x589cdff0], 0x800000
        __asm _emit 0xF7
        __asm _emit 0x05
        __asm _emit 0xF0
        __asm _emit 0xDF
        __asm _emit 0x9C
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0x00
        // 0x5890C050: mov edi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5890C054: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5890C058: mov ebp, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5890C05C: je 0x5890c168
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890C062: mov eax, dword ptr [0x589cdffc]
        __asm _emit 0xA1
        __asm _emit 0xFC
        __asm _emit 0xDF
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5890C067: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x5890C06A: jne 0x5890c0e9
        __asm _emit 0x75
        __asm _emit 0x7D
        // 0x5890C06C: test dword ptr [0x58a284fc], 0x8000
        __asm _emit 0xF7
        __asm _emit 0x05
        __asm _emit 0xFC
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890C076: push 0x24
        __asm _emit 0x6A
        __asm _emit 0x24
        // 0x5890C078: je 0x5890c0b3
        __asm _emit 0x74
        __asm _emit 0x39
        // 0x5890C07A: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xCF
        __asm _emit 0x0B
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5890C07F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5890C082: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5890C086: mov dword ptr [esp + 0x1c], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890C08E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5890C090: je 0x5890c15b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890C096: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5890C09A: push ecx
        __asm _emit 0x51
        // 0x5890C09B: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x5890C09D: sub edx, ebp
        __asm _emit 0x2B
        __asm _emit 0xD5
        // 0x5890C09F: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5890C0A1: sub ecx, dword ptr [esp + 0x28]
        __asm _emit 0x2B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5890C0A5: push edx
        __asm _emit 0x52
        // 0x5890C0A6: push ecx
        __asm _emit 0x51
        // 0x5890C0A7: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5890C0A9: call 0x5890bf40
        __asm _emit 0xE8
        __asm _emit 0x92
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5890C0AE: jmp 0x5890c15d
        __asm _emit 0xE9
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890C0B3: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0x0B
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5890C0B8: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5890C0BB: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5890C0BF: mov dword ptr [esp + 0x1c], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890C0C7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5890C0C9: je 0x5890c15b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890C0CF: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5890C0D3: push edx
        __asm _emit 0x52
        // 0x5890C0D4: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5890C0D6: sub ecx, ebp
        __asm _emit 0x2B
        __asm _emit 0xCD
        // 0x5890C0D8: mov edx, ebx
        __asm _emit 0x8B
        __asm _emit 0xD3
        // 0x5890C0DA: sub edx, dword ptr [esp + 0x28]
        __asm _emit 0x2B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5890C0DE: push ecx
        __asm _emit 0x51
        // 0x5890C0DF: push edx
        __asm _emit 0x52
        // 0x5890C0E0: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5890C0E2: call 0x5890bf70
        __asm _emit 0xE8
        __asm _emit 0x89
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5890C0E7: jmp 0x5890c15d
        __asm _emit 0xEB
        __asm _emit 0x74
        // 0x5890C0E9: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x5890C0EC: jne 0x5890c122
        __asm _emit 0x75
        __asm _emit 0x34
        // 0x5890C0EE: push 0x24
        __asm _emit 0x6A
        __asm _emit 0x24
        // 0x5890C0F0: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0x0B
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5890C0F5: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5890C0F8: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5890C0FC: mov dword ptr [esp + 0x1c], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890C104: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5890C106: je 0x5890c15b
        __asm _emit 0x74
        __asm _emit 0x53
        // 0x5890C108: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5890C10C: push ecx
        __asm _emit 0x51
        // 0x5890C10D: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x5890C10F: sub edx, ebp
        __asm _emit 0x2B
        __asm _emit 0xD5
        // 0x5890C111: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5890C113: sub ecx, dword ptr [esp + 0x28]
        __asm _emit 0x2B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5890C117: push edx
        __asm _emit 0x52
        // 0x5890C118: push ecx
        __asm _emit 0x51
        // 0x5890C119: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5890C11B: call 0x5890bfc0
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5890C120: jmp 0x5890c15d
        __asm _emit 0xEB
        __asm _emit 0x3B
        // 0x5890C122: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x5890C125: jl 0x5890c168
        __asm _emit 0x7C
        __asm _emit 0x41
        // 0x5890C127: push 0x24
        __asm _emit 0x6A
        __asm _emit 0x24
        // 0x5890C129: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0x0B
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5890C12E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5890C131: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5890C135: mov dword ptr [esp + 0x1c], 3
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890C13D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5890C13F: je 0x5890c15b
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x5890C141: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5890C145: push edx
        __asm _emit 0x52
        // 0x5890C146: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5890C148: sub ecx, ebp
        __asm _emit 0x2B
        __asm _emit 0xCD
        // 0x5890C14A: mov edx, ebx
        __asm _emit 0x8B
        __asm _emit 0xD3
        // 0x5890C14C: sub edx, dword ptr [esp + 0x28]
        __asm _emit 0x2B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5890C150: push ecx
        __asm _emit 0x51
        // 0x5890C151: push edx
        __asm _emit 0x52
        // 0x5890C152: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5890C154: call 0x5890bff0
        __asm _emit 0xE8
        __asm _emit 0x97
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5890C159: jmp 0x5890c15d
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5890C15B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5890C15D: mov dword ptr [esi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x5890C160: mov dword ptr [esp + 0x1c], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5890C168: cmp dword ptr [esi + 0x50], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x50
        __asm _emit 0x00
        // 0x5890C16C: je 0x5890c19d
        __asm _emit 0x74
        __asm _emit 0x2F
        // 0x5890C16E: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5890C172: push ebp
        __asm _emit 0x55
        // 0x5890C173: push eax
        __asm _emit 0x50
        // 0x5890C174: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5890C176: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0x71
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5890C17B: sub ebx, dword ptr [esp + 0x24]
        __asm _emit 0x2B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5890C17F: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5890C183: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5890C185: sub edi, ebp
        __asm _emit 0x2B
        __asm _emit 0xFD
        // 0x5890C187: mov dword ptr [esi + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x5890C18A: mov dword ptr [esi + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x5890C18D: mov dword ptr [esi + 0x1c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x1C
        // 0x5890C190: mov dword ptr [esi + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x20
        // 0x5890C193: mov dword ptr [esi + 0x54], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x5890C196: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890C19B: jmp 0x5890c19f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5890C19D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5890C19F: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5890C1A3: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890C1AA: pop ecx
        __asm _emit 0x59
        // 0x5890C1AB: pop edi
        __asm _emit 0x5F
        // 0x5890C1AC: pop esi
        __asm _emit 0x5E
        // 0x5890C1AD: pop ebp
        __asm _emit 0x5D
        // 0x5890C1AE: pop ebx
        __asm _emit 0x5B
        // 0x5890C1AF: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5890C1B2: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
