// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5883EAB0 .. +0x89 bytes.
// Source symbol alias: FUN_5883eab0.
extern "C" __declspec(naked) void FUN_5883eab0() {
    __asm {
        // 0x5883EAB0: push esi
        __asm _emit 0x56
        // 0x5883EAB1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5883EAB3: mov eax, dword ptr [esi + 0xf0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883EAB9: push edi
        __asm _emit 0x57
        // 0x5883EABA: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x5883EABD: jne 0x5883eb07
        __asm _emit 0x75
        __asm _emit 0x48
        // 0x5883EABF: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5883EAC3: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883EAC9: push eax
        __asm _emit 0x50
        // 0x5883EACA: push edi
        __asm _emit 0x57
        // 0x5883EACB: call 0x589080e0
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0x96
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883EAD0: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883EAD6: push eax
        __asm _emit 0x50
        // 0x5883EAD7: push edi
        __asm _emit 0x57
        // 0x5883EAD8: call 0x589080e0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x96
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883EADD: mov ecx, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883EAE3: push eax
        __asm _emit 0x50
        // 0x5883EAE4: push edi
        __asm _emit 0x57
        // 0x5883EAE5: call 0x589080e0
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0x95
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883EAEA: mov ecx, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883EAF0: push eax
        __asm _emit 0x50
        // 0x5883EAF1: call 0x58789df0
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0xB2
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5883EAF6: mov ecx, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883EAFC: push eax
        __asm _emit 0x50
        // 0x5883EAFD: call 0x58789f80
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0xB4
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5883EB02: pop edi
        __asm _emit 0x5F
        // 0x5883EB03: pop esi
        __asm _emit 0x5E
        // 0x5883EB04: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5883EB07: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x5883EB0A: jne 0x5883eb32
        __asm _emit 0x75
        __asm _emit 0x26
        // 0x5883EB0C: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5883EB10: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883EB16: push eax
        __asm _emit 0x50
        // 0x5883EB17: push edi
        __asm _emit 0x57
        // 0x5883EB18: call 0x589080e0
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0x95
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883EB1D: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883EB23: push eax
        __asm _emit 0x50
        // 0x5883EB24: push edi
        __asm _emit 0x57
        // 0x5883EB25: call 0x589080e0
        __asm _emit 0xE8
        __asm _emit 0xB6
        __asm _emit 0x95
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883EB2A: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883EB30: jmp 0x5883eae3
        __asm _emit 0xEB
        __asm _emit 0xB1
        // 0x5883EB32: pop edi
        __asm _emit 0x5F
        // 0x5883EB33: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5883EB35: pop esi
        __asm _emit 0x5E
        // 0x5883EB36: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
