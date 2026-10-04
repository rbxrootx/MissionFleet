// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587D8EF0 .. +0x4A bytes.
// Source symbol alias: FUN_587d8ef0.
extern "C" __declspec(naked) void FUN_587d8ef0() {
    __asm {
        // 0x587D8EF0: mov al, byte ptr [esp + 4]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587D8EF4: cmp al, 0xff
        __asm _emit 0x3C
        __asm _emit 0xFF
        // 0x587D8EF6: jne 0x587d8efd
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x587D8EF8: mov dl, byte ptr [ecx + 0x61]
        __asm _emit 0x8A
        __asm _emit 0x51
        __asm _emit 0x61
        // 0x587D8EFB: jmp 0x587d8eff
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587D8EFD: mov dl, al
        __asm _emit 0x8A
        __asm _emit 0xD0
        // 0x587D8EFF: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D8F05: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x587D8F08: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D8F0A: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587D8F0C: je 0x587d8f37
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x587D8F0E: push esi
        __asm _emit 0x56
        // 0x587D8F0F: nop
        __asm _emit 0x90
        // 0x587D8F10: mov esi, dword ptr [ecx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8F16: cmp byte ptr [esi + 0x35c], dl
        __asm _emit 0x38
        __asm _emit 0x96
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8F1C: jne 0x587d8f26
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x587D8F1E: cmp dword ptr [ecx + 0xec], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8F24: je 0x587d8f34
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587D8F26: mov ecx, dword ptr [ecx + 0xce4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xE4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8F2C: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587D8F2E: jne 0x587d8f10
        __asm _emit 0x75
        __asm _emit 0xE0
        // 0x587D8F30: pop esi
        __asm _emit 0x5E
        // 0x587D8F31: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587D8F34: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587D8F36: pop esi
        __asm _emit 0x5E
        // 0x587D8F37: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
