// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5874D720 .. +0x39 bytes.
// Source symbol alias: FUN_5874d720.
extern "C" __declspec(naked) void FUN_5874d720() {
    __asm {
        // 0x5874D720: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5874D724: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5874D728: push esi
        __asm _emit 0x56
        // 0x5874D729: push eax
        __asm _emit 0x50
        // 0x5874D72A: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874D72E: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5874D730: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5874D734: push ecx
        __asm _emit 0x51
        // 0x5874D735: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874D739: push edx
        __asm _emit 0x52
        // 0x5874D73A: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874D73E: push eax
        __asm _emit 0x50
        // 0x5874D73F: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874D743: push ecx
        __asm _emit 0x51
        // 0x5874D744: push edx
        __asm _emit 0x52
        // 0x5874D745: push eax
        __asm _emit 0x50
        // 0x5874D746: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5874D748: call 0x5874bcf0
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0xE5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874D74D: mov dword ptr [esi], 0x5898d248
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x48
        __asm _emit 0xD2
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5874D753: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5874D755: pop esi
        __asm _emit 0x5E
        // 0x5874D756: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
    }
}
