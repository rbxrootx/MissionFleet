// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58834190 .. +0xBC bytes.
// Source symbol alias: FUN_58834190.
extern "C" __declspec(naked) void FUN_58834190() {
    __asm {
        // 0x58834190: push esi
        __asm _emit 0x56
        // 0x58834191: push edi
        __asm _emit 0x57
        // 0x58834192: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58834194: mov ecx, dword ptr [edi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883419A: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5883419C: cmp dword ptr [ecx + 0x88], esi
        __asm _emit 0x39
        __asm _emit 0xB1
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588341A2: jle 0x58834247
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x9F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588341A8: push ebx
        __asm _emit 0x53
        // 0x588341A9: mov ebx, dword ptr [0x5898c1a4]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588341AF: push ebp
        __asm _emit 0x55
        // 0x588341B0: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588341B4: push ebp
        __asm _emit 0x55
        // 0x588341B5: push esi
        __asm _emit 0x56
        // 0x588341B6: call 0x589080e0
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0x3F
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588341BB: push eax
        __asm _emit 0x50
        // 0x588341BC: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x588341BE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588341C0: je 0x588341d8
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x588341C2: mov ecx, dword ptr [edi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588341C8: inc esi
        __asm _emit 0x46
        // 0x588341C9: cmp esi, dword ptr [ecx + 0x88]
        __asm _emit 0x3B
        __asm _emit 0xB1
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588341CF: jl 0x588341b4
        __asm _emit 0x7C
        __asm _emit 0xE3
        // 0x588341D1: pop ebp
        __asm _emit 0x5D
        // 0x588341D2: pop ebx
        __asm _emit 0x5B
        // 0x588341D3: pop edi
        __asm _emit 0x5F
        // 0x588341D4: pop esi
        __asm _emit 0x5E
        // 0x588341D5: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588341D8: mov ecx, dword ptr [edi + 0x21c]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588341DE: mov eax, dword ptr [ecx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x64
        // 0x588341E1: dec eax
        __asm _emit 0x48
        // 0x588341E2: push eax
        __asm _emit 0x50
        // 0x588341E3: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0x31
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588341E8: push 0x5899e1b0
        __asm _emit 0x68
        __asm _emit 0xB0
        __asm _emit 0xE1
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588341ED: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588341F3: mov ecx, dword ptr [edi + 0x250]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588341F9: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588341FC: push eax
        __asm _emit 0x50
        // 0x588341FD: push esi
        __asm _emit 0x56
        // 0x588341FE: call 0x589080e0
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0x3E
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58834203: push eax
        __asm _emit 0x50
        // 0x58834204: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x58834206: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58834208: je 0x5883421a
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x5883420A: mov ecx, dword ptr [edi + 0x218]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834210: mov edx, dword ptr [ecx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x64
        // 0x58834213: dec edx
        __asm _emit 0x4A
        // 0x58834214: push edx
        __asm _emit 0x52
        // 0x58834215: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0x31
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5883421A: mov ecx, dword ptr [edi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834220: push esi
        __asm _emit 0x56
        // 0x58834221: call 0x589081e0
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0x3F
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58834226: mov ecx, dword ptr [edi + 0x250]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883422C: push esi
        __asm _emit 0x56
        // 0x5883422D: call 0x589081e0
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0x3F
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58834232: mov ecx, dword ptr [edi + 0x254]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834238: push esi
        __asm _emit 0x56
        // 0x58834239: call 0x589081e0
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0x3F
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5883423E: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58834240: call 0x58834030
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58834245: pop ebp
        __asm _emit 0x5D
        // 0x58834246: pop ebx
        __asm _emit 0x5B
        // 0x58834247: pop edi
        __asm _emit 0x5F
        // 0x58834248: pop esi
        __asm _emit 0x5E
        // 0x58834249: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
