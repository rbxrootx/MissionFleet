// CWarehouseItem destructor body. Ghidra shows it releasing and clearing seven
// child pointers through virtual slot-0 methods, then restoring EH state.
// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588F7C00 .. +0xFE bytes.
// Source symbol alias: FUN_588f7c00.
extern "C" __declspec(naked) void FUN_588f7c00() {
    __asm {
        // 0x588F7C00: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588F7C02: push 0x58988648
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F7C07: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7C0D: push eax
        __asm _emit 0x50
        // 0x588F7C0E: push ecx
        __asm _emit 0x51
        // 0x588F7C0F: push esi
        __asm _emit 0x56
        // 0x588F7C10: push edi
        __asm _emit 0x57
        // 0x588F7C11: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588F7C16: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588F7C18: push eax
        __asm _emit 0x50
        // 0x588F7C19: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588F7C1D: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7C23: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588F7C25: mov dword ptr [esp + 0xc], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588F7C29: mov dword ptr [esi], 0x589a20d4
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xD4
        __asm _emit 0x20
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F7C2F: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7C35: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588F7C37: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588F7C3B: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588F7C3D: je 0x588f7c4d
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588F7C3F: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588F7C41: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588F7C43: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F7C45: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588F7C47: mov dword ptr [esi + 0xa0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7C4D: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7C53: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588F7C55: je 0x588f7c65
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588F7C57: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588F7C59: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588F7C5B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F7C5D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588F7C5F: mov dword ptr [esi + 0xa8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7C65: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7C6B: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588F7C6D: je 0x588f7c7d
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588F7C6F: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588F7C71: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588F7C73: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F7C75: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588F7C77: mov dword ptr [esi + 0xa4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7C7D: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7C83: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588F7C85: je 0x588f7c95
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588F7C87: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588F7C89: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588F7C8B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F7C8D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588F7C8F: mov dword ptr [esi + 0xb0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7C95: mov ecx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7C9B: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588F7C9D: je 0x588f7cad
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588F7C9F: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588F7CA1: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588F7CA3: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F7CA5: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588F7CA7: mov dword ptr [esi + 0xac], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7CAD: mov ecx, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7CB3: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588F7CB5: je 0x588f7cc5
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588F7CB7: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588F7CB9: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588F7CBB: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F7CBD: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588F7CBF: mov dword ptr [esi + 0xb4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7CC5: mov ecx, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7CCB: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588F7CCD: je 0x588f7cdd
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588F7CCF: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588F7CD1: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588F7CD3: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F7CD5: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588F7CD7: mov dword ptr [esi + 0xb8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7CDD: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F7CDF: mov dword ptr [esp + 0x18], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F7CE7: call 0x58902c10
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0xAF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7CEC: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588F7CF0: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7CF7: pop ecx
        __asm _emit 0x59
        // 0x588F7CF8: pop edi
        __asm _emit 0x5F
        // 0x588F7CF9: pop esi
        __asm _emit 0x5E
        // 0x588F7CFA: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588F7CFD: ret
        __asm _emit 0xC3
    }
}
