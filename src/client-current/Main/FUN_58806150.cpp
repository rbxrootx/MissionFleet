// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58806150 .. +0x9E4 bytes.
// Source symbol alias: FUN_58806150.
extern "C" __declspec(naked) void FUN_58806150() {
    __asm {
        // 0x58806150: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58806152: push 0x58982c74
        __asm _emit 0x68
        __asm _emit 0x74
        __asm _emit 0x2C
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58806157: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880615D: push eax
        __asm _emit 0x50
        // 0x5880615E: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x58806161: push ebx
        __asm _emit 0x53
        // 0x58806162: push ebp
        __asm _emit 0x55
        // 0x58806163: push esi
        __asm _emit 0x56
        // 0x58806164: push edi
        __asm _emit 0x57
        // 0x58806165: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5880616A: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5880616C: push eax
        __asm _emit 0x50
        // 0x5880616D: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58806171: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806177: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58806179: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5880617D: mov eax, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58806181: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58806185: mov edx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58806189: mov edi, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5880618D: mov ebx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58806191: push eax
        __asm _emit 0x50
        // 0x58806192: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58806196: push ecx
        __asm _emit 0x51
        // 0x58806197: push edx
        __asm _emit 0x52
        // 0x58806198: push edi
        __asm _emit 0x57
        // 0x58806199: push ebx
        __asm _emit 0x53
        // 0x5880619A: push eax
        __asm _emit 0x50
        // 0x5880619B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5880619D: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0xCF
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x588061A2: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588061A8: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588061AD: mov dword ptr [esi + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x588061B0: mov ebp, 0x100
        __asm _emit 0xBD
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588061B5: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588061B7: mov dword ptr [esi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x50
        // 0x588061BA: mov dword ptr [esi + 0x58], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x58
        // 0x588061BD: mov dword ptr [esi + 0x5c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x5C
        // 0x588061C0: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588061C2: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x588061C4: mov edx, 0x13c
        __asm _emit 0xBA
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588061C9: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x588061CB: seto cl
        __asm _emit 0x0F
        __asm _emit 0x90
        __asm _emit 0xC1
        // 0x588061CE: mov dword ptr [esi], 0x5899d3d8
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xD8
        __asm _emit 0xD3
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588061D4: mov dword ptr [esp + 0x24], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588061D8: mov dword ptr [esi + 0x24c], 0x5899d3d0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xD0
        __asm _emit 0xD3
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588061E2: mov dword ptr [esi + 0x264], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588061E8: mov dword ptr [esi + 0x250], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588061EE: mov dword ptr [esi + 0x254], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588061F4: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x588061F6: or ecx, eax
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x588061F8: push ecx
        __asm _emit 0x51
        // 0x588061F9: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0xB3
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x588061FE: mov dword ptr [esi + 0x260], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806204: mov dword ptr [esi + 0x258], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880620A: mov dword ptr [esi + 0x25c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806210: mov dword ptr [esi + 0x254], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806216: movzx eax, word ptr [esi + 0x26]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x46
        __asm _emit 0x26
        // 0x5880621A: lea ecx, [eax + 0x7d0]
        __asm _emit 0x8D
        __asm _emit 0x88
        __asm _emit 0xD0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806220: add eax, 0x5dc
        __asm _emit 0x05
        __asm _emit 0xDC
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806225: movzx edx, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD1
        // 0x58806228: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x5880622B: push 0x20
        __asm _emit 0x6A
        __asm _emit 0x20
        // 0x5880622D: mov byte ptr [esp + 0x2c], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x01
        // 0x58806232: mov dword ptr [esi + 0x58], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x58
        // 0x58806235: mov dword ptr [esi + 0x5c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x5C
        // 0x58806238: mov dword ptr [esp + 0x34], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5880623C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58806240: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0xB2
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x58806245: push 0x20
        __asm _emit 0x6A
        __asm _emit 0x20
        // 0x58806247: mov dword ptr [esi + 0x108], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880624D: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0xB2
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x58806252: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58806255: mov dword ptr [esi + 0x104], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880625B: jmp 0x58806260
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x5880625D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58806260: push 0x50
        __asm _emit 0x6A
        __asm _emit 0x50
        // 0x58806262: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0x69
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58806267: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5880626A: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5880626E: mov byte ptr [esp + 0x24], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x58806273: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58806275: je 0x5880628c
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x58806277: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58806279: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5880627B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5880627D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5880627F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58806281: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58806283: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58806285: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0xCF
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5880628A: jmp 0x5880628e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5880628C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5880628E: mov ecx, dword ptr [esi + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806294: mov dword ptr [edi + ecx], eax
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x0F
        // 0x58806297: mov edx, dword ptr [esi + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880629D: mov eax, dword ptr [edi + edx]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x17
        // 0x588062A0: mov ecx, 0xbfff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588062A5: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588062A9: mov edx, dword ptr [esi + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588062AF: mov eax, dword ptr [edi + edx]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x17
        // 0x588062B2: mov ecx, 0x7fff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588062B7: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588062BB: mov edx, dword ptr [esi + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588062C1: mov ebx, dword ptr [edi + edx]
        __asm _emit 0x8B
        __asm _emit 0x1C
        __asm _emit 0x17
        // 0x588062C4: mov ecx, dword ptr [ebx + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x40
        // 0x588062C7: mov eax, 0x190
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588062CC: mov byte ptr [esp + 0x24], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x588062D1: mov word ptr [ebx + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x26
        // 0x588062D5: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588062D7: je 0x588062df
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588062D9: push ebx
        __asm _emit 0x53
        // 0x588062DA: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0xCC
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x588062DF: mov ecx, dword ptr [ebx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x30
        // 0x588062E2: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588062E4: je 0x588062ec
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588062E6: push ebx
        __asm _emit 0x53
        // 0x588062E7: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0xCB
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x588062EC: push 0x1000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588062F1: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0xB2
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x588062F6: mov ecx, dword ptr [esi + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588062FC: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588062FF: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58806301: mov dword ptr [edi + ecx], eax
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x0F
        // 0x58806304: mov dword ptr [esp + 0x40], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58806308: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x5880630A: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0x69
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x5880630F: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x58806311: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58806314: mov dword ptr [esp + 0x3c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58806318: mov byte ptr [esp + 0x24], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x03
        // 0x5880631D: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5880631F: je 0x588063ab
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806325: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880632A: cmp dword ptr [eax + 0x160], 0xd5
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xD5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806334: jle 0x5880634d
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58806336: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880633D: je 0x5880634d
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5880633F: mov ebx, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x98
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806345: add ebx, 0x3540
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0x40
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880634B: jmp 0x5880634f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5880634D: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5880634F: mov edx, dword ptr [esi + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806355: mov eax, dword ptr [edi + edx]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x17
        // 0x58806358: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5880635A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5880635C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5880635E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58806360: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58806362: push eax
        __asm _emit 0x50
        // 0x58806363: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58806365: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0xCE
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5880636A: mov dword ptr [ebp], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58806371: mov dword ptr [ebp + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806378: mov dword ptr [ebp + 0x54], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0x54
        // 0x5880637B: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5880637D: je 0x588063a5
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x5880637F: mov eax, dword ptr [ebx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x18
        // 0x58806382: mov dword ptr [ebp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x58806385: mov ecx, dword ptr [ebx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x1C
        // 0x58806388: lea eax, [ebx + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x43
        __asm _emit 0x20
        // 0x5880638B: mov dword ptr [ebp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0x10
        // 0x5880638E: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58806390: mov dword ptr [ebp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x14
        // 0x58806393: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58806396: mov dword ptr [ebp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x58806399: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5880639C: mov dword ptr [ebp + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x1C
        // 0x5880639F: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588063A2: mov dword ptr [ebp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x20
        // 0x588063A5: mov ebx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588063A9: jmp 0x588063ad
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588063AB: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x588063AD: mov ecx, dword ptr [esi + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588063B3: mov edx, dword ptr [edi + ecx]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x0F
        // 0x588063B6: mov dword ptr [ebx + edx], ebp
        __asm _emit 0x89
        __asm _emit 0x2C
        __asm _emit 0x13
        // 0x588063B9: mov eax, dword ptr [esi + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588063BF: mov ecx, dword ptr [edi + eax]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x07
        // 0x588063C2: mov ecx, dword ptr [ecx + ebx]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x19
        // 0x588063C5: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x588063C7: mov byte ptr [esp + 0x28], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x01
        // 0x588063CC: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0xC9
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x588063D1: mov edx, dword ptr [esi + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588063D7: mov eax, dword ptr [edi + edx]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x17
        // 0x588063DA: mov ecx, dword ptr [eax + ebx]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x18
        // 0x588063DD: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588063E2: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0xC9
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x588063E7: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x588063EA: cmp ebx, 0x1000
        __asm _emit 0x81
        __asm _emit 0xFB
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588063F0: mov dword ptr [esp + 0x40], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588063F4: jl 0x58806308
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x0E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588063FA: mov ecx, dword ptr [esi + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806400: mov edx, dword ptr [edi + ecx]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x0F
        // 0x58806403: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58806405: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880640A: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5880640E: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58806411: cmp edi, 0x20
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x20
        // 0x58806414: jl 0x58806260
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x46
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5880641A: push 0x208
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880641F: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0x68
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58806424: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58806427: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5880642B: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5880642D: mov byte ptr [esp + 0x24], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58806432: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58806434: je 0x58806449
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x58806436: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58806438: push ebx
        __asm _emit 0x53
        // 0x58806439: push ebx
        __asm _emit 0x53
        // 0x5880643A: push -0x64
        __asm _emit 0x6A
        __asm _emit 0x9C
        // 0x5880643C: push ebx
        __asm _emit 0x53
        // 0x5880643D: push esi
        __asm _emit 0x56
        // 0x5880643E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58806440: call 0x588a7310
        __asm _emit 0xE8
        __asm _emit 0xCB
        __asm _emit 0x0E
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58806445: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58806447: jmp 0x5880644b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58806449: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5880644B: mov dx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x26
        // 0x5880644F: add dx, word ptr [esp + 0x34]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58806454: mov dword ptr [esi + 0x174], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880645A: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x5880645D: movzx eax, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC2
        // 0x58806460: mov byte ptr [esp + 0x24], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x58806465: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        // 0x58806469: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5880646B: je 0x58806473
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5880646D: push edi
        __asm _emit 0x57
        // 0x5880646E: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0xCA
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58806473: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x58806476: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58806478: je 0x58806480
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5880647A: push edi
        __asm _emit 0x57
        // 0x5880647B: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0xCA
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58806480: mov eax, dword ptr [esi + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806486: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5880648A: mov edx, 0xe5ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880648F: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58806492: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806497: or cx, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xCA
        // 0x5880649A: mov word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5880649E: mov eax, dword ptr [esi + 0x174]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588064A4: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x588064A9: lea eax, [esi + 0x150]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588064AF: mov dword ptr [esp + 0x38], 0x8f
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x8F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588064B7: mov dword ptr [esp + 0x3c], 0x23c0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0xC0
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588064BF: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588064C3: mov dword ptr [esp + 0x30], 8
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588064CB: jmp 0x588064d0
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x588064CD: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x588064D0: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x588064D2: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0x67
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x588064D7: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588064D9: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588064DC: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588064E0: mov byte ptr [esp + 0x24], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x05
        // 0x588064E5: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588064E7: je 0x58806567
        __asm _emit 0x74
        __asm _emit 0x7E
        // 0x588064E9: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588064EE: cmp dword ptr [eax + 0x160], 0x9f
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x9F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588064F8: jle 0x58806510
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588064FA: cmp dword ptr [eax + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806500: je 0x58806510
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58806502: mov ebp, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0xA8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806508: add ebp, 0x27c0
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0xC0
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880650E: jmp 0x58806512
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58806510: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58806512: mov eax, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806518: mov ecx, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880651E: push 0x190
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806523: push ebx
        __asm _emit 0x53
        // 0x58806524: push ebx
        __asm _emit 0x53
        // 0x58806525: push eax
        __asm _emit 0x50
        // 0x58806526: push ecx
        __asm _emit 0x51
        // 0x58806527: push ebx
        __asm _emit 0x53
        // 0x58806528: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5880652A: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0xCC
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5880652F: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58806535: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x58806538: mov dword ptr [edi + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x54
        // 0x5880653B: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x5880653D: je 0x58806569
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x5880653F: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x58806542: mov dword ptr [edi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x58806545: mov edx, dword ptr [ebp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x1C
        // 0x58806548: lea eax, [ebp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x20
        // 0x5880654B: mov dword ptr [edi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x10
        // 0x5880654E: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x58806550: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x58806553: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58806556: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x58806559: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x5880655C: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x1C
        // 0x5880655F: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58806562: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        // 0x58806565: jmp 0x58806569
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58806567: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58806569: mov eax, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5880656D: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58806572: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58806574: mov byte ptr [esp + 0x28], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x01
        // 0x58806579: mov dword ptr [eax], edi
        __asm _emit 0x89
        __asm _emit 0x38
        // 0x5880657B: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0xC7
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58806580: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x58806582: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xC7
        __asm _emit 0x66
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58806587: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58806589: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5880658C: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58806590: mov byte ptr [esp + 0x24], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x06
        // 0x58806595: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x58806597: je 0x58806623
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880659D: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588065A2: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588065A6: cmp dword ptr [eax + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588065AC: jle 0x588065c6
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x588065AE: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588065B0: jl 0x588065c6
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x588065B2: cmp dword ptr [eax + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588065B8: je 0x588065c6
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x588065BA: mov ebp, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0xA8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588065C0: add ebp, dword ptr [esp + 0x3c]
        __asm _emit 0x03
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588065C4: jmp 0x588065c8
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588065C6: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x588065C8: mov eax, dword ptr [esi + 0xe4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588065CE: mov ecx, dword ptr [esi + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588065D4: mov edx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588065D8: mov edx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x12
        // 0x588065DA: push 0x190
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588065DF: push ebx
        __asm _emit 0x53
        // 0x588065E0: push ebx
        __asm _emit 0x53
        // 0x588065E1: push eax
        __asm _emit 0x50
        // 0x588065E2: push ecx
        __asm _emit 0x51
        // 0x588065E3: push edx
        __asm _emit 0x52
        // 0x588065E4: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588065E6: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0xCB
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x588065EB: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588065F1: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x588065F4: mov dword ptr [edi + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x54
        // 0x588065F7: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x588065F9: je 0x58806625
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x588065FB: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x588065FE: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x58806601: mov ecx, dword ptr [ebp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x1C
        // 0x58806604: lea eax, [ebp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x20
        // 0x58806607: mov dword ptr [edi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x10
        // 0x5880660A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5880660C: mov dword ptr [edi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x14
        // 0x5880660F: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58806612: mov dword ptr [edi + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x18
        // 0x58806615: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58806618: mov dword ptr [edi + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x1C
        // 0x5880661B: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5880661E: mov dword ptr [edi + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x20
        // 0x58806621: jmp 0x58806625
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58806623: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58806625: mov eax, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58806629: add dword ptr [esp + 0x3c], 0x40
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x40
        // 0x5880662E: mov dword ptr [eax - 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0xE0
        // 0x58806631: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x58806634: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58806638: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880663D: add dword ptr [esp + 0x38], eax
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58806641: sub dword ptr [esp + 0x30], eax
        __asm _emit 0x29
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58806645: mov byte ptr [esp + 0x24], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5880664A: jne 0x588064d0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58806650: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58806652: mov dword ptr [esi + 0xdc], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806658: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0xAE
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5880665D: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5880665F: push ebx
        __asm _emit 0x53
        // 0x58806660: push eax
        __asm _emit 0x50
        // 0x58806661: mov dword ptr [esi + 0xdc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806667: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0x65
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x5880666C: push 0x184
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806671: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0x65
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58806676: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x58806679: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5880667D: mov byte ptr [esp + 0x24], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x07
        // 0x58806682: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58806684: je 0x588066b0
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x58806686: mov ecx, dword ptr [0x58a24540]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x40
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880668C: push 0x505050
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0x50
        __asm _emit 0x50
        __asm _emit 0x00
        // 0x58806691: push ebx
        __asm _emit 0x53
        // 0x58806692: push 0xdcdcdc
        __asm _emit 0x68
        __asm _emit 0xDC
        __asm _emit 0xDC
        __asm _emit 0xDC
        __asm _emit 0x00
        // 0x58806697: push 0x78
        __asm _emit 0x6A
        __asm _emit 0x78
        // 0x58806699: push 0x320
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880669E: push 0x50
        __asm _emit 0x6A
        __asm _emit 0x50
        // 0x588066A0: push 0x14
        __asm _emit 0x6A
        __asm _emit 0x14
        // 0x588066A2: push ecx
        __asm _emit 0x51
        // 0x588066A3: push ebx
        __asm _emit 0x53
        // 0x588066A4: push esi
        __asm _emit 0x56
        // 0x588066A5: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588066A7: call 0x5875f420
        __asm _emit 0xE8
        __asm _emit 0x74
        __asm _emit 0x8D
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x588066AC: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588066AE: jmp 0x588066b2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588066B0: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588066B2: mov dx, word ptr [esp + 0x2c]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588066B7: mov dword ptr [esi + 0x170], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588066BD: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x588066C0: mov byte ptr [esp + 0x24], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x588066C5: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        // 0x588066C9: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588066CB: je 0x588066d3
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588066CD: push edi
        __asm _emit 0x57
        // 0x588066CE: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0xC8
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x588066D3: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x588066D6: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588066D8: je 0x588066e0
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588066DA: push edi
        __asm _emit 0x57
        // 0x588066DB: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0xC8
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x588066E0: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x588066E2: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0x65
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x588066E7: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588066E9: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588066EC: mov dword ptr [esp + 0x40], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588066F0: mov byte ptr [esp + 0x24], 8
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588066F5: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588066F7: je 0x58806776
        __asm _emit 0x74
        __asm _emit 0x7D
        // 0x588066F9: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588066FE: cmp dword ptr [eax + 0x160], 0xca
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xCA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806708: jle 0x58806720
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5880670A: cmp dword ptr [eax + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806710: je 0x58806720
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58806712: mov ebp, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0xA8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806718: add ebp, 0x3280
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0x80
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880671E: jmp 0x58806722
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58806720: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58806722: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58806726: add eax, -0xa
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xF6
        // 0x58806729: push eax
        __asm _emit 0x50
        // 0x5880672A: push ebx
        __asm _emit 0x53
        // 0x5880672B: push ebx
        __asm _emit 0x53
        // 0x5880672C: push 0x3e8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806731: push 0x3e8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806736: push esi
        __asm _emit 0x56
        // 0x58806737: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58806739: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0xCA
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5880673E: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58806744: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x58806747: mov dword ptr [edi + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x54
        // 0x5880674A: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x5880674C: je 0x58806778
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x5880674E: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x58806751: mov dword ptr [edi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x58806754: mov edx, dword ptr [ebp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x1C
        // 0x58806757: lea eax, [ebp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x20
        // 0x5880675A: mov dword ptr [edi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x10
        // 0x5880675D: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5880675F: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x58806762: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58806765: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x58806768: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x5880676B: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x1C
        // 0x5880676E: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58806771: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        // 0x58806774: jmp 0x58806778
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58806776: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58806778: mov dword ptr [esi + 0x128], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880677E: mov eax, 0xfff0
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806783: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x58806787: mov ecx, dword ptr [esi + 0x128]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880678D: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806792: mov byte ptr [esp + 0x28], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x01
        // 0x58806797: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0xC5
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5880679C: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x5880679E: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xAB
        __asm _emit 0x64
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x588067A3: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588067A5: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588067A8: mov dword ptr [esp + 0x40], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588067AC: mov byte ptr [esp + 0x24], 9
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x09
        // 0x588067B1: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588067B3: je 0x588067dc
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x588067B5: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588067B9: add ecx, -0xa
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0xF6
        // 0x588067BC: push ecx
        __asm _emit 0x51
        // 0x588067BD: push ebx
        __asm _emit 0x53
        // 0x588067BE: push ebx
        __asm _emit 0x53
        // 0x588067BF: push 0x3e8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588067C4: push 0x3e8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588067C9: push esi
        __asm _emit 0x56
        // 0x588067CA: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588067CC: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xCF
        __asm _emit 0xC9
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x588067D1: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588067D7: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x588067DA: jmp 0x588067de
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588067DC: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588067DE: mov dword ptr [esi + 0x124], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588067E4: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588067E9: and word ptr [edi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x57
        __asm _emit 0x24
        // 0x588067ED: mov ecx, dword ptr [esi + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588067F3: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588067F8: mov byte ptr [esp + 0x28], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x01
        // 0x588067FD: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0xC5
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58806802: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x58806804: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0x64
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58806809: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5880680B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5880680E: mov dword ptr [esp + 0x40], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58806812: mov byte ptr [esp + 0x24], 0xa
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x0A
        // 0x58806817: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x58806819: je 0x58806895
        __asm _emit 0x74
        __asm _emit 0x7A
        // 0x5880681B: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58806820: cmp dword ptr [eax + 0x160], 0x1b
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1B
        // 0x58806827: jle 0x5880683f
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x58806829: cmp dword ptr [eax + 0x190], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880682F: je 0x5880683f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58806831: mov ebp, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0xA8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806837: add ebp, 0x6c0
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0xC0
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880683D: jmp 0x58806841
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5880683F: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58806841: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58806845: add eax, 0x64
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x64
        // 0x58806848: push eax
        __asm _emit 0x50
        // 0x58806849: push ebx
        __asm _emit 0x53
        // 0x5880684A: push ebx
        __asm _emit 0x53
        // 0x5880684B: push 0x12c
        __asm _emit 0x68
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806850: push 0x190
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806855: push esi
        __asm _emit 0x56
        // 0x58806856: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58806858: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0xC9
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5880685D: mov dword ptr [edi], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58806863: mov dword ptr [edi + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x50
        // 0x58806866: mov dword ptr [edi + 0x54], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x54
        // 0x58806869: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x5880686B: je 0x58806897
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x5880686D: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x58806870: mov dword ptr [edi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x58806873: mov edx, dword ptr [ebp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x1C
        // 0x58806876: lea eax, [ebp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x20
        // 0x58806879: mov dword ptr [edi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x10
        // 0x5880687C: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5880687E: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x58806881: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58806884: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x58806887: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x5880688A: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x1C
        // 0x5880688D: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58806890: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        // 0x58806893: jmp 0x58806897
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58806895: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58806897: mov dword ptr [esi + 0x120], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880689D: mov eax, 0xfff0
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588068A2: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x588068A6: mov eax, dword ptr [esi + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588068AC: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588068AE: mov byte ptr [esp + 0x28], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x01
        // 0x588068B3: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x588068B6: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0x63
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x588068BB: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588068BD: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588068C0: mov dword ptr [esp + 0x40], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588068C4: mov byte ptr [esp + 0x24], 0xb
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x0B
        // 0x588068C9: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588068CB: je 0x58806932
        __asm _emit 0x74
        __asm _emit 0x65
        // 0x588068CD: mov eax, dword ptr [0x58a246d0]
        __asm _emit 0xA1
        __asm _emit 0xD0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588068D2: cmp dword ptr [eax + 0x164], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588068D8: jle 0x588068ec
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x588068DA: cmp dword ptr [eax + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588068E0: je 0x588068ec
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588068E2: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588068E8: mov ebp, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x29
        // 0x588068EA: jmp 0x588068ee
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588068EC: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x588068EE: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588068F0: push ebx
        __asm _emit 0x53
        // 0x588068F1: push ebx
        __asm _emit 0x53
        // 0x588068F2: push ebx
        __asm _emit 0x53
        // 0x588068F3: push ebx
        __asm _emit 0x53
        // 0x588068F4: push esi
        __asm _emit 0x56
        // 0x588068F5: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588068F7: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0xC8
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x588068FC: mov dword ptr [edi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58806902: mov dword ptr [edi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x50
        // 0x58806905: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x58806907: je 0x58806934
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x58806909: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x5880690C: mov dword ptr [edi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x0C
        // 0x5880690F: mov eax, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x58806912: mov dword ptr [edi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x10
        // 0x58806915: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x58806918: lea eax, [ebp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x5880691B: mov dword ptr [edi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x14
        // 0x5880691E: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58806921: mov dword ptr [edi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x58806924: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58806927: mov dword ptr [edi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x1C
        // 0x5880692A: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x5880692D: mov dword ptr [edi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x20
        // 0x58806930: jmp 0x58806934
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58806932: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58806934: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58806936: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58806938: mov byte ptr [esp + 0x28], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x01
        // 0x5880693D: mov dword ptr [esi + 0x248], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806943: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0xC3
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58806948: mov eax, dword ptr [esi + 0x248]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880694E: mov ecx, 0xbfff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806953: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58806957: mov edi, dword ptr [esi + 0x248]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880695D: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x58806960: mov edx, 0x2af8
        __asm _emit 0xBA
        __asm _emit 0xF8
        __asm _emit 0x2A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806965: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        // 0x58806969: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5880696B: je 0x58806973
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5880696D: push edi
        __asm _emit 0x57
        // 0x5880696E: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0xC5
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58806973: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x58806976: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58806978: je 0x58806980
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5880697A: push edi
        __asm _emit 0x57
        // 0x5880697B: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0xC5
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58806980: mov eax, dword ptr [esi + 0x248]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806986: mov ecx, 0xbfff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880698B: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5880698F: mov edi, dword ptr [esi + 0x248]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806995: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x58806998: mov edx, 0x2af8
        __asm _emit 0xBA
        __asm _emit 0xF8
        __asm _emit 0x2A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880699D: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        // 0x588069A1: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588069A3: je 0x588069ab
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588069A5: push edi
        __asm _emit 0x57
        // 0x588069A6: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0xC5
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x588069AB: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x588069AE: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588069B0: je 0x588069b8
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588069B2: push edi
        __asm _emit 0x57
        // 0x588069B3: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0xC5
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x588069B8: mov eax, dword ptr [esi + 0x248]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588069BE: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588069C3: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588069C7: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x588069CB: mov eax, 0xe5ff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588069D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x588069D3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588069D5: mov dword ptr [esi + 0x274], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588069DB: mov dword ptr [esi + 0xb0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588069E1: mov dword ptr [esi + 0xb4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588069E7: mov dword ptr [esi + 0xb8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588069ED: mov dword ptr [esi + 0x118], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588069F3: mov dword ptr [esi + 0x114], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588069F9: mov ecx, 0x500
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588069FE: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD1
        // 0x58806A01: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x58806A05: or ecx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0xFF
        // 0x58806A08: mov dword ptr [esi + 0x10c], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806A0E: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58806A10: mov word ptr [esi + 0x110], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806A17: mov dword ptr [esi + 0x278], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806A1D: mov dword ptr [esi + 0x27c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x7C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806A23: mov dword ptr [esi + 0x280], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806A29: mov dword ptr [esi + 0x284], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806A2F: mov dword ptr [esi + 0x288], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806A35: mov dword ptr [esi + 0x28c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806A3B: mov dword ptr [esi + 0x2b0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806A41: mov dword ptr [esi + 0x2b4], 0xfa
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806A4B: mov dword ptr [esi + 0x2b8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806A51: mov dword ptr [esi + 0x2bc], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806A57: mov dword ptr [esi + 0x2c0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806A5D: mov dword ptr [esi + 0x2c4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xC4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806A63: mov dword ptr [esi + 0x2cc], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806A69: mov dword ptr [esi + 0x2d0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xD0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806A6F: mov dword ptr [esi + 0x2d4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xD4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806A75: mov dword ptr [esi + 0x2d8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xD8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806A7B: mov dword ptr [esi + 0x2dc], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xDC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806A81: mov dword ptr [esi + 0x2e0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xE0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806A87: mov dword ptr [esi + 0x2e4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xE4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806A8D: mov dword ptr [esi + 0x2e8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806A93: mov dword ptr [esi + 0x2ec], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xEC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806A99: mov word ptr [esi + 0x11c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806AA0: mov dword ptr [esi + 0xa0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806AA6: mov byte ptr [0x58a2485e], al
        __asm _emit 0xA2
        __asm _emit 0x5E
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58806AAB: mov dword ptr [0x589c909c], ecx
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58806AB1: mov word ptr [0x58a0adb8], ax
        __asm _emit 0x66
        __asm _emit 0xA3
        __asm _emit 0xB8
        __asm _emit 0xAD
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58806AB7: mov byte ptr [0x58a0adba], al
        __asm _emit 0xA2
        __asm _emit 0xBA
        __asm _emit 0xAD
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58806ABC: cmp dword ptr [0x589c9034], ebx
        __asm _emit 0x39
        __asm _emit 0x1D
        __asm _emit 0x34
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58806AC2: jne 0x58806af3
        __asm _emit 0x75
        __asm _emit 0x2F
        // 0x58806AC4: mov eax, dword ptr [0x58a24710]
        __asm _emit 0xA1
        __asm _emit 0x10
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58806AC9: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58806ACB: je 0x58806af3
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x58806ACD: cmp dword ptr [eax + 0x170], 1
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x58806AD4: jle 0x58806aec
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x58806AD6: cmp dword ptr [eax + 0x194], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806ADC: je 0x58806aec
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58806ADE: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806AE4: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x58806AE7: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x58806AEA: jmp 0x58806af6
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x58806AEC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58806AEE: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x58806AF1: jmp 0x58806af6
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x58806AF3: mov dword ptr [esi + 0x60], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x60
        // 0x58806AF6: mov dword ptr [esi + 0x300], 0x96
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806B00: mov dword ptr [esi + 0x308], 0xc8
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806B0A: mov dword ptr [esi + 0x2f0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xF0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806B10: mov dword ptr [esi + 0x2f4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xF4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806B16: mov dword ptr [esi + 0x2fc], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xFC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806B1C: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58806B1E: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58806B22: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58806B29: pop ecx
        __asm _emit 0x59
        // 0x58806B2A: pop edi
        __asm _emit 0x5F
        // 0x58806B2B: pop esi
        __asm _emit 0x5E
        // 0x58806B2C: pop ebp
        __asm _emit 0x5D
        // 0x58806B2D: pop ebx
        __asm _emit 0x5B
        // 0x58806B2E: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x58806B31: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
