// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 64 bytes in 1 exact ranges.
// Source symbol alias: FUN_588adc20.

// Ghidra body range 0x588ADC20..0x588ADC60; 64 mapped bytes.
extern "C" __declspec(naked) void FUN_588adc20_segment_00() {
    __asm {
        // 0x588ADC20: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588ADC24: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588ADC2A: push eax
        __asm _emit 0x50
        // 0x588ADC2B: call 0x58778ad0
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0xAE
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588ADC30: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588ADC32: je 0x588adc5b
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x588ADC34: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588ADC38: add eax, 0x360
        __asm _emit 0x05
        __asm _emit 0x60
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ADC3D: mov edx, 8
        __asm _emit 0xBA
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ADC42: push esi
        __asm _emit 0x56
        // 0x588ADC43: mov esi, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x30
        // 0x588ADC45: mov dword ptr [ecx], esi
        __asm _emit 0x89
        __asm _emit 0x31
        // 0x588ADC47: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x588ADC4A: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x588ADC4D: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x588ADC50: jne 0x588adc43
        __asm _emit 0x75
        __asm _emit 0xF1
        // 0x588ADC52: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588ADC57: pop esi
        __asm _emit 0x5E
        // 0x588ADC58: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588ADC5B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588ADC5D: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
