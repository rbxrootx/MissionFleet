// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B7BD0 .. +0x137 bytes.
// Source symbol alias: FUN_587b7bd0.
extern "C" __declspec(naked) void FUN_587b7bd0() {
    __asm {
        // 0x587B7BD0: push ebp
        __asm _emit 0x55
        // 0x587B7BD1: push esi
        __asm _emit 0x56
        // 0x587B7BD2: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587B7BD4: call dword ptr [0x5898c42c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x2C
        __asm _emit 0xC4
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587B7BDA: cmp dword ptr [esp + 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x587B7BDF: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x587B7BE1: je 0x587b7cfd
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7BE7: sub eax, dword ptr [esi + 0x194]
        __asm _emit 0x2B
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7BED: push edi
        __asm _emit 0x57
        // 0x587B7BEE: cdq
        __asm _emit 0x99
        // 0x587B7BEF: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x587B7BF1: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587B7BF3: cmp dword ptr [esi + 0x19c], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7BFA: je 0x587b7c6b
        __asm _emit 0x74
        __asm _emit 0x6F
        // 0x587B7BFC: cmp eax, 0x1d4c0
        __asm _emit 0x3D
        __asm _emit 0xC0
        __asm _emit 0xD4
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587B7C01: jle 0x587b7c18
        __asm _emit 0x7E
        __asm _emit 0x15
        // 0x587B7C03: pop edi
        __asm _emit 0x5F
        // 0x587B7C04: mov dword ptr [esi + 0x19c], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7C0E: pop esi
        __asm _emit 0x5E
        // 0x587B7C0F: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7C14: pop ebp
        __asm _emit 0x5D
        // 0x587B7C15: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587B7C18: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B7C1D: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587B7C23: cmp dword ptr [0x58a24580], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B7C29: jne 0x587b7c48
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x587B7C2B: mov esi, dword ptr [eax + 0x20d34]
        __asm _emit 0x8B
        __asm _emit 0xB0
        __asm _emit 0x34
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587B7C31: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        // 0x587B7C36: push 0x5899a1c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0xA1
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587B7C3B: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587B7C3D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587B7C40: push eax
        __asm _emit 0x50
        // 0x587B7C41: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B7C43: call 0x5890bd90
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0x41
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587B7C48: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        // 0x587B7C4D: push 0x5899a1c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0xA1
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587B7C52: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587B7C54: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B7C5A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587B7C5D: push eax
        __asm _emit 0x50
        // 0x587B7C5E: call 0x5888d250
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0x55
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x587B7C63: pop edi
        __asm _emit 0x5F
        // 0x587B7C64: pop esi
        __asm _emit 0x5E
        // 0x587B7C65: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587B7C67: pop ebp
        __asm _emit 0x5D
        // 0x587B7C68: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587B7C6B: cmp eax, 0x3e8
        __asm _emit 0x3D
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7C70: jge 0x587b7ce6
        __asm _emit 0x7D
        __asm _emit 0x74
        // 0x587B7C72: inc dword ptr [esi + 0x198]
        __asm _emit 0xFF
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7C78: cmp dword ptr [esi + 0x198], 3
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x587B7C7F: jbe 0x587b7c63
        __asm _emit 0x76
        __asm _emit 0xE2
        // 0x587B7C81: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B7C86: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587B7C8C: cmp dword ptr [0x58a24580], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B7C92: jne 0x587b7cb3
        __asm _emit 0x75
        __asm _emit 0x1F
        // 0x587B7C94: push ebx
        __asm _emit 0x53
        // 0x587B7C95: mov ebx, dword ptr [eax + 0x20d34]
        __asm _emit 0x8B
        __asm _emit 0x98
        __asm _emit 0x34
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587B7C9B: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        // 0x587B7CA0: push 0x5899a1c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0xA1
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587B7CA5: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587B7CA7: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587B7CAA: push eax
        __asm _emit 0x50
        // 0x587B7CAB: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587B7CAD: call 0x5890bd90
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0x40
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587B7CB2: pop ebx
        __asm _emit 0x5B
        // 0x587B7CB3: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        // 0x587B7CB8: push 0x5899a1c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0xA1
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587B7CBD: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587B7CBF: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B7CC5: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587B7CC8: push eax
        __asm _emit 0x50
        // 0x587B7CC9: call 0x5888d250
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0x55
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x587B7CCE: pop edi
        __asm _emit 0x5F
        // 0x587B7CCF: mov dword ptr [esi + 0x194], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7CD5: mov dword ptr [esi + 0x19c], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7CDF: pop esi
        __asm _emit 0x5E
        // 0x587B7CE0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587B7CE2: pop ebp
        __asm _emit 0x5D
        // 0x587B7CE3: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587B7CE6: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7CEB: pop edi
        __asm _emit 0x5F
        // 0x587B7CEC: mov dword ptr [esi + 0x194], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7CF2: mov dword ptr [esi + 0x198], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7CF8: pop esi
        __asm _emit 0x5E
        // 0x587B7CF9: pop ebp
        __asm _emit 0x5D
        // 0x587B7CFA: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587B7CFD: pop esi
        __asm _emit 0x5E
        // 0x587B7CFE: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7D03: pop ebp
        __asm _emit 0x5D
        // 0x587B7D04: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
