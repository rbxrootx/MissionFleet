// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587540C0 .. +0x295 bytes.
// Source symbol alias: FUN_587540c0.
extern "C" __declspec(naked) void FUN_587540c0() {
    __asm {
        // 0x587540C0: push ebp
        __asm _emit 0x55
        // 0x587540C1: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x587540C3: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587540C5: push 0x5897e7c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0xE7
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x587540CA: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587540D0: push eax
        __asm _emit 0x50
        // 0x587540D1: sub esp, 0x58
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x58
        // 0x587540D4: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587540D9: xor eax, ebp
        __asm _emit 0x33
        __asm _emit 0xC5
        // 0x587540DB: mov dword ptr [ebp - 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x587540DE: push ebx
        __asm _emit 0x53
        // 0x587540DF: push esi
        __asm _emit 0x56
        // 0x587540E0: push edi
        __asm _emit 0x57
        // 0x587540E1: push eax
        __asm _emit 0x50
        // 0x587540E2: lea eax, [ebp - 0xc]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF4
        // 0x587540E5: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587540EB: mov dword ptr [ebp - 0x10], esp
        __asm _emit 0x89
        __asm _emit 0x65
        __asm _emit 0xF0
        // 0x587540EE: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x587540F0: mov eax, dword ptr [ebx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x0C
        // 0x587540F3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587540F5: jne 0x587540fb
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x587540F7: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587540F9: jmp 0x58754111
        __asm _emit 0xEB
        __asm _emit 0x16
        // 0x587540FB: mov ecx, dword ptr [ebx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x14
        // 0x587540FE: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x58754100: mov eax, 0x38e38e39
        __asm _emit 0xB8
        __asm _emit 0x39
        __asm _emit 0x8E
        __asm _emit 0xE3
        __asm _emit 0x38
        // 0x58754105: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58754107: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x5875410A: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x5875410C: shr edi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x1F
        // 0x5875410F: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x58754111: cmp dword ptr [ebp + 0x10], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58754115: je 0x58754337
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875411B: mov esi, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x73
        __asm _emit 0x10
        // 0x5875411E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58754120: sub ecx, dword ptr [ebx + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x4B
        __asm _emit 0x0C
        // 0x58754123: mov eax, 0x38e38e39
        __asm _emit 0xB8
        __asm _emit 0x39
        __asm _emit 0x8E
        __asm _emit 0xE3
        __asm _emit 0x38
        // 0x58754128: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5875412A: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x10
        // 0x5875412D: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x58754130: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58754132: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58754135: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58754137: mov edx, 0x38e38e3
        __asm _emit 0xBA
        __asm _emit 0xE3
        __asm _emit 0x38
        __asm _emit 0x8E
        __asm _emit 0x03
        // 0x5875413C: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x5875413E: mov dword ptr [ebp - 0x60], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xA0
        // 0x58754141: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x58754143: jae 0x5875414a
        __asm _emit 0x73
        __asm _emit 0x05
        // 0x58754145: call 0x588f6660
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0x25
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x5875414A: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x5875414C: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x5875414E: jae 0x58754264
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58754154: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58754156: shr ecx, 1
        __asm _emit 0xD1
        __asm _emit 0xE9
        // 0x58754158: mov edx, 0x38e38e3
        __asm _emit 0xBA
        __asm _emit 0xE3
        __asm _emit 0x38
        __asm _emit 0x8E
        __asm _emit 0x03
        // 0x5875415D: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x5875415F: cmp edx, edi
        __asm _emit 0x3B
        __asm _emit 0xD7
        // 0x58754161: jae 0x58754167
        __asm _emit 0x73
        __asm _emit 0x04
        // 0x58754163: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58754165: jmp 0x58754169
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58754167: add edi, ecx
        __asm _emit 0x03
        __asm _emit 0xF9
        // 0x58754169: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x5875416B: jae 0x5875416f
        __asm _emit 0x73
        __asm _emit 0x02
        // 0x5875416D: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5875416F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58754171: push edi
        __asm _emit 0x57
        // 0x58754172: call 0x58753360
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58754177: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x0C
        // 0x5875417A: sub edx, dword ptr [ebx + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x53
        __asm _emit 0x0C
        // 0x5875417D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5875417F: mov eax, 0x38e38e39
        __asm _emit 0xB8
        __asm _emit 0x39
        __asm _emit 0x8E
        __asm _emit 0xE3
        __asm _emit 0x38
        // 0x58754184: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x58754186: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x58754189: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x5875418C: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x5875418E: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58754191: shr esi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEE
        __asm _emit 0x1F
        // 0x58754194: add esi, edx
        __asm _emit 0x03
        __asm _emit 0xF2
        // 0x58754196: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x58754199: push eax
        __asm _emit 0x50
        // 0x5875419A: mov dword ptr [ebp - 0x60], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xA0
        // 0x5875419D: lea eax, [esi + esi*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xF6
        // 0x587541A0: lea ecx, [ecx + eax*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xC1
        // 0x587541A3: push edx
        __asm _emit 0x52
        // 0x587541A4: push ecx
        __asm _emit 0x51
        // 0x587541A5: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587541A7: mov dword ptr [ebp - 4], 0
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587541AE: call 0x58753700
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587541B3: mov eax, dword ptr [ebx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x0C
        // 0x587541B6: mov byte ptr [ebp - 0x64], 0
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0x9C
        __asm _emit 0x00
        // 0x587541BA: mov edx, dword ptr [ebp - 0x64]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x9C
        // 0x587541BD: push edx
        __asm _emit 0x52
        // 0x587541BE: mov edx, dword ptr [ebp - 0x64]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x9C
        // 0x587541C1: push edx
        __asm _emit 0x52
        // 0x587541C2: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x0C
        // 0x587541C5: lea ecx, [ebx + 8]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x08
        // 0x587541C8: push ecx
        __asm _emit 0x51
        // 0x587541C9: mov ecx, dword ptr [ebp - 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xA0
        // 0x587541CC: push ecx
        __asm _emit 0x51
        // 0x587541CD: push edx
        __asm _emit 0x52
        // 0x587541CE: push eax
        __asm _emit 0x50
        // 0x587541CF: call 0x58753590
        __asm _emit 0xE8
        __asm _emit 0xBC
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587541D4: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x10
        // 0x587541D7: mov eax, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x10
        // 0x587541DA: add esi, ecx
        __asm _emit 0x03
        __asm _emit 0xF1
        // 0x587541DC: mov ecx, dword ptr [ebp - 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xA0
        // 0x587541DF: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x587541E2: lea edx, [esi + esi*8]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xF6
        // 0x587541E5: lea ecx, [ecx + edx*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xD1
        // 0x587541E8: mov byte ptr [ebp - 0x64], 0
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0x9C
        __asm _emit 0x00
        // 0x587541EC: mov edx, dword ptr [ebp - 0x64]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x9C
        // 0x587541EF: push edx
        __asm _emit 0x52
        // 0x587541F0: mov edx, dword ptr [ebp - 0x64]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x9C
        // 0x587541F3: push edx
        __asm _emit 0x52
        // 0x587541F4: lea edx, [ebx + 8]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x08
        // 0x587541F7: push edx
        __asm _emit 0x52
        // 0x587541F8: push ecx
        __asm _emit 0x51
        // 0x587541F9: push eax
        __asm _emit 0x50
        // 0x587541FA: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x587541FD: push eax
        __asm _emit 0x50
        // 0x587541FE: call 0x58753590
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58754203: mov esi, dword ptr [ebx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x73
        __asm _emit 0x0C
        // 0x58754206: mov ecx, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x10
        // 0x58754209: sub ecx, esi
        __asm _emit 0x2B
        __asm _emit 0xCE
        // 0x5875420B: mov eax, 0x38e38e39
        __asm _emit 0xB8
        __asm _emit 0x39
        __asm _emit 0x8E
        __asm _emit 0xE3
        __asm _emit 0x38
        // 0x58754210: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58754212: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x58754215: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58754217: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x5875421A: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5875421C: add dword ptr [ebp + 0x10], ecx
        __asm _emit 0x01
        __asm _emit 0x4D
        __asm _emit 0x10
        // 0x5875421F: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x58754222: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58754224: je 0x5875422f
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58754226: push esi
        __asm _emit 0x56
        // 0x58754227: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0x8A
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5875422C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5875422F: mov eax, dword ptr [ebp - 0x60]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xA0
        // 0x58754232: lea edx, [edi + edi*8]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xFF
        // 0x58754235: lea ecx, [eax + edx*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xD0
        // 0x58754238: mov dword ptr [ebx + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4B
        __asm _emit 0x14
        // 0x5875423B: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x10
        // 0x5875423E: lea edx, [ecx + ecx*8]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xC9
        // 0x58754241: lea ecx, [eax + edx*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xD0
        // 0x58754244: mov dword ptr [ebx + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4B
        __asm _emit 0x10
        // 0x58754247: mov dword ptr [ebx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x0C
        // 0x5875424A: jmp 0x58754337
        __asm _emit 0xE9
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875424F: mov edx, dword ptr [ebp - 0x60]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xA0
        // 0x58754252: push edx
        __asm _emit 0x52
        // 0x58754253: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0x89
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58754258: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5875425B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5875425D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5875425F: call 0x5897cc78
        __asm _emit 0xE8
        __asm _emit 0x14
        __asm _emit 0x8A
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58754264: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58754266: sub ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x58754269: mov esi, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x5875426C: mov eax, 0x38e38e39
        __asm _emit 0xB8
        __asm _emit 0x39
        __asm _emit 0x8E
        __asm _emit 0xE3
        __asm _emit 0x38
        // 0x58754271: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58754273: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x58754276: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58754278: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5875427B: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5875427D: mov ecx, 0x12
        __asm _emit 0xB9
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58754282: lea edi, [ebp - 0x5c]
        __asm _emit 0x8D
        __asm _emit 0x7D
        __asm _emit 0xA4
        // 0x58754285: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58754287: cmp eax, dword ptr [ebp + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x5875428A: jae 0x587542f6
        __asm _emit 0x73
        __asm _emit 0x6A
        // 0x5875428C: mov edi, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x10
        // 0x5875428F: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x58754292: mov edx, dword ptr [ebp - 0x60]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xA0
        // 0x58754295: lea esi, [edi + edi*8]
        __asm _emit 0x8D
        __asm _emit 0x34
        __asm _emit 0xFF
        // 0x58754298: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xF6
        // 0x5875429A: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xF6
        // 0x5875429C: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xF6
        // 0x5875429E: lea ecx, [esi + eax]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x06
        // 0x587542A1: push ecx
        __asm _emit 0x51
        // 0x587542A2: push edx
        __asm _emit 0x52
        // 0x587542A3: push eax
        __asm _emit 0x50
        // 0x587542A4: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587542A6: call 0x58753de0
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587542AB: mov ecx, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x10
        // 0x587542AE: sub ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x587542B1: lea eax, [ebp - 0x5c]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xA4
        // 0x587542B4: push eax
        __asm _emit 0x50
        // 0x587542B5: mov eax, 0x38e38e39
        __asm _emit 0xB8
        __asm _emit 0x39
        __asm _emit 0x8E
        __asm _emit 0xE3
        __asm _emit 0x38
        // 0x587542BA: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587542BC: mov eax, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x10
        // 0x587542BF: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x587542C2: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587542C4: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x587542C7: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587542C9: sub edi, ecx
        __asm _emit 0x2B
        __asm _emit 0xF9
        // 0x587542CB: push edi
        __asm _emit 0x57
        // 0x587542CC: push eax
        __asm _emit 0x50
        // 0x587542CD: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587542CF: mov dword ptr [ebp - 4], 2
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587542D6: call 0x58753700
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587542DB: add dword ptr [ebx + 0x10], esi
        __asm _emit 0x01
        __asm _emit 0x73
        __asm _emit 0x10
        // 0x587542DE: mov ebx, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5B
        __asm _emit 0x10
        // 0x587542E1: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x587542E4: lea edx, [ebp - 0x5c]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0xA4
        // 0x587542E7: push edx
        __asm _emit 0x52
        // 0x587542E8: sub ebx, esi
        __asm _emit 0x2B
        __asm _emit 0xDE
        // 0x587542EA: push ebx
        __asm _emit 0x53
        // 0x587542EB: push eax
        __asm _emit 0x50
        // 0x587542EC: call 0x58753530
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587542F1: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587542F4: jmp 0x58754337
        __asm _emit 0xEB
        __asm _emit 0x41
        // 0x587542F6: mov esi, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x587542F9: mov eax, dword ptr [ebp - 0x60]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xA0
        // 0x587542FC: lea esi, [esi + esi*8]
        __asm _emit 0x8D
        __asm _emit 0x34
        __asm _emit 0xF6
        // 0x587542FF: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xF6
        // 0x58754301: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xF6
        // 0x58754303: push eax
        __asm _emit 0x50
        // 0x58754304: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58754306: add esi, esi
        __asm _emit 0x03
        __asm _emit 0xF6
        // 0x58754308: push eax
        __asm _emit 0x50
        // 0x58754309: sub edi, esi
        __asm _emit 0x2B
        __asm _emit 0xFE
        // 0x5875430B: push edi
        __asm _emit 0x57
        // 0x5875430C: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5875430E: call 0x58753de0
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58754313: mov ecx, dword ptr [ebp - 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xA0
        // 0x58754316: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x0C
        // 0x58754319: push ecx
        __asm _emit 0x51
        // 0x5875431A: push edi
        __asm _emit 0x57
        // 0x5875431B: push edx
        __asm _emit 0x52
        // 0x5875431C: mov dword ptr [ebx + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x10
        // 0x5875431F: call 0x58753600
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58754324: lea eax, [ebp - 0x5c]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xA4
        // 0x58754327: push eax
        __asm _emit 0x50
        // 0x58754328: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x5875432B: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xF0
        // 0x5875432D: push esi
        __asm _emit 0x56
        // 0x5875432E: push eax
        __asm _emit 0x50
        // 0x5875432F: call 0x58753530
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58754334: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x58754337: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF4
        // 0x5875433A: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58754341: pop ecx
        __asm _emit 0x59
        // 0x58754342: pop edi
        __asm _emit 0x5F
        // 0x58754343: pop esi
        __asm _emit 0x5E
        // 0x58754344: pop ebx
        __asm _emit 0x5B
        // 0x58754345: mov ecx, dword ptr [ebp - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xEC
        // 0x58754348: xor ecx, ebp
        __asm _emit 0x33
        __asm _emit 0xCD
        // 0x5875434A: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5875434F: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x58754351: pop ebp
        __asm _emit 0x5D
        // 0x58754352: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
