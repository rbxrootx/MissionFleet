// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 97 bytes in 1 exact ranges.
// Source symbol alias: FUN_58796f00.

// Ghidra body range 0x58796F00..0x58796F61; 97 mapped bytes.
extern "C" __declspec(naked) void FUN_58796f00_segment_00() {
    __asm {
        // 0x58796F00: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58796F04: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58796F08: push ebx
        __asm _emit 0x53
        // 0x58796F09: mov ebx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58796F0D: push esi
        __asm _emit 0x56
        // 0x58796F0E: push edi
        __asm _emit 0x57
        // 0x58796F0F: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58796F13: push eax
        __asm _emit 0x50
        // 0x58796F14: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58796F18: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58796F1A: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58796F1E: push ecx
        __asm _emit 0x51
        // 0x58796F1F: push edx
        __asm _emit 0x52
        // 0x58796F20: push edi
        __asm _emit 0x57
        // 0x58796F21: push ebx
        __asm _emit 0x53
        // 0x58796F22: push eax
        __asm _emit 0x50
        // 0x58796F23: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58796F25: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0xC2
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x58796F2A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58796F2C: mov dword ptr [esi], 0x58998064
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x64
        __asm _emit 0x80
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58796F32: mov byte ptr [esi + 0x50], al
        __asm _emit 0x88
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x58796F35: mov ecx, dword ptr [esi + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x28
        // 0x58796F38: mov dword ptr [esi + 0x78], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x78
        // 0x58796F3B: mov dword ptr [esi + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x58796F3E: mov dword ptr [esi + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x58796F41: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x58796F44: mov dword ptr [esi + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x58796F47: mov dword ptr [esi + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58796F4D: mov dword ptr [esi + 0x7c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x58796F50: pop edi
        __asm _emit 0x5F
        // 0x58796F51: mov dword ptr [esi + 0x74], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x74
        // 0x58796F54: mov dword ptr [esi + 0x84], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58796F5A: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58796F5C: pop esi
        __asm _emit 0x5E
        // 0x58796F5D: pop ebx
        __asm _emit 0x5B
        // 0x58796F5E: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
