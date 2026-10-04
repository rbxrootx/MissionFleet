// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588FA1C0 .. +0x62D bytes.
// Source symbol alias: FUN_588fa1c0.
extern "C" __declspec(naked) void FUN_588fa1c0() {
    __asm {
        // 0x588FA1C0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588FA1C2: push 0x5898a207
        __asm _emit 0x68
        __asm _emit 0x07
        __asm _emit 0xA2
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588FA1C7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA1CD: push eax
        __asm _emit 0x50
        // 0x588FA1CE: push ecx
        __asm _emit 0x51
        // 0x588FA1CF: push ebx
        __asm _emit 0x53
        // 0x588FA1D0: push ebp
        __asm _emit 0x55
        // 0x588FA1D1: push esi
        __asm _emit 0x56
        // 0x588FA1D2: push edi
        __asm _emit 0x57
        // 0x588FA1D3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588FA1D8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588FA1DA: push eax
        __asm _emit 0x50
        // 0x588FA1DB: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588FA1DF: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA1E5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588FA1E7: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588FA1EB: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FA1EF: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588FA1F3: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588FA1F7: mov edi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588FA1FB: mov ebp, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588FA1FF: push eax
        __asm _emit 0x50
        // 0x588FA200: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588FA204: push ecx
        __asm _emit 0x51
        // 0x588FA205: push edx
        __asm _emit 0x52
        // 0x588FA206: push edi
        __asm _emit 0x57
        // 0x588FA207: push ebp
        __asm _emit 0x55
        // 0x588FA208: push eax
        __asm _emit 0x50
        // 0x588FA209: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FA20B: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0x8F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA210: mov dword ptr [esi], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588FA216: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588FA21B: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588FA21D: mov dword ptr [esi + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x50
        // 0x588FA220: mov dword ptr [esi + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x588FA223: mov dword ptr [esi + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA22A: mov dword ptr [esi + 0x5c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x5C
        // 0x588FA22D: push 0x14c
        __asm _emit 0x68
        __asm _emit 0x4C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA232: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588FA236: mov dword ptr [esi], 0x589a213c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x3C
        __asm _emit 0x21
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588FA23C: mov dword ptr [esi + 0x60], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x60
        // 0x588FA23F: mov dword ptr [esi + 0x64], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x64
        // 0x588FA242: mov byte ptr [esi + 0x68], bl
        __asm _emit 0x88
        __asm _emit 0x5E
        __asm _emit 0x68
        // 0x588FA245: mov byte ptr [esi + 0x69], bl
        __asm _emit 0x88
        __asm _emit 0x5E
        __asm _emit 0x69
        // 0x588FA248: mov dword ptr [esi + 0x6c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x6C
        // 0x588FA24B: mov dword ptr [esi + 0x70], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x70
        // 0x588FA24E: mov dword ptr [esi + 0x74], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x74
        // 0x588FA251: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0x29
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FA256: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FA259: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588FA25D: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x588FA262: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588FA264: je 0x588fa28c
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x588FA266: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FA26A: mov edx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588FA26E: add ecx, 0x258
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA274: push ecx
        __asm _emit 0x51
        // 0x588FA275: push 0x1ee
        __asm _emit 0x68
        __asm _emit 0xEE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA27A: push 0x13b
        __asm _emit 0x68
        __asm _emit 0x3B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA27F: push ebx
        __asm _emit 0x53
        // 0x588FA280: push ebx
        __asm _emit 0x53
        // 0x588FA281: push esi
        __asm _emit 0x56
        // 0x588FA282: push edx
        __asm _emit 0x52
        // 0x588FA283: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FA285: call 0x588bf4c0
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0x52
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x588FA28A: jmp 0x588fa28e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FA28C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FA28E: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA293: mov dword ptr [esi + 0x9c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA299: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588FA29D: push 0x33c
        __asm _emit 0x68
        __asm _emit 0x3C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA2A2: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588FA2A6: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0x29
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FA2AB: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FA2AE: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588FA2B2: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x588FA2B7: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588FA2B9: je 0x588fa2dc
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x588FA2BB: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FA2BF: add edx, 0x258
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA2C5: push edx
        __asm _emit 0x52
        // 0x588FA2C6: push 0x140
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA2CB: push 0xaa
        __asm _emit 0x68
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA2D0: push ebx
        __asm _emit 0x53
        // 0x588FA2D1: push ebx
        __asm _emit 0x53
        // 0x588FA2D2: push esi
        __asm _emit 0x56
        // 0x588FA2D3: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FA2D5: call 0x5886dda0
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0x3A
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x588FA2DA: jmp 0x588fa2de
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FA2DC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FA2DE: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA2E3: mov dword ptr [esi + 0x98], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA2E9: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588FA2ED: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588FA2EF: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588FA2F3: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0x29
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FA2F8: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FA2FB: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588FA2FF: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x588FA304: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588FA306: je 0x588fa344
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x588FA308: mov ecx, dword ptr [0x58a24734]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FA30E: cmp dword ptr [ecx + 0x164], 0x18
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x18
        // 0x588FA315: jle 0x588fa32a
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588FA317: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA31D: je 0x588fa32a
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588FA31F: mov edx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA325: mov ecx, dword ptr [edx + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x60
        // 0x588FA328: jmp 0x588fa32c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FA32A: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588FA32C: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FA330: add edx, 0x258
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA336: push edx
        __asm _emit 0x52
        // 0x588FA337: push edi
        __asm _emit 0x57
        // 0x588FA338: push ebp
        __asm _emit 0x55
        // 0x588FA339: push ecx
        __asm _emit 0x51
        // 0x588FA33A: push esi
        __asm _emit 0x56
        // 0x588FA33B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FA33D: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0x79
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x588FA342: jmp 0x588fa346
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FA344: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FA346: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588FA348: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588FA34C: mov dword ptr [esi + 0xc0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA352: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0x28
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FA357: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FA35A: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588FA35E: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x588FA363: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588FA365: je 0x588fa3a3
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x588FA367: mov ecx, dword ptr [0x58a24734]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FA36D: cmp dword ptr [ecx + 0x164], 0x17
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x17
        // 0x588FA374: jle 0x588fa389
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588FA376: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA37C: je 0x588fa389
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588FA37E: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA384: mov ecx, dword ptr [ecx + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x5C
        // 0x588FA387: jmp 0x588fa38b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FA389: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588FA38B: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FA38F: add edx, 0x258
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA395: push edx
        __asm _emit 0x52
        // 0x588FA396: push edi
        __asm _emit 0x57
        // 0x588FA397: push ebp
        __asm _emit 0x55
        // 0x588FA398: push ecx
        __asm _emit 0x51
        // 0x588FA399: push esi
        __asm _emit 0x56
        // 0x588FA39A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FA39C: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xBF
        __asm _emit 0x78
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x588FA3A1: jmp 0x588fa3a5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FA3A3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FA3A5: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FA3AA: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FA3AC: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588FA3B0: mov dword ptr [esi + 0xc4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA3B6: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA3BB: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588FA3BD: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0x28
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FA3C2: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FA3C5: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588FA3C9: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        // 0x588FA3CE: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588FA3D0: je 0x588fa40e
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x588FA3D2: mov ecx, dword ptr [0x58a24734]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FA3D8: cmp dword ptr [ecx + 0x164], 0x19
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x19
        // 0x588FA3DF: jle 0x588fa3f4
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588FA3E1: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA3E7: je 0x588fa3f4
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588FA3E9: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA3EF: mov ecx, dword ptr [ecx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x64
        // 0x588FA3F2: jmp 0x588fa3f6
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FA3F4: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588FA3F6: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FA3FA: add edx, 0x24e
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x4E
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA400: push edx
        __asm _emit 0x52
        // 0x588FA401: push edi
        __asm _emit 0x57
        // 0x588FA402: push ebp
        __asm _emit 0x55
        // 0x588FA403: push ecx
        __asm _emit 0x51
        // 0x588FA404: push esi
        __asm _emit 0x56
        // 0x588FA405: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FA407: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0x78
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x588FA40C: jmp 0x588fa410
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FA40E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FA410: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588FA412: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588FA416: mov dword ptr [esi + 0xc8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA41C: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0x28
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FA421: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FA424: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588FA428: mov byte ptr [esp + 0x20], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x06
        // 0x588FA42D: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588FA42F: je 0x588fa46d
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x588FA431: mov ecx, dword ptr [0x58a24734]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FA437: cmp dword ptr [ecx + 0x164], 0x15
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x15
        // 0x588FA43E: jle 0x588fa453
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588FA440: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA446: je 0x588fa453
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588FA448: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA44E: mov ecx, dword ptr [ecx + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x54
        // 0x588FA451: jmp 0x588fa455
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FA453: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588FA455: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FA459: add edx, 0x258
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA45F: push edx
        __asm _emit 0x52
        // 0x588FA460: push edi
        __asm _emit 0x57
        // 0x588FA461: push ebp
        __asm _emit 0x55
        // 0x588FA462: push ecx
        __asm _emit 0x51
        // 0x588FA463: push esi
        __asm _emit 0x56
        // 0x588FA464: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FA466: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0x77
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x588FA46B: jmp 0x588fa46f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FA46D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FA46F: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588FA471: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588FA475: mov dword ptr [esi + 0xb4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA47B: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0x27
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FA480: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FA483: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588FA487: mov byte ptr [esp + 0x20], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x07
        // 0x588FA48C: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588FA48E: je 0x588fa4cc
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x588FA490: mov ecx, dword ptr [0x58a24734]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FA496: cmp dword ptr [ecx + 0x164], 0x14
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x14
        // 0x588FA49D: jle 0x588fa4b2
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588FA49F: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA4A5: je 0x588fa4b2
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588FA4A7: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA4AD: mov ecx, dword ptr [ecx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x50
        // 0x588FA4B0: jmp 0x588fa4b4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FA4B2: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588FA4B4: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FA4B8: add edx, 0x258
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA4BE: push edx
        __asm _emit 0x52
        // 0x588FA4BF: push edi
        __asm _emit 0x57
        // 0x588FA4C0: push ebp
        __asm _emit 0x55
        // 0x588FA4C1: push ecx
        __asm _emit 0x51
        // 0x588FA4C2: push esi
        __asm _emit 0x56
        // 0x588FA4C3: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FA4C5: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0x77
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x588FA4CA: jmp 0x588fa4ce
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FA4CC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FA4CE: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FA4D3: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FA4D5: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588FA4D9: mov dword ptr [esi + 0xb8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA4DF: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA4E4: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588FA4E6: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0x27
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FA4EB: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FA4EE: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588FA4F2: mov byte ptr [esp + 0x20], 8
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x08
        // 0x588FA4F7: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588FA4F9: je 0x588fa537
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x588FA4FB: mov ecx, dword ptr [0x58a24734]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FA501: cmp dword ptr [ecx + 0x164], 0x16
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x16
        // 0x588FA508: jle 0x588fa51d
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588FA50A: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA510: je 0x588fa51d
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588FA512: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA518: mov ecx, dword ptr [ecx + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x58
        // 0x588FA51B: jmp 0x588fa51f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FA51D: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588FA51F: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FA523: add edx, 0x24e
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x4E
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA529: push edx
        __asm _emit 0x52
        // 0x588FA52A: push edi
        __asm _emit 0x57
        // 0x588FA52B: push ebp
        __asm _emit 0x55
        // 0x588FA52C: push ecx
        __asm _emit 0x51
        // 0x588FA52D: push esi
        __asm _emit 0x56
        // 0x588FA52E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FA530: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0x77
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x588FA535: jmp 0x588fa539
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FA537: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FA539: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588FA53B: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588FA53F: mov dword ptr [esi + 0xbc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA545: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0x27
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FA54A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FA54D: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588FA551: mov byte ptr [esp + 0x20], 9
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x09
        // 0x588FA556: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588FA558: je 0x588fa596
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x588FA55A: mov ecx, dword ptr [0x58a24734]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FA560: cmp dword ptr [ecx + 0x164], 0x15
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x15
        // 0x588FA567: jle 0x588fa57c
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588FA569: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA56F: je 0x588fa57c
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588FA571: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA577: mov ecx, dword ptr [ecx + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x54
        // 0x588FA57A: jmp 0x588fa57e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FA57C: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588FA57E: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FA582: add edx, 0x258
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA588: push edx
        __asm _emit 0x52
        // 0x588FA589: push edi
        __asm _emit 0x57
        // 0x588FA58A: push ebp
        __asm _emit 0x55
        // 0x588FA58B: push ecx
        __asm _emit 0x51
        // 0x588FA58C: push esi
        __asm _emit 0x56
        // 0x588FA58D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FA58F: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0x76
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x588FA594: jmp 0x588fa598
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FA596: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FA598: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588FA59A: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588FA59E: mov dword ptr [esi + 0xa8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA5A4: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0x26
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FA5A9: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FA5AC: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588FA5B0: mov byte ptr [esp + 0x20], 0xa
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0A
        // 0x588FA5B5: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588FA5B7: je 0x588fa5f5
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x588FA5B9: mov ecx, dword ptr [0x58a24734]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FA5BF: cmp dword ptr [ecx + 0x164], 0x14
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x14
        // 0x588FA5C6: jle 0x588fa5db
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588FA5C8: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA5CE: je 0x588fa5db
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588FA5D0: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA5D6: mov ecx, dword ptr [ecx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x50
        // 0x588FA5D9: jmp 0x588fa5dd
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FA5DB: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588FA5DD: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FA5E1: add edx, 0x258
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA5E7: push edx
        __asm _emit 0x52
        // 0x588FA5E8: push edi
        __asm _emit 0x57
        // 0x588FA5E9: push ebp
        __asm _emit 0x55
        // 0x588FA5EA: push ecx
        __asm _emit 0x51
        // 0x588FA5EB: push esi
        __asm _emit 0x56
        // 0x588FA5EC: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FA5EE: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0x76
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x588FA5F3: jmp 0x588fa5f7
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FA5F5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FA5F7: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FA5FC: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FA5FE: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588FA602: mov dword ptr [esi + 0xac], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA608: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA60D: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588FA60F: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0x26
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FA614: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FA617: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588FA61B: mov byte ptr [esp + 0x20], 0xb
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0B
        // 0x588FA620: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588FA622: je 0x588fa660
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x588FA624: mov ecx, dword ptr [0x58a24734]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x34
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FA62A: cmp dword ptr [ecx + 0x164], 0x16
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x16
        // 0x588FA631: jle 0x588fa646
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588FA633: cmp dword ptr [ecx + 0x18c], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA639: je 0x588fa646
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588FA63B: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA641: mov ecx, dword ptr [ecx + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x58
        // 0x588FA644: jmp 0x588fa648
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FA646: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588FA648: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FA64C: add edx, 0x24e
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x4E
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA652: push edx
        __asm _emit 0x52
        // 0x588FA653: push edi
        __asm _emit 0x57
        // 0x588FA654: push ebp
        __asm _emit 0x55
        // 0x588FA655: push ecx
        __asm _emit 0x51
        // 0x588FA656: push esi
        __asm _emit 0x56
        // 0x588FA657: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FA659: call 0x58731c60
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x76
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x588FA65E: jmp 0x588fa662
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FA660: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FA662: mov dword ptr [esi + 0xb0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA668: mov eax, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA66E: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA673: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588FA677: mov eax, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA67D: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x588FA67F: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588FA683: mov eax, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA689: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588FA68D: mov eax, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA693: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588FA697: mov eax, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA69D: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588FA6A1: mov eax, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA6A7: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588FA6AB: mov eax, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA6B1: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588FA6B5: mov eax, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA6BB: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588FA6BF: mov eax, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA6C5: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588FA6C9: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x588FA6CB: mov byte ptr [esp + 0x24], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588FA6CF: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0x25
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FA6D4: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FA6D7: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588FA6DB: mov byte ptr [esp + 0x20], 0xc
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0C
        // 0x588FA6E0: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588FA6E2: je 0x588fa713
        __asm _emit 0x74
        __asm _emit 0x2F
        // 0x588FA6E4: mov edx, dword ptr [0x58a24530]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FA6EA: push ebx
        __asm _emit 0x53
        // 0x588FA6EB: push ebx
        __asm _emit 0x53
        // 0x588FA6EC: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588FA6F1: push 0x10e
        __asm _emit 0x68
        __asm _emit 0x0E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA6F6: push 0x3ff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA6FB: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA700: push 0x320
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA705: push edx
        __asm _emit 0x52
        // 0x588FA706: push ebx
        __asm _emit 0x53
        // 0x588FA707: push esi
        __asm _emit 0x56
        // 0x588FA708: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FA70A: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0x8B
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x588FA70F: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588FA711: jmp 0x588fa715
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FA713: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588FA715: mov ebp, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FA719: mov dword ptr [esi + 0xa0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA71F: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x588FA722: add ebp, 0x2bc
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA728: mov byte ptr [esp + 0x20], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588FA72C: mov word ptr [edi + 0x26], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x26
        // 0x588FA730: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588FA732: je 0x588fa73a
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588FA734: push edi
        __asm _emit 0x57
        // 0x588FA735: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA73A: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x588FA73D: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588FA73F: je 0x588fa747
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588FA741: push edi
        __asm _emit 0x57
        // 0x588FA742: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA747: mov eax, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA74D: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA752: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588FA756: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x588FA758: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF1
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FA75D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FA760: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588FA764: mov byte ptr [esp + 0x20], 0xd
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0D
        // 0x588FA769: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588FA76B: je 0x588fa79c
        __asm _emit 0x74
        __asm _emit 0x2F
        // 0x588FA76D: mov edx, dword ptr [0x58a24530]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FA773: push ebx
        __asm _emit 0x53
        // 0x588FA774: push ebx
        __asm _emit 0x53
        // 0x588FA775: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x588FA77A: push 0x10e
        __asm _emit 0x68
        __asm _emit 0x0E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA77F: push 0x3ff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA784: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA789: push 0x320
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA78E: push edx
        __asm _emit 0x52
        // 0x588FA78F: push ebx
        __asm _emit 0x53
        // 0x588FA790: push esi
        __asm _emit 0x56
        // 0x588FA791: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FA793: call 0x58733280
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x588FA798: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588FA79A: jmp 0x588fa79e
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FA79C: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588FA79E: mov dword ptr [esi + 0xa4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA7A4: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x588FA7A7: mov byte ptr [esp + 0x20], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588FA7AB: mov word ptr [edi + 0x26], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x26
        // 0x588FA7AF: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588FA7B1: je 0x588fa7b9
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588FA7B3: push edi
        __asm _emit 0x57
        // 0x588FA7B4: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x97
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA7B9: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x588FA7BC: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588FA7BE: je 0x588fa7c6
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588FA7C0: push edi
        __asm _emit 0x57
        // 0x588FA7C1: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA7C6: mov eax, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA7CC: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA7D1: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588FA7D5: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588FA7D7: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588FA7DB: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA7E2: pop ecx
        __asm _emit 0x59
        // 0x588FA7E3: pop edi
        __asm _emit 0x5F
        // 0x588FA7E4: pop esi
        __asm _emit 0x5E
        // 0x588FA7E5: pop ebp
        __asm _emit 0x5D
        // 0x588FA7E6: pop ebx
        __asm _emit 0x5B
        // 0x588FA7E7: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588FA7EA: ret 0x1c
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
    }
}
