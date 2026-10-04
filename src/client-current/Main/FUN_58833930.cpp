// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58833930 .. +0x45 bytes.
// Source symbol alias: FUN_58833930.
extern "C" __declspec(naked) void FUN_58833930() {
    __asm {
        // 0x58833930: push esi
        __asm _emit 0x56
        // 0x58833931: push edi
        __asm _emit 0x57
        // 0x58833932: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58833936: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58833938: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x5883393B: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5883393D: je 0x58833959
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x5883393F: lea eax, [edi + 0x2d]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x2D
        // 0x58833942: push eax
        __asm _emit 0x50
        // 0x58833943: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0xE3
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58833948: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x5883394B: add edi, 0xc
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x0C
        // 0x5883394E: push edi
        __asm _emit 0x57
        // 0x5883394F: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0xE3
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58833954: pop edi
        __asm _emit 0x5F
        // 0x58833955: pop esi
        __asm _emit 0x5E
        // 0x58833956: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58833959: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5883395E: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0xE3
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58833963: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x58833966: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5883396B: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0xE3
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58833970: pop edi
        __asm _emit 0x5F
        // 0x58833971: pop esi
        __asm _emit 0x5E
        // 0x58833972: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
