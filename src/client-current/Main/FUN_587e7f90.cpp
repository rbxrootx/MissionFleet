// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 82 bytes in 1 exact ranges.
// Source symbol alias: FUN_587e7f90.

// Ghidra body range 0x587E7F90..0x587E7FE2; 82 mapped bytes.
extern "C" __declspec(naked) void FUN_587e7f90_segment_00() {
    __asm {
        // 0x587E7F90: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587E7F94: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587E7F96: push esi
        __asm _emit 0x56
        // 0x587E7F97: mov esi, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x08
        // 0x587E7F9A: mov dword ptr [edx], esi
        __asm _emit 0x89
        __asm _emit 0x32
        // 0x587E7F9C: mov esi, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x08
        // 0x587E7F9F: cmp byte ptr [esi + 0x2d], 0
        __asm _emit 0x80
        __asm _emit 0x7E
        __asm _emit 0x2D
        __asm _emit 0x00
        // 0x587E7FA3: jne 0x587e7fa8
        __asm _emit 0x75
        __asm _emit 0x03
        // 0x587E7FA5: mov dword ptr [esi + 4], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x587E7FA8: mov esi, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x72
        __asm _emit 0x04
        // 0x587E7FAB: mov dword ptr [eax + 4], esi
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x587E7FAE: mov ecx, dword ptr [ecx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x18
        // 0x587E7FB1: pop esi
        __asm _emit 0x5E
        // 0x587E7FB2: cmp edx, dword ptr [ecx + 4]
        __asm _emit 0x3B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587E7FB5: jne 0x587e7fc3
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x587E7FB7: mov dword ptr [ecx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x587E7FBA: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587E7FBD: mov dword ptr [edx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587E7FC0: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587E7FC3: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x587E7FC6: cmp edx, dword ptr [ecx + 8]
        __asm _emit 0x3B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587E7FC9: jne 0x587e7fd7
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x587E7FCB: mov dword ptr [ecx + 8], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x587E7FCE: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587E7FD1: mov dword ptr [edx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587E7FD4: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587E7FD7: mov dword ptr [ecx], eax
        __asm _emit 0x89
        __asm _emit 0x01
        // 0x587E7FD9: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587E7FDC: mov dword ptr [edx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587E7FDF: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
