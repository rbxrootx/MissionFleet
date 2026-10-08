// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 59 bytes in 1 exact ranges.
// Source symbol alias: FUN_58858550.

// Ghidra body range 0x58858550..0x5885858B; 59 mapped bytes.
extern "C" __declspec(naked) void FUN_58858550_segment_00() {
    __asm {
        // 0x58858550: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58858554: push esi
        __asm _emit 0x56
        // 0x58858555: lea esi, [ecx + eax*4 + 0x8b8]
        __asm _emit 0x8D
        __asm _emit 0xB4
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885855C: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5885855E: push ecx
        __asm _emit 0x51
        // 0x5885855F: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58858565: push esi
        __asm _emit 0x56
        // 0x58858566: call 0x587a1640
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0x90
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5885856B: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5885856D: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858572: inc eax
        __asm _emit 0x40
        // 0x58858573: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58858578: push eax
        __asm _emit 0x50
        // 0x58858579: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x5885857B: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58858581: push esi
        __asm _emit 0x56
        // 0x58858582: call 0x587a15e0
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0x90
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58858587: pop esi
        __asm _emit 0x5E
        // 0x58858588: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
