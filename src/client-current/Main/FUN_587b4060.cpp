// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 130 bytes in 1 exact ranges.
// Source symbol alias: FUN_587b4060.

// Ghidra body range 0x587B4060..0x587B40E2; 130 mapped bytes.
extern "C" __declspec(naked) void FUN_587b4060_segment_00() {
    __asm {
        // 0x587B4060: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B4064: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587B4068: push esi
        __asm _emit 0x56
        // 0x587B4069: push eax
        __asm _emit 0x50
        // 0x587B406A: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B406E: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587B4070: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B4074: push ecx
        __asm _emit 0x51
        // 0x587B4075: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B4079: push edx
        __asm _emit 0x52
        // 0x587B407A: push eax
        __asm _emit 0x50
        // 0x587B407B: push ecx
        __asm _emit 0x51
        // 0x587B407C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B407E: call 0x587b1640
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0xD5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B4083: push 0x1200
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B4088: lea eax, [esi + 0x2fc]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B408E: mov edx, 0xffff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B4093: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B4095: push eax
        __asm _emit 0x50
        // 0x587B4096: mov dword ptr [esi], 0x58999f74
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x74
        __asm _emit 0x9F
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587B409C: mov word ptr [esi + 0x18c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B40A3: mov dword ptr [esi + 0x2ec], 0xaaaaaaaa
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xEC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587B40AD: mov dword ptr [esi + 0x2f0], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xF0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B40B7: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0x8B
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587B40BC: push 0xb4
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B40C1: lea ecx, [esi + 0x238]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B40C7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B40C9: push ecx
        __asm _emit 0x51
        // 0x587B40CA: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x8B
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587B40CF: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x587B40D2: mov dword ptr [esi + 0x2f4], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B40DC: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587B40DE: pop esi
        __asm _emit 0x5E
        // 0x587B40DF: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
