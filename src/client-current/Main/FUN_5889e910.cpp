// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5889E910 .. +0x5F bytes.
// Source symbol alias: FUN_5889e910.
extern "C" __declspec(naked) void FUN_5889e910() {
    __asm {
        // 0x5889E910: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889E914: push ebx
        __asm _emit 0x53
        // 0x5889E915: mov ebx, dword ptr [0x5898c00c]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0x0C
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5889E91B: push esi
        __asm _emit 0x56
        // 0x5889E91C: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5889E920: push edi
        __asm _emit 0x57
        // 0x5889E921: mov edi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5889E925: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5889E927: push edi
        __asm _emit 0x57
        // 0x5889E928: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5889E92A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5889E92C: push esi
        __asm _emit 0x56
        // 0x5889E92D: push eax
        __asm _emit 0x50
        // 0x5889E92E: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5889E930: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889E932: je 0x5889e969
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x5889E934: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5889E938: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5889E93C: push ecx
        __asm _emit 0x51
        // 0x5889E93D: lea edx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5889E941: push edx
        __asm _emit 0x52
        // 0x5889E942: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5889E944: push 0xf003f
        __asm _emit 0x68
        __asm _emit 0x3F
        __asm _emit 0x00
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5889E949: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5889E94B: push esi
        __asm _emit 0x56
        // 0x5889E94C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5889E94E: push eax
        __asm _emit 0x50
        // 0x5889E94F: push 0x80000002
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x5889E954: call dword ptr [0x5898c010]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5889E95A: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5889E95E: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5889E960: push edi
        __asm _emit 0x57
        // 0x5889E961: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5889E963: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5889E965: push esi
        __asm _emit 0x56
        // 0x5889E966: push ecx
        __asm _emit 0x51
        // 0x5889E967: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5889E969: pop edi
        __asm _emit 0x5F
        // 0x5889E96A: pop esi
        __asm _emit 0x5E
        // 0x5889E96B: pop ebx
        __asm _emit 0x5B
        // 0x5889E96C: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
