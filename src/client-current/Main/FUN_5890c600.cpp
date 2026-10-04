// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5890C600 .. +0x94 bytes.
// Source symbol alias: FUN_5890c600.
extern "C" __declspec(naked) void FUN_5890c600() {
    __asm {
        // 0x5890C600: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5890C602: push 0x5898ab68
        __asm _emit 0x68
        __asm _emit 0x68
        __asm _emit 0xAB
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5890C607: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890C60D: push eax
        __asm _emit 0x50
        // 0x5890C60E: push ecx
        __asm _emit 0x51
        // 0x5890C60F: push ebx
        __asm _emit 0x53
        // 0x5890C610: push esi
        __asm _emit 0x56
        // 0x5890C611: push edi
        __asm _emit 0x57
        // 0x5890C612: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5890C617: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5890C619: push eax
        __asm _emit 0x50
        // 0x5890C61A: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5890C61E: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890C624: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5890C626: mov dword ptr [esp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5890C62A: mov edi, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5890C62E: mov ebx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5890C632: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5890C636: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5890C638: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5890C63A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5890C63C: push edi
        __asm _emit 0x57
        // 0x5890C63D: push ebx
        __asm _emit 0x53
        // 0x5890C63E: push eax
        __asm _emit 0x50
        // 0x5890C63F: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0x6B
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5890C644: mov dword ptr [esi + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890C64B: mov dword ptr [esi + 0x54], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890C652: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5890C656: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5890C65A: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5890C65E: push ecx
        __asm _emit 0x51
        // 0x5890C65F: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5890C663: push edx
        __asm _emit 0x52
        // 0x5890C664: push eax
        __asm _emit 0x50
        // 0x5890C665: push ecx
        __asm _emit 0x51
        // 0x5890C666: push edi
        __asm _emit 0x57
        // 0x5890C667: push ebx
        __asm _emit 0x53
        // 0x5890C668: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5890C66A: mov dword ptr [esp + 0x34], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890C672: mov dword ptr [esi], 0x589a2ca0
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xA0
        __asm _emit 0x2C
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5890C678: call 0x5890c020
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5890C67D: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5890C67F: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5890C683: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890C68A: pop ecx
        __asm _emit 0x59
        // 0x5890C68B: pop edi
        __asm _emit 0x5F
        // 0x5890C68C: pop esi
        __asm _emit 0x5E
        // 0x5890C68D: pop ebx
        __asm _emit 0x5B
        // 0x5890C68E: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5890C691: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
    }
}
