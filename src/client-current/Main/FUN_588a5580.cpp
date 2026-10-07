// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588A5580 .. +0x65 bytes.
// Source symbol alias: FUN_588a5580.
extern "C" __declspec(naked) void FUN_588a5580() {
    __asm {
        // 0x588A5580: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A5585: cmp dword ptr [eax + 0x170], 2
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x588A558C: jle 0x588a55a2
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588A558E: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A5595: je 0x588a55a2
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588A5597: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A559D: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x588A55A0: jmp 0x588a55a4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A55A2: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588A55A4: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A55AA: push edx
        __asm _emit 0x52
        // 0x588A55AB: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0x23
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x588A55B0: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A55B5: cmp dword ptr [eax + 0x170], 2
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x588A55BC: jle 0x588a55da
        __asm _emit 0x7E
        __asm _emit 0x1C
        // 0x588A55BE: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A55C5: je 0x588a55da
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x588A55C7: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A55CD: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x588A55D0: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588A55D2: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588A55D5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588A55D7: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588A55D9: ret
        __asm _emit 0xC3
        // 0x588A55DA: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588A55DC: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588A55DE: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588A55E1: push ecx
        __asm _emit 0x51
        // 0x588A55E2: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588A55E4: ret
        __asm _emit 0xC3
    }
}
