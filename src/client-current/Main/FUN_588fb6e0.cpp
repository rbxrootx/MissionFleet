// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588FB6E0 .. +0x134 bytes.
// Source symbol alias: FUN_588fb6e0.
extern "C" __declspec(naked) void FUN_588fb6e0() {
    __asm {
        // 0x588FB6E0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588FB6E2: push 0x58988648
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588FB6E7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB6ED: push eax
        __asm _emit 0x50
        // 0x588FB6EE: push ecx
        __asm _emit 0x51
        // 0x588FB6EF: push esi
        __asm _emit 0x56
        // 0x588FB6F0: push edi
        __asm _emit 0x57
        // 0x588FB6F1: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588FB6F6: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588FB6F8: push eax
        __asm _emit 0x50
        // 0x588FB6F9: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588FB6FD: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB703: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588FB705: mov dword ptr [esp + 0xc], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588FB709: mov dword ptr [esi], 0x589a2224
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x24
        __asm _emit 0x22
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588FB70F: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588FB712: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588FB714: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588FB718: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588FB71A: je 0x588fb727
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588FB71C: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588FB71E: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588FB720: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588FB722: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588FB724: mov dword ptr [esi + 0x6c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x6C
        // 0x588FB727: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588FB72A: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588FB72C: je 0x588fb739
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588FB72E: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588FB730: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588FB732: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588FB734: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588FB736: mov dword ptr [esi + 0x70], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x70
        // 0x588FB739: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x588FB73C: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588FB73E: je 0x588fb74b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588FB740: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588FB742: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588FB744: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588FB746: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588FB748: mov dword ptr [esi + 0x74], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x74
        // 0x588FB74B: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x588FB74E: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588FB750: je 0x588fb75d
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588FB752: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588FB754: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588FB756: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588FB758: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588FB75A: mov dword ptr [esi + 0x78], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x78
        // 0x588FB75D: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x588FB760: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588FB762: je 0x588fb76f
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588FB764: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588FB766: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588FB768: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588FB76A: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588FB76C: mov dword ptr [esi + 0x7c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x7C
        // 0x588FB76F: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB775: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588FB777: je 0x588fb787
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588FB779: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588FB77B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588FB77D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588FB77F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588FB781: mov dword ptr [esi + 0xa8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB787: mov ecx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB78D: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588FB78F: je 0x588fb79f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588FB791: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588FB793: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588FB795: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588FB797: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588FB799: mov dword ptr [esi + 0xac], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB79F: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB7A5: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588FB7A7: je 0x588fb7b7
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588FB7A9: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588FB7AB: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588FB7AD: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588FB7AF: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588FB7B1: mov dword ptr [esi + 0xb0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB7B7: mov ecx, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB7BD: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588FB7BF: je 0x588fb7cf
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588FB7C1: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588FB7C3: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588FB7C5: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588FB7C7: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588FB7C9: mov dword ptr [esi + 0xb4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB7CF: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588FB7D2: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588FB7D4: je 0x588fb7e1
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588FB7D6: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588FB7D8: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588FB7DA: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588FB7DC: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588FB7DE: mov dword ptr [esi + 0x60], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x60
        // 0x588FB7E1: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x588FB7E4: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588FB7E6: je 0x588fb7f3
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588FB7E8: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588FB7EA: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588FB7EC: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588FB7EE: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588FB7F0: mov dword ptr [esi + 0x64], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x64
        // 0x588FB7F3: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FB7F5: mov dword ptr [esp + 0x18], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FB7FD: call 0x58902c10
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB802: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588FB806: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB80D: pop ecx
        __asm _emit 0x59
        // 0x588FB80E: pop edi
        __asm _emit 0x5F
        // 0x588FB80F: pop esi
        __asm _emit 0x5E
        // 0x588FB810: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588FB813: ret
        __asm _emit 0xC3
    }
}
