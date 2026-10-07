// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 2068 bytes in 2 exact ranges.
// Source symbol alias: FUN_5884f4e0.

// Ghidra body range 0x5884F4E0..0x5884FC1D; 1853 mapped bytes.
extern "C" __declspec(naked) void FUN_5884f4e0_segment_00() {
    __asm {
        // 0x5884F4E0: sub esp, 0xd0
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F4E6: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5884F4EB: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5884F4ED: mov dword ptr [esp + 0xcc], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F4F4: mov eax, dword ptr [esp + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F4FB: push ebx
        __asm _emit 0x53
        // 0x5884F4FC: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x5884F4FE: lea edx, [ebx + 0x1a4]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F504: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5884F508: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884F50A: mov dword ptr [edx], eax
        __asm _emit 0x89
        __asm _emit 0x02
        // 0x5884F50C: mov dword ptr [edx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5884F50F: mov dword ptr [edx + 8], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x5884F512: mov dword ptr [edx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x5884F515: mov dword ptr [edx + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x10
        // 0x5884F518: mov dword ptr [edx + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x14
        // 0x5884F51B: mov eax, dword ptr [ebx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x6C
        // 0x5884F51E: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F523: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5884F527: mov eax, dword ptr [ebx + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x70
        // 0x5884F52A: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5884F52E: push ebp
        __asm _emit 0x55
        // 0x5884F52F: push esi
        __asm _emit 0x56
        // 0x5884F530: push edi
        __asm _emit 0x57
        // 0x5884F531: mov dword ptr [esp + 0x48], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5884F535: lea eax, [ebx + 0x124]
        __asm _emit 0x8D
        __asm _emit 0x83
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F53B: lea esi, [ebx + 0x84]
        __asm _emit 0x8D
        __asm _emit 0xB3
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F541: mov dword ptr [esp + 0x14], 4
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F549: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F550: mov ecx, dword ptr [esi - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0xF0
        // 0x5884F553: mov edi, 0xfffe
        __asm _emit 0xBF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F558: and word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x79
        __asm _emit 0x24
        // 0x5884F55C: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5884F55E: and word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x79
        __asm _emit 0x24
        // 0x5884F562: mov ecx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x5884F565: and word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x79
        __asm _emit 0x24
        // 0x5884F569: mov edi, 8
        __asm _emit 0xBF
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F56E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5884F570: mov ecx, dword ptr [eax - 0x80]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x80
        // 0x5884F573: mov ebp, 0xfffe
        __asm _emit 0xBD
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F578: and word ptr [ecx + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x69
        __asm _emit 0x24
        // 0x5884F57C: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5884F57E: and word ptr [ecx + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x69
        __asm _emit 0x24
        // 0x5884F582: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x5884F585: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x5884F588: jne 0x5884f570
        __asm _emit 0x75
        __asm _emit 0xE6
        // 0x5884F58A: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5884F58D: sub dword ptr [esp + 0x14], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x01
        // 0x5884F592: jne 0x5884f550
        __asm _emit 0x75
        __asm _emit 0xBC
        // 0x5884F594: mov ebp, dword ptr [esp + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0xAC
        __asm _emit 0x24
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F59B: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5884F59D: jne 0x5884f5a8
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x5884F59F: mov byte ptr [ebx + 0x60], 0
        __asm _emit 0xC6
        __asm _emit 0x43
        __asm _emit 0x60
        __asm _emit 0x00
        // 0x5884F5A3: jmp 0x5884fcdc
        __asm _emit 0xE9
        __asm _emit 0x34
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F5A8: cmp ebp, 4
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x04
        // 0x5884F5AB: mov byte ptr [ebx + 0x60], 1
        __asm _emit 0xC6
        __asm _emit 0x43
        __asm _emit 0x60
        __asm _emit 0x01
        // 0x5884F5AF: jle 0x5884f5bd
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x5884F5B1: mov ebp, 4
        __asm _emit 0xBD
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F5B6: mov dword ptr [esp + 0xe8], ebp
        __asm _emit 0x89
        __asm _emit 0xAC
        __asm _emit 0x24
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F5BD: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5884F5C1: lea eax, [ebp + ebp*2]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x6D
        __asm _emit 0x00
        // 0x5884F5C5: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x5884F5C7: push eax
        __asm _emit 0x50
        // 0x5884F5C8: push ecx
        __asm _emit 0x51
        // 0x5884F5C9: push edx
        __asm _emit 0x52
        // 0x5884F5CA: call 0x5897cd4c
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0xD7
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5884F5CF: mov esi, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x73
        __asm _emit 0x04
        // 0x5884F5D2: mov edi, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x7B
        __asm _emit 0x08
        // 0x5884F5D5: mov ecx, dword ptr [ebx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x64
        // 0x5884F5D8: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5884F5DA: add eax, 0x35
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x35
        // 0x5884F5DD: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x5884F5DF: add edx, 0x6d
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x6D
        // 0x5884F5E2: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5884F5E5: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5884F5E9: mov eax, dword ptr [ebx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x6C
        // 0x5884F5EC: mov dword ptr [esp + 0x4c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5884F5F0: mov dword ptr [esp + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x5884F5F4: mov dword ptr [esp + 0x30], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5884F5F8: cmp ebp, 1
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x01
        // 0x5884F5FB: jne 0x5884f669
        __asm _emit 0x75
        __asm _emit 0x6C
        // 0x5884F5FD: cmp dword ptr [ecx + 0x164], 0x1b
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1B
        // 0x5884F604: jle 0x5884f644
        __asm _emit 0x7E
        __asm _emit 0x3E
        // 0x5884F606: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F60C: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5884F60E: je 0x5884f644
        __asm _emit 0x74
        __asm _emit 0x34
        // 0x5884F610: mov ecx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x6C
        // 0x5884F613: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5884F615: je 0x5884f644
        __asm _emit 0x74
        __asm _emit 0x2D
        // 0x5884F617: mov dword ptr [eax + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x5884F61A: mov edx, dword ptr [ecx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5884F61D: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x5884F620: mov edx, dword ptr [ecx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x14
        // 0x5884F623: add ecx, 0x18
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x18
        // 0x5884F626: mov dword ptr [eax + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5884F629: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5884F62B: mov dword ptr [eax + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x5884F62E: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5884F631: mov dword ptr [eax + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5884F634: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5884F637: mov dword ptr [eax + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5884F63A: mov ecx, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x0C
        // 0x5884F63D: mov dword ptr [eax + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x20
        // 0x5884F640: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        // 0x5884F644: mov ecx, dword ptr [ebx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x6C
        // 0x5884F647: push edi
        __asm _emit 0x57
        // 0x5884F648: push esi
        __asm _emit 0x56
        // 0x5884F649: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0x3C
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884F64E: mov ecx, dword ptr [ebx + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x70
        // 0x5884F651: push edi
        __asm _emit 0x57
        // 0x5884F652: push esi
        __asm _emit 0x56
        // 0x5884F653: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0x3C
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884F658: add edi, 0xf6
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0xF6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F65E: add esi, 0xff
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F664: jmp 0x5884f81c
        __asm _emit 0xE9
        __asm _emit 0xB3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F669: cmp ebp, 2
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x02
        // 0x5884F66C: jne 0x5884f736
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F672: cmp dword ptr [ecx + 0x164], 0x1f
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x1F
        // 0x5884F679: jle 0x5884f6ba
        __asm _emit 0x7E
        __asm _emit 0x3F
        // 0x5884F67B: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F681: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5884F683: je 0x5884f6ba
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x5884F685: mov ecx, dword ptr [ecx + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x7C
        // 0x5884F688: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5884F68A: je 0x5884f6ba
        __asm _emit 0x74
        __asm _emit 0x2E
        // 0x5884F68C: mov dword ptr [eax + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x5884F68F: mov edx, dword ptr [ecx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5884F692: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x5884F695: mov edx, dword ptr [ecx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x14
        // 0x5884F698: add ecx, 0x18
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x18
        // 0x5884F69B: mov dword ptr [eax + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5884F69E: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5884F6A0: mov dword ptr [eax + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x5884F6A3: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5884F6A6: mov dword ptr [eax + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5884F6A9: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5884F6AC: mov dword ptr [eax + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5884F6AF: mov ecx, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x0C
        // 0x5884F6B2: mov dword ptr [eax + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x20
        // 0x5884F6B5: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5884F6BA: mov ecx, dword ptr [ebx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x64
        // 0x5884F6BD: cmp dword ptr [ecx + 0x164], 0x20
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        // 0x5884F6C4: mov eax, dword ptr [ebx + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x70
        // 0x5884F6C7: jle 0x5884f70b
        __asm _emit 0x7E
        __asm _emit 0x42
        // 0x5884F6C9: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F6CF: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5884F6D1: je 0x5884f70b
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x5884F6D3: mov ecx, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F6D9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5884F6DB: je 0x5884f70b
        __asm _emit 0x74
        __asm _emit 0x2E
        // 0x5884F6DD: mov dword ptr [eax + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x5884F6E0: mov edx, dword ptr [ecx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5884F6E3: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x5884F6E6: mov edx, dword ptr [ecx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x14
        // 0x5884F6E9: add ecx, 0x18
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x18
        // 0x5884F6EC: mov dword ptr [eax + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5884F6EF: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5884F6F1: mov dword ptr [eax + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x5884F6F4: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5884F6F7: mov dword ptr [eax + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5884F6FA: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5884F6FD: mov dword ptr [eax + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5884F700: mov ecx, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x0C
        // 0x5884F703: mov dword ptr [eax + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x20
        // 0x5884F706: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5884F70B: mov ecx, dword ptr [ebx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x6C
        // 0x5884F70E: sub dword ptr [esp + 0x2c], 0x62
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x62
        // 0x5884F713: sub esi, 0x62
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x62
        // 0x5884F716: push edi
        __asm _emit 0x57
        // 0x5884F717: push esi
        __asm _emit 0x56
        // 0x5884F718: mov dword ptr [esp + 0x54], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x5884F71C: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0x3B
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884F721: mov ecx, dword ptr [ebx + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x70
        // 0x5884F724: push edi
        __asm _emit 0x57
        // 0x5884F725: push esi
        __asm _emit 0x56
        // 0x5884F726: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0x3B
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884F72B: add edi, 0xf1
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0xF1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F731: jmp 0x5884f816
        __asm _emit 0xE9
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F736: cmp dword ptr [ecx + 0x164], 0x21
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x21
        // 0x5884F73D: jle 0x5884f789
        __asm _emit 0x7E
        __asm _emit 0x4A
        // 0x5884F73F: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F745: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5884F747: je 0x5884f789
        __asm _emit 0x74
        __asm _emit 0x40
        // 0x5884F749: mov ecx, dword ptr [ecx + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F74F: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5884F751: je 0x5884f789
        __asm _emit 0x74
        __asm _emit 0x36
        // 0x5884F753: mov dword ptr [eax + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x5884F756: mov ebp, dword ptr [ecx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x69
        __asm _emit 0x10
        // 0x5884F759: mov dword ptr [eax + 0xc], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x0C
        // 0x5884F75C: mov ebp, dword ptr [ecx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x69
        __asm _emit 0x14
        // 0x5884F75F: mov dword ptr [eax + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x5884F762: mov ebp, dword ptr [ecx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x69
        __asm _emit 0x18
        // 0x5884F765: add ecx, 0x18
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x18
        // 0x5884F768: mov dword ptr [eax + 0x14], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x14
        // 0x5884F76B: mov ebp, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x69
        __asm _emit 0x04
        // 0x5884F76E: mov dword ptr [eax + 0x18], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x18
        // 0x5884F771: mov ebp, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x69
        __asm _emit 0x08
        // 0x5884F774: mov dword ptr [eax + 0x1c], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x1C
        // 0x5884F777: mov ecx, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x0C
        // 0x5884F77A: mov ebp, dword ptr [esp + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0xAC
        __asm _emit 0x24
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F781: mov dword ptr [eax + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x20
        // 0x5884F784: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5884F789: mov ecx, dword ptr [ebx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x64
        // 0x5884F78C: cmp dword ptr [ecx + 0x164], 0x22
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x22
        // 0x5884F793: mov eax, dword ptr [ebx + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x70
        // 0x5884F796: jle 0x5884f7e2
        __asm _emit 0x7E
        __asm _emit 0x4A
        // 0x5884F798: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F79E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5884F7A0: je 0x5884f7e2
        __asm _emit 0x74
        __asm _emit 0x40
        // 0x5884F7A2: mov ecx, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F7A8: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5884F7AA: je 0x5884f7e2
        __asm _emit 0x74
        __asm _emit 0x36
        // 0x5884F7AC: mov dword ptr [eax + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x5884F7AF: mov ebp, dword ptr [ecx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x69
        __asm _emit 0x10
        // 0x5884F7B2: mov dword ptr [eax + 0xc], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x0C
        // 0x5884F7B5: mov ebp, dword ptr [ecx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x69
        __asm _emit 0x14
        // 0x5884F7B8: mov dword ptr [eax + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x5884F7BB: mov ebp, dword ptr [ecx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x69
        __asm _emit 0x18
        // 0x5884F7BE: add ecx, 0x18
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x18
        // 0x5884F7C1: mov dword ptr [eax + 0x14], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x14
        // 0x5884F7C4: mov ebp, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x69
        __asm _emit 0x04
        // 0x5884F7C7: mov dword ptr [eax + 0x18], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x18
        // 0x5884F7CA: mov ebp, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x69
        __asm _emit 0x08
        // 0x5884F7CD: mov dword ptr [eax + 0x1c], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x1C
        // 0x5884F7D0: mov ecx, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x0C
        // 0x5884F7D3: mov ebp, dword ptr [esp + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0xAC
        __asm _emit 0x24
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F7DA: mov dword ptr [eax + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x20
        // 0x5884F7DD: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5884F7E2: mov ecx, dword ptr [ebx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x6C
        // 0x5884F7E5: sub dword ptr [esp + 0x2c], 0x62
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x62
        // 0x5884F7EA: sub edi, 0x64
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x64
        // 0x5884F7ED: sub esi, 0x62
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x62
        // 0x5884F7F0: push edi
        __asm _emit 0x57
        // 0x5884F7F1: sub edx, 0x64
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x64
        // 0x5884F7F4: push esi
        __asm _emit 0x56
        // 0x5884F7F5: mov dword ptr [esp + 0x54], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x5884F7F9: mov dword ptr [esp + 0x58], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x5884F7FD: mov dword ptr [esp + 0x38], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5884F801: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0x3A
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884F806: mov ecx, dword ptr [ebx + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x70
        // 0x5884F809: push edi
        __asm _emit 0x57
        // 0x5884F80A: push esi
        __asm _emit 0x56
        // 0x5884F80B: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0x3A
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884F810: add edi, 0x1ae
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0xAE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F816: add esi, 0x21c
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F81C: mov eax, dword ptr [ebx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x6C
        // 0x5884F81F: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5884F822: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x5884F825: add ecx, 0xa4
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F82B: push edi
        __asm _emit 0x57
        // 0x5884F82C: add eax, 0x46
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x46
        // 0x5884F82F: mov dword ptr [esp + 0x3c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5884F833: mov ecx, dword ptr [ebx + 0x1c4]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F839: push esi
        __asm _emit 0x56
        // 0x5884F83A: mov dword ptr [esp + 0x44], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5884F83E: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0x3A
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884F843: mov dword ptr [esp + 0x28], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F84B: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5884F84D: jle 0x5884fcdc
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F853: lea edx, [ebx + 0xa4]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F859: lea eax, [ebx + 0x84]
        __asm _emit 0x8D
        __asm _emit 0x83
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F85F: add ebx, 0x1a8
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0xA8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F865: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5884F869: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5884F86D: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5884F871: mov edi, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5884F875: movzx eax, word ptr [edi - 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x47
        __asm _emit 0xFC
        // 0x5884F879: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5884F87D: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5884F881: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5884F883: and ebx, 0x80000001
        __asm _emit 0x81
        __asm _emit 0xE3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x5884F889: jns 0x5884f890
        __asm _emit 0x79
        __asm _emit 0x05
        // 0x5884F88B: dec ebx
        __asm _emit 0x4B
        // 0x5884F88C: or ebx, 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0xCB
        __asm _emit 0xFE
        // 0x5884F88F: inc ebx
        __asm _emit 0x43
        // 0x5884F890: movzx ecx, word ptr [edi - 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4F
        __asm _emit 0xFE
        // 0x5884F894: imul ebx, ebx, 0x12c
        __asm _emit 0x69
        __asm _emit 0xDB
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F89A: cdq
        __asm _emit 0x99
        // 0x5884F89B: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5884F89D: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x5884F89F: push ecx
        __asm _emit 0x51
        // 0x5884F8A0: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884F8A6: sar ebp, 1
        __asm _emit 0xD1
        __asm _emit 0xFD
        // 0x5884F8A8: imul ebp, ebp, 0xc8
        __asm _emit 0x69
        __asm _emit 0xED
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F8AE: call 0x58779840
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0x9F
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x5884F8B3: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5884F8B5: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5884F8B7: je 0x5884fcc7
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x0A
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F8BD: movzx eax, word ptr [edi]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x07
        // 0x5884F8C0: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x5884F8C4: jbe 0x5884f8eb
        __asm _emit 0x76
        __asm _emit 0x25
        // 0x5884F8C6: movzx edx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD0
        // 0x5884F8C9: push edx
        __asm _emit 0x52
        // 0x5884F8CA: lea eax, [esi + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x5884F8CD: push eax
        __asm _emit 0x50
        // 0x5884F8CE: push 0x5899e8bc
        __asm _emit 0x68
        __asm _emit 0xBC
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5884F8D3: lea ecx, [esp + 0x68]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x68
        // 0x5884F8D7: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F8DC: push ecx
        __asm _emit 0x51
        // 0x5884F8DD: call 0x5874ba60
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x5884F8E2: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x5884F8E5: lea ecx, [esp + 0x5c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x5C
        // 0x5884F8E9: jmp 0x5884f8ee
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x5884F8EB: lea ecx, [esi + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x5884F8EE: movzx edx, word ptr [esp + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5884F8F3: mov edi, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5884F8F7: lea eax, [edi + edx*4 + 0x1d0]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0xD0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F8FE: push ecx
        __asm _emit 0x51
        // 0x5884F8FF: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5884F901: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5884F905: call 0x5875f7c0
        __asm _emit 0xE8
        __asm _emit 0xB6
        __asm _emit 0xFE
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5884F90A: cmp word ptr [esp + 0x24], 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x05
        // 0x5884F910: jne 0x5884f986
        __asm _emit 0x75
        __asm _emit 0x74
        // 0x5884F912: mov edx, dword ptr [edi + 0x1e4]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0xE4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F918: mov ecx, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x08
        // 0x5884F91B: mov eax, dword ptr [edi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x6C
        // 0x5884F91E: mov edx, dword ptr [edi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x64
        // 0x5884F921: cmp ecx, -1
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x5884F924: je 0x5884f971
        __asm _emit 0x74
        __asm _emit 0x4B
        // 0x5884F926: cmp dword ptr [edx + 0x164], ecx
        __asm _emit 0x39
        __asm _emit 0x8A
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F92C: jle 0x5884f971
        __asm _emit 0x7E
        __asm _emit 0x43
        // 0x5884F92E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5884F930: jl 0x5884f971
        __asm _emit 0x7C
        __asm _emit 0x3F
        // 0x5884F932: mov edx, dword ptr [edx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F938: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5884F93A: je 0x5884f971
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x5884F93C: mov ecx, dword ptr [edx + ecx*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x8A
        // 0x5884F93F: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5884F941: je 0x5884f971
        __asm _emit 0x74
        __asm _emit 0x2E
        // 0x5884F943: mov dword ptr [eax + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x5884F946: mov edx, dword ptr [ecx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5884F949: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x5884F94C: mov edx, dword ptr [ecx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x14
        // 0x5884F94F: add ecx, 0x18
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x18
        // 0x5884F952: mov dword ptr [eax + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5884F955: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5884F957: mov dword ptr [eax + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x5884F95A: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5884F95D: mov dword ptr [eax + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5884F960: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5884F963: mov dword ptr [eax + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5884F966: mov ecx, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x0C
        // 0x5884F969: mov dword ptr [eax + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x20
        // 0x5884F96C: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5884F971: mov edx, dword ptr [edi + 0x1e4]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0xE4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F977: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5884F97B: mov ecx, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x10
        // 0x5884F97E: mov eax, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x10
        // 0x5884F981: jmp 0x5884fa55
        __asm _emit 0xE9
        __asm _emit 0xCF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F986: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5884F98A: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x5884F98C: mov ecx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x10
        // 0x5884F98F: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5884F993: mov eax, dword ptr [edx - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0xF0
        // 0x5884F996: mov edx, dword ptr [edi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x64
        // 0x5884F999: cmp ecx, -1
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x5884F99C: je 0x5884f9e9
        __asm _emit 0x74
        __asm _emit 0x4B
        // 0x5884F99E: cmp dword ptr [edx + 0x164], ecx
        __asm _emit 0x39
        __asm _emit 0x8A
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F9A4: jle 0x5884f9e9
        __asm _emit 0x7E
        __asm _emit 0x43
        // 0x5884F9A6: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5884F9A8: jl 0x5884f9e9
        __asm _emit 0x7C
        __asm _emit 0x3F
        // 0x5884F9AA: mov edx, dword ptr [edx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884F9B0: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5884F9B2: je 0x5884f9e9
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x5884F9B4: mov ecx, dword ptr [edx + ecx*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x8A
        // 0x5884F9B7: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5884F9B9: je 0x5884f9e9
        __asm _emit 0x74
        __asm _emit 0x2E
        // 0x5884F9BB: mov dword ptr [eax + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x5884F9BE: mov edx, dword ptr [ecx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5884F9C1: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x5884F9C4: mov edx, dword ptr [ecx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x14
        // 0x5884F9C7: add ecx, 0x18
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x18
        // 0x5884F9CA: mov dword ptr [eax + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5884F9CD: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5884F9CF: mov dword ptr [eax + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x5884F9D2: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5884F9D5: mov dword ptr [eax + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5884F9D8: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5884F9DB: mov dword ptr [eax + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5884F9DE: mov ecx, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x0C
        // 0x5884F9E1: mov dword ptr [eax + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x20
        // 0x5884F9E4: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5884F9E9: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5884F9ED: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x5884F9EF: mov ecx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x5884F9F2: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5884F9F6: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x5884F9F8: mov edx, dword ptr [edi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x64
        // 0x5884F9FB: cmp ecx, -1
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x5884F9FE: je 0x5884fa4b
        __asm _emit 0x74
        __asm _emit 0x4B
        // 0x5884FA00: cmp dword ptr [edx + 0x164], ecx
        __asm _emit 0x39
        __asm _emit 0x8A
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884FA06: jle 0x5884fa4b
        __asm _emit 0x7E
        __asm _emit 0x43
        // 0x5884FA08: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5884FA0A: jl 0x5884fa4b
        __asm _emit 0x7C
        __asm _emit 0x3F
        // 0x5884FA0C: mov edx, dword ptr [edx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884FA12: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5884FA14: je 0x5884fa4b
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x5884FA16: mov ecx, dword ptr [edx + ecx*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x8A
        // 0x5884FA19: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5884FA1B: je 0x5884fa4b
        __asm _emit 0x74
        __asm _emit 0x2E
        // 0x5884FA1D: mov dword ptr [eax + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x5884FA20: mov edx, dword ptr [ecx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5884FA23: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x5884FA26: mov edx, dword ptr [ecx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x14
        // 0x5884FA29: add ecx, 0x18
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x18
        // 0x5884FA2C: mov dword ptr [eax + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5884FA2F: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5884FA31: mov dword ptr [eax + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x5884FA34: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5884FA37: mov dword ptr [eax + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5884FA3A: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5884FA3D: mov dword ptr [eax + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5884FA40: mov ecx, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x0C
        // 0x5884FA43: mov dword ptr [eax + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x20
        // 0x5884FA46: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5884FA4B: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5884FA4F: mov eax, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x10
        // 0x5884FA52: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x5884FA55: cmp ecx, -1
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x5884FA58: je 0x5884faac
        __asm _emit 0x74
        __asm _emit 0x52
        // 0x5884FA5A: mov edx, dword ptr [0x58a24730]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884FA60: cmp dword ptr [edx + 0x164], ecx
        __asm _emit 0x39
        __asm _emit 0x8A
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884FA66: jle 0x5884faac
        __asm _emit 0x7E
        __asm _emit 0x44
        // 0x5884FA68: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5884FA6A: jl 0x5884faac
        __asm _emit 0x7C
        __asm _emit 0x40
        // 0x5884FA6C: mov edx, dword ptr [edx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884FA72: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5884FA74: je 0x5884faac
        __asm _emit 0x74
        __asm _emit 0x36
        // 0x5884FA76: mov ecx, dword ptr [edx + ecx*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x8A
        // 0x5884FA79: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5884FA7B: je 0x5884faac
        __asm _emit 0x74
        __asm _emit 0x2F
        // 0x5884FA7D: mov dword ptr [eax + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x5884FA80: mov edx, dword ptr [ecx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5884FA83: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x5884FA86: mov edx, dword ptr [ecx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x14
        // 0x5884FA89: mov dword ptr [eax + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5884FA8C: mov edx, dword ptr [ecx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x18
        // 0x5884FA8F: add ecx, 0x18
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x18
        // 0x5884FA92: mov dword ptr [eax + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x5884FA95: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5884FA98: mov dword ptr [eax + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5884FA9B: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5884FA9E: mov dword ptr [eax + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5884FAA1: mov ecx, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x0C
        // 0x5884FAA4: mov dword ptr [eax + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x20
        // 0x5884FAA7: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5884FAAC: mov edx, dword ptr [esp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x5884FAB0: mov eax, dword ptr [esp + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5884FAB4: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5884FAB8: mov ecx, dword ptr [ecx - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0xF0
        // 0x5884FABB: lea esi, [edx + ebp]
        __asm _emit 0x8D
        __asm _emit 0x34
        __asm _emit 0x2A
        // 0x5884FABE: lea edi, [ebx + eax]
        __asm _emit 0x8D
        __asm _emit 0x3C
        __asm _emit 0x03
        // 0x5884FAC1: push esi
        __asm _emit 0x56
        // 0x5884FAC2: push edi
        __asm _emit 0x57
        // 0x5884FAC3: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0x37
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884FAC8: push esi
        __asm _emit 0x56
        // 0x5884FAC9: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5884FACD: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5884FACF: push edi
        __asm _emit 0x57
        // 0x5884FAD0: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0x37
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884FAD5: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5884FAD9: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5884FADD: lea eax, [edx + ebp]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x2A
        // 0x5884FAE0: lea edx, [ebx + ecx]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x0B
        // 0x5884FAE3: mov ecx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x5884FAE6: push eax
        __asm _emit 0x50
        // 0x5884FAE7: push edx
        __asm _emit 0x52
        // 0x5884FAE8: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0x37
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884FAED: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5884FAF1: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x5884FAF3: cmp dword ptr [eax + 0x1c], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x5884FAF7: mov dword ptr [esp + 0x44], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884FAFF: jle 0x5884fca0
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x9B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884FB05: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5884FB09: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5884FB0D: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5884FB11: add ebx, ecx
        __asm _emit 0x03
        __asm _emit 0xD9
        // 0x5884FB13: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xEA
        // 0x5884FB15: mov dword ptr [esp + 0x40], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5884FB19: mov dword ptr [esp + 0x34], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884FB21: mov dword ptr [esp + 0x18], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5884FB25: mov ecx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5884FB29: cmp ecx, dword ptr [eax + 0x1c]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x1C
        // 0x5884FB2C: jae 0x5884fb38
        __asm _emit 0x73
        __asm _emit 0x0A
        // 0x5884FB2E: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5884FB32: lea ebx, [eax + edx + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x5C
        __asm _emit 0x10
        __asm _emit 0x20
        // 0x5884FB36: jmp 0x5884fb3a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5884FB38: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5884FB3A: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x5884FB3C: lea edx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x5884FB3F: nop
        __asm _emit 0x90
        // 0x5884FB40: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x5884FB42: inc eax
        __asm _emit 0x40
        // 0x5884FB43: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5884FB45: jne 0x5884fb40
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x5884FB47: mov ecx, dword ptr [0x58a24554]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x54
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5884FB4D: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5884FB4F: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5884FB51: lea esi, [esp + 0x54]
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x5884FB55: push esi
        __asm _emit 0x56
        // 0x5884FB56: push eax
        __asm _emit 0x50
        // 0x5884FB57: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5884FB5A: push ebx
        __asm _emit 0x53
        // 0x5884FB5B: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5884FB5D: mov eax, 0x87
        __asm _emit 0xB8
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884FB62: sub eax, dword ptr [esp + 0x54]
        __asm _emit 0x2B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x54
        // 0x5884FB66: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5884FB68: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5884FB6A: jle 0x5884fb73
        __asm _emit 0x7E
        __asm _emit 0x07
        // 0x5884FB6C: cdq
        __asm _emit 0x99
        // 0x5884FB6D: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5884FB6F: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5884FB71: sar esi, 1
        __asm _emit 0xD1
        __asm _emit 0xFE
        // 0x5884FB73: cmp word ptr [esp + 0x24], 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x05
        // 0x5884FB79: jne 0x5884fb9f
        __asm _emit 0x75
        __asm _emit 0x24
        // 0x5884FB7B: mov ebp, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5884FB7F: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5884FB83: add ebp, 0x20
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x20
        // 0x5884FB86: lea edx, [ecx + esi + 0xf]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x31
        __asm _emit 0x0F
        // 0x5884FB8A: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5884FB8C: push ebp
        __asm _emit 0x55
        // 0x5884FB8D: push edx
        __asm _emit 0x52
        // 0x5884FB8E: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0x36
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884FB93: mov eax, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5884FB97: push ebp
        __asm _emit 0x55
        // 0x5884FB98: lea ecx, [eax + esi + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x30
        __asm _emit 0x10
        // 0x5884FB9C: push ecx
        __asm _emit 0x51
        // 0x5884FB9D: jmp 0x5884fbbd
        __asm _emit 0xEB
        __asm _emit 0x1E
        // 0x5884FB9F: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5884FBA3: mov ebp, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x5884FBA7: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5884FBA9: push edx
        __asm _emit 0x52
        // 0x5884FBAA: lea eax, [esi + ebp]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x2E
        // 0x5884FBAD: push eax
        __asm _emit 0x50
        // 0x5884FBAE: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0x36
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884FBB3: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5884FBB7: push ecx
        __asm _emit 0x51
        // 0x5884FBB8: lea edx, [esi + ebp + 1]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x2E
        __asm _emit 0x01
        // 0x5884FBBC: push edx
        __asm _emit 0x52
        // 0x5884FBBD: mov ecx, dword ptr [edi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884FBC3: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0x36
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5884FBC8: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5884FBCA: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x5884FBCD: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5884FBCF: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x5884FBD1: je 0x5884fc03
        __asm _emit 0x74
        __asm _emit 0x30
        // 0x5884FBD3: cmp ebx, ebp
        __asm _emit 0x3B
        __asm _emit 0xDD
        // 0x5884FBD5: je 0x5884fc03
        __asm _emit 0x74
        __asm _emit 0x2C
        // 0x5884FBD7: mov edx, ebx
        __asm _emit 0x8B
        __asm _emit 0xD3
        // 0x5884FBD9: mov esi, 0x80
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884FBDE: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5884FBE0: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5884FBE6: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5884FBE8: je 0x5884fbfb
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5884FBEA: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x5884FBEC: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5884FBEE: je 0x5884fbfb
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5884FBF0: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x5884FBF2: inc eax
        __asm _emit 0x40
        // 0x5884FBF3: inc edx
        __asm _emit 0x42
        // 0x5884FBF4: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x5884FBF7: jne 0x5884fbe0
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x5884FBF9: jmp 0x5884fbff
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5884FBFB: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x5884FBFD: jne 0x5884fc00
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x5884FBFF: dec eax
        __asm _emit 0x48
        // 0x5884FC00: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884FC03: mov eax, dword ptr [edi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884FC09: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x5884FC0C: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x5884FC0E: je 0x5884fc43
        __asm _emit 0x74
        __asm _emit 0x33
        // 0x5884FC10: cmp ebx, ebp
        __asm _emit 0x3B
        __asm _emit 0xDD
        // 0x5884FC12: je 0x5884fc43
        __asm _emit 0x74
        __asm _emit 0x2F
        // 0x5884FC14: mov edx, ebx
        __asm _emit 0x8B
        __asm _emit 0xD3
        // 0x5884FC16: mov esi, 0x80
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884FC1B: jmp 0x5884fc20
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x5884FC20..0x5884FCF7; 215 mapped bytes.
extern "C" __declspec(naked) void FUN_5884f4e0_segment_01() {
    __asm {
        // 0x5884FC20: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5884FC26: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5884FC28: je 0x5884fc3b
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5884FC2A: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x5884FC2C: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5884FC2E: je 0x5884fc3b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5884FC30: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x5884FC32: inc eax
        __asm _emit 0x40
        // 0x5884FC33: inc edx
        __asm _emit 0x42
        // 0x5884FC34: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x5884FC37: jne 0x5884fc20
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x5884FC39: jmp 0x5884fc3f
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5884FC3B: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x5884FC3D: jne 0x5884fc40
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x5884FC3F: dec eax
        __asm _emit 0x48
        // 0x5884FC40: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884FC43: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5884FC45: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5884FC49: mov ecx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5884FC4D: mov esi, 1
        __asm _emit 0xBE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884FC52: or word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x70
        __asm _emit 0x24
        // 0x5884FC56: mov eax, dword ptr [edi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884FC5C: or word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x70
        __asm _emit 0x24
        // 0x5884FC60: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5884FC62: mov dword ptr [eax + 0x60], 0xc8c8c8
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0xC8
        __asm _emit 0xC8
        __asm _emit 0xC8
        __asm _emit 0x00
        // 0x5884FC69: mov dword ptr [eax + 0x64], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x64
        // 0x5884FC6C: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x5884FC6E: cmp ecx, dword ptr [eax + 0x18]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x18
        // 0x5884FC71: jne 0x5884fc7f
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x5884FC73: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5884FC75: mov dword ptr [eax + 0x60], 0xff
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884FC7C: mov dword ptr [eax + 0x64], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x64
        // 0x5884FC7F: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x5884FC81: add dword ptr [esp + 0x34], 0x100
        __asm _emit 0x81
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884FC89: add dword ptr [esp + 0x18], 0x14
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x14
        // 0x5884FC8E: add ecx, esi
        __asm _emit 0x03
        __asm _emit 0xCE
        // 0x5884FC90: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5884FC93: cmp ecx, dword ptr [eax + 0x1c]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x1C
        // 0x5884FC96: mov dword ptr [esp + 0x44], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x5884FC9A: jl 0x5884fb25
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x85
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884FCA0: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5884FCA4: add dword ptr [esp + 0x10], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x04
        // 0x5884FCA9: add dword ptr [esp + 0x20], 6
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x06
        // 0x5884FCAE: add dword ptr [esp + 0x14], 0x20
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x20
        // 0x5884FCB3: inc eax
        __asm _emit 0x40
        // 0x5884FCB4: cmp eax, dword ptr [esp + 0xe8]
        __asm _emit 0x3B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884FCBB: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5884FCBF: jl 0x5884f871
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xAC
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884FCC5: jmp 0x5884fcdc
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x5884FCC7: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5884FCCB: cmp ecx, dword ptr [esp + 0xe8]
        __asm _emit 0x3B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884FCD2: jge 0x5884fcdc
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x5884FCD4: mov edx, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5884FCD8: mov byte ptr [edx + 0x60], 0
        __asm _emit 0xC6
        __asm _emit 0x42
        __asm _emit 0x60
        __asm _emit 0x00
        // 0x5884FCDC: mov ecx, dword ptr [esp + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884FCE3: pop edi
        __asm _emit 0x5F
        // 0x5884FCE4: pop esi
        __asm _emit 0x5E
        // 0x5884FCE5: pop ebp
        __asm _emit 0x5D
        // 0x5884FCE6: pop ebx
        __asm _emit 0x5B
        // 0x5884FCE7: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5884FCE9: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0xCE
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5884FCEE: add esp, 0xd0
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884FCF4: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
