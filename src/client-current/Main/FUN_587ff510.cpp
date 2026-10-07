// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 511 bytes in 1 exact ranges.
// Source symbol alias: FUN_587ff510.

// Ghidra body range 0x587FF510..0x587FF70F; 511 mapped bytes.
extern "C" __declspec(naked) void FUN_587ff510_segment_00() {
    __asm {
        // 0x587FF510: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587FF512: push 0x5897e078
        __asm _emit 0x68
        __asm _emit 0x78
        __asm _emit 0xE0
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x587FF517: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FF51D: push eax
        __asm _emit 0x50
        // 0x587FF51E: sub esp, 0x44
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x44
        // 0x587FF521: push ebx
        __asm _emit 0x53
        // 0x587FF522: push ebp
        __asm _emit 0x55
        // 0x587FF523: push esi
        __asm _emit 0x56
        // 0x587FF524: push edi
        __asm _emit 0x57
        // 0x587FF525: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587FF52A: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587FF52C: push eax
        __asm _emit 0x50
        // 0x587FF52D: lea eax, [esp + 0x58]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x587FF531: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FF537: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587FF539: cmp dword ptr [edi + 0x1c], 0x7fffffe
        __asm _emit 0x81
        __asm _emit 0x7F
        __asm _emit 0x1C
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x07
        // 0x587FF540: jb 0x587ff58e
        __asm _emit 0x72
        __asm _emit 0x4C
        // 0x587FF542: push 0x13
        __asm _emit 0x6A
        __asm _emit 0x13
        // 0x587FF544: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587FF546: push 0x5898cecc
        __asm _emit 0x68
        __asm _emit 0xCC
        __asm _emit 0xCE
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587FF54B: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587FF54F: mov dword ptr [esp + 0x34], 0xf
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FF557: mov dword ptr [esp + 0x30], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587FF55B: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587FF560: call 0x58735000
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0x5A
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x587FF565: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587FF569: push eax
        __asm _emit 0x50
        // 0x587FF56A: lea ecx, [esp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587FF56E: mov dword ptr [esp + 0x64], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x587FF572: call 0x58735360
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0x5D
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x587FF577: push 0x589abea8
        __asm _emit 0x68
        __asm _emit 0xA8
        __asm _emit 0xBE
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x587FF57C: lea ecx, [esp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587FF580: push ecx
        __asm _emit 0x51
        // 0x587FF581: mov dword ptr [esp + 0x38], 0x5898caa8
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0xA8
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587FF589: call 0x5897cc78
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0xD6
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x587FF58E: mov edx, dword ptr [esp + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x74
        // 0x587FF592: mov eax, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x18
        // 0x587FF595: mov esi, dword ptr [esp + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x70
        // 0x587FF599: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587FF59B: push edx
        __asm _emit 0x52
        // 0x587FF59C: push eax
        __asm _emit 0x50
        // 0x587FF59D: push esi
        __asm _emit 0x56
        // 0x587FF59E: push eax
        __asm _emit 0x50
        // 0x587FF59F: call 0x587ff470
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587FF5A4: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x587FF5A6: mov eax, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x18
        // 0x587FF5A9: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FF5AE: add dword ptr [edi + 0x1c], ebx
        __asm _emit 0x01
        __asm _emit 0x5F
        __asm _emit 0x1C
        // 0x587FF5B1: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x587FF5B3: jne 0x587ff5c5
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x587FF5B5: mov dword ptr [eax + 4], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x04
        // 0x587FF5B8: mov eax, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x18
        // 0x587FF5BB: mov dword ptr [eax], ebp
        __asm _emit 0x89
        __asm _emit 0x28
        // 0x587FF5BD: mov ecx, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x18
        // 0x587FF5C0: mov dword ptr [ecx + 8], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x08
        // 0x587FF5C3: jmp 0x587ff5e7
        __asm _emit 0xEB
        __asm _emit 0x22
        // 0x587FF5C5: cmp byte ptr [esp + 0x6c], 0
        __asm _emit 0x80
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x6C
        __asm _emit 0x00
        // 0x587FF5CA: je 0x587ff5d9
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587FF5CC: mov dword ptr [esi], ebp
        __asm _emit 0x89
        __asm _emit 0x2E
        // 0x587FF5CE: mov eax, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x18
        // 0x587FF5D1: cmp esi, dword ptr [eax]
        __asm _emit 0x3B
        __asm _emit 0x30
        // 0x587FF5D3: jne 0x587ff5e7
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x587FF5D5: mov dword ptr [eax], ebp
        __asm _emit 0x89
        __asm _emit 0x28
        // 0x587FF5D7: jmp 0x587ff5e7
        __asm _emit 0xEB
        __asm _emit 0x0E
        // 0x587FF5D9: mov dword ptr [esi + 8], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x08
        // 0x587FF5DC: mov eax, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x18
        // 0x587FF5DF: cmp esi, dword ptr [eax + 8]
        __asm _emit 0x3B
        __asm _emit 0x70
        __asm _emit 0x08
        // 0x587FF5E2: jne 0x587ff5e7
        __asm _emit 0x75
        __asm _emit 0x03
        // 0x587FF5E4: mov dword ptr [eax + 8], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x08
        // 0x587FF5E7: mov edx, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x04
        // 0x587FF5EA: cmp byte ptr [edx + 0x2c], 0
        __asm _emit 0x80
        __asm _emit 0x7A
        __asm _emit 0x2C
        __asm _emit 0x00
        // 0x587FF5EE: lea eax, [ebp + 4]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x587FF5F1: mov esi, ebp
        __asm _emit 0x8B
        __asm _emit 0xF5
        // 0x587FF5F3: jne 0x587ff6e5
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FF5F9: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FF600: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587FF602: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587FF605: cmp ecx, dword ptr [edx]
        __asm _emit 0x3B
        __asm _emit 0x0A
        // 0x587FF607: jne 0x587ff65a
        __asm _emit 0x75
        __asm _emit 0x51
        // 0x587FF609: mov edx, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x08
        // 0x587FF60C: cmp byte ptr [edx + 0x2c], 0
        __asm _emit 0x80
        __asm _emit 0x7A
        __asm _emit 0x2C
        __asm _emit 0x00
        // 0x587FF610: jne 0x587ff62b
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x587FF612: mov byte ptr [ecx + 0x2c], bl
        __asm _emit 0x88
        __asm _emit 0x59
        __asm _emit 0x2C
        // 0x587FF615: mov byte ptr [edx + 0x2c], bl
        __asm _emit 0x88
        __asm _emit 0x5A
        __asm _emit 0x2C
        // 0x587FF618: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587FF61A: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x587FF61D: mov byte ptr [ecx + 0x2c], 0
        __asm _emit 0xC6
        __asm _emit 0x41
        __asm _emit 0x2C
        __asm _emit 0x00
        // 0x587FF621: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587FF623: mov esi, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x72
        __asm _emit 0x04
        // 0x587FF626: jmp 0x587ff6d5
        __asm _emit 0xE9
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FF62B: cmp esi, dword ptr [ecx + 8]
        __asm _emit 0x3B
        __asm _emit 0x71
        __asm _emit 0x08
        // 0x587FF62E: jne 0x587ff63a
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x587FF630: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587FF632: push esi
        __asm _emit 0x56
        // 0x587FF633: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587FF635: call 0x587ef1a0
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0xFB
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587FF63A: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587FF63D: mov byte ptr [eax + 0x2c], bl
        __asm _emit 0x88
        __asm _emit 0x58
        __asm _emit 0x2C
        // 0x587FF640: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587FF643: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587FF646: mov byte ptr [edx + 0x2c], 0
        __asm _emit 0xC6
        __asm _emit 0x42
        __asm _emit 0x2C
        __asm _emit 0x00
        // 0x587FF64A: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587FF64D: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587FF650: push ecx
        __asm _emit 0x51
        // 0x587FF651: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587FF653: call 0x587e7f90
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0x89
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587FF658: jmp 0x587ff6d5
        __asm _emit 0xEB
        __asm _emit 0x7B
        // 0x587FF65A: mov edx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x12
        // 0x587FF65C: cmp byte ptr [edx + 0x2c], 0
        __asm _emit 0x80
        __asm _emit 0x7A
        __asm _emit 0x2C
        __asm _emit 0x00
        // 0x587FF660: jne 0x587ff678
        __asm _emit 0x75
        __asm _emit 0x16
        // 0x587FF662: mov byte ptr [ecx + 0x2c], bl
        __asm _emit 0x88
        __asm _emit 0x59
        __asm _emit 0x2C
        // 0x587FF665: mov byte ptr [edx + 0x2c], bl
        __asm _emit 0x88
        __asm _emit 0x5A
        __asm _emit 0x2C
        // 0x587FF668: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587FF66A: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x587FF66D: mov byte ptr [ecx + 0x2c], 0
        __asm _emit 0xC6
        __asm _emit 0x41
        __asm _emit 0x2C
        __asm _emit 0x00
        // 0x587FF671: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587FF673: mov esi, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x72
        __asm _emit 0x04
        // 0x587FF676: jmp 0x587ff6d5
        __asm _emit 0xEB
        __asm _emit 0x5D
        // 0x587FF678: cmp esi, dword ptr [ecx]
        __asm _emit 0x3B
        __asm _emit 0x31
        // 0x587FF67A: jne 0x587ff686
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x587FF67C: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587FF67E: push esi
        __asm _emit 0x56
        // 0x587FF67F: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587FF681: call 0x587e7f90
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0x89
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587FF686: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587FF689: mov byte ptr [eax + 0x2c], bl
        __asm _emit 0x88
        __asm _emit 0x58
        __asm _emit 0x2C
        // 0x587FF68C: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587FF68F: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587FF692: mov byte ptr [edx + 0x2c], 0
        __asm _emit 0xC6
        __asm _emit 0x42
        __asm _emit 0x2C
        __asm _emit 0x00
        // 0x587FF696: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587FF699: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587FF69C: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587FF69F: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587FF6A1: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587FF6A4: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587FF6A6: cmp byte ptr [edx + 0x2d], 0
        __asm _emit 0x80
        __asm _emit 0x7A
        __asm _emit 0x2D
        __asm _emit 0x00
        // 0x587FF6AA: jne 0x587ff6af
        __asm _emit 0x75
        __asm _emit 0x03
        // 0x587FF6AC: mov dword ptr [edx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587FF6AF: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587FF6B2: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587FF6B5: mov edx, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x587FF6B8: cmp eax, dword ptr [edx + 4]
        __asm _emit 0x3B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587FF6BB: jne 0x587ff6c2
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x587FF6BD: mov dword ptr [edx + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x587FF6C0: jmp 0x587ff6d0
        __asm _emit 0xEB
        __asm _emit 0x0E
        // 0x587FF6C2: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587FF6C5: cmp eax, dword ptr [edx]
        __asm _emit 0x3B
        __asm _emit 0x02
        // 0x587FF6C7: jne 0x587ff6cd
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x587FF6C9: mov dword ptr [edx], ecx
        __asm _emit 0x89
        __asm _emit 0x0A
        // 0x587FF6CB: jmp 0x587ff6d0
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x587FF6CD: mov dword ptr [edx + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x08
        // 0x587FF6D0: mov dword ptr [ecx], eax
        __asm _emit 0x89
        __asm _emit 0x01
        // 0x587FF6D2: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587FF6D5: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587FF6D8: cmp byte ptr [ecx + 0x2c], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x2C
        __asm _emit 0x00
        // 0x587FF6DC: lea eax, [esi + 4]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587FF6DF: je 0x587ff600
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x1B
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587FF6E5: mov edx, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x587FF6E8: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587FF6EB: mov byte ptr [eax + 0x2c], bl
        __asm _emit 0x88
        __asm _emit 0x58
        __asm _emit 0x2C
        // 0x587FF6EE: mov eax, dword ptr [esp + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x68
        // 0x587FF6F2: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x587FF6F4: mov dword ptr [eax + 4], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x04
        // 0x587FF6F7: mov dword ptr [eax], ecx
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x587FF6F9: mov ecx, dword ptr [esp + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x587FF6FD: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587FF704: pop ecx
        __asm _emit 0x59
        // 0x587FF705: pop edi
        __asm _emit 0x5F
        // 0x587FF706: pop esi
        __asm _emit 0x5E
        // 0x587FF707: pop ebp
        __asm _emit 0x5D
        // 0x587FF708: pop ebx
        __asm _emit 0x5B
        // 0x587FF709: add esp, 0x50
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x50
        // 0x587FF70C: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
