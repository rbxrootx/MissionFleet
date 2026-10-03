// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58797610 .. +0x64 bytes.
extern "C" __declspec(naked) void FUN_58797610() {
    __asm {
        // 0x58797610: push esi
        __asm _emit 0x56
        // 0x58797611: push edi
        __asm _emit 0x57
        // 0x58797612: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58797616: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58797618: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5879761A: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58797620: push eax
        __asm _emit 0x50
        // 0x58797621: call 0x58778b20
        __asm _emit 0xE8
        __asm _emit 0xFA
        __asm _emit 0x14
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58797626: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58797628: je 0x58797666
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x5879762A: mov ecx, dword ptr [eax + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x60
        // 0x5879762D: cmp ecx, dword ptr [0x58a0b468]
        __asm _emit 0x3B
        __asm _emit 0x0D
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58797633: ja 0x5879764f
        __asm _emit 0x77
        __asm _emit 0x1A
        // 0x58797635: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5879763B: push edi
        __asm _emit 0x57
        // 0x5879763C: call 0x587b9fe0
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0x29
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58797641: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58797643: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58797646: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58797648: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5879764A: pop edi
        __asm _emit 0x5F
        // 0x5879764B: pop esi
        __asm _emit 0x5E
        // 0x5879764C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5879764F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58797651: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58797653: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58797655: push 0x460
        __asm _emit 0x68
        __asm _emit 0x60
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879765A: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0x44
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5879765F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58797661: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0xD6
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x58797666: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58797668: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x5879766B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5879766D: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5879766F: pop edi
        __asm _emit 0x5F
        // 0x58797670: pop esi
        __asm _emit 0x5E
        // 0x58797671: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
