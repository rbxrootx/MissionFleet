// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 137 bytes in 1 exact ranges.
// Source symbol alias: FUN_587ef1f0.

// Ghidra body range 0x587EF1F0..0x587EF279; 137 mapped bytes.
extern "C" __declspec(naked) void FUN_587ef1f0_segment_00() {
    __asm {
        // 0x587EF1F0: push esi
        __asm _emit 0x56
        // 0x587EF1F1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587EF1F3: cmp dword ptr [esi], 0
        __asm _emit 0x83
        __asm _emit 0x3E
        __asm _emit 0x00
        // 0x587EF1F6: jne 0x587ef1fd
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x587EF1F8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0xDA
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587EF1FD: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587EF200: cmp byte ptr [eax + 0x2d], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x2D
        __asm _emit 0x00
        // 0x587EF204: je 0x587ef218
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x587EF206: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x587EF209: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587EF20C: cmp byte ptr [eax + 0x2d], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x2D
        __asm _emit 0x00
        // 0x587EF210: je 0x587ef277
        __asm _emit 0x74
        __asm _emit 0x65
        // 0x587EF212: pop esi
        __asm _emit 0x5E
        // 0x587EF213: jmp 0x5897cc72
        __asm _emit 0xE9
        __asm _emit 0x5A
        __asm _emit 0xDA
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587EF218: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587EF21A: cmp byte ptr [ecx + 0x2d], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x2D
        __asm _emit 0x00
        // 0x587EF21E: jne 0x587ef240
        __asm _emit 0x75
        __asm _emit 0x20
        // 0x587EF220: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x587EF223: cmp byte ptr [eax + 0x2d], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x2D
        __asm _emit 0x00
        // 0x587EF227: jne 0x587ef23b
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x587EF229: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EF230: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587EF232: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x587EF235: cmp byte ptr [eax + 0x2d], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x2D
        __asm _emit 0x00
        // 0x587EF239: je 0x587ef230
        __asm _emit 0x74
        __asm _emit 0xF5
        // 0x587EF23B: mov dword ptr [esi + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587EF23E: pop esi
        __asm _emit 0x5E
        // 0x587EF23F: ret
        __asm _emit 0xC3
        // 0x587EF240: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587EF243: cmp byte ptr [eax + 0x2d], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x2D
        __asm _emit 0x00
        // 0x587EF247: jne 0x587ef265
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x587EF249: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EF250: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587EF253: cmp ecx, dword ptr [eax]
        __asm _emit 0x3B
        __asm _emit 0x08
        // 0x587EF255: jne 0x587ef265
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x587EF257: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587EF25A: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x587EF25C: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587EF25F: cmp byte ptr [eax + 0x2d], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x2D
        __asm _emit 0x00
        // 0x587EF263: je 0x587ef250
        __asm _emit 0x74
        __asm _emit 0xEB
        // 0x587EF265: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587EF268: cmp byte ptr [ecx + 0x2d], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x2D
        __asm _emit 0x00
        // 0x587EF26C: je 0x587ef274
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587EF26E: pop esi
        __asm _emit 0x5E
        // 0x587EF26F: jmp 0x5897cc72
        __asm _emit 0xE9
        __asm _emit 0xFE
        __asm _emit 0xD9
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587EF274: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587EF277: pop esi
        __asm _emit 0x5E
        // 0x587EF278: ret
        __asm _emit 0xC3
    }
}
