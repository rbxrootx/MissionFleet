// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58805150 .. +0x62 bytes.
// Source symbol alias: FUN_58805150.
extern "C" __declspec(naked) void FUN_58805150() {
    __asm {
        // 0x58805150: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58805155: push ebx
        __asm _emit 0x53
        // 0x58805156: push esi
        __asm _emit 0x56
        // 0x58805157: mov esi, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x0C
        // 0x5880515A: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x5880515C: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5880515E: je 0x588051ad
        __asm _emit 0x74
        __asm _emit 0x4D
        // 0x58805160: push edi
        __asm _emit 0x57
        // 0x58805161: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58805165: mov cl, byte ptr [esi + 0x354]
        __asm _emit 0x8A
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880516B: cmp cl, byte ptr [edi + 4]
        __asm _emit 0x3A
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x5880516E: jne 0x588051a5
        __asm _emit 0x75
        __asm _emit 0x35
        // 0x58805170: movzx edx, byte ptr [edi + 5]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x57
        __asm _emit 0x05
        // 0x58805174: imul edx, edx, 0x64
        __asm _emit 0x6B
        __asm _emit 0xD2
        __asm _emit 0x64
        // 0x58805177: push edx
        __asm _emit 0x52
        // 0x58805178: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5880517A: call 0x588d81a0
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0x30
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5880517F: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58805184: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58805187: mov dl, byte ptr [esi + 0x354]
        __asm _emit 0x8A
        __asm _emit 0x96
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880518D: cmp dl, byte ptr [ecx + 0x354]
        __asm _emit 0x3A
        __asm _emit 0x91
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805193: jne 0x588051a5
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x58805195: movzx eax, byte ptr [edi + 5]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x47
        __asm _emit 0x05
        // 0x58805199: mov ecx, dword ptr [ebx + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880519F: push eax
        __asm _emit 0x50
        // 0x588051A0: call 0x588a6a20
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0x18
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588051A5: mov esi, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x78
        // 0x588051A8: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588051AA: jne 0x58805165
        __asm _emit 0x75
        __asm _emit 0xB9
        // 0x588051AC: pop edi
        __asm _emit 0x5F
        // 0x588051AD: pop esi
        __asm _emit 0x5E
        // 0x588051AE: pop ebx
        __asm _emit 0x5B
        // 0x588051AF: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
