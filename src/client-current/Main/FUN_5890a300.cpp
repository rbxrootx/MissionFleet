// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5890A300 .. +0xE1 bytes.
// Source symbol alias: FUN_5890a300.
extern "C" __declspec(naked) void FUN_5890a300() {
    __asm {
        // 0x5890A300: sub esp, 0x208
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890A306: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5890A30B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5890A30D: mov dword ptr [esp + 0x204], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890A314: mov eax, dword ptr [esp + 0x20c]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890A31B: push esi
        __asm _emit 0x56
        // 0x5890A31C: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5890A31E: cmp dword ptr [esi + 0x1c], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x5890A322: je 0x5890a3c7
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890A328: push edi
        __asm _emit 0x57
        // 0x5890A329: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890A32E: lea ecx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5890A332: push ecx
        __asm _emit 0x51
        // 0x5890A333: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5890A335: push eax
        __asm _emit 0x50
        // 0x5890A336: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5890A338: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5890A33A: call dword ptr [0x5898c174]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5890A340: mov eax, dword ptr [esi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x1C
        // 0x5890A343: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5890A345: mov edx, dword ptr [edx + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x38
        // 0x5890A348: lea edi, [esi + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x2C
        // 0x5890A34B: push edi
        __asm _emit 0x57
        // 0x5890A34C: lea ecx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5890A350: push ecx
        __asm _emit 0x51
        // 0x5890A351: push ecx
        __asm _emit 0x51
        // 0x5890A352: push eax
        __asm _emit 0x50
        // 0x5890A353: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5890A355: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5890A357: jne 0x5890a381
        __asm _emit 0x75
        __asm _emit 0x28
        // 0x5890A359: mov edi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x3F
        // 0x5890A35B: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5890A35D: mov edx, dword ptr [eax + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x2C
        // 0x5890A360: lea ecx, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5890A364: push ecx
        __asm _emit 0x51
        // 0x5890A365: push 0x589a2ab0
        __asm _emit 0x68
        __asm _emit 0xB0
        __asm _emit 0x2A
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5890A36A: push edi
        __asm _emit 0x57
        // 0x5890A36B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5890A36D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5890A36F: je 0x5890a39c
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x5890A371: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5890A375: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5890A377: je 0x5890a381
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5890A379: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5890A37B: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5890A37E: push eax
        __asm _emit 0x50
        // 0x5890A37F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5890A381: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5890A383: pop edi
        __asm _emit 0x5F
        // 0x5890A384: pop esi
        __asm _emit 0x5E
        // 0x5890A385: mov ecx, dword ptr [esp + 0x204]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890A38C: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5890A38E: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0x28
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5890A393: add esp, 0x208
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890A399: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5890A39C: mov esi, dword ptr [esi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x1C
        // 0x5890A39F: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5890A3A3: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5890A3A5: mov edx, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x30
        // 0x5890A3A8: push ecx
        __asm _emit 0x51
        // 0x5890A3A9: push esi
        __asm _emit 0x56
        // 0x5890A3AA: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5890A3AC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5890A3AE: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5890A3B2: jne 0x5890a375
        __asm _emit 0x75
        __asm _emit 0xC1
        // 0x5890A3B4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5890A3B6: je 0x5890a3c0
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5890A3B8: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5890A3BA: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5890A3BD: push eax
        __asm _emit 0x50
        // 0x5890A3BE: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5890A3C0: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890A3C5: jmp 0x5890a383
        __asm _emit 0xEB
        __asm _emit 0xBC
        // 0x5890A3C7: mov ecx, dword ptr [esp + 0x208]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890A3CE: pop esi
        __asm _emit 0x5E
        // 0x5890A3CF: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5890A3D1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5890A3D3: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x28
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5890A3D8: add esp, 0x208
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890A3DE: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
