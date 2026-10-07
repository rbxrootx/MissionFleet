// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5874D560 .. +0x39 bytes.
// Source symbol alias: FUN_5874d560.
extern "C" __declspec(naked) void FUN_5874d560() {
    __asm {
        // 0x5874D560: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5874D564: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5874D568: push esi
        __asm _emit 0x56
        // 0x5874D569: push eax
        __asm _emit 0x50
        // 0x5874D56A: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874D56E: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5874D570: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5874D574: push ecx
        __asm _emit 0x51
        // 0x5874D575: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874D579: push edx
        __asm _emit 0x52
        // 0x5874D57A: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874D57E: push eax
        __asm _emit 0x50
        // 0x5874D57F: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874D583: push ecx
        __asm _emit 0x51
        // 0x5874D584: push edx
        __asm _emit 0x52
        // 0x5874D585: push eax
        __asm _emit 0x50
        // 0x5874D586: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5874D588: call 0x5874bcf0
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0xE7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874D58D: mov dword ptr [esi], 0x5898d20c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x0C
        __asm _emit 0xD2
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5874D593: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5874D595: pop esi
        __asm _emit 0x5E
        // 0x5874D596: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
    }
}
