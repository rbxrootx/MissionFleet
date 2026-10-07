// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 141 bytes in 1 exact ranges.
// Source symbol alias: FUN_58789590.

// Ghidra body range 0x58789590..0x5878961D; 141 mapped bytes.
extern "C" __declspec(naked) void FUN_58789590_segment_00() {
    __asm {
        // 0x58789590: push esi
        __asm _emit 0x56
        // 0x58789591: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58789593: cmp dword ptr [esi + 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58789597: push 0xc
        __asm _emit 0x6A
        __asm _emit 0x0C
        // 0x58789599: jne 0x587895dd
        __asm _emit 0x75
        __asm _emit 0x42
        // 0x5878959B: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0x36
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x587895A0: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587895A3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587895A5: je 0x587895cb
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x587895A7: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587895AB: mov dword ptr [eax], 0
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587895B1: mov dword ptr [eax + 4], 0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587895B8: mov dword ptr [eax + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587895BB: inc dword ptr [esi + 4]
        __asm _emit 0xFF
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587895BE: mov dword ptr [esi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x587895C1: mov dword ptr [esi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x587895C4: mov dword ptr [esi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587895C7: pop esi
        __asm _emit 0x5E
        // 0x587895C8: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587895CB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587895CD: inc dword ptr [esi + 4]
        __asm _emit 0xFF
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587895D0: mov dword ptr [esi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x587895D3: mov dword ptr [esi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x587895D6: mov dword ptr [esi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587895D9: pop esi
        __asm _emit 0x5E
        // 0x587895DA: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587895DD: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0x36
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x587895E2: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587895E5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587895E7: je 0x587895ff
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x587895E9: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587895ED: mov dword ptr [eax], 0
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587895F3: mov dword ptr [eax + 4], 0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587895FA: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587895FD: jmp 0x58789601
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587895FF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58789601: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x58789604: mov dword ptr [ecx], eax
        __asm _emit 0x89
        __asm _emit 0x01
        // 0x58789606: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x58789609: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5878960B: mov dword ptr [edx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5878960E: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x58789611: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x58789613: inc dword ptr [esi + 4]
        __asm _emit 0xFF
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58789616: mov dword ptr [esi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x58789619: pop esi
        __asm _emit 0x5E
        // 0x5878961A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
