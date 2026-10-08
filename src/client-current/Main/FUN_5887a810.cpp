// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 152 bytes in 1 exact ranges.
// Source symbol alias: FUN_5887a810.

// Ghidra body range 0x5887A810..0x5887A8A8; 152 mapped bytes.
extern "C" __declspec(naked) void FUN_5887a810_segment_00() {
    __asm {
        // 0x5887A810: push esi
        __asm _emit 0x56
        // 0x5887A811: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5887A813: mov ecx, dword ptr [esi + 0x1a4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A819: mov edx, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A81F: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x5887A822: sub edx, 0x12
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x12
        // 0x5887A825: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x5887A827: jge 0x5887a8a6
        __asm _emit 0x7D
        __asm _emit 0x7D
        // 0x5887A829: inc eax
        __asm _emit 0x40
        // 0x5887A82A: mov dword ptr [esi + 0x7c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x5887A82D: call 0x589086f0
        __asm _emit 0xE8
        __asm _emit 0xBE
        __asm _emit 0xDE
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887A832: mov edx, dword ptr [esi + 0x1a8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xA8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A838: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5887A83A: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A83F: cmp dword ptr [esi + 0x7c], ecx
        __asm _emit 0x39
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x5887A842: jne 0x5887a849
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x5887A844: mov dword ptr [edx + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x50
        // 0x5887A847: jmp 0x5887a84c
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x5887A849: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x5887A84C: mov edx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x7C
        // 0x5887A84F: push edi
        __asm _emit 0x57
        // 0x5887A850: mov edi, dword ptr [esi + 0x1a4]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A856: add edx, 0x12
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x12
        // 0x5887A859: cmp edx, dword ptr [edi + 0x88]
        __asm _emit 0x3B
        __asm _emit 0x97
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A85F: jge 0x5887a86c
        __asm _emit 0x7D
        __asm _emit 0x0B
        // 0x5887A861: mov ecx, dword ptr [esi + 0x1ac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A867: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5887A86A: jmp 0x5887a875
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x5887A86C: mov edx, dword ptr [esi + 0x1ac]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A872: mov dword ptr [edx + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x50
        // 0x5887A875: mov ecx, dword ptr [esi + 0x1a4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A87B: mov edi, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A881: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0xD8
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887A886: imul eax, eax, 0x15e
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x5E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A88C: cdq
        __asm _emit 0x99
        // 0x5887A88D: add edi, -0x12
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0xEE
        // 0x5887A890: idiv edi
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x5887A892: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5887A895: lea edx, [eax + ecx + 0x5a]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x5A
        // 0x5887A899: mov ecx, dword ptr [esi + 0x1b0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887A89F: push edx
        __asm _emit 0x52
        // 0x5887A8A0: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0x8A
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887A8A5: pop edi
        __asm _emit 0x5F
        // 0x5887A8A6: pop esi
        __asm _emit 0x5E
        // 0x5887A8A7: ret
        __asm _emit 0xC3
    }
}
