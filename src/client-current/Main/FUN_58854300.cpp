// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58854300 .. +0x83 bytes.
// Source symbol alias: FUN_58854300.
extern "C" __declspec(naked) void FUN_58854300() {
    __asm {
        // 0x58854300: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58854304: push esi
        __asm _emit 0x56
        // 0x58854305: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58854307: mov dword ptr [esi + 0x2d8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885430D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885430F: je 0x5885434b
        __asm _emit 0x74
        __asm _emit 0x3A
        // 0x58854311: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58854313: call 0x588542a0
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58854318: mov eax, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885431E: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854323: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58854327: mov eax, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885432D: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5885432F: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58854333: mov eax, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854339: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5885433D: mov esi, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854343: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x58854347: pop esi
        __asm _emit 0x5E
        // 0x58854348: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5885434B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5885434D: call 0x588542a0
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58854352: mov eax, dword ptr [esi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854358: mov ecx, 2
        __asm _emit 0xB9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885435D: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58854361: mov eax, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854367: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5885436B: mov eax, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58854371: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58854375: mov esi, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885437B: or word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5885437F: pop esi
        __asm _emit 0x5E
        // 0x58854380: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
