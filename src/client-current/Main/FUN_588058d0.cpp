// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588058D0 .. +0x66 bytes.
// Source symbol alias: FUN_588058d0.
extern "C" __declspec(naked) void FUN_588058d0() {
    __asm {
        // 0x588058D0: push esi
        __asm _emit 0x56
        // 0x588058D1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588058D3: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588058D9: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x588058DC: movzx edx, word ptr [eax + 0x350]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x90
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588058E3: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588058E7: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588058E9: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x588058EB: jne 0x58805910
        __asm _emit 0x75
        __asm _emit 0x23
        // 0x588058ED: or dword ptr [esi + 0x78], 1
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x78
        __asm _emit 0x01
        // 0x588058F1: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588058F6: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588058F9: call 0x588d6cc0
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0x13
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588058FE: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58805902: push ecx
        __asm _emit 0x51
        // 0x58805903: mov ecx, dword ptr [esi + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805909: call 0x588a6720
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x0E
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5880590E: jmp 0x5880591d
        __asm _emit 0xEB
        __asm _emit 0x0D
        // 0x58805910: push eax
        __asm _emit 0x50
        // 0x58805911: call 0x5878a160
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0x48
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58805916: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58805918: call 0x588d6cc0
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0x13
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5880591D: mov eax, dword ptr [esi + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805923: or word ptr [eax + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x58805928: mov dword ptr [esi + 0x300], 0x190
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805932: pop esi
        __asm _emit 0x5E
        // 0x58805933: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
