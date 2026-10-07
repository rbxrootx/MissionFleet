// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 832 bytes in 1 exact ranges.
// Source symbol alias: FUN_587a8170.

// Ghidra body range 0x587A8170..0x587A84B0; 832 mapped bytes.
extern "C" __declspec(naked) void FUN_587a8170_segment_00() {
    __asm {
        // 0x587A8170: push ebx
        __asm _emit 0x53
        // 0x587A8171: push ebp
        __asm _emit 0x55
        // 0x587A8172: push esi
        __asm _emit 0x56
        // 0x587A8173: push edi
        __asm _emit 0x57
        // 0x587A8174: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A8178: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587A817A: jne 0x587a8193
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x587A817C: push 0x68d
        __asm _emit 0x68
        __asm _emit 0x8D
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A8181: push 0x589999a4
        __asm _emit 0x68
        __asm _emit 0xA4
        __asm _emit 0x99
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587A8186: push 0x58999a38
        __asm _emit 0x68
        __asm _emit 0x38
        __asm _emit 0x9A
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587A818B: call 0x5897cece
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0x4D
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8190: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587A8193: mov eax, dword ptr [edi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x54
        // 0x587A8196: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587A8198: and ecx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x587A819B: add ecx, -2
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0xFE
        // 0x587A819E: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587A81A0: cmp ecx, 6
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x06
        // 0x587A81A3: ja 0x587a84a7
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xFE
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A81A9: jmp dword ptr [ecx*4 + 0x587a84b0]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x8D
        __asm _emit 0xB0
        __asm _emit 0x84
        __asm _emit 0x7A
        __asm _emit 0x58
        // 0x587A81B0: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A81B6: mov ecx, dword ptr [edx + 0x21c48]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x48
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587A81BC: shr eax, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x0A
        // 0x587A81BF: push eax
        __asm _emit 0x50
        // 0x587A81C0: call 0x587771e0
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0xF0
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x587A81C5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A81C7: je 0x587a84a7
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xDA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A81CD: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x587A81D0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A81D2: je 0x587a84a7
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xCF
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A81D8: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587A81DA: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0xE5
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587A81DF: pop edi
        __asm _emit 0x5F
        // 0x587A81E0: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x587A81E2: pop esi
        __asm _emit 0x5E
        // 0x587A81E3: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x587A81E5: pop ebp
        __asm _emit 0x5D
        // 0x587A81E6: inc eax
        __asm _emit 0x40
        // 0x587A81E7: pop ebx
        __asm _emit 0x5B
        // 0x587A81E8: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587A81EB: shr eax, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x0A
        // 0x587A81EE: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x587A81F0: mov eax, dword ptr [edi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x5C
        // 0x587A81F3: shr eax, 5
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x05
        // 0x587A81F6: and eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x1F
        // 0x587A81F9: cmp eax, 5
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x587A81FC: ja 0x587a84a7
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xA5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A8202: jmp dword ptr [eax*4 + 0x587a84cc]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xCC
        __asm _emit 0x84
        __asm _emit 0x7A
        __asm _emit 0x58
        // 0x587A8209: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A820E: mov esi, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x0C
        // 0x587A8211: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587A8213: je 0x587a828a
        __asm _emit 0x74
        __asm _emit 0x75
        // 0x587A8215: cmp dword ptr [esi + 0x6070], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0x70
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A821B: jne 0x587a8233
        __asm _emit 0x75
        __asm _emit 0x16
        // 0x587A821D: movzx ecx, byte ptr [esi + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A8224: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x587A8226: jne 0x587a8233
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x587A8228: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587A822A: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0xB1
        __asm _emit 0xE4
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587A822F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A8231: je 0x587a8285
        __asm _emit 0x74
        __asm _emit 0x52
        // 0x587A8233: mov esi, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x78
        // 0x587A8236: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587A8238: jne 0x587a8215
        __asm _emit 0x75
        __asm _emit 0xDB
        // 0x587A823A: pop edi
        __asm _emit 0x5F
        // 0x587A823B: pop esi
        __asm _emit 0x5E
        // 0x587A823C: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x587A823E: pop ebp
        __asm _emit 0x5D
        // 0x587A823F: pop ebx
        __asm _emit 0x5B
        // 0x587A8240: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587A8243: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A8249: mov ecx, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x0C
        // 0x587A824C: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587A824E: je 0x587a828a
        __asm _emit 0x74
        __asm _emit 0x3A
        // 0x587A8250: cmp dword ptr [ecx + 0x6070], ebp
        __asm _emit 0x39
        __asm _emit 0xA9
        __asm _emit 0x70
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A8256: jne 0x587a826c
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x587A8258: movzx eax, byte ptr [ecx + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x81
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A825F: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587A8261: jne 0x587a826c
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x587A8263: cmp dword ptr [ecx + 0x60bc], 1
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xBC
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x587A826A: je 0x587a827c
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x587A826C: mov ecx, dword ptr [ecx + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x78
        // 0x587A826F: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587A8271: jne 0x587a8250
        __asm _emit 0x75
        __asm _emit 0xDD
        // 0x587A8273: pop edi
        __asm _emit 0x5F
        // 0x587A8274: pop esi
        __asm _emit 0x5E
        // 0x587A8275: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x587A8277: pop ebp
        __asm _emit 0x5D
        // 0x587A8278: pop ebx
        __asm _emit 0x5B
        // 0x587A8279: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587A827C: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0xE4
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587A8281: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A8283: jne 0x587a828a
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x587A8285: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A828A: pop edi
        __asm _emit 0x5F
        // 0x587A828B: pop esi
        __asm _emit 0x5E
        // 0x587A828C: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x587A828E: pop ebp
        __asm _emit 0x5D
        // 0x587A828F: pop ebx
        __asm _emit 0x5B
        // 0x587A8290: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587A8293: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A8299: mov esi, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x0C
        // 0x587A829C: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587A829E: je 0x587a828a
        __asm _emit 0x74
        __asm _emit 0xEA
        // 0x587A82A0: cmp dword ptr [esi + 0x6070], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0x70
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A82A6: jne 0x587a82c4
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x587A82A8: mov edx, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A82AE: movzx eax, word ptr [edx + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587A82B2: and eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x1F
        // 0x587A82B5: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587A82B7: jne 0x587a82c4
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x587A82B9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587A82BB: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0xE4
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587A82C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A82C2: je 0x587a8285
        __asm _emit 0x74
        __asm _emit 0xC1
        // 0x587A82C4: mov esi, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x78
        // 0x587A82C7: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587A82C9: jne 0x587a82a0
        __asm _emit 0x75
        __asm _emit 0xD5
        // 0x587A82CB: pop edi
        __asm _emit 0x5F
        // 0x587A82CC: pop esi
        __asm _emit 0x5E
        // 0x587A82CD: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x587A82CF: pop ebp
        __asm _emit 0x5D
        // 0x587A82D0: pop ebx
        __asm _emit 0x5B
        // 0x587A82D1: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587A82D4: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A82DA: mov esi, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x0C
        // 0x587A82DD: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587A82DF: je 0x587a849e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A82E5: cmp dword ptr [esi + 0x6070], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0x70
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A82EB: jne 0x587a831b
        __asm _emit 0x75
        __asm _emit 0x2E
        // 0x587A82ED: mov edx, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A82F3: movzx eax, word ptr [edx + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587A82F7: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587A82F9: and eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x1F
        // 0x587A82FC: shr ecx, 3
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x03
        // 0x587A82FF: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x587A8301: jne 0x587a831b
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x587A8303: mov edx, ebx
        __asm _emit 0x8B
        __asm _emit 0xD3
        // 0x587A8305: and edx, 7
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x07
        // 0x587A8308: cmp byte ptr [esi + 0x354], dl
        __asm _emit 0x38
        __asm _emit 0x96
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A830E: jne 0x587a831b
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x587A8310: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587A8312: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0xE3
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587A8317: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A8319: je 0x587a832b
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x587A831B: mov esi, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x78
        // 0x587A831E: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587A8320: jne 0x587a82e5
        __asm _emit 0x75
        __asm _emit 0xC3
        // 0x587A8322: pop edi
        __asm _emit 0x5F
        // 0x587A8323: pop esi
        __asm _emit 0x5E
        // 0x587A8324: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x587A8326: pop ebp
        __asm _emit 0x5D
        // 0x587A8327: pop ebx
        __asm _emit 0x5B
        // 0x587A8328: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587A832B: pop edi
        __asm _emit 0x5F
        // 0x587A832C: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A8331: pop esi
        __asm _emit 0x5E
        // 0x587A8332: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x587A8334: pop ebp
        __asm _emit 0x5D
        // 0x587A8335: pop ebx
        __asm _emit 0x5B
        // 0x587A8336: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587A8339: shr eax, 5
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x05
        // 0x587A833C: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587A833E: and eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x1F
        // 0x587A8341: jne 0x587a8395
        __asm _emit 0x75
        __asm _emit 0x52
        // 0x587A8343: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A8348: mov esi, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x0C
        // 0x587A834B: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587A834D: je 0x587a849e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x4B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A8353: cmp dword ptr [esi + 0x6070], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x70
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A835A: je 0x587a8385
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x587A835C: mov al, byte ptr [esi + 0x354]
        __asm _emit 0x8A
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A8362: mov ecx, dword ptr [edi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x54
        // 0x587A8365: movzx edx, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD0
        // 0x587A8368: shr ecx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x0A
        // 0x587A836B: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x587A836D: jne 0x587a8385
        __asm _emit 0x75
        __asm _emit 0x16
        // 0x587A836F: cmp al, 2
        __asm _emit 0x3C
        __asm _emit 0x02
        // 0x587A8371: jbe 0x587a8385
        __asm _emit 0x76
        __asm _emit 0x12
        // 0x587A8373: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587A8375: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0xE3
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587A837A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A837C: jne 0x587a849c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x1A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A8382: lea ebp, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x68
        __asm _emit 0x01
        // 0x587A8385: mov esi, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x78
        // 0x587A8388: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587A838A: jne 0x587a8353
        __asm _emit 0x75
        __asm _emit 0xC7
        // 0x587A838C: pop edi
        __asm _emit 0x5F
        // 0x587A838D: pop esi
        __asm _emit 0x5E
        // 0x587A838E: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x587A8390: pop ebp
        __asm _emit 0x5D
        // 0x587A8391: pop ebx
        __asm _emit 0x5B
        // 0x587A8392: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587A8395: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x587A8398: jne 0x587a849e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A839E: mov eax, dword ptr [edi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x54
        // 0x587A83A1: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x587A83A3: shr eax, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x0A
        // 0x587A83A6: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x587A83A9: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587A83AB: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A83B0: mov ecx, dword ptr [eax + 0x21c48]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x48
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587A83B6: shr edx, 0x12
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x12
        // 0x587A83B9: push edx
        __asm _emit 0x52
        // 0x587A83BA: call 0x587765f0
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0xE2
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x587A83BF: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x587A83C1: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587A83C3: cmp ebx, edi
        __asm _emit 0x3B
        __asm _emit 0xDF
        // 0x587A83C5: je 0x587a849e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A83CB: cmp esi, edi
        __asm _emit 0x3B
        __asm _emit 0xF7
        // 0x587A83CD: je 0x587a8425
        __asm _emit 0x74
        __asm _emit 0x56
        // 0x587A83CF: push esi
        __asm _emit 0x56
        // 0x587A83D0: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587A83D2: call 0x587352b0
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0xCE
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587A83D7: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587A83D9: cmp esi, edi
        __asm _emit 0x3B
        __asm _emit 0xF7
        // 0x587A83DB: je 0x587a849e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xBD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A83E1: mov ecx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x18
        // 0x587A83E4: sub ecx, dword ptr [esi + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x587A83E7: test ecx, 0xfffffffc
        __asm _emit 0xF7
        __asm _emit 0xC1
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A83ED: je 0x587a849e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xAB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A83F3: push edi
        __asm _emit 0x57
        // 0x587A83F4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587A83F6: call 0x587a7eb0
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A83FB: mov ecx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x587A83FE: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0xE2
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587A8403: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A8405: jne 0x587a849c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A840B: mov edx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x18
        // 0x587A840E: sub edx, dword ptr [esi + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x56
        __asm _emit 0x14
        // 0x587A8411: inc edi
        __asm _emit 0x47
        // 0x587A8412: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x587A8415: lea ebp, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x68
        __asm _emit 0x01
        // 0x587A8418: cmp edi, edx
        __asm _emit 0x3B
        __asm _emit 0xFA
        // 0x587A841A: jne 0x587a83f3
        __asm _emit 0x75
        __asm _emit 0xD7
        // 0x587A841C: pop edi
        __asm _emit 0x5F
        // 0x587A841D: pop esi
        __asm _emit 0x5E
        // 0x587A841E: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x587A8420: pop ebp
        __asm _emit 0x5D
        // 0x587A8421: pop ebx
        __asm _emit 0x5B
        // 0x587A8422: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587A8425: mov eax, dword ptr [ebx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x1C
        // 0x587A8428: sub eax, dword ptr [ebx + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x43
        __asm _emit 0x18
        // 0x587A842B: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A842F: test eax, 0xfffffffc
        __asm _emit 0xA9
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A8434: je 0x587a849e
        __asm _emit 0x74
        __asm _emit 0x68
        // 0x587A8436: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A843A: push ecx
        __asm _emit 0x51
        // 0x587A843B: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587A843D: call 0x587a7ee0
        __asm _emit 0xE8
        __asm _emit 0x9E
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A8442: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587A8444: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587A8446: je 0x587a849c
        __asm _emit 0x74
        __asm _emit 0x54
        // 0x587A8448: mov edx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x18
        // 0x587A844B: sub edx, dword ptr [esi + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x56
        __asm _emit 0x14
        // 0x587A844E: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587A8450: test edx, 0xfffffffc
        __asm _emit 0xF7
        __asm _emit 0xC2
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A8456: je 0x587a847d
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x587A8458: push edi
        __asm _emit 0x57
        // 0x587A8459: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587A845B: call 0x587a7eb0
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A8460: mov ecx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x587A8463: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0xE2
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587A8468: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A846A: jne 0x587a84a7
        __asm _emit 0x75
        __asm _emit 0x3B
        // 0x587A846C: lea ebp, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x68
        __asm _emit 0x01
        // 0x587A846F: mov eax, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x587A8472: sub eax, dword ptr [esi + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x587A8475: inc edi
        __asm _emit 0x47
        // 0x587A8476: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587A8479: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x587A847B: jne 0x587a8458
        __asm _emit 0x75
        __asm _emit 0xDB
        // 0x587A847D: mov ecx, dword ptr [ebx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x1C
        // 0x587A8480: sub ecx, dword ptr [ebx + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x4B
        __asm _emit 0x18
        // 0x587A8483: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A8487: inc eax
        __asm _emit 0x40
        // 0x587A8488: sar ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x587A848B: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A848F: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x587A8491: jne 0x587a8436
        __asm _emit 0x75
        __asm _emit 0xA3
        // 0x587A8493: pop edi
        __asm _emit 0x5F
        // 0x587A8494: pop esi
        __asm _emit 0x5E
        // 0x587A8495: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x587A8497: pop ebp
        __asm _emit 0x5D
        // 0x587A8498: pop ebx
        __asm _emit 0x5B
        // 0x587A8499: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587A849C: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587A849E: pop edi
        __asm _emit 0x5F
        // 0x587A849F: pop esi
        __asm _emit 0x5E
        // 0x587A84A0: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x587A84A2: pop ebp
        __asm _emit 0x5D
        // 0x587A84A3: pop ebx
        __asm _emit 0x5B
        // 0x587A84A4: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587A84A7: pop edi
        __asm _emit 0x5F
        // 0x587A84A8: pop esi
        __asm _emit 0x5E
        // 0x587A84A9: pop ebp
        __asm _emit 0x5D
        // 0x587A84AA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A84AC: pop ebx
        __asm _emit 0x5B
        // 0x587A84AD: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
