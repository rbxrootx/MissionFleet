// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58839890 .. +0xBC bytes.
// Source symbol alias: FUN_58839890.
extern "C" __declspec(naked) void FUN_58839890() {
    __asm {
        // 0x58839890: push esi
        __asm _emit 0x56
        // 0x58839891: push edi
        __asm _emit 0x57
        // 0x58839892: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58839894: mov ecx, dword ptr [edi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883989A: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5883989C: cmp dword ptr [ecx + 0x88], esi
        __asm _emit 0x39
        __asm _emit 0xB1
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588398A2: jle 0x58839947
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x9F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588398A8: push ebx
        __asm _emit 0x53
        // 0x588398A9: mov ebx, dword ptr [0x5898c1a4]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588398AF: push ebp
        __asm _emit 0x55
        // 0x588398B0: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588398B4: push ebp
        __asm _emit 0x55
        // 0x588398B5: push esi
        __asm _emit 0x56
        // 0x588398B6: call 0x589080e0
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588398BB: push eax
        __asm _emit 0x50
        // 0x588398BC: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x588398BE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588398C0: je 0x588398d8
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x588398C2: mov ecx, dword ptr [edi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588398C8: inc esi
        __asm _emit 0x46
        // 0x588398C9: cmp esi, dword ptr [ecx + 0x88]
        __asm _emit 0x3B
        __asm _emit 0xB1
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588398CF: jl 0x588398b4
        __asm _emit 0x7C
        __asm _emit 0xE3
        // 0x588398D1: pop ebp
        __asm _emit 0x5D
        // 0x588398D2: pop ebx
        __asm _emit 0x5B
        // 0x588398D3: pop edi
        __asm _emit 0x5F
        // 0x588398D4: pop esi
        __asm _emit 0x5E
        // 0x588398D5: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588398D8: mov ecx, dword ptr [edi + 0x1e0]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xE0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588398DE: mov eax, dword ptr [ecx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x64
        // 0x588398E1: dec eax
        __asm _emit 0x48
        // 0x588398E2: push eax
        __asm _emit 0x50
        // 0x588398E3: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0xDA
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588398E8: push 0x5899e1b0
        __asm _emit 0x68
        __asm _emit 0xB0
        __asm _emit 0xE1
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588398ED: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588398F3: mov ecx, dword ptr [edi + 0x214]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588398F9: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588398FC: push eax
        __asm _emit 0x50
        // 0x588398FD: push esi
        __asm _emit 0x56
        // 0x588398FE: call 0x589080e0
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0xE7
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58839903: push eax
        __asm _emit 0x50
        // 0x58839904: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x58839906: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58839908: je 0x5883991a
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x5883990A: mov ecx, dword ptr [edi + 0x1dc]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xDC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839910: mov edx, dword ptr [ecx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x64
        // 0x58839913: dec edx
        __asm _emit 0x4A
        // 0x58839914: push edx
        __asm _emit 0x52
        // 0x58839915: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0xDA
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883991A: mov ecx, dword ptr [edi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839920: push esi
        __asm _emit 0x56
        // 0x58839921: call 0x589081e0
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58839926: mov ecx, dword ptr [edi + 0x214]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883992C: push esi
        __asm _emit 0x56
        // 0x5883992D: call 0x589081e0
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58839932: mov ecx, dword ptr [edi + 0x218]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58839938: push esi
        __asm _emit 0x56
        // 0x58839939: call 0x589081e0
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883993E: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58839940: call 0x58839730
        __asm _emit 0xE8
        __asm _emit 0xEB
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58839945: pop ebp
        __asm _emit 0x5D
        // 0x58839946: pop ebx
        __asm _emit 0x5B
        // 0x58839947: pop edi
        __asm _emit 0x5F
        // 0x58839948: pop esi
        __asm _emit 0x5E
        // 0x58839949: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
