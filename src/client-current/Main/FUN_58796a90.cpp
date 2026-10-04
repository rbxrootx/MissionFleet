// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58796A90 .. +0x5E bytes.
// Source symbol alias: FUN_58796a90.
extern "C" __declspec(naked) void FUN_58796a90() {
    __asm {
        // 0x58796A90: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58796A92: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58796A94: mov dword ptr [eax], 0x58997ec8
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0xC8
        __asm _emit 0x7E
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58796A9A: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58796A9D: mov dword ptr [eax + 8], 2
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58796AA4: mov dword ptr [eax + 0xc], 4
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x0C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58796AAB: mov dword ptr [eax + 0x10], 7
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x10
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58796AB2: mov dword ptr [eax + 0x14], 8
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x14
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58796AB9: mov dword ptr [eax + 0x18], 9
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x18
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58796AC0: mov dword ptr [eax + 0x1c], 0xc
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x1C
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58796AC7: mov dword ptr [eax + 0x20], 0xe
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x20
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58796ACE: mov dword ptr [eax + 0x24], 0x12
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x24
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58796AD5: mov dword ptr [eax + 0x28], 0x7d0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x28
        __asm _emit 0xD0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58796ADC: mov dword ptr [eax + 0x2c], 0x7d1
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x2C
        __asm _emit 0xD1
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58796AE3: mov dword ptr [eax + 0x30], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x30
        // 0x58796AE6: mov dword ptr [eax + 0x34], 0xbb8
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x34
        __asm _emit 0xB8
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58796AED: ret
        __asm _emit 0xC3
    }
}
