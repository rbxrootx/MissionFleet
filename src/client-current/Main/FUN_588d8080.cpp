// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588D8080 .. +0x73 bytes.
// Source symbol alias: FUN_588d8080.
extern "C" __declspec(naked) void FUN_588d8080() {
    __asm {
        // 0x588D8080: push esi
        __asm _emit 0x56
        // 0x588D8081: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588D8083: call 0x588d6570
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588D8088: mov eax, dword ptr [esi + 0x60d8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D808E: mov ecx, dword ptr [esi + 0x605c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x5C
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8094: mov dword ptr [eax + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x588D8097: mov edx, dword ptr [esi + 0x1470]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x70
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D809D: mov eax, dword ptr [esi + 0x605c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x5C
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D80A3: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x588D80A6: mov ecx, dword ptr [esi + 0x605c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x5C
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D80AC: push ecx
        __asm _emit 0x51
        // 0x588D80AD: mov ecx, dword ptr [esi + 0x1474]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D80B3: call 0x5877e2e0
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0x62
        __asm _emit 0xEA
        __asm _emit 0xFF
        // 0x588D80B8: mov edx, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D80BE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D80C0: test byte ptr [edx + 0xa], 7
        __asm _emit 0xF6
        __asm _emit 0x42
        __asm _emit 0x0A
        __asm _emit 0x07
        // 0x588D80C4: jbe 0x588d80f1
        __asm _emit 0x76
        __asm _emit 0x2B
        // 0x588D80C6: lea ecx, [esi + 0x60dc]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D80CC: push edi
        __asm _emit 0x57
        // 0x588D80CD: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x588D80D0: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588D80D2: mov edi, dword ptr [esi + 0x605c]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x5C
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D80D8: mov dword ptr [edx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x50
        // 0x588D80DB: mov edx, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D80E1: movzx edx, word ptr [edx + 0xa]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x52
        __asm _emit 0x0A
        // 0x588D80E5: inc eax
        __asm _emit 0x40
        // 0x588D80E6: and edx, 7
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x07
        // 0x588D80E9: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x588D80EC: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x588D80EE: jb 0x588d80d0
        __asm _emit 0x72
        __asm _emit 0xE0
        // 0x588D80F0: pop edi
        __asm _emit 0x5F
        // 0x588D80F1: pop esi
        __asm _emit 0x5E
        // 0x588D80F2: ret
        __asm _emit 0xC3
    }
}
