// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58853570 .. +0x8C bytes.
// Source symbol alias: FUN_58853570.
extern "C" __declspec(naked) void FUN_58853570() {
    __asm {
        // 0x58853570: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58853574: push esi
        __asm _emit 0x56
        // 0x58853575: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58853577: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x5885357C: jne 0x588535bc
        __asm _emit 0x75
        __asm _emit 0x3E
        // 0x5885357E: mov ecx, dword ptr [esi + 0x2b0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853584: call 0x58909b00
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0x65
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58853589: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x5885358C: je 0x5885359b
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x5885358E: mov ecx, dword ptr [esi + 0x2b0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58853594: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58853596: call 0x58793da0
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0x08
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5885359B: mov ecx, dword ptr [esi + 0x2b4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588535A1: call 0x58909b00
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0x65
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588535A6: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x588535A9: je 0x588535f8
        __asm _emit 0x74
        __asm _emit 0x4D
        // 0x588535AB: mov ecx, dword ptr [esi + 0x2b4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588535B1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588535B3: call 0x58793da0
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x588535B8: pop esi
        __asm _emit 0x5E
        // 0x588535B9: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588535BC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588535BE: jne 0x588535f8
        __asm _emit 0x75
        __asm _emit 0x38
        // 0x588535C0: mov ecx, dword ptr [esi + 0x2b0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588535C6: call 0x58909b00
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0x65
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588535CB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588535CD: je 0x588535dc
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x588535CF: mov ecx, dword ptr [esi + 0x2b0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588535D5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588535D7: call 0x58793da0
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0x07
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x588535DC: mov ecx, dword ptr [esi + 0x2b4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588535E2: call 0x58909b00
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0x65
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588535E7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588535E9: je 0x588535f8
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x588535EB: mov ecx, dword ptr [esi + 0x2b4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588535F1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588535F3: call 0x58793da0
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0x07
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x588535F8: pop esi
        __asm _emit 0x5E
        // 0x588535F9: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
