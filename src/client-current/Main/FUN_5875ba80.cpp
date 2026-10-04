// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5875BA80 .. +0x59 bytes.
// Source symbol alias: FUN_5875ba80.
extern "C" __declspec(naked) void FUN_5875ba80() {
    __asm {
        // 0x5875BA80: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5875BA84: push esi
        __asm _emit 0x56
        // 0x5875BA85: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5875BA87: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5875BA89: jne 0x5875ba96
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x5875BA8B: cmp dword ptr [esi + 0x2c], eax
        __asm _emit 0x39
        __asm _emit 0x46
        __asm _emit 0x2C
        // 0x5875BA8E: jne 0x5875baa2
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x5875BA90: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5875BA92: pop esi
        __asm _emit 0x5E
        // 0x5875BA93: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5875BA96: push eax
        __asm _emit 0x50
        // 0x5875BA97: call 0x5875b090
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5875BA9C: cmp dword ptr [esi + 0x2c], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x2C
        __asm _emit 0x00
        // 0x5875BAA0: je 0x5875ba90
        __asm _emit 0x74
        __asm _emit 0xEE
        // 0x5875BAA2: push ebx
        __asm _emit 0x53
        // 0x5875BAA3: mov ebx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5875BAA7: push edi
        __asm _emit 0x57
        // 0x5875BAA8: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5875BAAC: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5875BAB0: push eax
        __asm _emit 0x50
        // 0x5875BAB1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5875BAB3: push edi
        __asm _emit 0x57
        // 0x5875BAB4: push ebx
        __asm _emit 0x53
        // 0x5875BAB5: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5875BAB7: mov dword ptr [esp + 0x28], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BABF: call 0x5875b3f0
        __asm _emit 0xE8
        __asm _emit 0x2C
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5875BAC4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5875BAC6: push edi
        __asm _emit 0x57
        // 0x5875BAC7: push ebx
        __asm _emit 0x53
        // 0x5875BAC8: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5875BACA: call 0x5875b5c0
        __asm _emit 0xE8
        __asm _emit 0xF1
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5875BACF: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5875BAD3: pop edi
        __asm _emit 0x5F
        // 0x5875BAD4: pop ebx
        __asm _emit 0x5B
        // 0x5875BAD5: pop esi
        __asm _emit 0x5E
        // 0x5875BAD6: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
