// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Mapped callable extent: 0x5878A3A0 .. +0x221 bytes.
// Source symbol alias: FUN_5878a3a0.
extern "C" __declspec(naked) void FUN_5878a3a0() {
    __asm {
        // 0x5878A3A0: sub esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x18
        // 0x5878A3A3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5878A3A5: push edi
        __asm _emit 0x57
        // 0x5878A3A6: mov edi, dword ptr [ecx + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x78
        // 0x5878A3A9: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5878A3AD: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5878A3B1: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5878A3B5: mov dword ptr [esp + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5878A3B9: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x5878A3BB: je 0x5878a5ba
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878A3C1: push ebx
        __asm _emit 0x53
        // 0x5878A3C2: push ebp
        __asm _emit 0x55
        // 0x5878A3C3: push esi
        __asm _emit 0x56
        // 0x5878A3C4: mov ebp, dword ptr [edi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6F
        __asm _emit 0x14
        // 0x5878A3C7: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x5878A3C9: je 0x5878a59e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xCF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878A3CF: nop
        __asm _emit 0x90
        // 0x5878A3D0: cmp dword ptr [esp + 0x34], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x00
        // 0x5878A3D5: mov ecx, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x5878A3D8: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x5878A3DB: mov esi, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x04
        // 0x5878A3DE: mov dword ptr [esp + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5878A3E2: mov ecx, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x04
        // 0x5878A3E5: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5878A3E9: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5878A3EB: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5878A3ED: je 0x5878a4c4
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878A3F3: mov bl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x18
        // 0x5878A3F5: cmp bl, byte ptr [edx]
        __asm _emit 0x3A
        __asm _emit 0x1A
        // 0x5878A3F7: jne 0x5878a413
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x5878A3F9: test bl, bl
        __asm _emit 0x84
        __asm _emit 0xDB
        // 0x5878A3FB: je 0x5878a40f
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5878A3FD: mov bl, byte ptr [eax + 1]
        __asm _emit 0x8A
        __asm _emit 0x58
        __asm _emit 0x01
        // 0x5878A400: cmp bl, byte ptr [edx + 1]
        __asm _emit 0x3A
        __asm _emit 0x5A
        __asm _emit 0x01
        // 0x5878A403: jne 0x5878a413
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x5878A405: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x5878A408: add edx, 2
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x02
        // 0x5878A40B: test bl, bl
        __asm _emit 0x84
        __asm _emit 0xDB
        // 0x5878A40D: jne 0x5878a3f3
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x5878A40F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5878A411: jmp 0x5878a418
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x5878A413: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x5878A415: sbb eax, -1
        __asm _emit 0x83
        __asm _emit 0xD8
        __asm _emit 0xFF
        // 0x5878A418: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5878A41A: jle 0x5878a58f
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x6F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878A420: mov dword ptr [edi + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x5878A423: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x08
        // 0x5878A426: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5878A42A: mov dword ptr [edi + 8], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x08
        // 0x5878A42D: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x5878A430: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5878A434: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x5878A437: mov dword ptr [ebp + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x0C
        // 0x5878A43A: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5878A43C: cmp dword ptr [esp + 0x30], edx
        __asm _emit 0x39
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5878A440: mov dword ptr [ebp + 4], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x5878A443: mov dword ptr [ebp + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x5878A446: mov dword ptr [esp + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5878A44A: jle 0x5878a58f
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x3F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878A450: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5878A454: mov eax, dword ptr [eax + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x90
        // 0x5878A457: cmp eax, dword ptr [esp + 0x24]
        __asm _emit 0x3B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5878A45B: je 0x5878a4b4
        __asm _emit 0x74
        __asm _emit 0x57
        // 0x5878A45D: mov edx, dword ptr [eax + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x78
        // 0x5878A460: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5878A464: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5878A466: jle 0x5878a470
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x5878A468: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x5878A46B: mov edx, dword ptr [edx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x14
        // 0x5878A46E: jne 0x5878a468
        __asm _emit 0x75
        __asm _emit 0xF8
        // 0x5878A470: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5878A474: mov eax, dword ptr [edx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x14
        // 0x5878A477: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5878A479: jle 0x5878a488
        __asm _emit 0x7E
        __asm _emit 0x0D
        // 0x5878A47B: jmp 0x5878a480
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x5878A47D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x5878A480: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x5878A483: mov eax, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x14
        // 0x5878A486: jne 0x5878a480
        __asm _emit 0x75
        __asm _emit 0xF8
        // 0x5878A488: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5878A48B: mov esi, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x72
        __asm _emit 0x04
        // 0x5878A48E: mov edi, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x7A
        __asm _emit 0x08
        // 0x5878A491: mov ebx, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5A
        __asm _emit 0x0C
        // 0x5878A494: mov dword ptr [edx + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x5878A497: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x5878A49A: mov dword ptr [edx + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x08
        // 0x5878A49D: mov ecx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x5878A4A0: mov dword ptr [edx + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x0C
        // 0x5878A4A3: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5878A4A7: mov dword ptr [eax + 8], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x5878A4AA: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5878A4AE: mov dword ptr [eax + 4], esi
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x5878A4B1: mov dword ptr [eax + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x0C
        // 0x5878A4B4: inc edx
        __asm _emit 0x42
        // 0x5878A4B5: cmp edx, dword ptr [esp + 0x30]
        __asm _emit 0x3B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5878A4B9: mov dword ptr [esp + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5878A4BD: jl 0x5878a450
        __asm _emit 0x7C
        __asm _emit 0x91
        // 0x5878A4BF: jmp 0x5878a58f
        __asm _emit 0xE9
        __asm _emit 0xCB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878A4C4: mov bl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x18
        // 0x5878A4C6: cmp bl, byte ptr [edx]
        __asm _emit 0x3A
        __asm _emit 0x1A
        // 0x5878A4C8: jne 0x5878a4e4
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x5878A4CA: test bl, bl
        __asm _emit 0x84
        __asm _emit 0xDB
        // 0x5878A4CC: je 0x5878a4e0
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5878A4CE: mov bl, byte ptr [eax + 1]
        __asm _emit 0x8A
        __asm _emit 0x58
        __asm _emit 0x01
        // 0x5878A4D1: cmp bl, byte ptr [edx + 1]
        __asm _emit 0x3A
        __asm _emit 0x5A
        __asm _emit 0x01
        // 0x5878A4D4: jne 0x5878a4e4
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x5878A4D6: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x5878A4D9: add edx, 2
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x02
        // 0x5878A4DC: test bl, bl
        __asm _emit 0x84
        __asm _emit 0xDB
        // 0x5878A4DE: jne 0x5878a4c4
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x5878A4E0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5878A4E2: jmp 0x5878a4e9
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x5878A4E4: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x5878A4E6: sbb eax, -1
        __asm _emit 0x83
        __asm _emit 0xD8
        __asm _emit 0xFF
        // 0x5878A4E9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5878A4EB: jge 0x5878a58f
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878A4F1: mov dword ptr [edi + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x5878A4F4: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x08
        // 0x5878A4F7: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5878A4FB: mov dword ptr [edi + 8], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x08
        // 0x5878A4FE: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x5878A501: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5878A505: mov dword ptr [edi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x5878A508: mov dword ptr [ebp + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x0C
        // 0x5878A50B: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5878A50D: cmp dword ptr [esp + 0x30], edx
        __asm _emit 0x39
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5878A511: mov dword ptr [ebp + 4], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x5878A514: mov dword ptr [ebp + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x5878A517: mov dword ptr [esp + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5878A51B: jle 0x5878a58f
        __asm _emit 0x7E
        __asm _emit 0x72
        // 0x5878A51D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x5878A520: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5878A524: mov eax, dword ptr [eax + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x90
        // 0x5878A527: cmp eax, dword ptr [esp + 0x24]
        __asm _emit 0x3B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5878A52B: je 0x5878a584
        __asm _emit 0x74
        __asm _emit 0x57
        // 0x5878A52D: mov edx, dword ptr [eax + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x78
        // 0x5878A530: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5878A534: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5878A536: jle 0x5878a540
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x5878A538: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x5878A53B: mov edx, dword ptr [edx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x14
        // 0x5878A53E: jne 0x5878a538
        __asm _emit 0x75
        __asm _emit 0xF8
        // 0x5878A540: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5878A544: mov eax, dword ptr [edx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x14
        // 0x5878A547: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5878A549: jle 0x5878a558
        __asm _emit 0x7E
        __asm _emit 0x0D
        // 0x5878A54B: jmp 0x5878a550
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x5878A54D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x5878A550: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x5878A553: mov eax, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x14
        // 0x5878A556: jne 0x5878a550
        __asm _emit 0x75
        __asm _emit 0xF8
        // 0x5878A558: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5878A55B: mov esi, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x72
        __asm _emit 0x04
        // 0x5878A55E: mov edi, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x7A
        __asm _emit 0x08
        // 0x5878A561: mov ebx, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5A
        __asm _emit 0x0C
        // 0x5878A564: mov dword ptr [edx + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x5878A567: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x5878A56A: mov dword ptr [edx + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x08
        // 0x5878A56D: mov ecx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x5878A570: mov dword ptr [edx + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x0C
        // 0x5878A573: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5878A577: mov dword ptr [eax + 8], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x5878A57A: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5878A57E: mov dword ptr [eax + 4], esi
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x5878A581: mov dword ptr [eax + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x0C
        // 0x5878A584: inc edx
        __asm _emit 0x42
        // 0x5878A585: cmp edx, dword ptr [esp + 0x30]
        __asm _emit 0x3B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5878A589: mov dword ptr [esp + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5878A58D: jl 0x5878a520
        __asm _emit 0x7C
        __asm _emit 0x91
        // 0x5878A58F: mov ebp, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6D
        __asm _emit 0x14
        // 0x5878A592: inc dword ptr [esp + 0x10]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5878A596: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5878A598: jne 0x5878a3d0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x32
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5878A59E: mov edi, dword ptr [edi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x14
        // 0x5878A5A1: inc dword ptr [esp + 0x14]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5878A5A5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5878A5A7: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5878A5AB: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5878A5AF: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x5878A5B1: jne 0x5878a3c4
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x0D
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5878A5B7: pop esi
        __asm _emit 0x5E
        // 0x5878A5B8: pop ebp
        __asm _emit 0x5D
        // 0x5878A5B9: pop ebx
        __asm _emit 0x5B
        // 0x5878A5BA: pop edi
        __asm _emit 0x5F
        // Ghidra left this stack-cleanup epilogue unowned; it is contiguous
        // mapped code followed by INT3 alignment before the next indexed function.
        // 0x5878A5BB: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x5878A5BE: ret 0xC
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
