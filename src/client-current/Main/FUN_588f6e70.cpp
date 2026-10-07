// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 127 bytes in 1 exact ranges.
// Source symbol alias: FUN_588f6e70.

// Ghidra body range 0x588F6E70..0x588F6EEF; 127 mapped bytes.
extern "C" __declspec(naked) void FUN_588f6e70_segment_00() {
    __asm {
        // 0x588F6E70: push esi
        __asm _emit 0x56
        // 0x588F6E71: push edi
        __asm _emit 0x57
        // 0x588F6E72: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588F6E76: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588F6E78: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588F6E7A: je 0x588f6eea
        __asm _emit 0x74
        __asm _emit 0x6E
        // 0x588F6E7C: call 0x588f6e20
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F6E81: mov eax, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x18
        // 0x588F6E84: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x588F6E86: mov dword ptr [esi + 0x68], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x588F6E89: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588F6E8C: mov dword ptr [esi + 0x6c], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x6C
        // 0x588F6E8F: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x588F6E92: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F6E94: je 0x588f6eb1
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x588F6E96: dec eax
        __asm _emit 0x48
        // 0x588F6E97: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x588F6E9A: ja 0x588f6ec7
        __asm _emit 0x77
        __asm _emit 0x2B
        // 0x588F6E9C: mov eax, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x588F6E9F: mov ecx, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x08
        // 0x588F6EA2: push eax
        __asm _emit 0x50
        // 0x588F6EA3: push ecx
        __asm _emit 0x51
        // 0x588F6EA4: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x588F6EA7: call 0x588f6940
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F6EAC: mov edx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x74
        // 0x588F6EAF: jmp 0x588f6ec4
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x588F6EB1: mov eax, dword ptr [edi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x14
        // 0x588F6EB4: mov ecx, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x10
        // 0x588F6EB7: push eax
        __asm _emit 0x50
        // 0x588F6EB8: push ecx
        __asm _emit 0x51
        // 0x588F6EB9: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588F6EBC: call 0x588f6b80
        __asm _emit 0xE8
        __asm _emit 0xBF
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F6EC1: mov edx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x70
        // 0x588F6EC4: mov dword ptr [esi + 0x78], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x78
        // 0x588F6EC7: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x588F6ECA: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588F6ECC: je 0x588f6ed7
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588F6ECE: mov eax, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x18
        // 0x588F6ED1: push eax
        __asm _emit 0x50
        // 0x588F6ED2: call 0x588f6480
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F6ED7: mov eax, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x588F6EDA: mov ecx, 0xf
        __asm _emit 0xB9
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6EDF: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588F6EE3: mov esi, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x7C
        // 0x588F6EE6: or word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588F6EEA: pop edi
        __asm _emit 0x5F
        // 0x588F6EEB: pop esi
        __asm _emit 0x5E
        // 0x588F6EEC: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
