// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58895860 .. +0x5E bytes.
// Source symbol alias: FUN_58895860.
extern "C" __declspec(naked) void FUN_58895860() {
    __asm {
        // 0x58895860: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58895864: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58895868: push esi
        __asm _emit 0x56
        // 0x58895869: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5889586B: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5889586D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889586F: setl cl
        __asm _emit 0x0F
        __asm _emit 0x9C
        __asm _emit 0xC1
        // 0x58895872: dec ecx
        __asm _emit 0x49
        // 0x58895873: and ecx, eax
        __asm _emit 0x23
        __asm _emit 0xC8
        // 0x58895875: mov dword ptr [esi + edx*4 + 0x94], ecx
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x96
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889587C: mov eax, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895882: imul eax, eax, 0x373
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x73
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895888: cdq
        __asm _emit 0x99
        // 0x58895889: idiv dword ptr [esi + 0xa8]
        __asm _emit 0xF7
        __asm _emit 0xBE
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889588F: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x58895892: add eax, 0x7e
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x7E
        // 0x58895895: push eax
        __asm _emit 0x50
        // 0x58895896: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0xDA
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889589B: mov eax, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588958A1: imul eax, eax, 0x373
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x73
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588958A7: cdq
        __asm _emit 0x99
        // 0x588958A8: idiv dword ptr [esi + 0xa8]
        __asm _emit 0xF7
        __asm _emit 0xBE
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588958AE: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588958B1: add eax, 0x7e
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x7E
        // 0x588958B4: push eax
        __asm _emit 0x50
        // 0x588958B5: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0xDA
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x588958BA: pop esi
        __asm _emit 0x5E
        // 0x588958BB: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
