// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587AEDB0 .. +0x8F bytes.
// Source symbol alias: FUN_587aedb0.
extern "C" __declspec(naked) void FUN_587aedb0() {
    __asm {
        // 0x587AEDB0: push ebx
        __asm _emit 0x53
        // 0x587AEDB1: mov ebx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587AEDB5: push esi
        __asm _emit 0x56
        // 0x587AEDB6: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587AEDB8: push edi
        __asm _emit 0x57
        // 0x587AEDB9: mov dword ptr [ebx], 0
        __asm _emit 0xC7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AEDBF: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587AEDC1: je 0x587aedd1
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587AEDC3: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587AEDC7: cmp dword ptr [esi + 0xc], eax
        __asm _emit 0x39
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x587AEDCA: ja 0x587aedd1
        __asm _emit 0x77
        __asm _emit 0x05
        // 0x587AEDCC: cmp eax, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x587AEDCF: jbe 0x587aedda
        __asm _emit 0x76
        __asm _emit 0x09
        // 0x587AEDD1: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0xDE
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AEDD6: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587AEDDA: mov edi, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587AEDDE: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x587AEDE0: mov dword ptr [ebx], ecx
        __asm _emit 0x89
        __asm _emit 0x0B
        // 0x587AEDE2: mov dword ptr [ebx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x04
        // 0x587AEDE5: cmp dword ptr [esi + 0xc], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x587AEDE8: ja 0x587aedef
        __asm _emit 0x77
        __asm _emit 0x05
        // 0x587AEDEA: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587AEDED: jbe 0x587aedf8
        __asm _emit 0x76
        __asm _emit 0x09
        // 0x587AEDEF: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0xDE
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AEDF4: mov edi, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587AEDF8: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587AEDFA: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x587AEDFC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587AEDFE: je 0x587aee04
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587AEE00: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x587AEE02: je 0x587aee09
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587AEE04: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0xDE
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AEE09: mov edx, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x53
        __asm _emit 0x04
        // 0x587AEE0C: cmp edx, edi
        __asm _emit 0x3B
        __asm _emit 0xD7
        // 0x587AEE0E: je 0x587aee37
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x587AEE10: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x587AEE13: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x587AEE15: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587AEE18: lea ecx, [eax*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AEE1F: push ebp
        __asm _emit 0x55
        // 0x587AEE20: lea ebp, [ecx + edx]
        __asm _emit 0x8D
        __asm _emit 0x2C
        __asm _emit 0x11
        // 0x587AEE23: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587AEE25: jle 0x587aee33
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x587AEE27: push ecx
        __asm _emit 0x51
        // 0x587AEE28: push edi
        __asm _emit 0x57
        // 0x587AEE29: push ecx
        __asm _emit 0x51
        // 0x587AEE2A: push edx
        __asm _emit 0x52
        // 0x587AEE2B: call 0x5897cc54
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0xDE
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AEE30: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587AEE33: mov dword ptr [esi + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x10
        // 0x587AEE36: pop ebp
        __asm _emit 0x5D
        // 0x587AEE37: pop edi
        __asm _emit 0x5F
        // 0x587AEE38: pop esi
        __asm _emit 0x5E
        // 0x587AEE39: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x587AEE3B: pop ebx
        __asm _emit 0x5B
        // 0x587AEE3C: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
