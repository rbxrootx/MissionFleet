// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 87 bytes in 1 exact ranges.
// Source symbol alias: FUN_588d2480.

// Ghidra body range 0x588D2480..0x588D24D7; 87 mapped bytes.
extern "C" __declspec(naked) void FUN_588d2480_segment_00() {
    __asm {
        // 0x588D2480: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588D2484: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588D2488: push esi
        __asm _emit 0x56
        // 0x588D2489: push eax
        __asm _emit 0x50
        // 0x588D248A: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588D248E: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588D2490: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588D2494: push ecx
        __asm _emit 0x51
        // 0x588D2495: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588D2499: push edx
        __asm _emit 0x52
        // 0x588D249A: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588D249E: push eax
        __asm _emit 0x50
        // 0x588D249F: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588D24A3: push ecx
        __asm _emit 0x51
        // 0x588D24A4: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588D24A8: push edx
        __asm _emit 0x52
        // 0x588D24A9: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588D24AD: push eax
        __asm _emit 0x50
        // 0x588D24AE: push ecx
        __asm _emit 0x51
        // 0x588D24AF: push edx
        __asm _emit 0x52
        // 0x588D24B0: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588D24B2: call 0x58741c20
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0xF7
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588D24B7: mov dword ptr [esi], 0x589a0f38
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x38
        __asm _emit 0x0F
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588D24BD: mov dword ptr [esi + 0x560], 6
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x60
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D24C7: mov dword ptr [esi + 0x4f8], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D24D1: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588D24D3: pop esi
        __asm _emit 0x5E
        // 0x588D24D4: ret 0x24
        __asm _emit 0xC2
        __asm _emit 0x24
        __asm _emit 0x00
    }
}
