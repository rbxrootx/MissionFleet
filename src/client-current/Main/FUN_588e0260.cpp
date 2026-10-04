// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588E0260 .. +0x1A4 bytes.
// Source symbol alias: FUN_588e0260.
extern "C" __declspec(naked) void FUN_588e0260() {
    __asm {
        // 0x588E0260: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588E0264: push ebx
        __asm _emit 0x53
        // 0x588E0265: mov ebx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588E0269: push ebp
        __asm _emit 0x55
        // 0x588E026A: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588E026E: push esi
        __asm _emit 0x56
        // 0x588E026F: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588E0271: sub dword ptr [esi + 0xdac], eax
        __asm _emit 0x29
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E0277: mov eax, dword ptr [esi + 0x1438]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E027D: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588E0281: push edi
        __asm _emit 0x57
        // 0x588E0282: mov edi, 0xaaaaaaaa
        __asm _emit 0xBF
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588E0287: xor eax, edi
        __asm _emit 0x33
        __asm _emit 0xC7
        // 0x588E0289: sub eax, ebp
        __asm _emit 0x2B
        __asm _emit 0xC5
        // 0x588E028B: xor eax, edi
        __asm _emit 0x33
        __asm _emit 0xC7
        // 0x588E028D: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x588E028F: xor edx, edi
        __asm _emit 0x33
        __asm _emit 0xD7
        // 0x588E0291: imul edx, edx, 0x64
        __asm _emit 0x6B
        __asm _emit 0xD2
        __asm _emit 0x64
        // 0x588E0294: mov dword ptr [esi + 0x1438], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E029A: mov dword ptr [esi + 0xdd4], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xD4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E02A0: cmp ebx, 5
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x05
        // 0x588E02A3: je 0x588e02b7
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x588E02A5: xor eax, edi
        __asm _emit 0x33
        __asm _emit 0xC7
        // 0x588E02A7: jge 0x588e02b7
        __asm _emit 0x7D
        __asm _emit 0x0E
        // 0x588E02A9: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x588E02AB: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588E02AD: jge 0x588e02b1
        __asm _emit 0x7D
        __asm _emit 0x02
        // 0x588E02AF: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588E02B1: mov dword ptr [esi + 0x1438], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x38
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E02B7: mov eax, dword ptr [esi + 0x143c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x3C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E02BD: xor eax, edi
        __asm _emit 0x33
        __asm _emit 0xC7
        // 0x588E02BF: sub eax, dword ptr [esp + 0x1c]
        __asm _emit 0x2B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588E02C3: xor eax, edi
        __asm _emit 0x33
        __asm _emit 0xC7
        // 0x588E02C5: mov dword ptr [esi + 0x143c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x3C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E02CB: xor eax, edi
        __asm _emit 0x33
        __asm _emit 0xC7
        // 0x588E02CD: jge 0x588e02d5
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x588E02CF: mov dword ptr [esi + 0x143c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x3C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E02D5: mov eax, dword ptr [esi + 0x398]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E02DB: xor eax, edi
        __asm _emit 0x33
        __asm _emit 0xC7
        // 0x588E02DD: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588E02DF: jle 0x588e02e9
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x588E02E1: mov dword ptr [esi + 0x398], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E02E7: jmp 0x588e02f3
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x588E02E9: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x588E02EB: xor eax, edi
        __asm _emit 0x33
        __asm _emit 0xC7
        // 0x588E02ED: mov dword ptr [esi + 0x398], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E02F3: mov eax, dword ptr [esi + 0x398]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E02F9: mov ecx, dword ptr [esi + 0x1448]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x48
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E02FF: xor eax, edi
        __asm _emit 0x33
        __asm _emit 0xC7
        // 0x588E0301: push eax
        __asm _emit 0x50
        // 0x588E0302: call 0x5884d630
        __asm _emit 0xE8
        __asm _emit 0x29
        __asm _emit 0xD3
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x588E0307: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E030D: cmp dword ptr [ecx + 4], esi
        __asm _emit 0x39
        __asm _emit 0x71
        __asm _emit 0x04
        // 0x588E0310: jne 0x588e0361
        __asm _emit 0x75
        __asm _emit 0x4F
        // 0x588E0312: mov edx, dword ptr [esi + 0x1438]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x38
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E0318: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E031D: mov ecx, dword ptr [eax + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E0323: xor edx, edi
        __asm _emit 0x33
        __asm _emit 0xD7
        // 0x588E0325: push edx
        __asm _emit 0x52
        // 0x588E0326: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588E0328: call 0x58895860
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0x55
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x588E032D: mov ecx, dword ptr [esi + 0x143c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x3C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E0333: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E0339: xor ecx, edi
        __asm _emit 0x33
        __asm _emit 0xCF
        // 0x588E033B: push ecx
        __asm _emit 0x51
        // 0x588E033C: mov ecx, dword ptr [edx + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E0342: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588E0344: call 0x58895860
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0x55
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x588E0349: mov eax, dword ptr [esi + 0xdac]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E034F: mov ecx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E0355: mov ecx, dword ptr [ecx + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E035B: push eax
        __asm _emit 0x50
        // 0x588E035C: call 0x58895560
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0x51
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x588E0361: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588E0363: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588E0365: call 0x588dffb0
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E036A: cmp dword ptr [esi + 0x60b0], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xB0
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E0371: je 0x588e03fb
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E0377: cmp ebx, 4
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x04
        // 0x588E037A: je 0x588e03fb
        __asm _emit 0x74
        __asm _emit 0x7F
        // 0x588E037C: cmp ebx, 5
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x05
        // 0x588E037F: je 0x588e03fb
        __asm _emit 0x74
        __asm _emit 0x7A
        // 0x588E0381: mov dword ptr [esi + 0x60b4], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x588E038B: cmp dword ptr [0x589c8edc], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xDC
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x588E0392: je 0x588e03fb
        __asm _emit 0x74
        __asm _emit 0x67
        // 0x588E0394: mov ebx, dword ptr [0x58a24580]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E039A: mov eax, dword ptr [ebx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x1C
        // 0x588E039D: sub eax, dword ptr [ebx + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x43
        __asm _emit 0x14
        // 0x588E03A0: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E03A6: mov edi, dword ptr [edx + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0xBA
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588E03AC: mov ebp, dword ptr [edi + 0x114]
        __asm _emit 0x8B
        __asm _emit 0xAF
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E03B2: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x588E03B4: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E03BA: cdq
        __asm _emit 0x99
        // 0x588E03BB: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x588E03BD: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x588E03C0: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x588E03C2: mov eax, dword ptr [ebx + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x20
        // 0x588E03C5: sub eax, dword ptr [ebx + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x43
        __asm _emit 0x18
        // 0x588E03C8: sub ecx, dword ptr [edi + 0x50]
        __asm _emit 0x2B
        __asm _emit 0x4F
        __asm _emit 0x50
        // 0x588E03CB: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x588E03CD: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E03D3: cdq
        __asm _emit 0x99
        // 0x588E03D4: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x588E03D6: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E03DC: push edx
        __asm _emit 0x52
        // 0x588E03DD: sub eax, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x588E03E0: add eax, dword ptr [edi + 0x54]
        __asm _emit 0x03
        __asm _emit 0x47
        __asm _emit 0x54
        // 0x588E03E3: push eax
        __asm _emit 0x50
        // 0x588E03E4: push ecx
        __asm _emit 0x51
        // 0x588E03E5: mov ecx, dword ptr [esi + 0x604c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E03EB: call 0x587b7400
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0x70
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x588E03F0: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588E03F4: pop edi
        __asm _emit 0x5F
        // 0x588E03F5: pop esi
        __asm _emit 0x5E
        // 0x588E03F6: pop ebp
        __asm _emit 0x5D
        // 0x588E03F7: pop ebx
        __asm _emit 0x5B
        // 0x588E03F8: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588E03FB: pop edi
        __asm _emit 0x5F
        // 0x588E03FC: pop esi
        __asm _emit 0x5E
        // 0x588E03FD: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x588E03FF: pop ebp
        __asm _emit 0x5D
        // 0x588E0400: pop ebx
        __asm _emit 0x5B
        // 0x588E0401: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
