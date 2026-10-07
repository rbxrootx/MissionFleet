// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 322 bytes in 1 exact ranges.
// Source symbol alias: FUN_588e9f60.

// Ghidra body range 0x588E9F60..0x588EA0A2; 322 mapped bytes.
extern "C" __declspec(naked) void FUN_588e9f60_segment_00() {
    __asm {
        // 0x588E9F60: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588E9F62: push 0x5898983e
        __asm _emit 0x68
        __asm _emit 0x3E
        __asm _emit 0x98
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588E9F67: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9F6D: push eax
        __asm _emit 0x50
        // 0x588E9F6E: push ecx
        __asm _emit 0x51
        // 0x588E9F6F: push esi
        __asm _emit 0x56
        // 0x588E9F70: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588E9F75: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588E9F77: push eax
        __asm _emit 0x50
        // 0x588E9F78: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588E9F7C: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9F82: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588E9F84: mov dword ptr [esp + 8], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588E9F88: lea ecx, [esi + 0xce8]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9F8E: mov dword ptr [esi], 0x589a13f4
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xF4
        __asm _emit 0x13
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588E9F94: call 0x588c61a0
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0xC2
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x588E9F99: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588E9F9B: mov dword ptr [esi + 0xce0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9FA1: mov dword ptr [esi + 0xce4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9FA7: mov dword ptr [esi + 0x9a4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9FAD: mov dword ptr [esi + 0x9a8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9FB3: mov dword ptr [esi + 0x9ac], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9FB9: mov dword ptr [esi + 0x9b0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9FBF: mov dword ptr [esi + 0x9b4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9FC5: mov dword ptr [esi + 0x9b8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9FCB: mov dword ptr [esi + 0x9bc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9FD1: mov dword ptr [esi + 0x9c0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9FD7: mov dword ptr [esi + 0x9c4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9FDD: mov dword ptr [esi + 0x9c8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9FE3: mov dword ptr [esi + 0x9cc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9FE9: mov dword ptr [esi + 0x9d0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9FEF: mov dword ptr [esi + 0x9d4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9FF5: mov dword ptr [esi + 0x9d8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E9FFB: mov dword ptr [esi + 0x9dc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA001: mov dword ptr [esi + 0x9e0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA007: mov dword ptr [esi + 0x9e4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA00D: mov dword ptr [esi + 0x9e8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA013: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588EA017: mov dword ptr [esi + 0x9ec], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xEC
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA01D: mov dword ptr [esi + 0x9f0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xF0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA023: mov dword ptr [esi + 0x9f4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA029: mov dword ptr [esi + 0x9f8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA02F: mov dword ptr [esi + 0x9fc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA035: mov dword ptr [esi + 0xa00], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA03B: mov dword ptr [esi + 0xa04], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA041: mov dword ptr [esi + 0xa08], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA047: mov dword ptr [esi + 0xa0c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA04D: mov dword ptr [esi + 0xa10], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA053: mov dword ptr [esi + 0xa14], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA059: mov dword ptr [esi + 0xa18], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA05F: mov dword ptr [esi + 0xa1c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA065: mov dword ptr [esi + 0xa20], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA06B: push eax
        __asm _emit 0x50
        // 0x588EA06C: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588EA070: mov dword ptr [esi + 0x118], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA076: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588EA07A: push eax
        __asm _emit 0x50
        // 0x588EA07B: push ecx
        __asm _emit 0x51
        // 0x588EA07C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588EA07E: call 0x588e9940
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588EA083: mov dword ptr [esi + 0xe84], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA08D: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588EA08F: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588EA093: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EA09A: pop ecx
        __asm _emit 0x59
        // 0x588EA09B: pop esi
        __asm _emit 0x5E
        // 0x588EA09C: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588EA09F: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
