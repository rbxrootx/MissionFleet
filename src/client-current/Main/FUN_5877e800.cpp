// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5877E800 .. +0xF3 bytes.
extern "C" __declspec(naked) void FUN_5877e800() {
    __asm {
        // 0x5877E800: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5877E802: push 0x5897f523
        __asm _emit 0x68
        __asm _emit 0x23
        __asm _emit 0xF5
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5877E807: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877E80D: push eax
        __asm _emit 0x50
        // 0x5877E80E: push ecx
        __asm _emit 0x51
        // 0x5877E80F: push esi
        __asm _emit 0x56
        // 0x5877E810: push edi
        __asm _emit 0x57
        // 0x5877E811: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5877E816: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5877E818: push eax
        __asm _emit 0x50
        // 0x5877E819: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5877E81D: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877E823: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5877E825: mov dword ptr [esp + 0xc], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5877E829: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5877E82D: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5877E831: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5877E835: push eax
        __asm _emit 0x50
        // 0x5877E836: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5877E83A: push ecx
        __asm _emit 0x51
        // 0x5877E83B: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5877E83F: push edx
        __asm _emit 0x52
        // 0x5877E840: push eax
        __asm _emit 0x50
        // 0x5877E841: push ecx
        __asm _emit 0x51
        // 0x5877E842: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5877E844: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0x34
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x5877E849: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5877E84B: push 0x68
        __asm _emit 0x6A
        __asm _emit 0x68
        // 0x5877E84D: mov dword ptr [esp + 0x1c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5877E851: mov dword ptr [esi], 0x589969c8
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xC8
        __asm _emit 0x69
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5877E857: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0xE3
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x5877E85C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5877E85F: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5877E863: mov byte ptr [esp + 0x18], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x01
        // 0x5877E868: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5877E86A: je 0x5877e87a
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5877E86C: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5877E86E: push edi
        __asm _emit 0x57
        // 0x5877E86F: push edi
        __asm _emit 0x57
        // 0x5877E870: push esi
        __asm _emit 0x56
        // 0x5877E871: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5877E873: call 0x588eb280
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0xCA
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5877E878: jmp 0x5877e87c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5877E87A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877E87C: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5877E880: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5877E882: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5877E884: setl dl
        __asm _emit 0x0F
        __asm _emit 0x9C
        __asm _emit 0xC2
        // 0x5877E887: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x5877E88A: dec edx
        __asm _emit 0x4A
        // 0x5877E88B: and ecx, edx
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5877E88D: mov dword ptr [eax + 0x58], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x58
        // 0x5877E890: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x5877E893: mov dword ptr [eax + 0x5c], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x5C
        // 0x5877E896: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5877E89A: mov dword ptr [eax + 0x60], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x5877E8A1: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5877E8A5: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x5877E8A8: mov dword ptr [esi + 0x54], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x5877E8AB: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x5877E8AE: jne 0x5877e8bb
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x5877E8B0: mov eax, dword ptr [esi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x20
        // 0x5877E8B3: sub eax, dword ptr [esi + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x5877E8B6: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x5877E8B9: jmp 0x5877e8c4
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x5877E8BB: mov edx, dword ptr [esi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x1C
        // 0x5877E8BE: sub edx, dword ptr [esi + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x56
        __asm _emit 0x14
        // 0x5877E8C1: mov dword ptr [esi + 0x68], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x68
        // 0x5877E8C4: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x5877E8C7: mov dword ptr [esi + 0x58], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x58
        // 0x5877E8CA: mov dword ptr [esi + 0x5c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x5C
        // 0x5877E8CD: mov eax, dword ptr [eax + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x58
        // 0x5877E8D0: imul eax, dword ptr [esi + 0x68]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x5877E8D4: cdq
        __asm _emit 0x99
        // 0x5877E8D5: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x5877E8D7: mov dword ptr [esi + 0x6c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x6C
        // 0x5877E8DA: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x5877E8DD: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5877E8DF: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5877E8E3: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877E8EA: pop ecx
        __asm _emit 0x59
        // 0x5877E8EB: pop edi
        __asm _emit 0x5F
        // 0x5877E8EC: pop esi
        __asm _emit 0x5E
        // 0x5877E8ED: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5877E8F0: ret 0x20
        __asm _emit 0xC2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
