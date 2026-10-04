// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Corrected Ghidra function-body extent: 0x587D8110 .. +0x35E bytes.
// Source symbol alias: FUN_587d8110.
extern "C" __declspec(naked) void FUN_587d8110() {
    __asm {
        // 0x587D8110: push ebp
        __asm _emit 0x55
        // 0x587D8111: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x587D8113: and esp, 0xfffffff8
        __asm _emit 0x83
        __asm _emit 0xE4
        __asm _emit 0xF8
        // 0x587D8116: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x587D8119: push ebx
        __asm _emit 0x53
        // 0x587D811A: push ebp
        __asm _emit 0x55
        // 0x587D811B: push esi
        __asm _emit 0x56
        // 0x587D811C: push edi
        __asm _emit 0x57
        // 0x587D811D: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587D811F: mov ecx, dword ptr [edi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8125: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D8127: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587D812B: mov dword ptr [esp + 0x1c], 0x32
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8133: mov edx, dword ptr [ecx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8139: mov cx, word ptr [edx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x0C
        // 0x587D813D: mov edx, 0x7c00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x7C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8142: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x587D8145: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587D8147: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587D814B: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x587D814E: jae 0x587d8466
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0x12
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8154: jmp 0x587d8162
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x587D8156: jmp 0x587d8160
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x587D8158: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D815F: nop
        __asm _emit 0x90
        // 0x587D8160: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D8162: movzx esi, word ptr [esp + 0x14]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587D8167: mov dword ptr [edi + esi*4 + 0xc14], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0xB7
        __asm _emit 0x14
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D816E: mov ecx, dword ptr [edi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8174: mov edx, dword ptr [ecx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D817A: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587D817C: shr eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x587D817F: mov eax, dword ptr [edx + eax*4 + 0x274]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8186: mov ecx, 0xf
        __asm _emit 0xB9
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D818B: sub ecx, esi
        __asm _emit 0x2B
        __asm _emit 0xCE
        // 0x587D818D: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x587D818F: shr eax, cl
        __asm _emit 0xD3
        __asm _emit 0xE8
        // 0x587D8191: mov dword ptr [edi + esi*4 + 0xc14], 1
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0xB7
        __asm _emit 0x14
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D819C: mov ebx, 0x168
        __asm _emit 0xBB
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D81A1: and eax, 3
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x03
        // 0x587D81A4: mov dword ptr [edi + esi*4 + 0xc94], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0xB7
        __asm _emit 0x94
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D81AB: mov ecx, dword ptr [edi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D81B1: mov ecx, dword ptr [ecx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D81B7: movsx eax, word ptr [ecx + esi*4 + 0x168]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x84
        __asm _emit 0xB1
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D81BF: add eax, 0x72
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x72
        // 0x587D81C2: cdq
        __asm _emit 0x99
        // 0x587D81C3: idiv ebx
        __asm _emit 0xF7
        __asm _emit 0xFB
        // 0x587D81C5: movsx eax, word ptr [ecx + esi*4 + 0x16a]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x84
        __asm _emit 0xB1
        __asm _emit 0x6A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D81CD: add eax, 0x72
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x72
        // 0x587D81D0: mov ecx, 0x168
        __asm _emit 0xB9
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D81D5: mov ebx, edx
        __asm _emit 0x8B
        __asm _emit 0xDA
        // 0x587D81D7: cdq
        __asm _emit 0x99
        // 0x587D81D8: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x587D81DA: mov eax, dword ptr [edi + esi*4 + 0xc94]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xB7
        __asm _emit 0x94
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D81E1: mov ebp, edx
        __asm _emit 0x8B
        __asm _emit 0xEA
        // 0x587D81E3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D81E5: jne 0x587d822d
        __asm _emit 0x75
        __asm _emit 0x46
        // 0x587D81E7: mov edx, dword ptr [edi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D81ED: mov eax, dword ptr [edx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D81F3: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587D81F5: shl ecx, 5
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x05
        // 0x587D81F8: cmp word ptr [eax + esi*2 + 0x128], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0x70
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8201: lea eax, [ecx + edi]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x39
        // 0x587D8204: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D8208: jne 0x587d8303
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D820E: lea edx, [ebp + ebp*4]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0xAD
        __asm _emit 0x00
        // 0x587D8212: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x587D8214: push edx
        __asm _emit 0x52
        // 0x587D8215: add eax, 0x814
        __asm _emit 0x05
        __asm _emit 0x14
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D821A: push eax
        __asm _emit 0x50
        // 0x587D821B: lea eax, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587D821F: push eax
        __asm _emit 0x50
        // 0x587D8220: call 0x5876bfa0
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0x3D
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587D8225: lea ecx, [ebx + ebx*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x9B
        // 0x587D8228: jmp 0x587d831d
        __asm _emit 0xE9
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D822D: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x587D8230: je 0x587d82f7
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8236: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587D8239: je 0x587d82f7
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D823F: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x587D8242: jne 0x587d8338
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8248: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587D824A: shl ecx, 5
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x05
        // 0x587D824D: lea eax, [ecx + edi]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x39
        // 0x587D8250: lea edx, [ebx + ebx*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x9B
        // 0x587D8253: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D8257: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x587D8259: push edx
        __asm _emit 0x52
        // 0x587D825A: add eax, 0x814
        __asm _emit 0x05
        __asm _emit 0x14
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D825F: push eax
        __asm _emit 0x50
        // 0x587D8260: lea eax, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587D8264: push eax
        __asm _emit 0x50
        // 0x587D8265: call 0x5876bfa0
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0x3D
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587D826A: lea ecx, [ebp + ebp*4]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0xAD
        __asm _emit 0x00
        // 0x587D826E: mov ebp, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587D8272: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x587D8274: push ecx
        __asm _emit 0x51
        // 0x587D8275: lea edx, [ebp + 0x81c]
        __asm _emit 0x8D
        __asm _emit 0x95
        __asm _emit 0x1C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D827B: push edx
        __asm _emit 0x52
        // 0x587D827C: lea eax, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587D8280: push eax
        __asm _emit 0x50
        // 0x587D8281: call 0x5876bfa0
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0x3D
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587D8286: mov ecx, dword ptr [edi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D828C: mov ecx, dword ptr [ecx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8292: movsx edx, word ptr [ecx + esi*4 + 0x168]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x94
        __asm _emit 0xB1
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D829A: mov eax, 0x72
        __asm _emit 0xB8
        __asm _emit 0x72
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D829F: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587D82A1: cdq
        __asm _emit 0x99
        // 0x587D82A2: mov ebx, 0x168
        __asm _emit 0xBB
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D82A7: idiv ebx
        __asm _emit 0xF7
        __asm _emit 0xFB
        // 0x587D82A9: movsx ecx, word ptr [ecx + esi*4 + 0x16a]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x8C
        __asm _emit 0xB1
        __asm _emit 0x6A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D82B1: mov eax, 0x72
        __asm _emit 0xB8
        __asm _emit 0x72
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D82B6: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x587D82B8: mov ecx, 0x168
        __asm _emit 0xB9
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D82BD: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x587D82C0: mov ebx, edx
        __asm _emit 0x8B
        __asm _emit 0xDA
        // 0x587D82C2: cdq
        __asm _emit 0x99
        // 0x587D82C3: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x587D82C5: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587D82C7: jge 0x587d82cb
        __asm _emit 0x7D
        __asm _emit 0x02
        // 0x587D82C9: add ebx, ecx
        __asm _emit 0x03
        __asm _emit 0xD9
        // 0x587D82CB: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587D82CD: jge 0x587d82d1
        __asm _emit 0x7D
        __asm _emit 0x02
        // 0x587D82CF: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x587D82D1: lea edx, [edx + edx*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x92
        // 0x587D82D4: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x587D82D6: push edx
        __asm _emit 0x52
        // 0x587D82D7: lea eax, [ebp + 0x824]
        __asm _emit 0x8D
        __asm _emit 0x85
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D82DD: push eax
        __asm _emit 0x50
        // 0x587D82DE: lea ecx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587D82E2: push ecx
        __asm _emit 0x51
        // 0x587D82E3: call 0x5876bfa0
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0x3C
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587D82E8: lea edx, [ebx + ebx*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x9B
        // 0x587D82EB: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x587D82ED: push edx
        __asm _emit 0x52
        // 0x587D82EE: add ebp, 0x82c
        __asm _emit 0x81
        __asm _emit 0xC5
        __asm _emit 0x2C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D82F4: push ebp
        __asm _emit 0x55
        // 0x587D82F5: jmp 0x587d832b
        __asm _emit 0xEB
        __asm _emit 0x34
        // 0x587D82F7: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587D82F9: shl ecx, 5
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x05
        // 0x587D82FC: lea eax, [ecx + edi]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x39
        // 0x587D82FF: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D8303: lea edx, [ebx + ebx*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x9B
        // 0x587D8306: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x587D8308: push edx
        __asm _emit 0x52
        // 0x587D8309: add eax, 0x814
        __asm _emit 0x05
        __asm _emit 0x14
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D830E: push eax
        __asm _emit 0x50
        // 0x587D830F: lea eax, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587D8313: push eax
        __asm _emit 0x50
        // 0x587D8314: call 0x5876bfa0
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0x3C
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587D8319: lea ecx, [ebp + ebp*4]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0xAD
        __asm _emit 0x00
        // 0x587D831D: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587D8321: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x587D8323: push ecx
        __asm _emit 0x51
        // 0x587D8324: add edx, 0x81c
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D832A: push edx
        __asm _emit 0x52
        // 0x587D832B: lea eax, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587D832F: push eax
        __asm _emit 0x50
        // 0x587D8330: call 0x5876bfa0
        __asm _emit 0xE8
        __asm _emit 0x6B
        __asm _emit 0x3C
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587D8335: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x587D8338: mov edx, dword ptr [edi + esi*4 + 0x504]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0xB7
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D833F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587D8341: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x587D8344: lea eax, [ecx + edi]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x39
        // 0x587D8347: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x587D834A: add ecx, dword ptr [edi + 0x604]
        __asm _emit 0x03
        __asm _emit 0x8F
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8350: mov dword ptr [eax + 0x614], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8356: mov edx, dword ptr [edi + esi*4 + 0x504]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0xB7
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D835D: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x587D8360: add ecx, dword ptr [edi + 0x60c]
        __asm _emit 0x03
        __asm _emit 0x8F
        __asm _emit 0x0C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8366: mov dword ptr [eax + 0x61c], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x1C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D836C: mov edx, dword ptr [edi + esi*4 + 0x504]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0xB7
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8373: mov ecx, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x08
        // 0x587D8376: add ecx, dword ptr [edi + 0x608]
        __asm _emit 0x03
        __asm _emit 0x8F
        __asm _emit 0x08
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D837C: mov dword ptr [eax + 0x618], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8382: mov edx, dword ptr [edi + esi*4 + 0x504]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0xB7
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8389: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x587D838C: add eax, dword ptr [edi + 0x610]
        __asm _emit 0x03
        __asm _emit 0x87
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8392: lea ecx, [esi + 0x62]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x62
        // 0x587D8395: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x587D8398: mov dword ptr [ecx + edi], eax
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x39
        // 0x587D839B: mov ecx, dword ptr [edi + esi*4 + 0x504]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xB7
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D83A2: mov edx, esi
        __asm _emit 0x8B
        __asm _emit 0xD6
        // 0x587D83A4: shl edx, 5
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x05
        // 0x587D83A7: lea eax, [edx + edi]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x3A
        // 0x587D83AA: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587D83AD: add dword ptr [eax + 0x814], edx
        __asm _emit 0x01
        __asm _emit 0x90
        __asm _emit 0x14
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D83B3: mov ecx, dword ptr [edi + esi*4 + 0x504]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xB7
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D83BA: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587D83BD: sub edx, dword ptr [eax + 0x818]
        __asm _emit 0x2B
        __asm _emit 0x90
        __asm _emit 0x18
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D83C3: mov dword ptr [eax + 0x818], edx
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x18
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D83C9: mov ecx, dword ptr [edi + esi*4 + 0x504]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xB7
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D83D0: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587D83D3: add dword ptr [eax + 0x81c], edx
        __asm _emit 0x01
        __asm _emit 0x90
        __asm _emit 0x1C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D83D9: mov edx, dword ptr [edi + esi*4 + 0x504]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0xB7
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D83E0: mov edx, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x08
        // 0x587D83E3: lea ecx, [esi + 0x41]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x41
        // 0x587D83E6: shl ecx, 5
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x05
        // 0x587D83E9: sub edx, dword ptr [ecx + edi]
        __asm _emit 0x2B
        __asm _emit 0x14
        __asm _emit 0x39
        // 0x587D83EC: add ecx, edi
        __asm _emit 0x03
        __asm _emit 0xCF
        // 0x587D83EE: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x587D83F0: mov ecx, dword ptr [edi + esi*4 + 0x504]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xB7
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D83F7: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587D83FA: add dword ptr [eax + 0x824], edx
        __asm _emit 0x01
        __asm _emit 0x90
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8400: mov ecx, dword ptr [edi + esi*4 + 0x504]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xB7
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8407: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587D840A: sub edx, dword ptr [eax + 0x828]
        __asm _emit 0x2B
        __asm _emit 0x90
        __asm _emit 0x28
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8410: mov dword ptr [eax + 0x828], edx
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x28
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8416: mov ecx, dword ptr [edi + esi*4 + 0x504]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xB7
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D841D: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587D8420: add dword ptr [eax + 0x82c], edx
        __asm _emit 0x01
        __asm _emit 0x90
        __asm _emit 0x2C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8426: mov ecx, dword ptr [edi + esi*4 + 0x504]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xB7
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D842D: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587D8430: sub edx, dword ptr [eax + 0x830]
        __asm _emit 0x2B
        __asm _emit 0x90
        __asm _emit 0x30
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8436: mov dword ptr [eax + 0x830], edx
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x30
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D843C: mov ecx, dword ptr [edi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8442: mov edx, dword ptr [ecx + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D8448: mov cx, word ptr [edx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x0C
        // 0x587D844C: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587D8450: shr cx, 0xa
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x0A
        // 0x587D8454: inc eax
        __asm _emit 0x40
        // 0x587D8455: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x587D8459: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587D845D: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x587D8460: jb 0x587d8160
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0xFA
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D8466: pop edi
        __asm _emit 0x5F
        // 0x587D8467: pop esi
        __asm _emit 0x5E
        // 0x587D8468: pop ebp
        __asm _emit 0x5D
        // 0x587D8469: pop ebx
        __asm _emit 0x5B
        // 0x587D846A: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x587D846C: pop ebp
        __asm _emit 0x5D
        // 0x587D846D: ret
        __asm _emit 0xC3
    }
}
