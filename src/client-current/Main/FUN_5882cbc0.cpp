// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 557 bytes in 1 exact ranges.
// Source symbol alias: FUN_5882cbc0.

// Ghidra body range 0x5882CBC0..0x5882CDED; 557 mapped bytes.
extern "C" __declspec(naked) void FUN_5882cbc0_segment_00() {
    __asm {
        // 0x5882CBC0: sub esp, 0xec
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CBC6: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5882CBCB: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5882CBCD: mov dword ptr [esp + 0xe8], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CBD4: push ebx
        __asm _emit 0x53
        // 0x5882CBD5: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x5882CBD7: mov ecx, dword ptr [ebx + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CBDD: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5882CBDF: je 0x5882cdd7
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CBE5: push esi
        __asm _emit 0x56
        // 0x5882CBE6: push edi
        __asm _emit 0x57
        // 0x5882CBE7: call 0x587864a0
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0x98
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882CBEC: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5882CBEE: add esi, 0x300
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CBF4: mov ecx, 0x18
        __asm _emit 0xB9
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CBF9: lea edi, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5882CBFD: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x5882CBFF: mov ecx, dword ptr [ebx + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CC05: call 0x58786150
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0x95
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882CC0A: mov ecx, dword ptr [ebx + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CC10: call 0x58786090
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0x94
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882CC15: mov ecx, dword ptr [ebx + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CC1B: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5882CC1D: mov dword ptr [esp + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5882CC21: call 0x58786250
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0x96
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882CC26: mov ecx, dword ptr [ebx + 0x148]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CC2C: push edi
        __asm _emit 0x57
        // 0x5882CC2D: movzx esi, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xF0
        // 0x5882CC30: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0xA7
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882CC35: mov ecx, dword ptr [ebx + 0x144]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CC3B: push esi
        __asm _emit 0x56
        // 0x5882CC3C: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0xA7
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882CC41: mov ecx, dword ptr [ebx + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CC47: call 0x589087f0
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0xBB
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882CC4C: mov ecx, dword ptr [ebx + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CC52: call 0x589087f0
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0xBB
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882CC57: mov ecx, dword ptr [ebx + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CC5D: call 0x589087f0
        __asm _emit 0xE8
        __asm _emit 0x8E
        __asm _emit 0xBB
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882CC62: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5882CC64: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5882CC66: jbe 0x5882cdce
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CC6C: lea edi, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5882CC70: mov dword ptr [esp + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5882CC74: push ebp
        __asm _emit 0x55
        // 0x5882CC75: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CC7A: lea eax, [esp + 0x7c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x7C
        // 0x5882CC7E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882CC80: push eax
        __asm _emit 0x50
        // 0x5882CC81: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0xFF
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5882CC86: lea ebp, [esi + 1]
        __asm _emit 0x8D
        __asm _emit 0x6E
        __asm _emit 0x01
        // 0x5882CC89: push ebp
        __asm _emit 0x55
        // 0x5882CC8A: lea ecx, [esp + 0x88]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CC91: push 0x5898d18c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0xD1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5882CC96: push ecx
        __asm _emit 0x51
        // 0x5882CC97: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5882CC9D: mov ecx, dword ptr [ebx + 0x100]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CCA3: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x5882CCA6: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5882CCAB: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5882CCAD: lea edx, [esp + 0x80]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CCB4: push edx
        __asm _emit 0x52
        // 0x5882CCB5: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0xBC
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882CCBA: cmp byte ptr [edi], 0
        __asm _emit 0x80
        __asm _emit 0x3F
        __asm _emit 0x00
        // 0x5882CCBD: je 0x5882cd74
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CCC3: cmp word ptr [edi + 2], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7F
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5882CCC8: je 0x5882cd74
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CCCE: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5882CCD0: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882CCD6: push eax
        __asm _emit 0x50
        // 0x5882CCD7: call 0x58778b20
        __asm _emit 0xE8
        __asm _emit 0x44
        __asm _emit 0xBE
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5882CCDC: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5882CCDE: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5882CCE0: je 0x5882cd28
        __asm _emit 0x74
        __asm _emit 0x46
        // 0x5882CCE2: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5882CCE7: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5882CCE9: lea ecx, [edi + 0x33c]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0x3C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CCEF: push ecx
        __asm _emit 0x51
        // 0x5882CCF0: mov ecx, dword ptr [ebx + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CCF6: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0xBB
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882CCFB: movzx edx, word ptr [edi + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x57
        __asm _emit 0x04
        // 0x5882CCFF: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5882CD04: and edx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x5882CD07: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5882CD09: push edx
        __asm _emit 0x52
        // 0x5882CD0A: call dword ptr [0x5898c040]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5882CD10: mov ecx, dword ptr [ebx + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CD16: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5882CD19: push eax
        __asm _emit 0x50
        // 0x5882CD1A: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xB1
        __asm _emit 0xBB
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882CD1F: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5882CD23: jmp 0x5882cdba
        __asm _emit 0xE9
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CD28: mov ecx, dword ptr [ebx + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CD2E: push esi
        __asm _emit 0x56
        // 0x5882CD2F: call 0x589081e0
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882CD34: mov ecx, dword ptr [ebx + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CD3A: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5882CD3F: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5882CD41: push 0x5898d61c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5882CD46: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0xBB
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882CD4B: mov ecx, dword ptr [ebx + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CD51: push esi
        __asm _emit 0x56
        // 0x5882CD52: call 0x589081e0
        __asm _emit 0xE8
        __asm _emit 0x89
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882CD57: mov ecx, dword ptr [ebx + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CD5D: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5882CD62: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5882CD64: push 0x5898d61c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5882CD69: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0xBB
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882CD6E: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5882CD72: jmp 0x5882cdba
        __asm _emit 0xEB
        __asm _emit 0x46
        // 0x5882CD74: mov ecx, dword ptr [ebx + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CD7A: push esi
        __asm _emit 0x56
        // 0x5882CD7B: call 0x589081e0
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882CD80: mov ecx, dword ptr [ebx + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CD86: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5882CD8B: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5882CD8D: push 0x5898d61c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5882CD92: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0xBB
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882CD97: mov ecx, dword ptr [ebx + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CD9D: push esi
        __asm _emit 0x56
        // 0x5882CD9E: call 0x589081e0
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882CDA3: mov ecx, dword ptr [ebx + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CDA9: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5882CDAE: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5882CDB0: push 0x5898d61c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5882CDB5: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0xBB
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882CDBA: mov esi, ebp
        __asm _emit 0x8B
        __asm _emit 0xF5
        // 0x5882CDBC: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5882CDBF: mov dword ptr [esp + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5882CDC3: cmp esi, dword ptr [esp + 0x14]
        __asm _emit 0x3B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5882CDC7: jb 0x5882cc75
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0xA8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882CDCD: pop ebp
        __asm _emit 0x5D
        // 0x5882CDCE: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5882CDD0: call 0x5882c310
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882CDD5: pop edi
        __asm _emit 0x5F
        // 0x5882CDD6: pop esi
        __asm _emit 0x5E
        // 0x5882CDD7: mov ecx, dword ptr [esp + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CDDE: pop ebx
        __asm _emit 0x5B
        // 0x5882CDDF: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5882CDE1: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0xFD
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5882CDE6: add esp, 0xec
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CDEC: ret
        __asm _emit 0xC3
    }
}
