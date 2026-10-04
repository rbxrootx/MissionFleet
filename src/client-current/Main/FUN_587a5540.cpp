// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587A5540 .. +0x5E bytes.
// Source symbol alias: FUN_587a5540.
extern "C" __declspec(naked) void FUN_587a5540() {
    __asm {
        // 0x587A5540: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587A5542: push 0x58980b6b
        __asm _emit 0x68
        __asm _emit 0x6B
        __asm _emit 0x0B
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587A5547: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A554D: push eax
        __asm _emit 0x50
        // 0x587A554E: push ecx
        __asm _emit 0x51
        // 0x587A554F: push esi
        __asm _emit 0x56
        // 0x587A5550: push edi
        __asm _emit 0x57
        // 0x587A5551: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587A5556: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587A5558: push eax
        __asm _emit 0x50
        // 0x587A5559: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A555D: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5563: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587A5565: mov dword ptr [esp + 0xc], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587A5569: lea edi, [esi + 4]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x587A556C: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587A556E: mov dword ptr [esi], 0x58999934
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x34
        __asm _emit 0x99
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587A5574: call 0x588ffdb0
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0xA8
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587A5579: push 0x20
        __asm _emit 0x6A
        __asm _emit 0x20
        // 0x587A557B: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587A557D: mov dword ptr [esp + 0x1c], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5585: call 0x58752830
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0xD2
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x587A558A: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587A558C: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A5590: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A5597: pop ecx
        __asm _emit 0x59
        // 0x587A5598: pop edi
        __asm _emit 0x5F
        // 0x587A5599: pop esi
        __asm _emit 0x5E
        // 0x587A559A: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587A559D: ret
        __asm _emit 0xC3
    }
}
