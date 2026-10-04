// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5884F210 .. +0xEF bytes.
// Source symbol alias: FUN_5884f210.
extern "C" __declspec(naked) void FUN_5884f210() {
    __asm {
        // 0x5884F210: push ebp
        __asm _emit 0x55
        // 0x5884F211: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5884F213: and esp, 0xfffffff8
        __asm _emit 0x83
        __asm _emit 0xE4
        __asm _emit 0xF8
        // 0x5884F216: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5884F218: push 0x5898514e
        __asm _emit 0x68
        __asm _emit 0x4E
        __asm _emit 0x51
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5884F21D: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F223: push eax
        __asm _emit 0x50
        // 0x5884F224: sub esp, 0x128
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F22A: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5884F22F: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5884F231: mov dword ptr [esp + 0x120], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F238: push ebx
        __asm _emit 0x53
        // 0x5884F239: push esi
        __asm _emit 0x56
        // 0x5884F23A: push edi
        __asm _emit 0x57
        // 0x5884F23B: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5884F240: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5884F242: push eax
        __asm _emit 0x50
        // 0x5884F243: lea eax, [esp + 0x138]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F24A: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F250: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x5884F252: mov ecx, 0x45
        __asm _emit 0xB9
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F257: lea esi, [ebp + 8]
        __asm _emit 0x8D
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5884F25A: lea edi, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5884F25E: push 0x820
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F263: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x5884F265: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0xD9
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5884F26A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5884F26D: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5884F271: mov dword ptr [esp + 0x140], 0
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F27C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884F27E: je 0x5884f2a2
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x5884F280: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5884F284: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5884F288: push ecx
        __asm _emit 0x51
        // 0x5884F289: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5884F28D: push edx
        __asm _emit 0x52
        // 0x5884F28E: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5884F292: push ecx
        __asm _emit 0x51
        // 0x5884F293: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5884F297: push edx
        __asm _emit 0x52
        // 0x5884F298: push ecx
        __asm _emit 0x51
        // 0x5884F299: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884F29B: call 0x5875f650
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0x03
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5884F2A0: jmp 0x5884f2a4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884F2A2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884F2A4: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5884F2A8: mov dword ptr [ebx + edx*4 + 0x1d0], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0xD0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F2AF: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5884F2B3: cmp dword ptr [ebx + eax*4 + 0x1d0], 0
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0x83
        __asm _emit 0xD0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F2BB: mov dword ptr [esp + 0x140], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884F2C6: je 0x5884f2d9
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5884F2C8: lea ecx, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5884F2CC: push ecx
        __asm _emit 0x51
        // 0x5884F2CD: mov ecx, dword ptr [ebx + eax*4 + 0x1d0]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x83
        __asm _emit 0xD0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F2D4: call 0x5875f6b0
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0x03
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5884F2D9: mov ecx, dword ptr [esp + 0x138]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F2E0: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F2E7: pop ecx
        __asm _emit 0x59
        // 0x5884F2E8: pop edi
        __asm _emit 0x5F
        // 0x5884F2E9: pop esi
        __asm _emit 0x5E
        // 0x5884F2EA: pop ebx
        __asm _emit 0x5B
        // 0x5884F2EB: mov ecx, dword ptr [esp + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F2F2: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5884F2F4: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0xD8
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5884F2F9: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x5884F2FB: pop ebp
        __asm _emit 0x5D
        // 0x5884F2FC: ret 0x114
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x01
    }
}
