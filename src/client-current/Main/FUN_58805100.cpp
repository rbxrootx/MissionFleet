// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58805100 .. +0x44 bytes.
// Source symbol alias: FUN_58805100.
extern "C" __declspec(naked) void FUN_58805100() {
    __asm {
        // 0x58805100: push esi
        __asm _emit 0x56
        // 0x58805101: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58805103: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58805107: movzx eax, byte ptr [ecx + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x81
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880510E: movzx edx, word ptr [ecx + 0x352]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x91
        __asm _emit 0x52
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805115: shl eax, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x0A
        // 0x58805118: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5880511A: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58805120: lea eax, [edx + eax*8 + 0x458]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0xC2
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805127: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5880512A: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x5880512C: push edx
        __asm _emit 0x52
        // 0x5880512D: push eax
        __asm _emit 0x50
        // 0x5880512E: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0xE1
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58805133: mov ecx, dword ptr [esi + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805139: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5880513B: mov eax, dword ptr [edx + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x5880513E: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58805140: pop esi
        __asm _emit 0x5E
        // 0x58805141: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
