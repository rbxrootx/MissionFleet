// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 110 bytes in 1 exact ranges.
// Source symbol alias: FUN_5889b5c0.

// Ghidra body range 0x5889B5C0..0x5889B62E; 110 mapped bytes.
extern "C" __declspec(naked) void FUN_5889b5c0_segment_00() {
    __asm {
        // 0x5889B5C0: push esi
        __asm _emit 0x56
        // 0x5889B5C1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5889B5C3: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5889B5C7: push edi
        __asm _emit 0x57
        // 0x5889B5C8: test al, 2
        __asm _emit 0xA8
        __asm _emit 0x02
        // 0x5889B5CA: je 0x5889b626
        __asm _emit 0x74
        __asm _emit 0x5A
        // 0x5889B5CC: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x5889B5CF: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5889B5D3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889B5D5: je 0x5889b5fd
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x5889B5D7: mov eax, dword ptr [eax + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x34
        // 0x5889B5DA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889B5DC: je 0x5889b5f6
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x5889B5DE: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5889B5E0: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889B5E2: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5889B5E4: mov eax, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x10
        // 0x5889B5E7: push edi
        __asm _emit 0x57
        // 0x5889B5E8: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5889B5EA: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x5889B5ED: cmp eax, dword ptr [ecx + 0x34]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x34
        // 0x5889B5F0: je 0x5889b5fd
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5889B5F2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889B5F4: jne 0x5889b5e0
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x5889B5F6: pop edi
        __asm _emit 0x5F
        // 0x5889B5F7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889B5F9: pop esi
        __asm _emit 0x5E
        // 0x5889B5FA: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5889B5FD: cmp dword ptr [edi + 4], 0x100
        __asm _emit 0x81
        __asm _emit 0x7F
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889B604: je 0x5889b626
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x5889B606: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889B60C: mov edi, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x64
        // 0x5889B60F: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x5889B612: push edx
        __asm _emit 0x52
        // 0x5889B613: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5889B615: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0x5F
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x5889B61A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889B61C: je 0x5889b626
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5889B61E: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x5889B622: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x5889B624: jne 0x5889b5f6
        __asm _emit 0x75
        __asm _emit 0xD0
        // 0x5889B626: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x5889B629: pop edi
        __asm _emit 0x5F
        // 0x5889B62A: pop esi
        __asm _emit 0x5E
        // 0x5889B62B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
