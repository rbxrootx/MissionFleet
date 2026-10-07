// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1489 bytes in 2 exact ranges.
// Source symbol alias: FUN_58736110.

// Ghidra body range 0x58736110..0x587366A9; 1433 mapped bytes.
extern "C" __declspec(naked) void FUN_58736110_segment_00() {
    __asm {
        // 0x58736110: sub esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x20
        // 0x58736113: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58736118: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5873611A: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5873611E: push ebp
        __asm _emit 0x55
        // 0x5873611F: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x58736121: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x58736124: mov eax, dword ptr [eax + 0x130]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873612A: push esi
        __asm _emit 0x56
        // 0x5873612B: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5873612D: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x5873612F: je 0x587366d7
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736135: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58736137: mov edx, 0x20
        __asm _emit 0xBA
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873613C: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x5873613E: seto cl
        __asm _emit 0x0F
        __asm _emit 0x90
        __asm _emit 0xC1
        // 0x58736141: push edi
        __asm _emit 0x57
        // 0x58736142: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x58736144: or ecx, eax
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x58736146: push ecx
        __asm _emit 0x51
        // 0x58736147: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0xB3
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5873614C: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x10
        // 0x5873614F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58736152: mov dword ptr [ebp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x58736155: cmp dword ptr [ecx + 0x124], esi
        __asm _emit 0x39
        __asm _emit 0xB1
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873615B: je 0x58736693
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x32
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736161: cmp dword ptr [ecx + 0x128], esi
        __asm _emit 0x39
        __asm _emit 0xB1
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736167: jne 0x5873669b
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x2E
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873616D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5873616F: movzx edx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD0
        // 0x58736172: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58736174: shl edx, 0x10
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x10
        // 0x58736177: or eax, edx
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x58736179: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5873617D: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58736181: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58736185: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58736189: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5873618D: mov word ptr [esp + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58736192: mov dword ptr [esp + 0xc], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58736196: cmp dword ptr [ecx + 0x130], esi
        __asm _emit 0x39
        __asm _emit 0xB1
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873619C: jbe 0x587366d6
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587361A2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587361A4: push ebx
        __asm _emit 0x53
        // 0x587361A5: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x587361A8: lea ecx, [esi + eax]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x06
        // 0x587361AB: movzx eax, word ptr [ecx + 0xe]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x41
        __asm _emit 0x0E
        // 0x587361AF: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x587361B2: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587361B4: shl edi, 4
        __asm _emit 0xC1
        __asm _emit 0xE7
        __asm _emit 0x04
        // 0x587361B7: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x587361B9: mov eax, dword ptr [ecx + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x587361BC: shr eax, 1
        __asm _emit 0xD1
        __asm _emit 0xE8
        // 0x587361BE: lea eax, [eax + edi*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xF8
        // 0x587361C1: imul eax, eax, 0xe0
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587361C7: mov eax, dword ptr [eax + 0x589cfcec]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xEC
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587361CD: mov dword ptr [ecx + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x64
        // 0x587361D0: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x587361D3: mov ax, word ptr [esi + ecx + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x0E
        __asm _emit 0x0E
        // 0x587361D8: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x587361DB: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x587361DF: mov byte ptr [ecx + edx + 1], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x01
        // 0x587361E3: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x587361E6: mov cx, word ptr [esi + eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x06
        __asm _emit 0x0E
        // 0x587361EB: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x587361EE: shr cx, 0xc
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x0C
        // 0x587361F2: and cl, 0xf
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x0F
        // 0x587361F5: mov byte ptr [edx + eax], cl
        __asm _emit 0x88
        __asm _emit 0x0C
        __asm _emit 0x02
        // 0x587361F8: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x587361FB: movzx eax, byte ptr [esi + ecx + 0xe]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x44
        __asm _emit 0x0E
        __asm _emit 0x0E
        // 0x58736200: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x58736203: and al, 0xf
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x58736205: mov byte ptr [ecx + edx + 3], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x03
        // 0x58736209: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x5873620C: movzx ecx, word ptr [esi + ecx + 8]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4C
        __asm _emit 0x0E
        __asm _emit 0x08
        // 0x58736211: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x58736214: xor ecx, dword ptr [eax + edx + 0x14]
        __asm _emit 0x33
        __asm _emit 0x4C
        __asm _emit 0x10
        __asm _emit 0x14
        // 0x58736218: lea eax, [eax + edx + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0x14
        // 0x5873621C: and ecx, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736222: xor dword ptr [eax], ecx
        __asm _emit 0x31
        __asm _emit 0x08
        // 0x58736224: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x58736227: movzx ecx, word ptr [esi + ecx + 0xa]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4C
        __asm _emit 0x0E
        __asm _emit 0x0A
        // 0x5873622C: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x5873622F: shl ecx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x0A
        // 0x58736232: xor ecx, dword ptr [eax + edx + 0x14]
        __asm _emit 0x33
        __asm _emit 0x4C
        __asm _emit 0x10
        __asm _emit 0x14
        // 0x58736236: lea eax, [eax + edx + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0x14
        // 0x5873623A: and ecx, 0xffc00
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0xFC
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58736240: xor dword ptr [eax], ecx
        __asm _emit 0x31
        __asm _emit 0x08
        // 0x58736242: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x58736245: movzx ecx, word ptr [esi + ecx + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4C
        __asm _emit 0x0E
        __asm _emit 0x0C
        // 0x5873624A: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x5873624D: lea eax, [eax + edx + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0x14
        // 0x58736251: shl ecx, 0x14
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x14
        // 0x58736254: xor ecx, dword ptr [eax]
        __asm _emit 0x33
        __asm _emit 0x08
        // 0x58736256: and ecx, 0x3ff00000
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xF0
        __asm _emit 0x3F
        // 0x5873625C: xor dword ptr [eax], ecx
        __asm _emit 0x31
        __asm _emit 0x08
        // 0x5873625E: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x58736261: lea ecx, [eax + edx]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x10
        // 0x58736264: mov eax, dword ptr [ecx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x14
        // 0x58736267: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58736269: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5873626B: shr edi, 0x14
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x14
        // 0x5873626E: shr ebx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x58736271: and edi, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xE7
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736277: and ebx, 0x3ff
        __asm _emit 0x81
        __asm _emit 0xE3
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873627D: and eax, 0x3ff
        __asm _emit 0x25
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736282: add edi, ebx
        __asm _emit 0x03
        __asm _emit 0xFB
        // 0x58736284: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xF8
        // 0x58736286: mov dword ptr [ecx + 4], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x04
        // 0x58736289: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x5873628C: mov al, byte ptr [ecx + edx + 3]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x03
        // 0x58736290: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x58736292: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x58736294: jne 0x5873629c
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x58736296: mov byte ptr [ecx + 0x18], 0x64
        __asm _emit 0xC6
        __asm _emit 0x41
        __asm _emit 0x18
        __asm _emit 0x64
        // 0x5873629A: jmp 0x587362c2
        __asm _emit 0xEB
        __asm _emit 0x26
        // 0x5873629C: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x5873629E: jne 0x587362a6
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x587362A0: mov byte ptr [ecx + 0x18], 0x6a
        __asm _emit 0xC6
        __asm _emit 0x41
        __asm _emit 0x18
        __asm _emit 0x6A
        // 0x587362A4: jmp 0x587362c2
        __asm _emit 0xEB
        __asm _emit 0x1C
        // 0x587362A6: cmp al, 2
        __asm _emit 0x3C
        __asm _emit 0x02
        // 0x587362A8: jne 0x587362b0
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x587362AA: mov byte ptr [ecx + 0x18], 0x6e
        __asm _emit 0xC6
        __asm _emit 0x41
        __asm _emit 0x18
        __asm _emit 0x6E
        // 0x587362AE: jmp 0x587362c2
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x587362B0: cmp al, 3
        __asm _emit 0x3C
        __asm _emit 0x03
        // 0x587362B2: jne 0x587362ba
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x587362B4: mov byte ptr [ecx + 0x18], 0x64
        __asm _emit 0xC6
        __asm _emit 0x41
        __asm _emit 0x18
        __asm _emit 0x64
        // 0x587362B8: jmp 0x587362c2
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x587362BA: cmp al, 4
        __asm _emit 0x3C
        __asm _emit 0x04
        // 0x587362BC: jne 0x587362c2
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x587362BE: mov byte ptr [ecx + 0x18], 0x71
        __asm _emit 0xC6
        __asm _emit 0x41
        __asm _emit 0x18
        __asm _emit 0x71
        // 0x587362C2: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x587362C5: movzx eax, word ptr [esi + eax + 0x1c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x1C
        // 0x587362CA: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x587362CD: mov word ptr [ecx + edx + 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x08
        // 0x587362D2: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x587362D5: mov cx, word ptr [esi + ecx + 0x20]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x0E
        __asm _emit 0x20
        // 0x587362DA: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x587362DD: mov word ptr [eax + edx + 0xa], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x10
        __asm _emit 0x0A
        // 0x587362E2: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x587362E5: movzx eax, word ptr [esi + eax + 0x1e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x1E
        // 0x587362EA: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x587362ED: mov word ptr [ecx + edx + 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x0C
        // 0x587362F2: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x587362F5: mov eax, dword ptr [ecx + esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x31
        __asm _emit 0x64
        // 0x587362F9: add ecx, esi
        __asm _emit 0x03
        __asm _emit 0xCE
        // 0x587362FB: test eax, 0x10000000
        __asm _emit 0xA9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        // 0x58736300: jne 0x587365fd
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736306: mov edi, 0xf000
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873630B: test word ptr [ecx + 0xe], di
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0x79
        __asm _emit 0x0E
        // 0x5873630F: je 0x587365fd
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736315: test eax, 0x3ff
        __asm _emit 0xA9
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873631A: je 0x58736371
        __asm _emit 0x74
        __asm _emit 0x55
        // 0x5873631C: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x5873631F: mov ecx, dword ptr [esp + 0x16]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x16
        // 0x58736323: mov byte ptr [eax + edx + 2], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x01
        // 0x58736328: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x5873632B: push ecx
        __asm _emit 0x51
        // 0x5873632C: movzx ecx, word ptr [esi + eax + 0x16]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4C
        __asm _emit 0x06
        __asm _emit 0x16
        // 0x58736331: push ecx
        __asm _emit 0x51
        // 0x58736332: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58736334: call 0x587358c0
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58736339: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x5873633C: mov word ptr [ecx + edx + 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x0E
        // 0x58736341: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58736345: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x58736348: push eax
        __asm _emit 0x50
        // 0x58736349: movzx eax, word ptr [esi + ecx + 0x18]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x0E
        __asm _emit 0x18
        // 0x5873634E: push eax
        __asm _emit 0x50
        // 0x5873634F: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58736351: call 0x587358c0
        __asm _emit 0xE8
        __asm _emit 0x6A
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58736356: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x58736359: mov word ptr [ecx + edx + 0x10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x10
        // 0x5873635E: mov eax, dword ptr [esp + 0x1a]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1A
        // 0x58736362: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x58736365: push eax
        __asm _emit 0x50
        // 0x58736366: movzx eax, word ptr [esi + ecx + 0x1a]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x0E
        __asm _emit 0x1A
        // 0x5873636B: push eax
        __asm _emit 0x50
        // 0x5873636C: jmp 0x58736650
        __asm _emit 0xE9
        __asm _emit 0xDF
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736371: test eax, 0x2ffffc00
        __asm _emit 0xA9
        __asm _emit 0x00
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0x2F
        // 0x58736376: je 0x5873665f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873637C: test eax, 0xc000000
        __asm _emit 0xA9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0C
        // 0x58736381: jne 0x58736461
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xDA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736387: test eax, 0x80000
        __asm _emit 0xA9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5873638C: je 0x58736402
        __asm _emit 0x74
        __asm _emit 0x74
        // 0x5873638E: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x58736391: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58736395: mov byte ptr [eax + edx + 2], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x04
        // 0x5873639A: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x5873639D: movzx eax, word ptr [esi + ecx + 0x14]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x0E
        __asm _emit 0x14
        // 0x587363A2: push edi
        __asm _emit 0x57
        // 0x587363A3: push eax
        __asm _emit 0x50
        // 0x587363A4: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587363A6: call 0x587358c0
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587363AB: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x587363AE: mov word ptr [ecx + edx + 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x0E
        // 0x587363B3: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x587363B6: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xC6
        // 0x587363B8: test dword ptr [eax + 0x64], 0x20000
        __asm _emit 0xF7
        __asm _emit 0x40
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587363BF: je 0x587363d6
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x587363C1: movzx ecx, word ptr [eax + 0x14]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x587363C5: push edi
        __asm _emit 0x57
        // 0x587363C6: push ecx
        __asm _emit 0x51
        // 0x587363C7: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587363C9: call 0x587358c0
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587363CE: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x587363D1: mov word ptr [ecx + edx + 0x10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x10
        // 0x587363D6: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x587363D9: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xC6
        // 0x587363DB: test dword ptr [eax + 0x64], 0x40000
        __asm _emit 0xF7
        __asm _emit 0x40
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587363E2: je 0x587364bd
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587363E8: movzx ecx, word ptr [eax + 0x14]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x587363EC: push edi
        __asm _emit 0x57
        // 0x587363ED: push ecx
        __asm _emit 0x51
        // 0x587363EE: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587363F0: call 0x587358c0
        __asm _emit 0xE8
        __asm _emit 0xCB
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587363F5: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x587363F8: mov word ptr [ecx + edx + 0x12], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x12
        // 0x587363FD: jmp 0x587364bd
        __asm _emit 0xE9
        __asm _emit 0xBB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736402: test eax, 0x1000000
        __asm _emit 0xA9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x58736407: je 0x58736433
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x58736409: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x5873640C: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58736410: mov byte ptr [eax + edx + 2], 9
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x09
        // 0x58736415: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x58736418: movzx eax, word ptr [esi + ecx + 0x14]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x0E
        __asm _emit 0x14
        // 0x5873641D: push edi
        __asm _emit 0x57
        // 0x5873641E: push eax
        __asm _emit 0x50
        // 0x5873641F: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58736421: call 0x587358c0
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58736426: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x58736429: mov word ptr [ecx + edx + 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x0E
        // 0x5873642E: jmp 0x587364bd
        __asm _emit 0xE9
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736433: test eax, 0x2000000
        __asm _emit 0xA9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x58736438: je 0x587364b9
        __asm _emit 0x74
        __asm _emit 0x7F
        // 0x5873643A: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x5873643D: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58736441: mov byte ptr [eax + edx + 2], 0xa
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x0A
        // 0x58736446: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x58736449: movzx eax, word ptr [esi + ecx + 0x14]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x0E
        __asm _emit 0x14
        // 0x5873644E: push edi
        __asm _emit 0x57
        // 0x5873644F: push eax
        __asm _emit 0x50
        // 0x58736450: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58736452: call 0x587358c0
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58736457: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x5873645A: mov word ptr [ecx + edx + 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x0E
        // 0x5873645F: jmp 0x587364bd
        __asm _emit 0xEB
        __asm _emit 0x5C
        // 0x58736461: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x58736464: mov byte ptr [eax + edx + 2], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x02
        // 0x58736469: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x5873646C: test dword ptr [esi + ecx + 0x64], 0x4000000
        __asm _emit 0xF7
        __asm _emit 0x44
        __asm _emit 0x0E
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x58736474: lea eax, [esi + ecx]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x0E
        // 0x58736477: je 0x58736492
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x58736479: mov ecx, dword ptr [esp + 0x22]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x22
        // 0x5873647D: movzx eax, word ptr [eax + 0x22]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x40
        __asm _emit 0x22
        // 0x58736481: push ecx
        __asm _emit 0x51
        // 0x58736482: push eax
        __asm _emit 0x50
        // 0x58736483: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58736485: call 0x587358c0
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873648A: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x5873648D: mov word ptr [ecx + edx + 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x0E
        // 0x58736492: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x58736495: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xC6
        // 0x58736497: test dword ptr [eax + 0x64], 0x8000000
        __asm _emit 0xF7
        __asm _emit 0x40
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        // 0x5873649E: je 0x587364b9
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x587364A0: mov ecx, dword ptr [esp + 0x22]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x22
        // 0x587364A4: movzx eax, word ptr [eax + 0x22]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x40
        __asm _emit 0x22
        // 0x587364A8: push ecx
        __asm _emit 0x51
        // 0x587364A9: push eax
        __asm _emit 0x50
        // 0x587364AA: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587364AC: call 0x587358c0
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587364B1: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x587364B4: mov word ptr [ecx + edx + 0x10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x10
        // 0x587364B9: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587364BD: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x587364C0: mov eax, dword ptr [esi + eax + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x64
        // 0x587364C4: test eax, 0x10000
        __asm _emit 0xA9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587364C9: je 0x587364d8
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587364CB: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x587364CE: mov byte ptr [ecx + edx + 2], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x02
        __asm _emit 0x05
        // 0x587364D3: jmp 0x58736646
        __asm _emit 0xE9
        __asm _emit 0x6E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587364D8: test eax, 0x20000000
        __asm _emit 0xA9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        // 0x587364DD: je 0x58736505
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x587364DF: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x587364E2: mov byte ptr [eax + edx + 2], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x06
        // 0x587364E7: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x587364EA: movzx eax, word ptr [esi + ecx + 0x14]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x0E
        __asm _emit 0x14
        // 0x587364EF: push edi
        __asm _emit 0x57
        // 0x587364F0: push eax
        __asm _emit 0x50
        // 0x587364F1: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587364F3: call 0x587358c0
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587364F8: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x587364FB: mov word ptr [ecx + edx + 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x0E
        // 0x58736500: jmp 0x5873665f
        __asm _emit 0xE9
        __asm _emit 0x5A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736505: test eax, 0x80203c00
        __asm _emit 0xA9
        __asm _emit 0x00
        __asm _emit 0x3C
        __asm _emit 0x20
        __asm _emit 0x80
        // 0x5873650A: je 0x587365ab
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736510: test eax, 0x80200400
        __asm _emit 0xA9
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x20
        __asm _emit 0x80
        // 0x58736515: je 0x5873651f
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58736517: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x5873651A: mov byte ptr [eax + edx + 2], 0xb
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x0B
        // 0x5873651F: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x58736522: test dword ptr [esi + ecx + 0x64], 0x800
        __asm _emit 0xF7
        __asm _emit 0x44
        __asm _emit 0x0E
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873652A: je 0x58736534
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5873652C: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x5873652F: mov byte ptr [eax + edx + 2], 0xc
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x0C
        // 0x58736534: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x58736537: test dword ptr [esi + ecx + 0x64], 0x2000
        __asm _emit 0xF7
        __asm _emit 0x44
        __asm _emit 0x0E
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873653F: je 0x58736549
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58736541: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x58736544: mov byte ptr [eax + edx + 2], 0xd
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x0D
        // 0x58736549: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x5873654C: test dword ptr [esi + ecx + 0x64], 0x1000
        __asm _emit 0xF7
        __asm _emit 0x44
        __asm _emit 0x0E
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736554: je 0x5873655e
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58736556: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x58736559: mov byte ptr [eax + edx + 2], 0xe
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x0E
        // 0x5873655E: mov ecx, dword ptr [esp + 0x26]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x26
        // 0x58736562: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x58736565: push ecx
        __asm _emit 0x51
        // 0x58736566: movzx ecx, word ptr [esi + eax + 0x26]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4C
        __asm _emit 0x06
        __asm _emit 0x26
        // 0x5873656B: push ecx
        __asm _emit 0x51
        // 0x5873656C: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x5873656E: call 0x587358c0
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58736573: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x58736576: mov word ptr [ecx + edx + 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x0E
        // 0x5873657B: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5873657F: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x58736582: push eax
        __asm _emit 0x50
        // 0x58736583: movzx eax, word ptr [esi + ecx + 0x28]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x0E
        __asm _emit 0x28
        // 0x58736588: push eax
        __asm _emit 0x50
        // 0x58736589: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x5873658B: call 0x587358c0
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58736590: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x58736593: mov word ptr [ecx + edx + 0x10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x10
        // 0x58736598: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5873659C: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x5873659F: push eax
        __asm _emit 0x50
        // 0x587365A0: movzx eax, word ptr [esi + ecx + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x0E
        __asm _emit 0x24
        // 0x587365A5: push eax
        __asm _emit 0x50
        // 0x587365A6: jmp 0x58736650
        __asm _emit 0xE9
        __asm _emit 0xA5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587365AB: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x587365AE: mov byte ptr [eax + edx + 2], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x03
        // 0x587365B3: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x587365B6: test dword ptr [esi + ecx + 0x64], 0x10000
        __asm _emit 0xF7
        __asm _emit 0x44
        __asm _emit 0x0E
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587365BE: lea eax, [esi + ecx]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x0E
        // 0x587365C1: je 0x587365d8
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x587365C3: movzx eax, word ptr [eax + 0x14]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x40
        __asm _emit 0x14
        // 0x587365C7: push edi
        __asm _emit 0x57
        // 0x587365C8: push eax
        __asm _emit 0x50
        // 0x587365C9: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587365CB: call 0x587358c0
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587365D0: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x587365D3: mov word ptr [ecx + edx + 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x0E
        // 0x587365D8: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x587365DB: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xC6
        // 0x587365DD: test dword ptr [eax + 0x64], 0x20000
        __asm _emit 0xF7
        __asm _emit 0x40
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587365E4: je 0x5873665f
        __asm _emit 0x74
        __asm _emit 0x79
        // 0x587365E6: movzx ecx, word ptr [eax + 0x14]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x587365EA: push edi
        __asm _emit 0x57
        // 0x587365EB: push ecx
        __asm _emit 0x51
        // 0x587365EC: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587365EE: call 0x587358c0
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587365F3: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x587365F6: mov word ptr [ecx + edx + 0x10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x10
        // 0x587365FB: jmp 0x5873665f
        __asm _emit 0xEB
        __asm _emit 0x62
        // 0x587365FD: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x58736600: mov byte ptr [eax + edx + 2], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58736605: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x58736608: movzx eax, word ptr [esi + ecx + 0xe]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x0E
        __asm _emit 0x0E
        // 0x5873660D: shr eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x58736610: and eax, 0xff
        __asm _emit 0x25
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736615: push eax
        __asm _emit 0x50
        // 0x58736616: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58736618: call 0x58735840
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873661D: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58736621: movzx cx, al
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC8
        // 0x58736625: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x58736628: mov word ptr [eax + edx + 0xe], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x10
        __asm _emit 0x0E
        // 0x5873662D: mov ecx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x14
        // 0x58736630: movzx eax, word ptr [esi + ecx + 0x14]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x0E
        __asm _emit 0x14
        // 0x58736635: push edi
        __asm _emit 0x57
        // 0x58736636: push eax
        __asm _emit 0x50
        // 0x58736637: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58736639: call 0x587358c0
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873663E: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x58736641: mov word ptr [ecx + edx + 0x10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x10
        // 0x58736646: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x58736649: movzx ecx, word ptr [esi + eax + 0x14]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4C
        __asm _emit 0x06
        __asm _emit 0x14
        // 0x5873664E: push edi
        __asm _emit 0x57
        // 0x5873664F: push ecx
        __asm _emit 0x51
        // 0x58736650: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58736652: call 0x587358c0
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0xF2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58736657: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x5873665A: mov word ptr [ecx + edx + 0x12], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x12
        // 0x5873665F: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58736663: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x10
        // 0x58736666: inc eax
        __asm _emit 0x40
        // 0x58736667: add esi, 0x180
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873666D: add edx, 0x20
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x20
        // 0x58736670: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58736674: cmp eax, dword ptr [ecx + 0x130]
        __asm _emit 0x3B
        __asm _emit 0x81
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873667A: jb 0x587361a5
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0x25
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58736680: pop ebx
        __asm _emit 0x5B
        // 0x58736681: pop edi
        __asm _emit 0x5F
        // 0x58736682: pop esi
        __asm _emit 0x5E
        // 0x58736683: pop ebp
        __asm _emit 0x5D
        // 0x58736684: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58736688: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5873668A: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x4B
        __asm _emit 0x65
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873668F: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x20
        // 0x58736692: ret
        __asm _emit 0xC3
        // 0x58736693: cmp dword ptr [ecx + 0x128], esi
        __asm _emit 0x39
        __asm _emit 0xB1
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58736699: je 0x587366d6
        __asm _emit 0x74
        __asm _emit 0x3B
        // 0x5873669B: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5873669D: cmp dword ptr [ecx + 0x130], esi
        __asm _emit 0x39
        __asm _emit 0xB1
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587366A3: jbe 0x587366d6
        __asm _emit 0x76
        __asm _emit 0x31
        // 0x587366A5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587366A7: jmp 0x587366b0
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra body range 0x587366B0..0x587366E8; 56 mapped bytes.
extern "C" __declspec(naked) void FUN_58736110_segment_01() {
    __asm {
        // 0x587366B0: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x10
        // 0x587366B3: mov esi, dword ptr [ecx + 0x128]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587366B9: mov edi, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x18
        // 0x587366BC: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xF0
        // 0x587366BE: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xF8
        // 0x587366C0: mov ecx, 8
        __asm _emit 0xB9
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587366C5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x587366C7: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x10
        // 0x587366CA: inc edx
        __asm _emit 0x42
        // 0x587366CB: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x587366CE: cmp edx, dword ptr [ecx + 0x130]
        __asm _emit 0x3B
        __asm _emit 0x91
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587366D4: jb 0x587366b0
        __asm _emit 0x72
        __asm _emit 0xDA
        // 0x587366D6: pop edi
        __asm _emit 0x5F
        // 0x587366D7: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587366DB: pop esi
        __asm _emit 0x5E
        // 0x587366DC: pop ebp
        __asm _emit 0x5D
        // 0x587366DD: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x587366DF: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587366E4: add esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x20
        // 0x587366E7: ret
        __asm _emit 0xC3
    }
}
