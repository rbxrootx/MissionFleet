// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588DD0A0 .. +0x108 bytes.
// Source symbol alias: FUN_588dd0a0.
extern "C" __declspec(naked) void FUN_588dd0a0() {
    __asm {
        // 0x588DD0A0: sub esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x18
        // 0x588DD0A3: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588DD0A7: push ebx
        __asm _emit 0x53
        // 0x588DD0A8: mov ebx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588DD0AC: push esi
        __asm _emit 0x56
        // 0x588DD0AD: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588DD0AF: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DD0B5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588DD0B7: lea edx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588DD0BB: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588DD0BF: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588DD0C3: mov ecx, dword ptr [ecx + 0x21c4c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588DD0C9: push edx
        __asm _emit 0x52
        // 0x588DD0CA: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588DD0CE: call 0x587871c0
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0xA0
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588DD0D3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588DD0D5: je 0x588dd1a0
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DD0DB: push edi
        __asm _emit 0x57
        // 0x588DD0DC: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588DD0DE: lea eax, [esi + 0x63e8]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DD0E4: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x588DD0E6: cmp dword ptr [ecx + 0x50], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x50
        __asm _emit 0x00
        // 0x588DD0EA: je 0x588dd0fe
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x588DD0EC: inc edi
        __asm _emit 0x47
        // 0x588DD0ED: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x588DD0F0: cmp edi, 0x40
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x40
        // 0x588DD0F3: jl 0x588dd0e4
        __asm _emit 0x7C
        __asm _emit 0xEF
        // 0x588DD0F5: pop edi
        __asm _emit 0x5F
        // 0x588DD0F6: pop esi
        __asm _emit 0x5E
        // 0x588DD0F7: pop ebx
        __asm _emit 0x5B
        // 0x588DD0F8: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x588DD0FB: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x588DD0FE: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588DD100: lea ecx, [edi*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xFD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DD107: sub ecx, edi
        __asm _emit 0x2B
        __asm _emit 0xCF
        // 0x588DD109: lea eax, [ecx + ebx]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x19
        // 0x588DD10C: mov ebx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588DD110: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x588DD112: push ebp
        __asm _emit 0x55
        // 0x588DD113: mov ebp, dword ptr [0x58a24914]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DD119: div ebp
        __asm _emit 0xF7
        __asm _emit 0xF5
        // 0x588DD11B: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xA1
        __asm _emit 0x1C
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DD120: mov dword ptr [esp + 0x10], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DD128: mov esi, dword ptr [eax + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x34
        __asm _emit 0x90
        // 0x588DD12B: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588DD130: mul esi
        __asm _emit 0xF7
        __asm _emit 0xE6
        // 0x588DD132: shr edx, 5
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x05
        // 0x588DD135: imul edx, edx, 0x64
        __asm _emit 0x6B
        __asm _emit 0xD2
        __asm _emit 0x64
        // 0x588DD138: sub esi, edx
        __asm _emit 0x2B
        __asm _emit 0xF2
        // 0x588DD13A: mov edx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588DD13E: lea eax, [esi + edx - 0x32]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x16
        __asm _emit 0xCE
        // 0x588DD142: mov esi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588DD146: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588DD14A: lea eax, [ecx + esi]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x31
        // 0x588DD14D: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588DD14F: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x588DD151: div ebp
        __asm _emit 0xF7
        __asm _emit 0xF5
        // 0x588DD153: mov ecx, dword ptr [0x58a2491c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x49
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DD159: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588DD15E: pop ebp
        __asm _emit 0x5D
        // 0x588DD15F: mov ecx, dword ptr [ecx + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x91
        // 0x588DD162: mul ecx
        __asm _emit 0xF7
        __asm _emit 0xE1
        // 0x588DD164: shr edx, 5
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x05
        // 0x588DD167: imul edx, edx, 0x64
        __asm _emit 0x6B
        __asm _emit 0xD2
        __asm _emit 0x64
        // 0x588DD16A: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x588DD16C: cmp ebx, 0x708
        __asm _emit 0x81
        __asm _emit 0xFB
        __asm _emit 0x08
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DD172: lea edx, [ecx + esi - 0x32]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x31
        __asm _emit 0xCE
        // 0x588DD176: mov dword ptr [esp + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588DD17A: jge 0x588dd180
        __asm _emit 0x7D
        __asm _emit 0x04
        // 0x588DD17C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588DD17E: jmp 0x588dd184
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x588DD180: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588DD184: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588DD188: push eax
        __asm _emit 0x50
        // 0x588DD189: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588DD18D: push eax
        __asm _emit 0x50
        // 0x588DD18E: lea ecx, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588DD192: push ecx
        __asm _emit 0x51
        // 0x588DD193: mov ecx, dword ptr [edx + edi*4 + 0x63e8]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xBA
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DD19A: call 0x5877faa0
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x29
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588DD19F: pop edi
        __asm _emit 0x5F
        // 0x588DD1A0: pop esi
        __asm _emit 0x5E
        // 0x588DD1A1: pop ebx
        __asm _emit 0x5B
        // 0x588DD1A2: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x588DD1A5: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
