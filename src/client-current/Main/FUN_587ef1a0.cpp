// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 78 bytes in 1 exact ranges.
// Source symbol alias: FUN_587ef1a0.

// Ghidra body range 0x587EF1A0..0x587EF1EE; 78 mapped bytes.
extern "C" __declspec(naked) void FUN_587ef1a0_segment_00() {
    __asm {
        // 0x587EF1A0: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587EF1A4: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x587EF1A7: push esi
        __asm _emit 0x56
        // 0x587EF1A8: mov esi, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x30
        // 0x587EF1AA: mov dword ptr [edx + 8], esi
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0x08
        // 0x587EF1AD: mov esi, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x30
        // 0x587EF1AF: cmp byte ptr [esi + 0x2d], 0
        __asm _emit 0x80
        __asm _emit 0x7E
        __asm _emit 0x2D
        __asm _emit 0x00
        // 0x587EF1B3: jne 0x587ef1b8
        __asm _emit 0x75
        __asm _emit 0x03
        // 0x587EF1B5: mov dword ptr [esi + 4], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x587EF1B8: mov esi, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x72
        __asm _emit 0x04
        // 0x587EF1BB: mov dword ptr [eax + 4], esi
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x587EF1BE: mov ecx, dword ptr [ecx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x18
        // 0x587EF1C1: pop esi
        __asm _emit 0x5E
        // 0x587EF1C2: cmp edx, dword ptr [ecx + 4]
        __asm _emit 0x3B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587EF1C5: jne 0x587ef1d2
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x587EF1C7: mov dword ptr [ecx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x587EF1CA: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x587EF1CC: mov dword ptr [edx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587EF1CF: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587EF1D2: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x587EF1D5: cmp edx, dword ptr [ecx]
        __asm _emit 0x3B
        __asm _emit 0x11
        // 0x587EF1D7: jne 0x587ef1e3
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x587EF1D9: mov dword ptr [ecx], eax
        __asm _emit 0x89
        __asm _emit 0x01
        // 0x587EF1DB: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x587EF1DD: mov dword ptr [edx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587EF1E0: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587EF1E3: mov dword ptr [ecx + 8], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x587EF1E6: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x587EF1E8: mov dword ptr [edx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587EF1EB: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
