// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58873030 .. +0xBB bytes.
// Source symbol alias: FUN_58873030.
extern "C" __declspec(naked) void FUN_58873030() {
    __asm {
        // 0x58873030: push ecx
        __asm _emit 0x51
        // 0x58873031: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xA1
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58873036: push ebx
        __asm _emit 0x53
        // 0x58873037: push esi
        __asm _emit 0x56
        // 0x58873038: mov esi, dword ptr [eax + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x24
        // 0x5887303B: mov eax, dword ptr [eax + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x2C
        // 0x5887303E: push edi
        __asm _emit 0x57
        // 0x5887303F: mov dword ptr [esp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58873043: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58873047: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58873049: sub dword ptr [edi + 0x190], eax
        __asm _emit 0x29
        __asm _emit 0x87
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887304F: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58873051: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58873053: je 0x58873099
        __asm _emit 0x74
        __asm _emit 0x44
        // 0x58873055: push ebp
        __asm _emit 0x55
        // 0x58873056: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x58873058: imul ebp, ebp, 0x43
        __asm _emit 0x6B
        __asm _emit 0xED
        __asm _emit 0x43
        // 0x5887305B: jmp 0x58873060
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x5887305D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58873060: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x58873063: push ebp
        __asm _emit 0x55
        // 0x58873064: call 0x58902e60
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0xFD
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58873069: mov eax, dword ptr [edi + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887306F: lea ecx, [eax + 7]
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0x07
        // 0x58873072: cmp ebx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD9
        // 0x58873074: jge 0x58873084
        __asm _emit 0x7D
        __asm _emit 0x0E
        // 0x58873076: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x58873078: jl 0x58873084
        __asm _emit 0x7C
        __asm _emit 0x0A
        // 0x5887307A: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x5887307D: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x58873082: jmp 0x58873090
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x58873084: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x58873087: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887308C: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58873090: mov esi, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x08
        // 0x58873093: inc ebx
        __asm _emit 0x43
        // 0x58873094: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58873096: jne 0x58873060
        __asm _emit 0x75
        __asm _emit 0xC8
        // 0x58873098: pop ebp
        __asm _emit 0x5D
        // 0x58873099: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5887309B: cmp dword ptr [edi + 0x190], eax
        __asm _emit 0x39
        __asm _emit 0x87
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588730A1: jne 0x588730ae
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x588730A3: mov ecx, dword ptr [edi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588730A9: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588730AC: jmp 0x588730bb
        __asm _emit 0xEB
        __asm _emit 0x0D
        // 0x588730AE: mov edx, dword ptr [edi + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588730B4: mov dword ptr [edx + 0x50], 1
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588730BB: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588730BF: add ecx, -7
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0xF9
        // 0x588730C2: cmp dword ptr [edi + 0x190], ecx
        __asm _emit 0x39
        __asm _emit 0x8F
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588730C8: jl 0x588730da
        __asm _emit 0x7C
        __asm _emit 0x10
        // 0x588730CA: mov edx, dword ptr [edi + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588730D0: pop edi
        __asm _emit 0x5F
        // 0x588730D1: pop esi
        __asm _emit 0x5E
        // 0x588730D2: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x588730D5: pop ebx
        __asm _emit 0x5B
        // 0x588730D6: pop ecx
        __asm _emit 0x59
        // 0x588730D7: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588730DA: mov eax, dword ptr [edi + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588730E0: pop edi
        __asm _emit 0x5F
        // 0x588730E1: pop esi
        __asm _emit 0x5E
        // 0x588730E2: mov dword ptr [eax + 0x50], 1
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588730E9: pop ebx
        __asm _emit 0x5B
        // 0x588730EA: pop ecx
        __asm _emit 0x59
    }
}
