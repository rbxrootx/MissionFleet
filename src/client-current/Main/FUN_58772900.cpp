// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 53 bytes in 1 exact ranges.
// Source symbol alias: FUN_58772900.

// Ghidra body range 0x58772900..0x58772935; 53 mapped bytes.
extern "C" __declspec(naked) void FUN_58772900_segment_00() {
    __asm {
        // 0x58772900: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58772904: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58772908: push ebx
        __asm _emit 0x53
        // 0x58772909: mov ebx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5877290D: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x5877290F: je 0x58772933
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x58772911: push esi
        __asm _emit 0x56
        // 0x58772912: push edi
        __asm _emit 0x57
        // 0x58772913: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58772915: je 0x58772922
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58772917: mov ecx, 0x42
        __asm _emit 0xB9
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877291C: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x5877291E: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58772920: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58772922: add edx, 0x108
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58772928: add eax, 0x108
        __asm _emit 0x05
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877292D: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x5877292F: jne 0x58772913
        __asm _emit 0x75
        __asm _emit 0xE2
        // 0x58772931: pop edi
        __asm _emit 0x5F
        // 0x58772932: pop esi
        __asm _emit 0x5E
        // 0x58772933: pop ebx
        __asm _emit 0x5B
        // 0x58772934: ret
        __asm _emit 0xC3
    }
}
