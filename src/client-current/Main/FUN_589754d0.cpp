// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 196 bytes in 1 exact ranges.
// Source symbol alias: FUN_589754d0.

// Ghidra body range 0x589754D0..0x58975594; 196 mapped bytes.
extern "C" __declspec(naked) void FUN_589754d0_segment_00() {
    __asm {
        // 0x589754D0: push esi
        __asm _emit 0x56
        // 0x589754D1: mov esi, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x589754D5: cmp dword ptr [esi + 0x14], 0x65
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x14
        __asm _emit 0x65
        // 0x589754D9: je 0x589754f4
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x589754DB: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x589754DD: push esi
        __asm _emit 0x56
        // 0x589754DE: mov dword ptr [eax + 0x14], 0x14
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x14
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589754E5: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x589754E7: mov edx, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x14
        // 0x589754EA: mov dword ptr [ecx + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x18
        // 0x589754ED: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x589754EF: call dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x10
        // 0x589754F1: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x589754F4: mov ecx, dword ptr [esi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589754FA: mov eax, dword ptr [esi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x20
        // 0x589754FD: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x589754FF: jb 0x58975515
        __asm _emit 0x72
        __asm _emit 0x14
        // 0x58975501: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58975503: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58975505: push esi
        __asm _emit 0x56
        // 0x58975506: mov dword ptr [edx + 0x14], 0x7b
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x14
        __asm _emit 0x7B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897550D: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5897550F: call dword ptr [eax + 4]
        __asm _emit 0xFF
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58975512: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58975515: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58975518: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5897551A: je 0x58975537
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x5897551C: mov ecx, dword ptr [esi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975522: push esi
        __asm _emit 0x56
        // 0x58975523: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58975526: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58975529: mov eax, dword ptr [esi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x20
        // 0x5897552C: mov dword ptr [edx + 8], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x5897552F: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x58975532: call dword ptr [ecx]
        __asm _emit 0xFF
        __asm _emit 0x11
        // 0x58975534: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58975537: mov eax, dword ptr [esi + 0x13c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897553D: mov cl, byte ptr [eax + 0xc]
        __asm _emit 0x8A
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x58975540: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x58975542: je 0x5897554b
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x58975544: push esi
        __asm _emit 0x56
        // 0x58975545: call dword ptr [eax + 4]
        __asm _emit 0xFF
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58975548: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5897554B: mov eax, dword ptr [esi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x20
        // 0x5897554E: mov ecx, dword ptr [esi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975554: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x58975556: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5897555A: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5897555C: jbe 0x58975560
        __asm _emit 0x76
        __asm _emit 0x02
        // 0x5897555E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58975560: mov edx, dword ptr [esi + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975566: push ecx
        __asm _emit 0x51
        // 0x58975567: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5897556B: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5897556F: push eax
        __asm _emit 0x50
        // 0x58975570: push ecx
        __asm _emit 0x51
        // 0x58975571: push esi
        __asm _emit 0x56
        // 0x58975572: mov dword ptr [esp + 0x18], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897557A: call dword ptr [edx + 4]
        __asm _emit 0xFF
        __asm _emit 0x52
        __asm _emit 0x04
        // 0x5897557D: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58975581: mov ecx, dword ptr [esi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975587: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5897558A: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x5897558C: mov dword ptr [esi + 0xd0], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975592: pop esi
        __asm _emit 0x5E
        // 0x58975593: ret
        __asm _emit 0xC3
    }
}
