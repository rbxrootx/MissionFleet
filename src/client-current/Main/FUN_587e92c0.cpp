// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 77 bytes in 1 exact ranges.
// Source symbol alias: FUN_587e92c0.

// Ghidra body range 0x587E92C0..0x587E930D; 77 mapped bytes.
extern "C" __declspec(naked) void FUN_587e92c0_segment_00() {
    __asm {
        // 0x587E92C0: mov edx, dword ptr [ecx + 0x10474]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E92C6: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587E92CA: and edx, 0xfffff1ff
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587E92D0: mov dword ptr [ecx + 0x20d5c], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x5C
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E92D6: or edx, 0x100
        __asm _emit 0x81
        __asm _emit 0xCA
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E92DC: mov dword ptr [ecx + 0x10474], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E92E2: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E92E7: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587E92EA: movzx edx, word ptr [ecx + 0x350]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x91
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E92F1: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E92F7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587E92F9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587E92FB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587E92FD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587E92FF: push edx
        __asm _emit 0x52
        // 0x587E9300: push 0x800100f2
        __asm _emit 0x68
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587E9305: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0x79
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587E930A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
