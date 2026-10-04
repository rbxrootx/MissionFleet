// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588D8100 .. +0x49 bytes.
// Source symbol alias: FUN_588d8100.
extern "C" __declspec(naked) void FUN_588d8100() {
    __asm {
        // 0x588D8100: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588D8104: push esi
        __asm _emit 0x56
        // 0x588D8105: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x588D8107: cmp dword ptr [ecx + 0x141c], esi
        __asm _emit 0x39
        __asm _emit 0xB1
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D810D: mov dword ptr [ecx + 0x6094], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x94
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8113: jle 0x588d8145
        __asm _emit 0x7E
        __asm _emit 0x30
        // 0x588D8115: push edi
        __asm _emit 0x57
        // 0x588D8116: lea edi, [ecx + 0x17c]
        __asm _emit 0x8D
        __asm _emit 0xB9
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D811C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588D8120: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x588D8122: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D8124: je 0x588d8138
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x588D8126: mov edx, dword ptr [ecx + 0x6094]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x94
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D812C: mov dword ptr [eax + 0x114], edx
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8132: mov dword ptr [eax + 0x110], edx
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8138: inc esi
        __asm _emit 0x46
        // 0x588D8139: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588D813C: cmp esi, dword ptr [ecx + 0x141c]
        __asm _emit 0x3B
        __asm _emit 0xB1
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D8142: jl 0x588d8120
        __asm _emit 0x7C
        __asm _emit 0xDC
        // 0x588D8144: pop edi
        __asm _emit 0x5F
        // 0x588D8145: pop esi
        __asm _emit 0x5E
        // 0x588D8146: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
