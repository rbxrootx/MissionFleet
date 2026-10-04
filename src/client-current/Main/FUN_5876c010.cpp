// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5876C010 .. +0x343 bytes.
// Source symbol alias: FUN_5876c010.
extern "C" __declspec(naked) void FUN_5876c010() {
    __asm {
        // 0x5876C010: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x5876C013: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5876C017: sub ecx, dword ptr [esp + 0x20]
        __asm _emit 0x2B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5876C01B: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5876C020: imul ecx, ecx, 0x75
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x75
        // 0x5876C023: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5876C025: push ebx
        __asm _emit 0x53
        // 0x5876C026: push ebp
        __asm _emit 0x55
        // 0x5876C027: mov ebp, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5876C02B: sub ebp, dword ptr [esp + 0x1c]
        __asm _emit 0x2B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5876C02F: push esi
        __asm _emit 0x56
        // 0x5876C030: push edi
        __asm _emit 0x57
        // 0x5876C031: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x5876C034: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x5876C036: shr edi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x1F
        // 0x5876C039: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x5876C03B: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x5876C03D: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x5876C03F: imul eax, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC7
        // 0x5876C042: imul ecx, ebp
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCD
        // 0x5876C045: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x5876C047: push eax
        __asm _emit 0x50
        // 0x5876C048: call 0x5876bee0
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5876C04D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5876C04F: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5876C054: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5876C056: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5876C059: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x5876C05B: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x5876C05E: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5876C060: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5876C063: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5876C065: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5876C069: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5876C06D: mov ebx, 0x5f5e100
        __asm _emit 0xBB
        __asm _emit 0x00
        __asm _emit 0xE1
        __asm _emit 0xF5
        __asm _emit 0x05
        // 0x5876C072: mov dword ptr [esp + 0x2c], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876C07A: mov esi, 0x58a0b500
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0xB5
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5876C07F: nop
        __asm _emit 0x90
        // 0x5876C080: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x5876C082: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x5876C084: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x5876C086: sub eax, dword ptr [esp + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5876C08A: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5876C08E: imul eax, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC0
        // 0x5876C091: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5876C095: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5876C097: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x5876C09A: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5876C09E: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5876C0A0: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x5876C0A2: jle 0x5876c0b1
        __asm _emit 0x7E
        __asm _emit 0x0D
        // 0x5876C0A4: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5876C0A6: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5876C0AA: add eax, -2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xFE
        // 0x5876C0AD: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5876C0B1: mov eax, dword ptr [esi + 0x3818]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876C0B7: mov edx, dword ptr [esi - 0x28]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0xD8
        // 0x5876C0BA: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x5876C0BD: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5876C0C1: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5876C0C3: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5876C0C8: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5876C0CA: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5876C0CD: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5876C0CF: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5876C0D2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5876C0D4: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5876C0D8: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5876C0DC: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x5876C0DF: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5876C0E1: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5876C0E6: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5876C0E8: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5876C0EB: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5876C0ED: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5876C0F0: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5876C0F2: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x5876C0F4: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x5876C0F6: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x5876C0F8: sub eax, dword ptr [esp + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5876C0FC: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5876C100: imul eax, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC0
        // 0x5876C103: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5876C107: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5876C109: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x5876C10C: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5876C110: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5876C112: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x5876C114: jle 0x5876c121
        __asm _emit 0x7E
        __asm _emit 0x0B
        // 0x5876C116: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5876C118: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5876C11C: dec eax
        __asm _emit 0x48
        // 0x5876C11D: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5876C121: mov eax, dword ptr [esi + 0x3840]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876C127: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x5876C129: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x5876C12C: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5876C130: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5876C132: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5876C137: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5876C139: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5876C13C: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5876C13E: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5876C141: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5876C143: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5876C147: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5876C14B: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x5876C14E: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5876C150: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5876C155: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5876C157: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5876C15A: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5876C15C: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5876C15F: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5876C161: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x5876C163: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x5876C165: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x5876C167: sub eax, dword ptr [esp + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5876C16B: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5876C16F: imul eax, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC0
        // 0x5876C172: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5876C176: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5876C178: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x5876C17B: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5876C17F: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5876C181: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x5876C183: jle 0x5876c18f
        __asm _emit 0x7E
        __asm _emit 0x0A
        // 0x5876C185: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5876C187: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5876C18B: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5876C18F: mov eax, dword ptr [esi + 0x3868]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876C195: mov edx, dword ptr [esi + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x28
        // 0x5876C198: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x5876C19B: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5876C19F: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5876C1A1: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5876C1A6: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5876C1A8: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5876C1AB: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5876C1AD: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5876C1B0: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5876C1B2: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5876C1B6: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5876C1BA: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x5876C1BD: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5876C1BF: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5876C1C4: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5876C1C6: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5876C1C9: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5876C1CB: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5876C1CE: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5876C1D0: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x5876C1D2: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x5876C1D4: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x5876C1D6: sub eax, dword ptr [esp + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5876C1DA: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5876C1DE: imul eax, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC0
        // 0x5876C1E1: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5876C1E5: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5876C1E7: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x5876C1EA: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5876C1EE: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5876C1F0: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x5876C1F2: jle 0x5876c1ff
        __asm _emit 0x7E
        __asm _emit 0x0B
        // 0x5876C1F4: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5876C1F6: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5876C1FA: inc eax
        __asm _emit 0x40
        // 0x5876C1FB: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5876C1FF: mov eax, dword ptr [esi + 0x3890]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876C205: mov edx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x50
        // 0x5876C208: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x5876C20B: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5876C20F: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5876C211: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5876C216: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5876C218: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5876C21B: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5876C21D: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5876C220: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5876C222: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5876C226: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5876C22A: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x5876C22D: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5876C22F: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5876C234: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5876C236: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5876C239: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5876C23B: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5876C23E: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5876C240: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x5876C242: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x5876C244: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x5876C246: sub eax, dword ptr [esp + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5876C24A: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5876C24E: imul eax, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC0
        // 0x5876C251: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5876C255: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5876C257: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x5876C25A: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5876C25E: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5876C260: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x5876C262: jle 0x5876c271
        __asm _emit 0x7E
        __asm _emit 0x0D
        // 0x5876C264: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5876C266: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5876C26A: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x5876C26D: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5876C271: mov eax, dword ptr [esi + 0x38b8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876C277: mov edx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x78
        // 0x5876C27A: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x5876C27D: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5876C281: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5876C283: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5876C288: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5876C28A: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5876C28D: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5876C28F: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5876C292: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5876C294: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5876C298: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5876C29C: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x5876C29F: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5876C2A1: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5876C2A6: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5876C2A8: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5876C2AB: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5876C2AD: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5876C2B0: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5876C2B2: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x5876C2B4: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x5876C2B6: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x5876C2B8: sub eax, dword ptr [esp + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5876C2BC: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5876C2C0: imul eax, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC0
        // 0x5876C2C3: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5876C2C7: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5876C2C9: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x5876C2CC: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5876C2D0: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5876C2D2: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x5876C2D4: jle 0x5876c2e3
        __asm _emit 0x7E
        __asm _emit 0x0D
        // 0x5876C2D6: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5876C2D8: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5876C2DC: add eax, 3
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x03
        // 0x5876C2DF: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5876C2E3: mov eax, dword ptr [esi + 0x38e0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876C2E9: mov edx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876C2EF: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x5876C2F2: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5876C2F6: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5876C2F8: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5876C2FD: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5876C2FF: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5876C302: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5876C304: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5876C307: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5876C309: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5876C30D: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5876C311: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x5876C314: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5876C316: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5876C31B: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5876C31D: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5876C320: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5876C322: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5876C325: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5876C327: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5876C32B: add edx, 6
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x06
        // 0x5876C32E: mov dword ptr [esp + 0x2c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5876C332: add edx, -2
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0xFE
        // 0x5876C335: add esi, 0xf0
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876C33B: cmp edx, 0x168
        __asm _emit 0x81
        __asm _emit 0xFA
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876C341: jl 0x5876c080
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x39
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5876C347: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5876C34B: pop edi
        __asm _emit 0x5F
        // 0x5876C34C: pop esi
        __asm _emit 0x5E
        // 0x5876C34D: pop ebp
        __asm _emit 0x5D
        // 0x5876C34E: pop ebx
        __asm _emit 0x5B
        // 0x5876C34F: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5876C352: ret
        __asm _emit 0xC3
    }
}
