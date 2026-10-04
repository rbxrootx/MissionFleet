// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5890C720 .. +0x5E bytes.
// Source symbol alias: FUN_5890c720.
extern "C" __declspec(naked) void FUN_5890c720() {
    __asm {
        // 0x5890C720: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5890C724: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5890C728: push esi
        __asm _emit 0x56
        // 0x5890C729: push eax
        __asm _emit 0x50
        // 0x5890C72A: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5890C72E: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5890C730: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5890C734: push ecx
        __asm _emit 0x51
        // 0x5890C735: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5890C739: push edx
        __asm _emit 0x52
        // 0x5890C73A: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5890C73E: push eax
        __asm _emit 0x50
        // 0x5890C73F: push ecx
        __asm _emit 0x51
        // 0x5890C740: push edx
        __asm _emit 0x52
        // 0x5890C741: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5890C743: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0x6A
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5890C748: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5890C74A: mov dword ptr [esi + 0xec], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890C750: mov dword ptr [esi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x5890C753: mov dword ptr [esi + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x5890C756: mov dword ptr [esi + 0xf0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890C75C: mov eax, 0xffffff9c
        __asm _emit 0xB8
        __asm _emit 0x9C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5890C761: mov dword ptr [esi + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x5890C764: mov dword ptr [esi + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x5890C767: mov eax, 0x64
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890C76C: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x5890C76F: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x5890C772: mov dword ptr [esi], 0x589a2a48
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x48
        __asm _emit 0x2A
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5890C778: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5890C77A: pop esi
        __asm _emit 0x5E
        // 0x5890C77B: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
