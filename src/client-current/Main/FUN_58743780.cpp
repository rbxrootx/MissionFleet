// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 78 bytes in 1 exact ranges.
// Source symbol alias: FUN_58743780.

// Ghidra body range 0x58743780..0x587437CE; 78 mapped bytes.
extern "C" __declspec(naked) void FUN_58743780_segment_00() {
    __asm {
        // 0x58743780: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58743784: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58743787: push esi
        __asm _emit 0x56
        // 0x58743788: mov esi, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x30
        // 0x5874378A: mov dword ptr [edx + 8], esi
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0x08
        // 0x5874378D: mov esi, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x30
        // 0x5874378F: cmp byte ptr [esi + 0x29], 0
        __asm _emit 0x80
        __asm _emit 0x7E
        __asm _emit 0x29
        __asm _emit 0x00
        // 0x58743793: jne 0x58743798
        __asm _emit 0x75
        __asm _emit 0x03
        // 0x58743795: mov dword ptr [esi + 4], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58743798: mov esi, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x72
        __asm _emit 0x04
        // 0x5874379B: mov dword ptr [eax + 4], esi
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x5874379E: mov ecx, dword ptr [ecx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x18
        // 0x587437A1: pop esi
        __asm _emit 0x5E
        // 0x587437A2: cmp edx, dword ptr [ecx + 4]
        __asm _emit 0x3B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587437A5: jne 0x587437b2
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x587437A7: mov dword ptr [ecx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x587437AA: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x587437AC: mov dword ptr [edx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587437AF: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587437B2: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x587437B5: cmp edx, dword ptr [ecx]
        __asm _emit 0x3B
        __asm _emit 0x11
        // 0x587437B7: jne 0x587437c3
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x587437B9: mov dword ptr [ecx], eax
        __asm _emit 0x89
        __asm _emit 0x01
        // 0x587437BB: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x587437BD: mov dword ptr [edx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587437C0: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587437C3: mov dword ptr [ecx + 8], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x587437C6: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x587437C8: mov dword ptr [edx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587437CB: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
