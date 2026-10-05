// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587C4250 .. +0x45 bytes.
// Source symbol alias: FUN_587c4250.
extern "C" __declspec(naked) void FUN_587c4250() {
    __asm {
        // 0x587C4250: push esi
        __asm _emit 0x56
        // 0x587C4251: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587C4253: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587C4257: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587C4259: je 0x587c4291
        __asm _emit 0x74
        __asm _emit 0x36
        // 0x587C425B: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x587C425E: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587C4261: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587C4263: je 0x587c426a
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587C4265: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587C4268: jmp 0x587c426d
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x587C426A: mov dword ptr [esi + 4], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x587C426D: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587C426F: je 0x587c4283
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587C4271: mov dword ptr [edx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587C4274: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587C4276: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587C4278: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C427A: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587C427C: dec dword ptr [esi + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x587C427F: pop esi
        __asm _emit 0x5E
        // 0x587C4280: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587C4283: mov dword ptr [esi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587C4286: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587C4288: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587C428A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587C428C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587C428E: dec dword ptr [esi + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x587C4291: pop esi
        __asm _emit 0x5E
        // 0x587C4292: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
