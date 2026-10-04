// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588EADE0 .. +0x147 bytes.
// Source symbol alias: FUN_588eade0.
extern "C" __declspec(naked) void FUN_588eade0() {
    __asm {
        // 0x588EADE0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588EADE2: push 0x5898994f
        __asm _emit 0x68
        __asm _emit 0x4F
        __asm _emit 0x99
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588EADE7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EADED: push eax
        __asm _emit 0x50
        // 0x588EADEE: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x588EADF1: push ebx
        __asm _emit 0x53
        // 0x588EADF2: push ebp
        __asm _emit 0x55
        // 0x588EADF3: push esi
        __asm _emit 0x56
        // 0x588EADF4: push edi
        __asm _emit 0x57
        // 0x588EADF5: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588EADFA: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588EADFC: push eax
        __asm _emit 0x50
        // 0x588EADFD: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588EAE01: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAE07: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x588EAE09: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588EAE0D: lea esi, [edi + 0x1808]
        __asm _emit 0x8D
        __asm _emit 0xB7
        __asm _emit 0x08
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAE13: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588EAE15: mov dword ptr [edi], 0x589a1468
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x68
        __asm _emit 0x14
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588EAE1B: call 0x588ffdb0
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0x4F
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588EAE20: push 0x587536c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x36
        __asm _emit 0x75
        __asm _emit 0x58
        // 0x588EAE25: push 0x588ffdb0
        __asm _emit 0x68
        __asm _emit 0xB0
        __asm _emit 0xFD
        __asm _emit 0x8F
        __asm _emit 0x58
        // 0x588EAE2A: push 0x200
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAE2F: push 0x18
        __asm _emit 0x6A
        __asm _emit 0x18
        // 0x588EAE31: lea ebp, [edi + 0x1820]
        __asm _emit 0x8D
        __asm _emit 0xAF
        __asm _emit 0x20
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAE37: push ebp
        __asm _emit 0x55
        // 0x588EAE38: mov dword ptr [esp + 0x38], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAE40: call 0x5897d0be
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x22
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EAE45: push 0x198
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAE4A: mov byte ptr [esp + 0x28], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x01
        // 0x588EAE4F: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0x1D
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EAE54: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588EAE57: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588EAE5B: mov byte ptr [esp + 0x24], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x588EAE60: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588EAE62: je 0x588eae76
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x588EAE64: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EAE66: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588EAE68: push 0x589a14bc
        __asm _emit 0x68
        __asm _emit 0xBC
        __asm _emit 0x14
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588EAE6D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588EAE6F: call 0x588f3d70
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAE74: jmp 0x588eae78
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588EAE76: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588EAE78: push 0x198
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAE7D: mov byte ptr [esp + 0x28], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x01
        // 0x588EAE82: mov dword ptr [edi + 0x4830], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x30
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAE88: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0x1D
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EAE8D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588EAE90: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588EAE94: mov byte ptr [esp + 0x24], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x03
        // 0x588EAE99: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588EAE9B: je 0x588eaeaf
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x588EAE9D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EAE9F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588EAEA1: push 0x589a14ac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x14
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588EAEA6: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588EAEA8: call 0x588f3d70
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAEAD: jmp 0x588eaeb1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588EAEAF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588EAEB1: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAEB6: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588EAEB8: mov byte ptr [esp + 0x28], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x01
        // 0x588EAEBD: mov dword ptr [edi + 0x4834], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x34
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAEC3: call 0x58752830
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0x79
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588EAEC8: lea esi, [edi + 0x1008]
        __asm _emit 0x8D
        __asm _emit 0xB7
        __asm _emit 0x08
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAECE: mov ebx, 0x200
        __asm _emit 0xBB
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAED3: jmp 0x588eaee0
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x588EAED5: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAEDC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588EAEE0: push 0x10
        __asm _emit 0x6A
        __asm _emit 0x10
        // 0x588EAEE2: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x588EAEE4: mov dword ptr [esi - 0x800], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAEEE: mov dword ptr [esi], 0
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAEF4: call 0x58752830
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0x79
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588EAEF9: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588EAEFC: add ebp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x18
        // 0x588EAEFF: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x588EAF02: jne 0x588eaee0
        __asm _emit 0x75
        __asm _emit 0xDC
        // 0x588EAF04: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588EAF06: mov dword ptr [edi + 0x4820], ebx
        __asm _emit 0x89
        __asm _emit 0x9F
        __asm _emit 0x20
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAF0C: call 0x588ea770
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588EAF11: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x588EAF13: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588EAF17: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EAF1E: pop ecx
        __asm _emit 0x59
        // 0x588EAF1F: pop edi
        __asm _emit 0x5F
        // 0x588EAF20: pop esi
        __asm _emit 0x5E
        // 0x588EAF21: pop ebp
        __asm _emit 0x5D
        // 0x588EAF22: pop ebx
        __asm _emit 0x5B
        // 0x588EAF23: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x588EAF26: ret
        __asm _emit 0xC3
    }
}
