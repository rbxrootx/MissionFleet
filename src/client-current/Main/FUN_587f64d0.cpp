// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 608 bytes in 2 exact ranges.
// Source symbol alias: FUN_587f64d0.

// Ghidra body range 0x587F64D0..0x587F66B6; 486 mapped bytes.
extern "C" __declspec(naked) void FUN_587f64d0_segment_00() {
    __asm {
        // 0x587F64D0: sub esp, 0x3c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x3C
        // 0x587F64D3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587F64D8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587F64DA: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587F64DE: cmp dword ptr [0x58a0b4a0], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x587F64E5: push ebx
        __asm _emit 0x53
        // 0x587F64E6: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x587F64E8: push esi
        __asm _emit 0x56
        // 0x587F64E9: mov dword ptr [esp + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587F64ED: je 0x587f6703
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F64F3: mov eax, dword ptr [0x58a245c0]
        __asm _emit 0xA1
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F64F8: cmp dword ptr [eax + 0x63c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x3C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F64FF: jne 0x587f6559
        __asm _emit 0x75
        __asm _emit 0x58
        // 0x587F6501: mov esi, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587F6507: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        // 0x587F650C: push 0x5899c5c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0xC5
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F6511: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x587F6513: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F6519: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587F651C: push eax
        __asm _emit 0x50
        // 0x587F651D: call 0x5888d250
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0x6D
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x587F6522: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        // 0x587F6527: push 0x5899c5c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0xC5
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F652C: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x587F652E: mov ecx, dword ptr [ebx + 0x20d34]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x34
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F6534: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587F6537: push eax
        __asm _emit 0x50
        // 0x587F6538: call 0x5890bd90
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0x58
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587F653D: mov ecx, dword ptr [ebx + 0x20d30]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x30
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F6543: call 0x5875f940
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0x93
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x587F6548: pop esi
        __asm _emit 0x5E
        // 0x587F6549: pop ebx
        __asm _emit 0x5B
        // 0x587F654A: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587F654E: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x587F6550: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F6555: add esp, 0x3c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x3C
        // 0x587F6558: ret
        __asm _emit 0xC3
        // 0x587F6559: mov ecx, dword ptr [ebx + 0x20d30]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x30
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F655F: mov esi, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6565: mov al, byte ptr [esi + 1]
        __asm _emit 0x8A
        __asm _emit 0x46
        __asm _emit 0x01
        // 0x587F6568: push edi
        __asm _emit 0x57
        // 0x587F6569: cmp al, 0xa4
        __asm _emit 0x3C
        __asm _emit 0xA4
        // 0x587F656B: jne 0x587f6578
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x587F656D: mov edi, 4
        __asm _emit 0xBF
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6572: mov dword ptr [esp + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587F6576: jmp 0x587f65a0
        __asm _emit 0xEB
        __asm _emit 0x28
        // 0x587F6578: cmp al, 0xc7
        __asm _emit 0x3C
        __asm _emit 0xC7
        // 0x587F657A: jne 0x587f658a
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x587F657C: mov dword ptr [esp + 0xc], 6
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6584: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587F6588: jmp 0x587f65a0
        __asm _emit 0xEB
        __asm _emit 0x16
        // 0x587F658A: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587F658C: cmp byte ptr [esi + 2], 0x6c
        __asm _emit 0x80
        __asm _emit 0x7E
        __asm _emit 0x02
        __asm _emit 0x6C
        // 0x587F6590: sete dl
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC2
        // 0x587F6593: lea edx, [edx*4 + 3]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x95
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F659A: mov dword ptr [esp + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587F659E: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x587F65A0: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587F65A2: lea edx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x587F65A5: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x587F65A7: inc eax
        __asm _emit 0x40
        // 0x587F65A8: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x587F65AA: jne 0x587f65a5
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x587F65AC: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587F65AE: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587F65B0: jbe 0x587f66cb
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F65B6: cmp byte ptr [esi + edi - 1], 0x20
        __asm _emit 0x80
        __asm _emit 0x7C
        __asm _emit 0x3E
        __asm _emit 0xFF
        __asm _emit 0x20
        // 0x587F65BB: jne 0x587f66cb
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F65C1: push 0x30
        __asm _emit 0x6A
        __asm _emit 0x30
        // 0x587F65C3: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587F65C7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F65C9: push eax
        __asm _emit 0x50
        // 0x587F65CA: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x66
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F65CF: mov eax, dword ptr [0x58a0b458]
        __asm _emit 0xA1
        __asm _emit 0x58
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F65D4: mov edx, dword ptr [0x58a0b454]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F65DA: mov ecx, dword ptr [0x58a0b450]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x50
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F65E0: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587F65E4: mov eax, dword ptr [0x58a0b464]
        __asm _emit 0xA1
        __asm _emit 0x64
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F65E9: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587F65ED: mov edx, dword ptr [0x58a0b460]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F65F3: mov dword ptr [esp + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587F65F7: mov ecx, dword ptr [0x58a0b45c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x5C
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F65FD: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587F6601: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587F6603: mov dword ptr [esp + 0x30], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587F6607: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587F660A: mov dword ptr [esp + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587F660E: lea edx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x587F6611: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x587F6613: inc eax
        __asm _emit 0x40
        // 0x587F6614: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x587F6616: jne 0x587f6611
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x587F6618: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587F661A: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x587F661C: add eax, 0x31
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x31
        // 0x587F661F: push ebp
        __asm _emit 0x55
        // 0x587F6620: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x587F6622: push ebp
        __asm _emit 0x55
        // 0x587F6623: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0xAF
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x587F6628: push ebp
        __asm _emit 0x55
        // 0x587F6629: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x587F662B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F662D: push ebx
        __asm _emit 0x53
        // 0x587F662E: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0x66
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F6633: mov ecx, 0xc
        __asm _emit 0xB9
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6638: lea esi, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587F663C: mov edi, ebx
        __asm _emit 0x8B
        __asm _emit 0xFB
        // 0x587F663E: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x587F6640: mov esi, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587F6644: mov edx, dword ptr [esi + 0x20d30]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x30
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F664A: mov eax, dword ptr [edx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6650: add eax, dword ptr [esp + 0x20]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587F6654: lea ecx, [ebp - 0x30]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xD0
        // 0x587F6657: push ecx
        __asm _emit 0x51
        // 0x587F6658: push eax
        __asm _emit 0x50
        // 0x587F6659: lea ecx, [ebx + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x30
        // 0x587F665C: push ecx
        __asm _emit 0x51
        // 0x587F665D: call 0x5897cd4c
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0x66
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F6662: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F6668: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x587F666B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587F666D: push ebp
        __asm _emit 0x55
        // 0x587F666E: push ebx
        __asm _emit 0x53
        // 0x587F666F: call 0x587b8290
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0x1C
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x587F6674: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587F667A: pop ebp
        __asm _emit 0x5D
        // 0x587F667B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587F667D: jne 0x587f669a
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x587F667F: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        // 0x587F6684: push 0x5899c598
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0xC5
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F6689: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587F668B: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F6691: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587F6694: push eax
        __asm _emit 0x50
        // 0x587F6695: call 0x5888d250
        __asm _emit 0xE8
        __asm _emit 0xB6
        __asm _emit 0x6B
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x587F669A: push 0x5899c570
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0xC5
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F669F: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587F66A1: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587F66A4: push eax
        __asm _emit 0x50
        // 0x587F66A5: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587F66A7: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587F66A9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587F66AB: call 0x587ee240
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0x7B
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F66B0: push ebx
        __asm _emit 0x53
        // 0x587F66B1: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0x65
        __asm _emit 0x18
        __asm _emit 0x00
    }
}

// Ghidra body range 0x587F66B9..0x587F6733; 122 mapped bytes.
extern "C" __declspec(naked) void FUN_587f64d0_segment_01() {
    __asm {
        // 0x587F66B9: pop edi
        __asm _emit 0x5F
        // 0x587F66BA: pop esi
        __asm _emit 0x5E
        // 0x587F66BB: pop ebx
        __asm _emit 0x5B
        // 0x587F66BC: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587F66C0: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x587F66C2: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0x65
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F66C7: add esp, 0x3c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x3C
        // 0x587F66CA: ret
        __asm _emit 0xC3
        // 0x587F66CB: mov al, byte ptr [esi + edi - 1]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x3E
        __asm _emit 0xFF
        // 0x587F66CF: cmp al, 0x20
        __asm _emit 0x3C
        __asm _emit 0x20
        // 0x587F66D1: je 0x587f66d7
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587F66D3: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x587F66D5: jne 0x587f66b9
        __asm _emit 0x75
        __asm _emit 0xE2
        // 0x587F66D7: push 0x5899c570
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0xC5
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F66DC: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587F66E2: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587F66E5: push eax
        __asm _emit 0x50
        // 0x587F66E6: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587F66E8: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587F66EA: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587F66EC: call 0x587ee240
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0x7B
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F66F1: mov ecx, dword ptr [esp + 0x44]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x587F66F5: pop edi
        __asm _emit 0x5F
        // 0x587F66F6: pop esi
        __asm _emit 0x5E
        // 0x587F66F7: pop ebx
        __asm _emit 0x5B
        // 0x587F66F8: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x587F66FA: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0x64
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F66FF: add esp, 0x3c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x3C
        // 0x587F6702: ret
        __asm _emit 0xC3
        // 0x587F6703: mov esi, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587F6709: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        // 0x587F670E: push 0x5899c54c
        __asm _emit 0x68
        __asm _emit 0x4C
        __asm _emit 0xC5
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F6713: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x587F6715: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F671B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587F671E: push eax
        __asm _emit 0x50
        // 0x587F671F: call 0x5888d250
        __asm _emit 0xE8
        __asm _emit 0x2C
        __asm _emit 0x6B
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x587F6724: push 0x6464ff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x64
        __asm _emit 0x64
        __asm _emit 0x00
        // 0x587F6729: push 0x5899c54c
        __asm _emit 0x68
        __asm _emit 0x4C
        __asm _emit 0xC5
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F672E: jmp 0x587f652c
        __asm _emit 0xE9
        __asm _emit 0xF9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
    }
}
