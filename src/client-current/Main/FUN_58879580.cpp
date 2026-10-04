// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58879580 .. +0x67A bytes.
// Source symbol alias: FUN_58879580.
extern "C" __declspec(naked) void FUN_58879580() {
    __asm {
        // 0x58879580: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58879582: push 0x58986721
        __asm _emit 0x68
        __asm _emit 0x21
        __asm _emit 0x67
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58879587: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887958D: push eax
        __asm _emit 0x50
        // 0x5887958E: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x58879591: push ebx
        __asm _emit 0x53
        // 0x58879592: push ebp
        __asm _emit 0x55
        // 0x58879593: push esi
        __asm _emit 0x56
        // 0x58879594: push edi
        __asm _emit 0x57
        // 0x58879595: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5887959A: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5887959C: push eax
        __asm _emit 0x50
        // 0x5887959D: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588795A1: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588795A7: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588795A9: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588795AD: mov edi, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588795B1: mov ebp, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588795B5: mov ebx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588795B9: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588795BD: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588795BF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588795C1: movsx eax, di
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0xC7
        // 0x588795C4: push eax
        __asm _emit 0x50
        // 0x588795C5: push ebp
        __asm _emit 0x55
        // 0x588795C6: push ebx
        __asm _emit 0x53
        // 0x588795C7: push ecx
        __asm _emit 0x51
        // 0x588795C8: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588795CA: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0x9B
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588795CF: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588795D5: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588795DA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588795DC: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x50
        // 0x588795DF: mov dword ptr [esi + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x54
        // 0x588795E2: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588795E9: mov dword ptr [esi + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x588795EC: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x588795EE: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588795F2: mov dword ptr [esi], 0x5899f01c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x1C
        __asm _emit 0xF0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588795F8: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x51
        __asm _emit 0x36
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x588795FD: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58879600: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58879604: mov byte ptr [esp + 0x24], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x58879609: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5887960B: je 0x5887964c
        __asm _emit 0x74
        __asm _emit 0x3F
        // 0x5887960D: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58879613: cmp dword ptr [ecx + 0x160], 0x27
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x27
        // 0x5887961A: jle 0x58879633
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x5887961C: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879623: je 0x58879633
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58879625: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887962B: add ecx, 0x9c0
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879631: jmp 0x58879635
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58879633: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58879635: lea edx, [edi + 2]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x02
        // 0x58879638: push edx
        __asm _emit 0x52
        // 0x58879639: lea edx, [ebp - 1]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0xFF
        // 0x5887963C: push edx
        __asm _emit 0x52
        // 0x5887963D: lea edx, [ebx - 1]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0xFF
        // 0x58879640: push edx
        __asm _emit 0x52
        // 0x58879641: push ecx
        __asm _emit 0x51
        // 0x58879642: push esi
        __asm _emit 0x56
        // 0x58879643: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58879645: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0xB3
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x5887964A: jmp 0x5887964e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5887964C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5887964E: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879653: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58879655: mov byte ptr [esp + 0x28], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x00
        // 0x5887965A: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x5887965D: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xBE
        __asm _emit 0x96
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58879662: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x58879665: mov ecx, 0xfffb
        __asm _emit 0xB9
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887966A: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5887966E: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x58879671: mov edx, 0x7fff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879676: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5887967A: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x5887967C: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0x35
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58879681: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58879684: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58879688: mov byte ptr [esp + 0x24], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5887968D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5887968F: je 0x588796d9
        __asm _emit 0x74
        __asm _emit 0x48
        // 0x58879691: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58879697: cmp dword ptr [ecx + 0x160], 0x28
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x28
        // 0x5887969E: jle 0x588796c6
        __asm _emit 0x7E
        __asm _emit 0x26
        // 0x588796A0: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588796A7: je 0x588796c6
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x588796A9: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588796AF: lea edx, [edi + 1]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x01
        // 0x588796B2: push edx
        __asm _emit 0x52
        // 0x588796B3: push ebp
        __asm _emit 0x55
        // 0x588796B4: add ecx, 0xa00
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588796BA: push ebx
        __asm _emit 0x53
        // 0x588796BB: push ecx
        __asm _emit 0x51
        // 0x588796BC: push esi
        __asm _emit 0x56
        // 0x588796BD: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588796BF: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0xB3
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588796C4: jmp 0x588796db
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x588796C6: lea edx, [edi + 1]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x01
        // 0x588796C9: push edx
        __asm _emit 0x52
        // 0x588796CA: push ebp
        __asm _emit 0x55
        // 0x588796CB: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588796CD: push ebx
        __asm _emit 0x53
        // 0x588796CE: push ecx
        __asm _emit 0x51
        // 0x588796CF: push esi
        __asm _emit 0x56
        // 0x588796D0: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588796D2: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0xB3
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588796D7: jmp 0x588796db
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588796D9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588796DB: push 0xc8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588796E0: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588796E2: mov byte ptr [esp + 0x28], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x00
        // 0x588796E7: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x588796EA: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xF1
        __asm _emit 0x95
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588796EF: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x588796F2: mov ecx, 0xfffb
        __asm _emit 0xB9
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588796F7: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588796FB: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x588796FE: mov edx, 0xbfff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879703: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58879707: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x58879709: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0x35
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5887970E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58879711: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58879715: mov byte ptr [esp + 0x24], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x03
        // 0x5887971A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5887971C: je 0x58879760
        __asm _emit 0x74
        __asm _emit 0x42
        // 0x5887971E: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58879724: cmp dword ptr [ecx + 0x160], 0x29
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x29
        // 0x5887972B: jle 0x58879750
        __asm _emit 0x7E
        __asm _emit 0x23
        // 0x5887972D: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879734: je 0x58879750
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x58879736: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887973C: push edi
        __asm _emit 0x57
        // 0x5887973D: push ebp
        __asm _emit 0x55
        // 0x5887973E: add ecx, 0xa40
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x40
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879744: push ebx
        __asm _emit 0x53
        // 0x58879745: push ecx
        __asm _emit 0x51
        // 0x58879746: push esi
        __asm _emit 0x56
        // 0x58879747: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58879749: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0xB2
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x5887974E: jmp 0x58879762
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x58879750: push edi
        __asm _emit 0x57
        // 0x58879751: push ebp
        __asm _emit 0x55
        // 0x58879752: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58879754: push ebx
        __asm _emit 0x53
        // 0x58879755: push ecx
        __asm _emit 0x51
        // 0x58879756: push esi
        __asm _emit 0x56
        // 0x58879757: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58879759: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0xB2
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x5887975E: jmp 0x58879762
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58879760: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58879762: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58879767: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58879769: mov byte ptr [esp + 0x28], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x00
        // 0x5887976E: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x58879771: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xAA
        __asm _emit 0x95
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58879776: mov eax, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x58879779: mov ecx, 0xfffb
        __asm _emit 0xB9
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887977E: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58879782: mov eax, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x58879785: mov edx, 0x7fff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887978A: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5887978E: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x58879790: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0x34
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58879795: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58879798: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5887979C: mov byte ptr [esp + 0x24], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588797A1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588797A3: je 0x588797e7
        __asm _emit 0x74
        __asm _emit 0x42
        // 0x588797A5: mov ecx, dword ptr [0x58a246b8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588797AB: cmp dword ptr [ecx + 0x160], 0x2a
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2A
        // 0x588797B2: jle 0x588797d7
        __asm _emit 0x7E
        __asm _emit 0x23
        // 0x588797B4: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588797BB: je 0x588797d7
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x588797BD: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588797C3: push edi
        __asm _emit 0x57
        // 0x588797C4: push ebp
        __asm _emit 0x55
        // 0x588797C5: add ecx, 0xa80
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x80
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588797CB: push ebx
        __asm _emit 0x53
        // 0x588797CC: push ecx
        __asm _emit 0x51
        // 0x588797CD: push esi
        __asm _emit 0x56
        // 0x588797CE: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588797D0: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0xB2
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588797D5: jmp 0x588797e9
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x588797D7: push edi
        __asm _emit 0x57
        // 0x588797D8: push ebp
        __asm _emit 0x55
        // 0x588797D9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588797DB: push ebx
        __asm _emit 0x53
        // 0x588797DC: push ecx
        __asm _emit 0x51
        // 0x588797DD: push esi
        __asm _emit 0x56
        // 0x588797DE: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588797E0: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0x4B
        __asm _emit 0xB2
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588797E5: jmp 0x588797e9
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588797E7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588797E9: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588797EE: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588797F0: mov byte ptr [esp + 0x28], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x00
        // 0x588797F5: mov dword ptr [esi + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x588797F8: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0x95
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588797FD: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x58879800: mov ecx, 0xfffb
        __asm _emit 0xB9
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879805: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58879809: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5887980C: mov edx, 0x7fff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879811: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58879815: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x58879817: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0x34
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5887981C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5887981F: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58879823: mov byte ptr [esp + 0x24], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x05
        // 0x58879828: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5887982A: je 0x5887985d
        __asm _emit 0x74
        __asm _emit 0x31
        // 0x5887982C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5887982E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58879830: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58879835: lea ecx, [ebp + 0x33]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x33
        // 0x58879838: push ecx
        __asm _emit 0x51
        // 0x58879839: lea edx, [ebx + 0x190]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887983F: push edx
        __asm _emit 0x52
        // 0x58879840: lea ecx, [ebp + 0x1b]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x1B
        // 0x58879843: push ecx
        __asm _emit 0x51
        // 0x58879844: mov ecx, dword ptr [0x58a24554]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x54
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5887984A: lea edx, [ebx + 0x26]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0x26
        // 0x5887984D: push edx
        __asm _emit 0x52
        // 0x5887984E: push ecx
        __asm _emit 0x51
        // 0x5887984F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58879851: push esi
        __asm _emit 0x56
        // 0x58879852: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58879854: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0x9A
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x58879859: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5887985B: jmp 0x5887985f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5887985D: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5887985F: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58879863: mov dword ptr [esi + 0x74], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x74
        // 0x58879866: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x58879869: add eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x0A
        // 0x5887986C: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58879871: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58879875: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        // 0x58879879: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5887987B: je 0x58879883
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5887987D: push edi
        __asm _emit 0x57
        // 0x5887987E: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0x96
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58879883: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x58879886: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58879888: je 0x58879890
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5887988A: push edi
        __asm _emit 0x57
        // 0x5887988B: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0x96
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58879890: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x58879892: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0x33
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58879897: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5887989A: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5887989E: mov byte ptr [esp + 0x24], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x06
        // 0x588798A3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588798A5: je 0x588798de
        __asm _emit 0x74
        __asm _emit 0x37
        // 0x588798A7: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588798A9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588798AB: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588798B0: lea edx, [ebp + 0x98]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588798B6: push edx
        __asm _emit 0x52
        // 0x588798B7: lea ecx, [ebx + 0x190]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588798BD: push ecx
        __asm _emit 0x51
        // 0x588798BE: lea edx, [ebp + 0x80]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588798C4: push edx
        __asm _emit 0x52
        // 0x588798C5: mov edx, dword ptr [0x58a24530]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588798CB: lea ecx, [ebx + 0x32]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x32
        // 0x588798CE: push ecx
        __asm _emit 0x51
        // 0x588798CF: push edx
        __asm _emit 0x52
        // 0x588798D0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588798D2: push esi
        __asm _emit 0x56
        // 0x588798D3: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588798D5: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0x99
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588798DA: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588798DC: jmp 0x588798e0
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588798DE: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588798E0: mov ax, word ptr [esp + 0x2c]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588798E5: mov dword ptr [esi + 0xc4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588798EB: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x588798EE: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588798F3: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        // 0x588798F7: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588798F9: je 0x58879901
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588798FB: push edi
        __asm _emit 0x57
        // 0x588798FC: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0x96
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58879901: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x58879904: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58879906: je 0x5887990e
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58879908: push edi
        __asm _emit 0x57
        // 0x58879909: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0x95
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887990E: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x58879910: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0x33
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58879915: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58879918: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5887991C: mov byte ptr [esp + 0x24], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x07
        // 0x58879921: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58879923: je 0x5887995c
        __asm _emit 0x74
        __asm _emit 0x37
        // 0x58879925: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58879927: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58879929: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5887992E: lea ecx, [ebp + 0xa5]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0xA5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879934: push ecx
        __asm _emit 0x51
        // 0x58879935: lea edx, [ebx + 0x190]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887993B: push edx
        __asm _emit 0x52
        // 0x5887993C: mov edx, dword ptr [0x58a24530]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58879942: lea ecx, [ebp + 0x8d]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879948: push ecx
        __asm _emit 0x51
        // 0x58879949: add ebx, 0x32
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x32
        // 0x5887994C: push ebx
        __asm _emit 0x53
        // 0x5887994D: push edx
        __asm _emit 0x52
        // 0x5887994E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58879950: push esi
        __asm _emit 0x56
        // 0x58879951: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58879953: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0x99
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x58879958: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5887995A: jmp 0x5887995e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5887995C: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5887995E: mov ax, word ptr [esp + 0x2c]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58879963: mov dword ptr [esi + 0xc8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879969: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x5887996C: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58879971: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        // 0x58879975: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58879977: je 0x5887997f
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58879979: push edi
        __asm _emit 0x57
        // 0x5887997A: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0x95
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887997F: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x58879982: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58879984: je 0x5887998c
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58879986: push edi
        __asm _emit 0x57
        // 0x58879987: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0x95
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887998C: lea ebx, [esi + 0x7c]
        __asm _emit 0x8D
        __asm _emit 0x5E
        __asm _emit 0x7C
        // 0x5887998F: add ebp, 0x32
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x32
        // 0x58879992: mov dword ptr [esp + 0x2c], 0x10
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887999A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588799A0: push 0x184
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588799A5: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0x32
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x588799AA: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588799AD: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588799B1: mov byte ptr [esp + 0x24], 8
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588799B6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588799B8: je 0x588799ec
        __asm _emit 0x74
        __asm _emit 0x32
        // 0x588799BA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588799BC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588799BE: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588799C3: lea ecx, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x588799C6: push ecx
        __asm _emit 0x51
        // 0x588799C7: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588799CB: lea edx, [ecx + 0x190]
        __asm _emit 0x8D
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588799D1: push edx
        __asm _emit 0x52
        // 0x588799D2: push ebp
        __asm _emit 0x55
        // 0x588799D3: add ecx, 0x6f
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x6F
        // 0x588799D6: push ecx
        __asm _emit 0x51
        // 0x588799D7: mov ecx, dword ptr [0x58a24530]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588799DD: push ecx
        __asm _emit 0x51
        // 0x588799DE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588799E0: push esi
        __asm _emit 0x56
        // 0x588799E1: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588799E3: call 0x5875f420
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0x5A
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x588799E8: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588799EA: jmp 0x588799ee
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588799EC: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588799EE: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588799F2: mov dword ptr [ebx], edi
        __asm _emit 0x89
        __asm _emit 0x3B
        // 0x588799F4: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x588799F7: add eax, 0xa
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x0A
        // 0x588799FA: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588799FF: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        // 0x58879A03: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58879A05: je 0x58879a0d
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58879A07: push edi
        __asm _emit 0x57
        // 0x58879A08: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0x95
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58879A0D: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x58879A10: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58879A12: je 0x58879a1a
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58879A14: push edi
        __asm _emit 0x57
        // 0x58879A15: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58879A1A: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58879A1C: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x58879A1F: add ebp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x0C
        // 0x58879A22: sub dword ptr [esp + 0x2c], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x01
        // 0x58879A27: mov dword ptr [eax + 0x5c], 0x10
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x5C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879A2E: jne 0x588799a0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x6C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58879A34: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879A39: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0x32
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58879A3E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58879A41: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58879A45: mov byte ptr [esp + 0x24], 9
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x09
        // 0x58879A4A: mov edi, 0x23
        __asm _emit 0xBF
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879A4F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58879A51: je 0x58879a9d
        __asm _emit 0x74
        __asm _emit 0x4A
        // 0x58879A53: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58879A59: cmp dword ptr [ecx + 0x160], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879A5F: jle 0x58879a78
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58879A61: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879A68: je 0x58879a78
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58879A6A: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879A70: add edx, 0x8c0
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xC0
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879A76: jmp 0x58879a7a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58879A78: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58879A7A: mov ebp, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58879A7E: lea ecx, [ebp + 0x80]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879A84: push ecx
        __asm _emit 0x51
        // 0x58879A85: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58879A89: add ecx, 0xb4
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879A8F: push ecx
        __asm _emit 0x51
        // 0x58879A90: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x58879A92: push edx
        __asm _emit 0x52
        // 0x58879A93: push esi
        __asm _emit 0x56
        // 0x58879A94: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58879A96: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0xD6
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58879A9B: jmp 0x58879aa3
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x58879A9D: mov ebp, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58879AA1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58879AA3: push 0xfc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879AA8: mov byte ptr [esp + 0x28], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x00
        // 0x58879AAD: mov dword ptr [esi + 0xbc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879AB3: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0x31
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58879AB8: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58879ABB: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58879ABF: mov byte ptr [esp + 0x24], 0xa
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x0A
        // 0x58879AC4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58879AC6: je 0x58879b0e
        __asm _emit 0x74
        __asm _emit 0x46
        // 0x58879AC8: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58879ACE: cmp dword ptr [ecx + 0x160], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879AD4: jle 0x58879aed
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58879AD6: cmp dword ptr [ecx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879ADD: je 0x58879aed
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58879ADF: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879AE5: add edx, 0x8c0
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xC0
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879AEB: jmp 0x58879aef
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58879AED: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58879AEF: lea ecx, [ebp + 0x8c]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879AF5: push ecx
        __asm _emit 0x51
        // 0x58879AF6: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58879AFA: add ecx, 0xb4
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879B00: push ecx
        __asm _emit 0x51
        // 0x58879B01: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x58879B03: push edx
        __asm _emit 0x52
        // 0x58879B04: push esi
        __asm _emit 0x56
        // 0x58879B05: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58879B07: call 0x58907100
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0xD5
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58879B0C: jmp 0x58879b10
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58879B0E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58879B10: mov edi, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879B16: mov ebx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58879B1A: mov dword ptr [esi + 0xc0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879B20: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x58879B23: add ebx, 0xa
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x0A
        // 0x58879B26: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58879B2B: mov word ptr [edi + 0x26], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x26
        // 0x58879B2F: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58879B31: je 0x58879b39
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58879B33: push edi
        __asm _emit 0x57
        // 0x58879B34: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58879B39: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x58879B3C: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58879B3E: je 0x58879b46
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58879B40: push edi
        __asm _emit 0x57
        // 0x58879B41: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0x93
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58879B46: mov edi, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879B4C: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x58879B4F: mov word ptr [edi + 0x26], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x26
        // 0x58879B53: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58879B55: je 0x58879b5d
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58879B57: push edi
        __asm _emit 0x57
        // 0x58879B58: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0x93
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58879B5D: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x58879B60: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58879B62: je 0x58879b6a
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58879B64: push edi
        __asm _emit 0x57
        // 0x58879B65: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0x93
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58879B6A: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879B70: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879B75: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0x91
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58879B7A: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879B80: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879B85: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0x91
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58879B8A: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58879B8C: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x58879B8E: mov dword ptr [esi + 0x78], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x78
        // 0x58879B91: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0x30
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58879B96: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58879B98: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58879B9B: mov dword ptr [esp + 0x34], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58879B9F: mov byte ptr [esp + 0x24], 0xb
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x0B
        // 0x58879BA4: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x58879BA6: je 0x58879bd4
        __asm _emit 0x74
        __asm _emit 0x2C
        // 0x58879BA8: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58879BAC: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58879BB0: push edx
        __asm _emit 0x52
        // 0x58879BB1: push ebx
        __asm _emit 0x53
        // 0x58879BB2: push ebx
        __asm _emit 0x53
        // 0x58879BB3: add ebp, 0xf5
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0xF5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879BB9: push ebp
        __asm _emit 0x55
        // 0x58879BBA: add eax, 0x78
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x78
        // 0x58879BBD: push eax
        __asm _emit 0x50
        // 0x58879BBE: push esi
        __asm _emit 0x56
        // 0x58879BBF: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58879BC1: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xDA
        __asm _emit 0x95
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58879BC6: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58879BCC: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x58879BCF: mov dword ptr [edi + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x54
        // 0x58879BD2: jmp 0x58879bd6
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58879BD4: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58879BD6: mov ecx, 0xfffb
        __asm _emit 0xB9
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879BDB: mov dword ptr [esi + 0x70], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x70
        // 0x58879BDE: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4F
        __asm _emit 0x24
        // 0x58879BE2: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58879BE4: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58879BE8: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879BEF: pop ecx
        __asm _emit 0x59
        // 0x58879BF0: pop edi
        __asm _emit 0x5F
        // 0x58879BF1: pop esi
        __asm _emit 0x5E
        // 0x58879BF2: pop ebp
        __asm _emit 0x5D
        // 0x58879BF3: pop ebx
        __asm _emit 0x5B
        // 0x58879BF4: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x58879BF7: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
