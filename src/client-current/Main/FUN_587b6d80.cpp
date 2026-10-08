// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 69 bytes in 1 exact ranges.
// Source symbol alias: FUN_587b6d80.

// Ghidra body range 0x587B6D80..0x587B6DC5; 69 mapped bytes.
extern "C" __declspec(naked) void FUN_587b6d80_segment_00() {
    __asm {
        // 0x587B6D80: mov al, byte ptr [ecx + 0x61]
        __asm _emit 0x8A
        __asm _emit 0x41
        __asm _emit 0x61
        // 0x587B6D83: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x587B6D85: jne 0x587b6da4
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x587B6D87: mov eax, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x6C
        // 0x587B6D8A: mov edx, dword ptr [ecx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x50
        // 0x587B6D8D: sub eax, dword ptr [ecx + 0x74]
        __asm _emit 0x2B
        __asm _emit 0x41
        __asm _emit 0x74
        // 0x587B6D90: sub edx, dword ptr [esp + 4]
        __asm _emit 0x2B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587B6D94: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x587B6D96: jge 0x587b6d9e
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x587B6D98: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587B6D9B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587B6D9E: mov dword ptr [ecx + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x50
        // 0x587B6DA1: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587B6DA4: cmp al, 2
        __asm _emit 0x3C
        __asm _emit 0x02
        // 0x587B6DA6: jne 0x587b6dc2
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x587B6DA8: mov eax, dword ptr [ecx + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x70
        // 0x587B6DAB: mov edx, dword ptr [ecx + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x54
        // 0x587B6DAE: sub eax, dword ptr [ecx + 0x74]
        __asm _emit 0x2B
        __asm _emit 0x41
        __asm _emit 0x74
        // 0x587B6DB1: sub edx, dword ptr [esp + 4]
        __asm _emit 0x2B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587B6DB5: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x587B6DB7: jge 0x587b6dbf
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x587B6DB9: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x587B6DBC: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587B6DBF: mov dword ptr [ecx + 0x54], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x54
        // 0x587B6DC2: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
