// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588DD310 .. +0x5F bytes.
// Source symbol alias: FUN_588dd310.
extern "C" __declspec(naked) void FUN_588dd310() {
    __asm {
        // 0x588DD310: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DD315: push esi
        __asm _emit 0x56
        // 0x588DD316: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588DD318: cmp dword ptr [eax + 4], esi
        __asm _emit 0x39
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x588DD31B: jne 0x588dd358
        __asm _emit 0x75
        __asm _emit 0x3B
        // 0x588DD31D: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DD322: cmp dword ptr [eax + 0x2cc], 0x40000000
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x588DD32C: jne 0x588dd358
        __asm _emit 0x75
        __asm _emit 0x2A
        // 0x588DD32E: mov dword ptr [eax + 0x2cc], 0
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DD338: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DD33E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588DD340: call 0x58853570
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0x62
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x588DD345: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DD34B: mov ecx, dword ptr [ecx + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588DD351: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588DD353: call 0x587a6190
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0x8E
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588DD358: cmp dword ptr [esi + 0x6094], 0x40000000
        __asm _emit 0x81
        __asm _emit 0xBE
        __asm _emit 0x94
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x588DD362: jne 0x588dd36d
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x588DD364: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588DD366: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588DD368: call 0x588d8100
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0xAD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588DD36D: pop esi
        __asm _emit 0x5E
        // 0x588DD36E: ret
        __asm _emit 0xC3
    }
}
