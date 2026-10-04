// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58792120 .. +0x3F bytes.
// Source symbol alias: FUN_58792120.
extern "C" __declspec(naked) void FUN_58792120() {
    __asm {
        // 0x58792120: push ecx
        __asm _emit 0x51
        // 0x58792121: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58792125: push esi
        __asm _emit 0x56
        // 0x58792126: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5879212A: push edi
        __asm _emit 0x57
        // 0x5879212B: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5879212F: mov byte ptr [esp + 8], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58792134: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58792138: push eax
        __asm _emit 0x50
        // 0x58792139: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5879213D: push edx
        __asm _emit 0x52
        // 0x5879213E: add ecx, 8
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x08
        // 0x58792141: push ecx
        __asm _emit 0x51
        // 0x58792142: push eax
        __asm _emit 0x50
        // 0x58792143: push esi
        __asm _emit 0x56
        // 0x58792144: push edi
        __asm _emit 0x57
        // 0x58792145: call 0x58791f30
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5879214A: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x5879214D: lea ecx, [esi*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xF5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58792154: sub ecx, esi
        __asm _emit 0x2B
        __asm _emit 0xCE
        // 0x58792156: lea eax, [edi + ecx*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x8F
        // 0x58792159: pop edi
        __asm _emit 0x5F
        // 0x5879215A: pop esi
        __asm _emit 0x5E
        // 0x5879215B: pop ecx
        __asm _emit 0x59
        // 0x5879215C: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
