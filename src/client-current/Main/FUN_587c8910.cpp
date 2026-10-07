// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587C8910 .. +0x44 bytes.
// Source symbol alias: FUN_587c8910.
extern "C" __declspec(naked) void FUN_587c8910() {
    __asm {
        // 0x587C8910: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587C8914: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587C8918: push esi
        __asm _emit 0x56
        // 0x587C8919: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587C891B: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587C891F: mov dword ptr [esi + 0xb8], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C8925: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x587C8928: push edx
        __asm _emit 0x52
        // 0x587C8929: mov dword ptr [esi + 0xb0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C892F: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0x93
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x587C8934: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x587C8937: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587C8939: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0xEA
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587C893E: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587C8942: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587C8945: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587C8947: push ecx
        __asm _emit 0x51
        // 0x587C8948: push edx
        __asm _emit 0x52
        // 0x587C8949: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587C894B: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0xA9
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587C8950: pop esi
        __asm _emit 0x5E
        // 0x587C8951: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
