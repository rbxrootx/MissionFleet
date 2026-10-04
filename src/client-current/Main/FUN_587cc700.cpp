// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587CC700 .. +0x42 bytes.
// Source symbol alias: FUN_587cc700.
extern "C" __declspec(naked) void FUN_587cc700() {
    __asm {
        // 0x587CC700: push esi
        __asm _emit 0x56
        // 0x587CC701: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587CC703: mov ecx, dword ptr [esi + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x587CC706: cmp byte ptr [ecx + 0x74], 1
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x74
        __asm _emit 0x01
        // 0x587CC70A: je 0x587cc73e
        __asm _emit 0x74
        __asm _emit 0x32
        // 0x587CC70C: movzx eax, byte ptr [esp + 8]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587CC711: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x587CC714: je 0x587cc72e
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x587CC716: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x587CC719: jne 0x587cc73e
        __asm _emit 0x75
        __asm _emit 0x23
        // 0x587CC71B: push eax
        __asm _emit 0x50
        // 0x587CC71C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587CC71E: call 0x587c9f30
        __asm _emit 0xE8
        __asm _emit 0x0D
        __asm _emit 0xD8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CC723: mov eax, dword ptr [esi + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x587CC726: mov byte ptr [eax + 0x75], 1
        __asm _emit 0xC6
        __asm _emit 0x40
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x587CC72A: pop esi
        __asm _emit 0x5E
        // 0x587CC72B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587CC72E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587CC730: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587CC732: call 0x587c9f30
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0xD7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CC737: mov ecx, dword ptr [esi + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x587CC73A: mov byte ptr [ecx + 0x75], 2
        __asm _emit 0xC6
        __asm _emit 0x41
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x587CC73E: pop esi
        __asm _emit 0x5E
        // 0x587CC73F: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
