// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 136 bytes in 1 exact ranges.
// Source symbol alias: FUN_587aa540.

// Ghidra body range 0x587AA540..0x587AA5C8; 136 mapped bytes.
extern "C" __declspec(naked) void FUN_587aa540_segment_00() {
    __asm {
        // 0x587AA540: push esi
        __asm _emit 0x56
        // 0x587AA541: mov esi, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587AA545: push edi
        __asm _emit 0x57
        // 0x587AA546: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587AA548: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587AA54A: jne 0x587aa563
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x587AA54C: push 0x589
        __asm _emit 0x68
        __asm _emit 0x89
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AA551: push 0x589999a4
        __asm _emit 0x68
        __asm _emit 0xA4
        __asm _emit 0x99
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587AA556: push 0x58999cc0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x9C
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587AA55B: call 0x5897cece
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0x29
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AA560: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587AA563: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587AA567: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587AA56A: cmp dword ptr [esi + 0x60], edx
        __asm _emit 0x39
        __asm _emit 0x56
        __asm _emit 0x60
        // 0x587AA56D: ja 0x587aa5c1
        __asm _emit 0x77
        __asm _emit 0x52
        // 0x587AA56F: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x587AA572: cmp dword ptr [esi + 0x64], eax
        __asm _emit 0x39
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x587AA575: ja 0x587aa5c1
        __asm _emit 0x77
        __asm _emit 0x4A
        // 0x587AA577: cmp edx, dword ptr [esi + 0x68]
        __asm _emit 0x3B
        __asm _emit 0x56
        __asm _emit 0x68
        // 0x587AA57A: ja 0x587aa5c1
        __asm _emit 0x77
        __asm _emit 0x45
        // 0x587AA57C: cmp eax, dword ptr [esi + 0x6c]
        __asm _emit 0x3B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x587AA57F: ja 0x587aa5c1
        __asm _emit 0x77
        __asm _emit 0x40
        // 0x587AA581: cmp dword ptr [ecx + 0x6070], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x70
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AA588: jne 0x587aa59e
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x587AA58A: mov eax, 3
        __asm _emit 0xB8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AA58F: push eax
        __asm _emit 0x50
        // 0x587AA590: push ecx
        __asm _emit 0x51
        // 0x587AA591: push esi
        __asm _emit 0x56
        // 0x587AA592: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587AA594: call 0x587a90d0
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0xEB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AA599: pop edi
        __asm _emit 0x5F
        // 0x587AA59A: pop esi
        __asm _emit 0x5E
        // 0x587AA59B: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587AA59E: mov eax, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x587AA5A1: and al, 0x1f
        __asm _emit 0x24
        __asm _emit 0x1F
        // 0x587AA5A3: sub al, 8
        __asm _emit 0x2C
        __asm _emit 0x08
        // 0x587AA5A5: movzx eax, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC0
        // 0x587AA5A8: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x587AA5AA: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x587AA5AC: and eax, 0xfffffffa
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0xFA
        // 0x587AA5AF: add eax, 8
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x08
        // 0x587AA5B2: push eax
        __asm _emit 0x50
        // 0x587AA5B3: push ecx
        __asm _emit 0x51
        // 0x587AA5B4: push esi
        __asm _emit 0x56
        // 0x587AA5B5: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587AA5B7: call 0x587a90d0
        __asm _emit 0xE8
        __asm _emit 0x14
        __asm _emit 0xEB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AA5BC: pop edi
        __asm _emit 0x5F
        // 0x587AA5BD: pop esi
        __asm _emit 0x5E
        // 0x587AA5BE: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587AA5C1: pop edi
        __asm _emit 0x5F
        // 0x587AA5C2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AA5C4: pop esi
        __asm _emit 0x5E
        // 0x587AA5C5: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
