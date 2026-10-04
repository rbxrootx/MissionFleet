// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5873A200 .. +0x46 bytes.
// Source symbol alias: FUN_5873a200.
extern "C" __declspec(naked) void FUN_5873a200() {
    __asm {
        // 0x5873A200: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5873A204: push esi
        __asm _emit 0x56
        // 0x5873A205: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5873A207: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5873A209: mov dword ptr [esi + 0x4a0], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A20F: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x5873A212: sub ecx, dword ptr [esi + 4]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5873A215: mov dword ptr [esi + 0x4a4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A21B: sub eax, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5873A21E: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5873A220: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x5873A223: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5873A225: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x5873A228: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x5873A22A: mov dword ptr [esp + 8], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5873A22E: fild dword ptr [esp + 8]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5873A232: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0x2A
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873A237: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0x2A
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873A23C: mov dword ptr [esi + 0x4a8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A242: pop esi
        __asm _emit 0x5E
        // 0x5873A243: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
