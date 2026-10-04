// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58888D80 .. +0xA7 bytes.
// Source symbol alias: FUN_58888d80.
extern "C" __declspec(naked) void FUN_58888d80() {
    __asm {
        // 0x58888D80: mov edx, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888D86: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888D8B: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x58888D8E: mov edx, dword ptr [ecx + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888D94: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x58888D97: mov edx, dword ptr [ecx + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888D9D: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x58888DA0: mov edx, dword ptr [ecx + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888DA6: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x58888DA9: mov edx, dword ptr [ecx + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888DAF: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x58888DB2: mov eax, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888DB8: mov edx, 2
        __asm _emit 0xBA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888DBD: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58888DC1: mov eax, dword ptr [ecx + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888DC7: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58888DCB: mov eax, dword ptr [ecx + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888DD1: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58888DD5: mov eax, dword ptr [ecx + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888DDB: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58888DDF: mov eax, dword ptr [ecx + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888DE5: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58888DE9: cmp dword ptr [esp + 4], 0x10000
        __asm _emit 0x81
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58888DF1: jne 0x58888e24
        __asm _emit 0x75
        __asm _emit 0x31
        // 0x58888DF3: mov eax, dword ptr [ecx + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888DF9: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58888DFB: mov dword ptr [eax + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x50
        // 0x58888DFE: mov eax, dword ptr [ecx + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888E04: push esi
        __asm _emit 0x56
        // 0x58888E05: mov esi, 0xfffd
        __asm _emit 0xBE
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888E0A: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        // 0x58888E0E: mov eax, dword ptr [ecx + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888E14: mov dword ptr [eax + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x50
        // 0x58888E17: mov ecx, dword ptr [ecx + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888E1D: mov edx, esi
        __asm _emit 0x8B
        __asm _emit 0xD6
        // 0x58888E1F: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x58888E23: pop esi
        __asm _emit 0x5E
        // 0x58888E24: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
