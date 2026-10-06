// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58752410 .. +0xA1 bytes.
// Source symbol alias: FUN_58752410.
extern "C" __declspec(naked) void FUN_58752410() {
    __asm {
        // 0x58752410: sub esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x1C
        // 0x58752413: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58752418: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5875241A: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5875241E: push esi
        __asm _emit 0x56
        // 0x5875241F: mov esi, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58752423: push esi
        __asm _emit 0x56
        // 0x58752424: call 0x587522f0
        __asm _emit 0xE8
        __asm _emit 0xC7
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58752429: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5875242B: je 0x5875249f
        __asm _emit 0x74
        __asm _emit 0x72
        // 0x5875242D: mov ecx, 0x58a0b450
        __asm _emit 0xB9
        __asm _emit 0x50
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58752432: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58752434: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x58752436: cmp dl, byte ptr [ecx]
        __asm _emit 0x3A
        __asm _emit 0x11
        // 0x58752438: jne 0x58752454
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x5875243A: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x5875243C: je 0x58752450
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5875243E: mov dl, byte ptr [eax + 1]
        __asm _emit 0x8A
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x58752441: cmp dl, byte ptr [ecx + 1]
        __asm _emit 0x3A
        __asm _emit 0x51
        __asm _emit 0x01
        // 0x58752444: jne 0x58752454
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x58752446: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x58752449: add ecx, 2
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x02
        // 0x5875244C: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x5875244E: jne 0x58752434
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x58752450: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58752452: jmp 0x58752459
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x58752454: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x58752456: sbb eax, -1
        __asm _emit 0x83
        __asm _emit 0xD8
        __asm _emit 0xFF
        // 0x58752459: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5875245B: je 0x5875249f
        __asm _emit 0x74
        __asm _emit 0x42
        // 0x5875245D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5875245F: push esi
        __asm _emit 0x56
        // 0x58752460: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58752464: mov dword ptr [esp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58752468: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5875246C: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58752470: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58752474: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58752478: lea eax, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5875247C: push 0x5898d0d4
        __asm _emit 0x68
        __asm _emit 0xD4
        __asm _emit 0xD0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58752481: push eax
        __asm _emit 0x50
        // 0x58752482: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58752488: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5875248B: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5875248D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5875248F: lea ecx, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58752493: push ecx
        __asm _emit 0x51
        // 0x58752494: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5875249A: call 0x587b91b0
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0x6D
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5875249F: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587524A3: pop esi
        __asm _emit 0x5E
        // 0x587524A4: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x587524A6: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0xA7
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x587524AB: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x587524AE: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
