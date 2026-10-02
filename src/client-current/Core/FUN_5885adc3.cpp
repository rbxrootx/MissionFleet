// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885ADC3 .. +0x8 bytes.
extern "C" __declspec(naked) void FUN_5885adc3() {
    __asm {
        // 0x5885ADC3: push esi
        __asm _emit 0x56
        // 0x5885ADC4: call 0x58859d16
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0xEF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885ADC9: pop ecx
        __asm _emit 0x59
        // 0x5885ADCA: ret
        __asm _emit 0xC3
    }
}
