// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5875CA20 .. +0xBB bytes.
// Source symbol alias: FUN_5875ca20.
extern "C" __declspec(naked) void FUN_5875ca20() {
    __asm {
        // 0x5875CA20: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5875CA22: push 0x5898947b
        __asm _emit 0x68
        __asm _emit 0x7B
        __asm _emit 0x94
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5875CA27: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875CA2D: push eax
        __asm _emit 0x50
        // 0x5875CA2E: push ecx
        __asm _emit 0x51
        // 0x5875CA2F: push esi
        __asm _emit 0x56
        // 0x5875CA30: push edi
        __asm _emit 0x57
        // 0x5875CA31: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5875CA36: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5875CA38: push eax
        __asm _emit 0x50
        // 0x5875CA39: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5875CA3D: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875CA43: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5875CA45: push 0x198
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875CA4A: mov dword ptr [esi], 0x5898d91c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x1C
        __asm _emit 0xD9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5875CA50: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0x01
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5875CA55: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5875CA58: mov dword ptr [esp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5875CA5C: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5875CA5E: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5875CA62: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5875CA64: je 0x5875ca77
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5875CA66: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5875CA68: push edi
        __asm _emit 0x57
        // 0x5875CA69: push 0x5898d904
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0xD9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5875CA6E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5875CA70: call 0x588f3d70
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0x72
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5875CA75: jmp 0x5875ca79
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5875CA77: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5875CA79: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5875CA7C: mov dword ptr [esi + 0x60], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x60
        // 0x5875CA7F: mov dword ptr [esi + 0x64], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x64
        // 0x5875CA82: mov dword ptr [esi + 0x68], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x68
        // 0x5875CA85: mov dword ptr [esi + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x50
        // 0x5875CA88: mov dword ptr [esi + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x5875CA8B: mov dword ptr [esi + 0x58], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x58
        // 0x5875CA8E: mov dword ptr [esi + 0x5c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x5C
        // 0x5875CA91: mov dword ptr [esi + 8], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x5875CA94: mov dword ptr [esi + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x5875CA97: mov dword ptr [esi + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x5875CA9A: mov dword ptr [esi + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x5875CA9D: mov dword ptr [esi + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x5875CAA0: mov dword ptr [esi + 0x34], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x34
        // 0x5875CAA3: mov dword ptr [esi + 0x1c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x1C
        // 0x5875CAA6: mov dword ptr [esi + 0x38], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x38
        // 0x5875CAA9: mov dword ptr [esi + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x20
        // 0x5875CAAC: mov dword ptr [esi + 0x3c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x3C
        // 0x5875CAAF: mov dword ptr [esi + 0x24], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x24
        // 0x5875CAB2: mov dword ptr [esi + 0x40], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x40
        // 0x5875CAB5: mov dword ptr [esi + 0x28], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x28
        // 0x5875CAB8: mov dword ptr [esi + 0x44], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x44
        // 0x5875CABB: mov dword ptr [esi + 0x2c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x2C
        // 0x5875CABE: mov dword ptr [esi + 0x48], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x48
        // 0x5875CAC1: mov dword ptr [esi + 0x30], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x30
        // 0x5875CAC4: mov dword ptr [esi + 0x4c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x4C
        // 0x5875CAC7: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5875CAC9: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5875CACD: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875CAD4: pop ecx
        __asm _emit 0x59
        // 0x5875CAD5: pop edi
        __asm _emit 0x5F
        // 0x5875CAD6: pop esi
        __asm _emit 0x5E
        // 0x5875CAD7: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5875CADA: ret
        __asm _emit 0xC3
    }
}
