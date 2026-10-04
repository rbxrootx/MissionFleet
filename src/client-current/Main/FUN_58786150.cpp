// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58786150 .. +0x8A bytes.
// Source symbol alias: FUN_58786150.
extern "C" __declspec(naked) void FUN_58786150() {
    __asm {
        // 0x58786150: push esi
        __asm _emit 0x56
        // 0x58786151: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58786153: cmp dword ptr [esi + 8], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58786157: je 0x587861d8
        __asm _emit 0x74
        __asm _emit 0x7F
        // 0x58786159: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5878615B: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5878615D: push ebx
        __asm _emit 0x53
        // 0x5878615E: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58786160: push edi
        __asm _emit 0x57
        // 0x58786161: mov word ptr [esi + 0x3e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x3E
        // 0x58786165: mov word ptr [esi + 0x3c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x58786169: mov word ptr [esi + 0x3a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x3A
        // 0x5878616D: mov word ptr [esi + 0x38], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x38
        // 0x58786171: mov word ptr [esi + 0x36], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x36
        // 0x58786175: mov word ptr [esi + 0x34], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x34
        // 0x58786179: mov ebx, 0x360
        __asm _emit 0xBB
        __asm _emit 0x60
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878617E: lea edi, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x78
        __asm _emit 0x01
        // 0x58786181: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58786184: mov ecx, dword ptr [ebx + eax]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x03
        // 0x58786187: push ecx
        __asm _emit 0x51
        // 0x58786188: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5878618E: call 0x58778b20
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0x29
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58786193: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58786195: je 0x587861cb
        __asm _emit 0x74
        __asm _emit 0x34
        // 0x58786197: movzx eax, word ptr [eax + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x5878619B: and eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x1F
        // 0x5878619E: dec eax
        __asm _emit 0x48
        // 0x5878619F: cmp eax, 6
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x587861A2: ja 0x587861cb
        __asm _emit 0x77
        __asm _emit 0x27
        // 0x587861A4: jmp dword ptr [eax*4 + 0x587861dc]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xDC
        __asm _emit 0x61
        __asm _emit 0x78
        __asm _emit 0x58
        // 0x587861AB: add word ptr [esi + 0x3c], di
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x7E
        __asm _emit 0x3C
        // 0x587861AF: jmp 0x587861c7
        __asm _emit 0xEB
        __asm _emit 0x16
        // 0x587861B1: add word ptr [esi + 0x3a], di
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x7E
        __asm _emit 0x3A
        // 0x587861B5: jmp 0x587861c7
        __asm _emit 0xEB
        __asm _emit 0x10
        // 0x587861B7: add word ptr [esi + 0x38], di
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x7E
        __asm _emit 0x38
        // 0x587861BB: jmp 0x587861c7
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x587861BD: add word ptr [esi + 0x36], di
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x7E
        __asm _emit 0x36
        // 0x587861C1: jmp 0x587861c7
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x587861C3: add word ptr [esi + 0x34], di
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x7E
        __asm _emit 0x34
        // 0x587861C7: add word ptr [esi + 0x3e], di
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x7E
        __asm _emit 0x3E
        // 0x587861CB: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x587861CE: cmp ebx, 0x3c0
        __asm _emit 0x81
        __asm _emit 0xFB
        __asm _emit 0xC0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587861D4: jl 0x58786181
        __asm _emit 0x7C
        __asm _emit 0xAB
        // 0x587861D6: pop edi
        __asm _emit 0x5F
        // 0x587861D7: pop ebx
        __asm _emit 0x5B
        // 0x587861D8: pop esi
        __asm _emit 0x5E
        // 0x587861D9: ret
        __asm _emit 0xC3
    }
}
