// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587CF000 .. +0x95 bytes.
// Source symbol alias: FUN_587cf000.
extern "C" __declspec(naked) void FUN_587cf000() {
    __asm {
        // 0x587CF000: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587CF004: mov eax, 0xcccccccd
        __asm _emit 0xB8
        __asm _emit 0xCD
        __asm _emit 0xCC
        __asm _emit 0xCC
        __asm _emit 0xCC
        // 0x587CF009: mul ecx
        __asm _emit 0xF7
        __asm _emit 0xE1
        // 0x587CF00B: shr edx, 2
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x02
        // 0x587CF00E: push esi
        __asm _emit 0x56
        // 0x587CF00F: mov esi, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587CF013: lea eax, [edx + edx*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x92
        // 0x587CF016: push edi
        __asm _emit 0x57
        // 0x587CF017: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x587CF019: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587CF01B: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x587CF01D: je 0x587cf030
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x587CF01F: mov eax, dword ptr [esi*4 + 0x58a24860]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xB5
        __asm _emit 0x60
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CF026: cmp byte ptr [eax + ecx + 0xfb], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x08
        __asm _emit 0xFB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF02E: jne 0x587cf069
        __asm _emit 0x75
        __asm _emit 0x39
        // 0x587CF030: push ebx
        __asm _emit 0x53
        // 0x587CF031: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587CF033: mov ebx, 5
        __asm _emit 0xBB
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF038: lea eax, [ecx - 4]
        __asm _emit 0x8D
        __asm _emit 0x41
        __asm _emit 0xFC
        // 0x587CF03B: div ebx
        __asm _emit 0xF7
        __asm _emit 0xF3
        // 0x587CF03D: pop ebx
        __asm _emit 0x5B
        // 0x587CF03E: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587CF040: je 0x587cf053
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x587CF042: mov edx, dword ptr [esi*4 + 0x58a24860]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0xB5
        __asm _emit 0x60
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CF049: cmp byte ptr [edx + ecx + 0xfd], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x0A
        __asm _emit 0xFD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF051: jne 0x587cf069
        __asm _emit 0x75
        __asm _emit 0x16
        // 0x587CF053: cmp ecx, 4
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x04
        // 0x587CF056: jbe 0x587cf073
        __asm _emit 0x76
        __asm _emit 0x1B
        // 0x587CF058: mov eax, dword ptr [esi*4 + 0x58a24860]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xB5
        __asm _emit 0x60
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CF05F: cmp byte ptr [eax + ecx + 0xf7], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x08
        __asm _emit 0xF7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF067: je 0x587cf073
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587CF069: pop edi
        __asm _emit 0x5F
        // 0x587CF06A: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF06F: pop esi
        __asm _emit 0x5E
        // 0x587CF070: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587CF073: cmp ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x14
        // 0x587CF076: jae 0x587cf08e
        __asm _emit 0x73
        __asm _emit 0x16
        // 0x587CF078: mov edx, dword ptr [esi*4 + 0x58a24860]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0xB5
        __asm _emit 0x60
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CF07F: cmp byte ptr [edx + ecx + 0x101], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF087: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF08C: jne 0x587cf090
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x587CF08E: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587CF090: pop edi
        __asm _emit 0x5F
        // 0x587CF091: pop esi
        __asm _emit 0x5E
        // 0x587CF092: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
