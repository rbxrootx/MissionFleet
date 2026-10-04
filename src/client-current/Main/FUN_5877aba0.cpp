// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5877ABA0 .. +0x97 bytes.
// Source symbol alias: FUN_5877aba0.
extern "C" __declspec(naked) void FUN_5877aba0() {
    __asm {
        // 0x5877ABA0: push ebx
        __asm _emit 0x53
        // 0x5877ABA1: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x5877ABA3: mov eax, dword ptr [ebx + 0x264]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877ABA9: cmp dword ptr [eax + 8], 0x7f
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x08
        __asm _emit 0x7F
        // 0x5877ABAD: jge 0x5877ac33
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877ABB3: push esi
        __asm _emit 0x56
        // 0x5877ABB4: push edi
        __asm _emit 0x57
        // 0x5877ABB5: push 0x88
        __asm _emit 0x68
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877ABBA: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0x20
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877ABBF: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5877ABC3: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5877ABC6: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5877ABC8: push edi
        __asm _emit 0x57
        // 0x5877ABC9: mov dword ptr [esi], 0
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877ABCF: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5877ABD5: cmp eax, 0x80
        __asm _emit 0x3D
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877ABDA: jl 0x5877abec
        __asm _emit 0x7C
        __asm _emit 0x10
        // 0x5877ABDC: push 0x7e
        __asm _emit 0x6A
        __asm _emit 0x7E
        // 0x5877ABDE: push edi
        __asm _emit 0x57
        // 0x5877ABDF: push esi
        __asm _emit 0x56
        // 0x5877ABE0: call dword ptr [0x5898c194]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5877ABE6: mov byte ptr [esi + 0x7f], 0
        __asm _emit 0xC6
        __asm _emit 0x46
        __asm _emit 0x7F
        __asm _emit 0x00
        // 0x5877ABEA: jmp 0x5877abf4
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x5877ABEC: push edi
        __asm _emit 0x57
        // 0x5877ABED: push esi
        __asm _emit 0x56
        // 0x5877ABEE: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5877ABF4: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5877ABF8: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5877ABFC: mov dword ptr [esi + 0x84], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AC02: mov dword ptr [esi + 0x80], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AC08: mov eax, dword ptr [ebx + 0x264]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877AC0E: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5877AC11: mov ecx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x5877AC14: dec edx
        __asm _emit 0x4A
        // 0x5877AC15: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x5877AC17: jne 0x5877ac1d
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x5877AC19: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5877AC1B: jmp 0x5877ac20
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x5877AC1D: lea edx, [ecx + 1]
        __asm _emit 0x8D
        __asm _emit 0x51
        __asm _emit 0x01
        // 0x5877AC20: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x5877AC23: cmp edx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5877AC26: je 0x5877ac31
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5877AC28: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x5877AC2B: mov dword ptr [edx + ecx*4], esi
        __asm _emit 0x89
        __asm _emit 0x34
        __asm _emit 0x8A
        // 0x5877AC2E: inc dword ptr [eax + 8]
        __asm _emit 0xFF
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x5877AC31: pop edi
        __asm _emit 0x5F
        // 0x5877AC32: pop esi
        __asm _emit 0x5E
        // 0x5877AC33: pop ebx
        __asm _emit 0x5B
        // 0x5877AC34: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
