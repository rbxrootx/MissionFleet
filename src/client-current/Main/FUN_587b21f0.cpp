// FUN_587B21F0: scale and XOR-encode two record-derived child-state values.
// Both verified child builders pass the input words decoded from their
// selected records. The 161-byte mapped instruction stream is preserved;
// coefficient units and callback semantics remain unresolved.
// See docs/current-main-record-pair-scaling.md.
// Source symbol alias: FUN_587b21f0.
extern "C" __declspec(naked) void FUN_587b21f0() {
    __asm {
        // 0x587B21F0: movzx eax, word ptr [ecx + 0x308]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x81
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B21F7: movzx edx, word ptr [ecx + 0x3bc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x91
        __asm _emit 0xBC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B21FE: and eax, 0xff
        __asm _emit 0x25
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2203: imul eax, dword ptr [esp + 4]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587B2208: and edx, 0xff
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B220E: imul edx, dword ptr [esp + 8]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587B2213: push esi
        __asm _emit 0x56
        // 0x587B2214: push edi
        __asm _emit 0x57
        // 0x587B2215: lea esi, [ecx + 0x31c]
        __asm _emit 0x8D
        __asm _emit 0xB1
        __asm _emit 0x1C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B221B: lea edi, [ecx + 0x3d0]
        __asm _emit 0x8D
        __asm _emit 0xB9
        __asm _emit 0xD0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2221: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x587B2223: mov dword ptr [edi], edx
        __asm _emit 0x89
        __asm _emit 0x17
        // 0x587B2225: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587B2227: jne 0x587b2239
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x587B2229: mov dword ptr [ecx + 0x104], 0xaaaaaaaa
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587B2233: mov dword ptr [ecx + 0xf8], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B2239: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587B223E: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587B2244: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x587B2246: mov eax, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B224C: mov dword ptr [edi], edx
        __asm _emit 0x89
        __asm _emit 0x17
        // 0x587B224E: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B2254: cmp eax, dword ptr [edx + 4]
        __asm _emit 0x3B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587B2257: jne 0x587b228c
        __asm _emit 0x75
        __asm _emit 0x33
        // 0x587B2259: lea eax, [ecx + 0x104]
        __asm _emit 0x8D
        __asm _emit 0x81
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B225F: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587B2261: push ecx
        __asm _emit 0x51
        // 0x587B2262: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B2268: push eax
        __asm _emit 0x50
        // 0x587B2269: call 0x587a15e0
        __asm _emit 0xE8
        __asm _emit 0x72
        __asm _emit 0xF3
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587B226E: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587B2270: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B2276: push edx
        __asm _emit 0x52
        // 0x587B2277: push esi
        __asm _emit 0x56
        // 0x587B2278: call 0x587a15e0
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0xF3
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587B227D: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587B227F: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B2285: push eax
        __asm _emit 0x50
        // 0x587B2286: push edi
        __asm _emit 0x57
        // 0x587B2287: call 0x587a15e0
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0xF3
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587B228C: pop edi
        __asm _emit 0x5F
        // 0x587B228D: pop esi
        __asm _emit 0x5E
        // 0x587B228E: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
