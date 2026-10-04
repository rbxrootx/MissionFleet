// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587D8FF0 .. +0x78 bytes.
// Source symbol alias: FUN_587d8ff0.
extern "C" __declspec(naked) void FUN_587d8ff0() {
    __asm {
        // 0x587D8FF0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587D8FF4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D8FF6: jne 0x587d9010
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x587D8FF8: cmp dword ptr [esp + 8], eax
        __asm _emit 0x39
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587D8FFC: je 0x587d900b
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587D8FFE: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9003: call 0x587d8f40
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D9008: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587D900B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D900D: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587D9010: mov eax, dword ptr [eax + 0xce4]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xE4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9016: mov cl, byte ptr [ecx + 0x61]
        __asm _emit 0x8A
        __asm _emit 0x49
        __asm _emit 0x61
        // 0x587D9019: push esi
        __asm _emit 0x56
        // 0x587D901A: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587D901C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D901E: je 0x587d9055
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x587D9020: mov edx, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9026: cmp byte ptr [edx + 0x35c], cl
        __asm _emit 0x38
        __asm _emit 0x8A
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D902C: jne 0x587d9036
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x587D902E: cmp dword ptr [eax + 0xec], esi
        __asm _emit 0x39
        __asm _emit 0xB0
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D9034: je 0x587d9053
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x587D9036: mov eax, dword ptr [eax + 0xce4]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xE4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D903C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D903E: jne 0x587d9020
        __asm _emit 0x75
        __asm _emit 0xE0
        // 0x587D9040: push esi
        __asm _emit 0x56
        // 0x587D9041: call 0x5876c8b0
        __asm _emit 0xE8
        __asm _emit 0x6A
        __asm _emit 0x38
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587D9046: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587D9049: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x587D904B: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x587D904D: and eax, esi
        __asm _emit 0x23
        __asm _emit 0xC6
        // 0x587D904F: pop esi
        __asm _emit 0x5E
        // 0x587D9050: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587D9053: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587D9055: push esi
        __asm _emit 0x56
        // 0x587D9056: call 0x5876c8b0
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0x38
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587D905B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587D905E: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x587D9060: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x587D9062: and eax, esi
        __asm _emit 0x23
        __asm _emit 0xC6
        // 0x587D9064: pop esi
        __asm _emit 0x5E
        // 0x587D9065: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
