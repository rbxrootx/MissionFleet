// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 584 bytes in 1 exact ranges.
// Source symbol alias: FUN_58859070.

// Ghidra body range 0x58859070..0x588592B8; 584 mapped bytes.
extern "C" __declspec(naked) void FUN_58859070_segment_00() {
    __asm {
        // 0x58859070: push esi
        __asm _emit 0x56
        // 0x58859071: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58859073: mov eax, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859079: mov ecx, dword ptr [esi + eax*8 + 0x930]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xC6
        __asm _emit 0x30
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859080: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x58859085: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58859087: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5885908A: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x5885908C: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x5885908F: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x58859091: cmp ecx, 6
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x06
        // 0x58859094: jle 0x588592b6
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885909A: mov edx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588590A0: mov dword ptr [esi + edx*4 + 0x138], 1
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588590AB: mov eax, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588590B1: imul eax, eax, 0xd4
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588590B7: movzx ecx, word ptr [eax + esi + 0x270]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8C
        __asm _emit 0x30
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588590BF: mov edx, dword ptr [esi + ecx*4 + 0x894]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588590C6: push ebx
        __asm _emit 0x53
        // 0x588590C7: lea eax, [esi + ecx*4 + 0x894]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588590CE: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588590D4: push edi
        __asm _emit 0x57
        // 0x588590D5: push edx
        __asm _emit 0x52
        // 0x588590D6: push eax
        __asm _emit 0x50
        // 0x588590D7: call 0x587a1640
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0x85
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x588590DC: mov eax, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588590E2: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588590E4: imul ecx, ecx, 0xd4
        __asm _emit 0x69
        __asm _emit 0xC9
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588590EA: movzx ecx, word ptr [ecx + esi + 0x270]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8C
        __asm _emit 0x31
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588590F2: mov edi, dword ptr [esi + ecx*4 + 0x894]
        __asm _emit 0x8B
        __asm _emit 0xBC
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588590F9: mov ecx, dword ptr [esi + ecx*4 + 0xa4c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x8E
        __asm _emit 0x4C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859100: xor edi, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF7
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859106: add edi, dword ptr [esi + eax*8 + 0x158]
        __asm _emit 0x03
        __asm _emit 0xBC
        __asm _emit 0xC6
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885910D: push edi
        __asm _emit 0x57
        // 0x5885910E: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0xE2
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58859113: mov edx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859119: imul edx, edx, 0xd4
        __asm _emit 0x69
        __asm _emit 0xD2
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885911F: movzx eax, word ptr [edx + esi + 0x270]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x84
        __asm _emit 0x32
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859127: xor edi, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF7
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885912D: mov dword ptr [esi + eax*4 + 0x894], edi
        __asm _emit 0x89
        __asm _emit 0xBC
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859134: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885913A: imul ecx, ecx, 0xd4
        __asm _emit 0x69
        __asm _emit 0xC9
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859140: movzx edx, word ptr [ecx + esi + 0x270]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x94
        __asm _emit 0x31
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859148: mov ecx, dword ptr [esi + edx*4 + 0x894]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x96
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885914F: lea eax, [esi + edx*4 + 0x894]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859156: push ecx
        __asm _emit 0x51
        // 0x58859157: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885915D: push eax
        __asm _emit 0x50
        // 0x5885915E: call 0x587a15e0
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0x84
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58859163: mov edx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859169: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5885916B: mov dword ptr [esi + edx*4 + 0xa8], ebx
        __asm _emit 0x89
        __asm _emit 0x9C
        __asm _emit 0x96
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859172: mov eax, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859178: mov byte ptr [esi + eax + 0xc8], bl
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x06
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885917F: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859185: mov dword ptr [esi + ecx*4 + 0xf8], ebx
        __asm _emit 0x89
        __asm _emit 0x9C
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885918C: mov edx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859192: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58859198: push ebx
        __asm _emit 0x53
        // 0x58859199: lea eax, [esi + edx*4 + 0xf8]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588591A0: push eax
        __asm _emit 0x50
        // 0x588591A1: call 0x587a15e0
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0x84
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x588591A6: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588591AC: mov dword ptr [esi + ecx*8 + 0x158], ebx
        __asm _emit 0x89
        __asm _emit 0x9C
        __asm _emit 0xCE
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588591B3: mov edx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588591B9: mov dword ptr [esi + edx*8 + 0x15c], ebx
        __asm _emit 0x89
        __asm _emit 0x9C
        __asm _emit 0xD6
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588591C0: mov eax, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588591C6: mov dword ptr [esi + eax*8 + 0x198], ebx
        __asm _emit 0x89
        __asm _emit 0x9C
        __asm _emit 0xC6
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588591CD: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588591D3: mov dword ptr [esi + ecx*8 + 0x19c], ebx
        __asm _emit 0x89
        __asm _emit 0x9C
        __asm _emit 0xCE
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588591DA: mov edx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588591E0: xor dword ptr [esi + edx*8 + 0x198], 0x3a9e2b0d
        __asm _emit 0x81
        __asm _emit 0xB4
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0D
        __asm _emit 0x2B
        __asm _emit 0x9E
        __asm _emit 0x3A
        // 0x588591EB: lea eax, [esi + edx*8 + 0x198]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588591F2: mov eax, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588591F8: xor dword ptr [esi + eax*8 + 0x19c], 0x3a9e2b0d
        __asm _emit 0x81
        __asm _emit 0xB4
        __asm _emit 0xC6
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0D
        __asm _emit 0x2B
        __asm _emit 0x9E
        __asm _emit 0x3A
        // 0x58859203: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859209: lea eax, [esi + eax*8 + 0x19c]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0xC6
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859210: mov dword ptr [esi + ecx*8 + 0x92c], ebx
        __asm _emit 0x89
        __asm _emit 0x9C
        __asm _emit 0xCE
        __asm _emit 0x2C
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859217: mov edx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885921D: mov dword ptr [esi + edx*8 + 0x930], ebx
        __asm _emit 0x89
        __asm _emit 0x9C
        __asm _emit 0xD6
        __asm _emit 0x30
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859224: mov eax, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885922A: mov ecx, dword ptr [esi + eax*4 + 0x9e0]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859231: mov dword ptr [ecx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x50
        // 0x58859234: mov edx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885923A: mov ecx, dword ptr [esi + edx*4 + 0x9c0]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x96
        __asm _emit 0xC0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859241: call 0x58793e00
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0xAB
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x58859246: mov eax, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885924C: mov dword ptr [esi + eax*4 + 0x8c8], ebx
        __asm _emit 0x89
        __asm _emit 0x9C
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859253: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859259: mov eax, dword ptr [esi + ecx*4 + 0x978]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859260: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859265: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58859269: mov eax, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885926F: mov dword ptr [esi + eax*4 + 0x9a0], ebx
        __asm _emit 0x89
        __asm _emit 0x9C
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859276: mov eax, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885927C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5885927E: imul ecx, ecx, 0xd4
        __asm _emit 0x69
        __asm _emit 0xC9
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859284: movzx edx, word ptr [ecx + esi + 0x288]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x94
        __asm _emit 0x31
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885928C: mov dword ptr [esi + eax*4 + 0x118], edx
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859293: mov eax, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58859299: mov ecx, dword ptr [esi + eax*8 + 0x15c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xC6
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588592A0: push ecx
        __asm _emit 0x51
        // 0x588592A1: mov ecx, dword ptr [esi + 0xa48]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x48
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588592A7: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0xE0
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588592AC: push ebx
        __asm _emit 0x53
        // 0x588592AD: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588592AF: call 0x58858bd0
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588592B4: pop edi
        __asm _emit 0x5F
        // 0x588592B5: pop ebx
        __asm _emit 0x5B
        // 0x588592B6: pop esi
        __asm _emit 0x5E
        // 0x588592B7: ret
        __asm _emit 0xC3
    }
}
