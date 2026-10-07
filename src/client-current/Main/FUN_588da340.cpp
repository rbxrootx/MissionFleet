// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588DA340 .. +0xD bytes.
// Source symbol alias: FUN_588da340.
extern "C" __declspec(naked) void FUN_588da340() {
    __asm {
        // 0x588DA340: mov al, byte ptr [esp + 4]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588DA344: mov byte ptr [ecx + 0x354], al
        __asm _emit 0x88
        __asm _emit 0x81
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA34A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
