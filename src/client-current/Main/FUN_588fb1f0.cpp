// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588FB1F0 .. +0x279 bytes.
// Source symbol alias: FUN_588fb1f0.
extern "C" __declspec(naked) void FUN_588fb1f0() {
    __asm {
        // 0x588FB1F0: sub esp, 0x44
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x44
        // 0x588FB1F3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588FB1F8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588FB1FA: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588FB1FE: push ebx
        __asm _emit 0x53
        // 0x588FB1FF: push esi
        __asm _emit 0x56
        // 0x588FB200: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588FB202: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588FB205: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FB20B: push edi
        __asm _emit 0x57
        // 0x588FB20C: push eax
        __asm _emit 0x50
        // 0x588FB20D: call 0x58778b20
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0xD9
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588FB212: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588FB214: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB219: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588FB21B: je 0x588fb3cc
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xAB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB221: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x588FB224: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x588FB227: add eax, 8
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x08
        // 0x588FB22A: add ecx, 0x1e
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x1E
        // 0x588FB22D: push eax
        __asm _emit 0x50
        // 0x588FB22E: push ecx
        __asm _emit 0x51
        // 0x588FB22F: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB235: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB23A: push 0x3f
        __asm _emit 0x6A
        __asm _emit 0x3F
        // 0x588FB23C: lea edx, [esp + 0x11]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x11
        // 0x588FB240: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FB242: push edx
        __asm _emit 0x52
        // 0x588FB243: mov byte ptr [esp + 0x18], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x588FB248: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0x19
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FB24D: movzx ecx, word ptr [edi + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x588FB251: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588FB254: lea eax, [esi + 0x75]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x75
        // 0x588FB257: push eax
        __asm _emit 0x50
        // 0x588FB258: and ecx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x588FB25B: push ecx
        __asm _emit 0x51
        // 0x588FB25C: call dword ptr [0x5898c040]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588FB262: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FB265: push eax
        __asm _emit 0x50
        // 0x588FB266: lea edx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588FB26A: push 0x5899fc1c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xFC
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588FB26F: push edx
        __asm _emit 0x52
        // 0x588FB270: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588FB276: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB27C: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588FB27F: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588FB283: push eax
        __asm _emit 0x50
        // 0x588FB284: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x57
        __asm _emit 0x6A
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x588FB289: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB28F: mov dword ptr [ecx + 0x60], 0xffffff
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x60
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588FB296: mov eax, dword ptr [0x58a24734]
        __asm _emit 0xA1
        __asm _emit 0x34
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FB29B: cmp dword ptr [eax + 0x164], 0xc
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0C
        // 0x588FB2A2: jle 0x588fb2b8
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588FB2A4: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB2AB: je 0x588fb2b8
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588FB2AD: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB2B3: mov eax, dword ptr [edx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x30
        // 0x588FB2B6: jmp 0x588fb2ba
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FB2B8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FB2BA: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB2C0: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588FB2C3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FB2C5: je 0x588fb2ef
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588FB2C7: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588FB2CA: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588FB2CD: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588FB2D0: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588FB2D3: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588FB2D6: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588FB2D8: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588FB2DB: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588FB2DD: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588FB2E0: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588FB2E3: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588FB2E6: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588FB2E9: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588FB2EC: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588FB2EF: mov eax, dword ptr [0x58a24734]
        __asm _emit 0xA1
        __asm _emit 0x34
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FB2F4: cmp dword ptr [eax + 0x164], 0xd
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0D
        // 0x588FB2FB: jle 0x588fb311
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588FB2FD: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB304: je 0x588fb311
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588FB306: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB30C: mov eax, dword ptr [ecx + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x34
        // 0x588FB30F: jmp 0x588fb313
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FB311: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FB313: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB319: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588FB31C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FB31E: je 0x588fb348
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588FB320: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588FB323: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588FB326: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588FB329: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588FB32C: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588FB32F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588FB331: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588FB334: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588FB336: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588FB339: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588FB33C: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588FB33F: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588FB342: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588FB345: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588FB348: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FB34E: movzx eax, word ptr [edi + 0x1c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x47
        __asm _emit 0x1C
        // 0x588FB352: mov ecx, dword ptr [ecx + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB358: cmp dword ptr [ecx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB35E: jle 0x588fb375
        __asm _emit 0x7E
        __asm _emit 0x15
        // 0x588FB360: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FB362: jl 0x588fb375
        __asm _emit 0x7C
        __asm _emit 0x11
        // 0x588FB364: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB36A: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588FB36C: je 0x588fb375
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x588FB36E: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x588FB371: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x588FB373: jmp 0x588fb377
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FB375: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FB377: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB37D: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x588FB380: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FB382: je 0x588fb3ac
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588FB384: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x588FB387: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588FB38A: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x588FB38D: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x588FB390: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588FB393: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588FB395: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588FB398: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588FB39A: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588FB39D: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588FB3A0: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588FB3A3: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588FB3A6: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588FB3A9: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588FB3AC: mov eax, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB3B2: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x588FB3B6: mov eax, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB3BC: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x588FB3C0: mov eax, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB3C6: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x588FB3CA: jmp 0x588fb3f1
        __asm _emit 0xEB
        __asm _emit 0x25
        // 0x588FB3CC: mov eax, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB3D2: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB3D7: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588FB3DB: mov eax, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB3E1: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x588FB3E3: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588FB3E7: mov eax, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB3ED: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588FB3F1: mov al, byte ptr [esi + 0x6c]
        __asm _emit 0x8A
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x588FB3F4: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x588FB3F6: je 0x588fb42a
        __asm _emit 0x74
        __asm _emit 0x32
        // 0x588FB3F8: movzx edx, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD0
        // 0x588FB3FB: mov eax, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB401: mov dword ptr [eax + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x50
        // 0x588FB404: mov eax, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB40A: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x588FB40E: mov esi, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB414: or word ptr [esi + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x5E
        __asm _emit 0x24
        // 0x588FB418: pop edi
        __asm _emit 0x5F
        // 0x588FB419: pop esi
        __asm _emit 0x5E
        // 0x588FB41A: pop ebx
        __asm _emit 0x5B
        // 0x588FB41B: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588FB41F: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588FB421: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0x17
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FB426: add esp, 0x44
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x44
        // 0x588FB429: ret
        __asm _emit 0xC3
        // 0x588FB42A: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x588FB42D: add ecx, 6
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x06
        // 0x588FB430: push ecx
        __asm _emit 0x51
        // 0x588FB431: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB437: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0x7E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB43C: mov eax, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB442: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB447: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588FB44B: mov esi, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB451: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588FB453: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588FB457: mov ecx, dword ptr [esp + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x588FB45B: pop edi
        __asm _emit 0x5F
        // 0x588FB45C: pop esi
        __asm _emit 0x5E
        // 0x588FB45D: pop ebx
        __asm _emit 0x5B
        // 0x588FB45E: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588FB460: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0x17
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FB465: add esp, 0x44
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x44
        // 0x588FB468: ret
        __asm _emit 0xC3
    }
}
