// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58834030 .. +0xE6 bytes.
// Source symbol alias: FUN_58834030.
extern "C" __declspec(naked) void FUN_58834030() {
    __asm {
        // 0x58834030: push ecx
        __asm _emit 0x51
        // 0x58834031: push ebx
        __asm _emit 0x53
        // 0x58834032: push ebp
        __asm _emit 0x55
        // 0x58834033: push esi
        __asm _emit 0x56
        // 0x58834034: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x58834036: mov ecx, dword ptr [ebp + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883403C: push edi
        __asm _emit 0x57
        // 0x5883403D: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0x41
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58834042: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x58834044: lea esi, [ebp + 0x228]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883404A: mov dword ptr [esp + 0x10], 5
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834052: mov ecx, dword ptr [ebp + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834058: push ebx
        __asm _emit 0x53
        // 0x58834059: call 0x58908140
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0x40
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5883405E: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58834060: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58834062: je 0x588340f4
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834068: mov ecx, dword ptr [ebp + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883406E: push ebx
        __asm _emit 0x53
        // 0x5883406F: call 0x58908140
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0x40
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58834074: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58834077: je 0x588340f4
        __asm _emit 0x74
        __asm _emit 0x7B
        // 0x58834079: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5883407B: cmp dword ptr [edi + 0x78], ecx
        __asm _emit 0x39
        __asm _emit 0x4F
        __asm _emit 0x78
        // 0x5883407E: jne 0x5883408d
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x58834080: mov eax, dword ptr [esi - 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0xFC
        // 0x58834083: mov dword ptr [eax + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x58834086: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58834088: mov dword ptr [edx + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x50
        // 0x5883408B: jmp 0x58834101
        __asm _emit 0xEB
        __asm _emit 0x74
        // 0x5883408D: movzx eax, word ptr [edi + 0x80]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834094: mov edx, 3
        __asm _emit 0xBA
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834099: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x5883409C: jne 0x588340bf
        __asm _emit 0x75
        __asm _emit 0x21
        // 0x5883409E: mov eax, dword ptr [edi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588340A4: mov edx, dword ptr [esi - 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0xFC
        // 0x588340A7: lea ecx, [eax + eax + 4]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x588340AB: mov dword ptr [edx + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x50
        // 0x588340AE: mov eax, dword ptr [edi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588340B4: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x588340B6: lea ecx, [eax + eax + 4]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x588340BA: mov dword ptr [edx + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x50
        // 0x588340BD: jmp 0x58834101
        __asm _emit 0xEB
        __asm _emit 0x42
        // 0x588340BF: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x588340C3: jne 0x588340d2
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x588340C5: mov eax, dword ptr [esi - 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0xFC
        // 0x588340C8: mov dword ptr [eax + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x50
        // 0x588340CB: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x588340CD: mov dword ptr [ecx + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x50
        // 0x588340D0: jmp 0x58834101
        __asm _emit 0xEB
        __asm _emit 0x2F
        // 0x588340D2: mov edx, dword ptr [esi - 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0xFC
        // 0x588340D5: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x588340D9: jne 0x588340ea
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x588340DB: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588340E0: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x588340E3: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x588340E5: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588340E8: jmp 0x58834101
        __asm _emit 0xEB
        __asm _emit 0x17
        // 0x588340EA: mov dword ptr [edx + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x50
        // 0x588340ED: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588340EF: mov dword ptr [eax + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x588340F2: jmp 0x58834101
        __asm _emit 0xEB
        __asm _emit 0x0D
        // 0x588340F4: mov ecx, dword ptr [esi - 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0xFC
        // 0x588340F7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588340F9: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588340FC: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x588340FE: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x58834101: inc ebx
        __asm _emit 0x43
        // 0x58834102: add esi, 8
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x08
        // 0x58834105: sub dword ptr [esp + 0x10], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        // 0x5883410A: jne 0x58834052
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x42
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58834110: pop edi
        __asm _emit 0x5F
        // 0x58834111: pop esi
        __asm _emit 0x5E
        // 0x58834112: pop ebp
        __asm _emit 0x5D
        // 0x58834113: pop ebx
        __asm _emit 0x5B
        // 0x58834114: pop ecx
        __asm _emit 0x59
        // 0x58834115: ret
        __asm _emit 0xC3
    }
}
