// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Corrected Ghidra function-body extent: 0x589089E0 .. +0xB6 bytes.
// Source symbol alias: FUN_589089e0.
extern "C" __declspec(naked) void FUN_589089e0() {
    __asm {
        // 0x589089E0: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x589089E4: push ebx
        __asm _emit 0x53
        // 0x589089E5: mov ebx, dword ptr [ecx + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x59
        __asm _emit 0x78
        // 0x589089E8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x589089EA: jle 0x58908a00
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x589089EC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x589089F0: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x589089F2: je 0x58908a82
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589089F8: mov ebx, dword ptr [ebx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5B
        __asm _emit 0x14
        // 0x589089FB: dec eax
        __asm _emit 0x48
        // 0x589089FC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x589089FE: jg 0x589089f0
        __asm _emit 0x7F
        __asm _emit 0xF0
        // 0x58908A00: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58908A02: je 0x58908a82
        __asm _emit 0x74
        __asm _emit 0x7E
        // 0x58908A04: mov eax, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x04
        // 0x58908A07: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58908A09: je 0x58908a14
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58908A0B: push eax
        __asm _emit 0x50
        // 0x58908A0C: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0x42
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58908A11: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58908A14: push ebp
        __asm _emit 0x55
        // 0x58908A15: mov ebp, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58908A19: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58908A1B: je 0x58908a8f
        __asm _emit 0x74
        __asm _emit 0x72
        // 0x58908A1D: mov ecx, 0x7fffffff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x58908A22: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x58908A24: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58908A26: cmp byte ptr [eax], dl
        __asm _emit 0x38
        __asm _emit 0x10
        // 0x58908A28: je 0x58908a32
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58908A2A: inc eax
        __asm _emit 0x40
        // 0x58908A2B: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x01
        // 0x58908A2E: jne 0x58908a26
        __asm _emit 0x75
        __asm _emit 0xF6
        // 0x58908A30: jmp 0x58908a36
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x58908A32: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58908A34: jne 0x58908a86
        __asm _emit 0x75
        __asm _emit 0x50
        // 0x58908A36: mov edx, 0x80070057
        __asm _emit 0xBA
        __asm _emit 0x57
        __asm _emit 0x00
        __asm _emit 0x07
        __asm _emit 0x80
        // 0x58908A3B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58908A3D: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58908A3F: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58908A41: jge 0x58908a45
        __asm _emit 0x7D
        __asm _emit 0x02
        // 0x58908A43: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58908A45: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58908A47: jne 0x58908a73
        __asm _emit 0x75
        __asm _emit 0x2A
        // 0x58908A49: push esi
        __asm _emit 0x56
        // 0x58908A4A: lea esi, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x70
        __asm _emit 0x01
        // 0x58908A4D: push edi
        __asm _emit 0x57
        // 0x58908A4E: push esi
        __asm _emit 0x56
        // 0x58908A4F: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0x41
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58908A54: push esi
        __asm _emit 0x56
        // 0x58908A55: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58908A57: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58908A59: push edi
        __asm _emit 0x57
        // 0x58908A5A: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0x41
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58908A5F: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58908A62: push ebp
        __asm _emit 0x55
        // 0x58908A63: push esi
        __asm _emit 0x56
        // 0x58908A64: push edi
        __asm _emit 0x57
        // 0x58908A65: call 0x58731b60
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0x90
        __asm _emit 0xE2
        __asm _emit 0xFF
        // 0x58908A6A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58908A6C: jne 0x58908a71
        __asm _emit 0x75
        __asm _emit 0x03
        // 0x58908A6E: mov dword ptr [ebx + 4], edi
        __asm _emit 0x89
        __asm _emit 0x7B
        __asm _emit 0x04
        // 0x58908A71: pop edi
        __asm _emit 0x5F
        // 0x58908A72: pop esi
        __asm _emit 0x5E
        // 0x58908A73: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58908A77: pop ebp
        __asm _emit 0x5D
        // 0x58908A78: cmp eax, 0xff000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        // 0x58908A7D: je 0x58908a82
        __asm _emit 0x74
        __asm _emit 0x03
        // 0x58908A7F: mov dword ptr [ebx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x0C
        // 0x58908A82: pop ebx
        __asm _emit 0x5B
        // 0x58908A83: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58908A86: mov eax, 0x7fffffff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x58908A8B: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x58908A8D: jmp 0x58908a3d
        __asm _emit 0xEB
        __asm _emit 0xAE
        // 0x58908A8F: mov ecx, 0x80070057
        __asm _emit 0xB9
        __asm _emit 0x57
        __asm _emit 0x00
        __asm _emit 0x07
        __asm _emit 0x80
        // 0x58908A94: jmp 0x58908a43
        __asm _emit 0xEB
        __asm _emit 0xAD
    }
}
