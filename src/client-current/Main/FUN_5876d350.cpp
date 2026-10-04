// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5876D350 .. +0x62 bytes.
// Source symbol alias: FUN_5876d350.
extern "C" __declspec(naked) void FUN_5876d350() {
    __asm {
        // 0x5876D350: push esi
        __asm _emit 0x56
        // 0x5876D351: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5876D353: mov eax, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D359: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x5876D35C: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5876D35F: add ecx, 0xa
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x0A
        // 0x5876D362: push ecx
        __asm _emit 0x51
        // 0x5876D363: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D369: push edx
        __asm _emit 0x52
        // 0x5876D36A: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0x5F
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5876D36F: mov eax, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D375: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x5876D378: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5876D37B: add ecx, 0xf
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x0F
        // 0x5876D37E: push ecx
        __asm _emit 0x51
        // 0x5876D37F: mov ecx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D385: push edx
        __asm _emit 0x52
        // 0x5876D386: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0x5F
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5876D38B: mov eax, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D391: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x5876D394: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5876D397: push ecx
        __asm _emit 0x51
        // 0x5876D398: mov ecx, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D39E: push edx
        __asm _emit 0x52
        // 0x5876D39F: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0x5E
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5876D3A4: mov eax, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D3AA: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x5876D3AD: mov dword ptr [eax + 0x54], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x54
        // 0x5876D3B0: pop esi
        __asm _emit 0x5E
        // 0x5876D3B1: ret
        __asm _emit 0xC3
    }
}
