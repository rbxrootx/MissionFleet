// Warehouse-item child-state method. Ghidra shows it resetting each linked
// child's state and advancing or clearing the receiver's child counter.
// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588F7FE0 .. +0x8C bytes.
// Source symbol alias: FUN_588f7fe0.
extern "C" __declspec(naked) void FUN_588f7fe0() {
    __asm {
        // 0x588F7FE0: push esi
        __asm _emit 0x56
        // 0x588F7FE1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588F7FE3: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588F7FE7: test al, 4
        __asm _emit 0xA8
        __asm _emit 0x04
        // 0x588F7FE9: je 0x588f806a
        __asm _emit 0x74
        __asm _emit 0x7F
        // 0x588F7FEB: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x588F7FEE: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588F7FF0: je 0x588f800d
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x588F7FF2: push edi
        __asm _emit 0x57
        // 0x588F7FF3: mov edi, dword ptr [ecx + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x38
        // 0x588F7FF6: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588F7FF8: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x588F7FFB: cmp edi, dword ptr [esi + 0x3c]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x3C
        // 0x588F7FFE: je 0x588f800a
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588F8000: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588F8002: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588F8004: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588F8006: jne 0x588f7ff3
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x588F8008: jmp 0x588f800c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588F800A: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588F800C: pop edi
        __asm _emit 0x5F
        // 0x588F800D: cmp byte ptr [esi + 0x98], 1
        __asm _emit 0x80
        __asm _emit 0xBE
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x588F8014: je 0x588f8060
        __asm _emit 0x74
        __asm _emit 0x4A
        // 0x588F8016: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588F801C: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x588F801F: push ecx
        __asm _emit 0x51
        // 0x588F8020: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F8022: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0x95
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x588F8027: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x588F802A: jne 0x588f8048
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x588F802C: mov eax, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F8032: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x588F8035: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588F8037: mov edx, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x18
        // 0x588F803A: push eax
        __asm _emit 0x50
        // 0x588F803B: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x588F803D: push esi
        __asm _emit 0x56
        // 0x588F803E: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588F8040: inc dword ptr [esi + 0x9c]
        __asm _emit 0xFF
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F8046: pop esi
        __asm _emit 0x5E
        // 0x588F8047: ret
        __asm _emit 0xC3
        // 0x588F8048: cmp dword ptr [esi + 0x9c], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F804F: je 0x588f806a
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x588F8051: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x588F8054: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588F8056: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x588F8059: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588F805B: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x588F805D: push esi
        __asm _emit 0x56
        // 0x588F805E: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588F8060: mov dword ptr [esi + 0x9c], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F806A: pop esi
        __asm _emit 0x5E
        // 0x588F806B: ret
        __asm _emit 0xC3
    }
}
