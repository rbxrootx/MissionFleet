// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5890D0C0 .. +0x13D bytes.
// Source symbol alias: FUN_5890d0c0.
extern "C" __declspec(naked) void FUN_5890d0c0() {
    __asm {
        // 0x5890D0C0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5890D0C2: push 0x5898ac03
        __asm _emit 0x68
        __asm _emit 0x03
        __asm _emit 0xAC
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5890D0C7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890D0CD: push eax
        __asm _emit 0x50
        // 0x5890D0CE: push ecx
        __asm _emit 0x51
        // 0x5890D0CF: push ebx
        __asm _emit 0x53
        // 0x5890D0D0: push ebp
        __asm _emit 0x55
        // 0x5890D0D1: push esi
        __asm _emit 0x56
        // 0x5890D0D2: push edi
        __asm _emit 0x57
        // 0x5890D0D3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5890D0D8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5890D0DA: push eax
        __asm _emit 0x50
        // 0x5890D0DB: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5890D0DF: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890D0E5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5890D0E7: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5890D0EB: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5890D0EF: mov edi, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5890D0F3: mov ebx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5890D0F7: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5890D0FB: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5890D0FF: push eax
        __asm _emit 0x50
        // 0x5890D100: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5890D104: push edi
        __asm _emit 0x57
        // 0x5890D105: push ebx
        __asm _emit 0x53
        // 0x5890D106: push ecx
        __asm _emit 0x51
        // 0x5890D107: push edx
        __asm _emit 0x52
        // 0x5890D108: push eax
        __asm _emit 0x50
        // 0x5890D109: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5890D10B: call 0x5890c720
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5890D110: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5890D112: mov dword ptr [esi + 0x108], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890D118: mov dword ptr [esi + 0x104], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890D11E: sub ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x2B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5890D122: sub edi, dword ptr [esp + 0x30]
        __asm _emit 0x2B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5890D126: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x5890D128: mov dword ptr [esp + 0x24], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5890D12C: mov dword ptr [esi], 0x589a2cdc
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xDC
        __asm _emit 0x2C
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5890D132: mov dword ptr [esi + 0x114], 0x3e8
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890D13C: mov dword ptr [esi + 0x11c], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890D142: mov dword ptr [esi + 0x120], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890D148: mov dword ptr [esi + 0x124], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890D14E: mov dword ptr [esi + 0x128], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890D154: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0xFA
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5890D159: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5890D15C: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5890D160: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x5890D165: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x5890D167: je 0x5890d18d
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x5890D169: mov ecx, dword ptr [esi + 0x128]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890D16F: mov edx, dword ptr [esi + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890D175: push 0x840
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890D17A: push ebp
        __asm _emit 0x55
        // 0x5890D17B: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x5890D17D: push ecx
        __asm _emit 0x51
        // 0x5890D17E: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x5890D180: push edx
        __asm _emit 0x52
        // 0x5890D181: push ebp
        __asm _emit 0x55
        // 0x5890D182: push ebp
        __asm _emit 0x55
        // 0x5890D183: push ebp
        __asm _emit 0x55
        // 0x5890D184: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5890D186: call 0x5890c600
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5890D18B: jmp 0x5890d18f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5890D18D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5890D18F: mov ecx, dword ptr [esi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x1C
        // 0x5890D192: sub ecx, dword ptr [esi + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x5890D195: mov dword ptr [esi + 0x110], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890D19B: imul ecx, ecx, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC9
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890D1A1: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5890D1A6: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5890D1A8: mov ecx, dword ptr [esi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x20
        // 0x5890D1AB: sub ecx, dword ptr [esi + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x18
        // 0x5890D1AE: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5890D1B1: imul ecx, ecx, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC9
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890D1B7: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5890D1B9: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5890D1BC: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5890D1BE: mov dword ptr [esi + 0x124], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890D1C4: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5890D1C9: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5890D1CB: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5890D1CE: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x5890D1D0: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x5890D1D3: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5890D1D5: mov dword ptr [esi + 0x114], 0x3e8
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890D1DF: mov dword ptr [esi + 0x128], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890D1E5: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5890D1E7: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5890D1EB: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890D1F2: pop ecx
        __asm _emit 0x59
        // 0x5890D1F3: pop edi
        __asm _emit 0x5F
        // 0x5890D1F4: pop esi
        __asm _emit 0x5E
        // 0x5890D1F5: pop ebp
        __asm _emit 0x5D
        // 0x5890D1F6: pop ebx
        __asm _emit 0x5B
        // 0x5890D1F7: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5890D1FA: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
