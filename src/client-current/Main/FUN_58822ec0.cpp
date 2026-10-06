// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58822EC0 .. +0x49 bytes.
// Source symbol alias: FUN_58822ec0.
extern "C" __declspec(naked) void FUN_58822ec0() {
    __asm {
        // 0x58822EC0: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x58822EC4: mov edx, 0xe4ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58822EC9: and ax, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC2
        // 0x58822ECC: mov edx, 0x400
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58822ED1: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x58822ED4: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x58822ED8: mov eax, dword ptr [ecx + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x74
        // 0x58822EDB: mov dword ptr [ecx + 0x58], 0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58822EE2: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58822EE7: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58822EEB: mov ecx, dword ptr [ecx + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x70
        // 0x58822EEE: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58822EF0: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x58822EF4: mov eax, dword ptr [0x58a24584]
        __asm _emit 0xA1
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58822EF9: mov ecx, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x30
        // 0x58822EFC: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58822EFE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58822F00: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x58822F02: push eax
        __asm _emit 0x50
        // 0x58822F03: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x58822F06: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58822F08: ret
        __asm _emit 0xC3
    }
}
