// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588060F0 .. +0x58 bytes.
// Source symbol alias: FUN_588060f0.
extern "C" __declspec(naked) void FUN_588060f0() {
    __asm {
        // 0x588060F0: cmp dword ptr [ecx + 0x70], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x70
        __asm _emit 0x00
        // 0x588060F4: jne 0x58806145
        __asm _emit 0x75
        __asm _emit 0x4F
        // 0x588060F6: push esi
        __asm _emit 0x56
        // 0x588060F7: mov esi, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588060FB: cmp dword ptr [esi], 0
        __asm _emit 0x83
        __asm _emit 0x3E
        __asm _emit 0x00
        // 0x588060FE: jne 0x58806144
        __asm _emit 0x75
        __asm _emit 0x44
        // 0x58806100: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58806105: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58806108: cmp dword ptr [ecx + 0x6074], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x74
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880610F: jne 0x58806144
        __asm _emit 0x75
        __asm _emit 0x33
        // 0x58806111: mov ecx, dword ptr [0x58a24810]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x10
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58806117: call 0x588eb130
        __asm _emit 0xE8
        __asm _emit 0x14
        __asm _emit 0x50
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5880611C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880611E: je 0x58806144
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x58806120: mov eax, dword ptr [0x58a245a8]
        __asm _emit 0xA1
        __asm _emit 0xA8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58806125: mov edx, dword ptr [eax + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880612B: mov eax, dword ptr [eax + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806131: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58806137: push edx
        __asm _emit 0x52
        // 0x58806138: push eax
        __asm _emit 0x50
        // 0x58806139: call 0x587b9600
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0x34
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x5880613E: mov dword ptr [esi], 1
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806144: pop esi
        __asm _emit 0x5E
        // 0x58806145: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
