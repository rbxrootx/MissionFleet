// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588E9850 .. +0x2B bytes.
// Source symbol alias: FUN_588e9850.
extern "C" __declspec(naked) void FUN_588e9850() {
    __asm {
        // 0x588E9850: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588E9854: push esi
        __asm _emit 0x56
        // 0x588E9855: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588E9857: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E985D: push eax
        __asm _emit 0x50
        // 0x588E985E: call 0x58778ca0
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0xF4
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588E9863: cmp dword ptr [esp + 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588E9868: mov dword ptr [esi + 0xccc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E986E: je 0x588e9877
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x588E9870: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588E9872: call 0x588e8570
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0xEC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E9877: pop esi
        __asm _emit 0x5E
        // 0x588E9878: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
