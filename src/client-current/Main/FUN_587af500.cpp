// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 395 bytes in 1 exact ranges.
// Source symbol alias: FUN_587af500.

// Ghidra body range 0x587AF500..0x587AF68B; 395 mapped bytes.
extern "C" __declspec(naked) void FUN_587af500_segment_00() {
    __asm {
        // 0x587AF500: push ebx
        __asm _emit 0x53
        // 0x587AF501: push ebp
        __asm _emit 0x55
        // 0x587AF502: push esi
        __asm _emit 0x56
        // 0x587AF503: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587AF505: push edi
        __asm _emit 0x57
        // 0x587AF506: mov edi, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587AF509: cmp edi, dword ptr [esi + 0x14]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x587AF50C: jbe 0x587af513
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587AF50E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0xD7
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AF513: mov ebx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x04
        // 0x587AF516: mov ebp, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6E
        __asm _emit 0x14
        // 0x587AF519: cmp dword ptr [esi + 0x10], ebp
        __asm _emit 0x39
        __asm _emit 0x6E
        __asm _emit 0x10
        // 0x587AF51C: jbe 0x587af523
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587AF51E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0xD7
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AF523: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587AF526: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587AF528: je 0x587af52e
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587AF52A: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x587AF52C: je 0x587af533
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587AF52E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0xD7
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AF533: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x587AF535: je 0x587af5d6
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AF53B: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587AF53D: jne 0x587af575
        __asm _emit 0x75
        __asm _emit 0x36
        // 0x587AF53F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0xD7
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AF544: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AF546: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x587AF549: jb 0x587af550
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AF54B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0xD7
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AF550: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587AF552: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587AF556: cmp dword ptr [eax + 0x50], ecx
        __asm _emit 0x39
        __asm _emit 0x48
        __asm _emit 0x50
        // 0x587AF559: je 0x587af57d
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x587AF55B: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587AF55D: jne 0x587af579
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x587AF55F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0xD7
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AF564: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AF566: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x587AF569: jb 0x587af570
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AF56B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0xD7
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AF570: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587AF573: jmp 0x587af516
        __asm _emit 0xEB
        __asm _emit 0xA1
        // 0x587AF575: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587AF577: jmp 0x587af546
        __asm _emit 0xEB
        __asm _emit 0xCD
        // 0x587AF579: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587AF57B: jmp 0x587af566
        __asm _emit 0xEB
        __asm _emit 0xE9
        // 0x587AF57D: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587AF57F: jne 0x587af641
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AF585: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AF58A: cmp edi, dword ptr [ebx + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7B
        __asm _emit 0x10
        // 0x587AF58D: jb 0x587af594
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AF58F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0xD6
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AF594: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x587AF596: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587AF598: je 0x587af5a2
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587AF59A: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587AF59C: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587AF59E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587AF5A0: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587AF5A2: mov eax, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x587AF5A5: lea ecx, [edi + 4]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x587AF5A8: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x587AF5AA: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587AF5AD: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587AF5AF: jle 0x587af5c1
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587AF5B1: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x587AF5B3: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x587AF5B5: push eax
        __asm _emit 0x50
        // 0x587AF5B6: push ecx
        __asm _emit 0x51
        // 0x587AF5B7: push eax
        __asm _emit 0x50
        // 0x587AF5B8: push edi
        __asm _emit 0x57
        // 0x587AF5B9: call 0x5897cc54
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0xD6
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AF5BE: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587AF5C1: add dword ptr [esi + 0x14], -4
        __asm _emit 0x83
        __asm _emit 0x46
        __asm _emit 0x14
        __asm _emit 0xFC
        // 0x587AF5C5: mov eax, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x587AF5C8: cmp dword ptr [esi + 0x10], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587AF5CB: ja 0x587af5d1
        __asm _emit 0x77
        __asm _emit 0x04
        // 0x587AF5CD: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x587AF5CF: jbe 0x587af5d6
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587AF5D1: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0xD6
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AF5D6: mov edi, dword ptr [esi + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x28
        // 0x587AF5D9: cmp edi, dword ptr [esi + 0x2c]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x2C
        // 0x587AF5DC: jbe 0x587af5e3
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587AF5DE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0xD6
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AF5E3: mov ebx, dword ptr [esi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x1C
        // 0x587AF5E6: mov ebp, dword ptr [esi + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x6E
        __asm _emit 0x2C
        // 0x587AF5E9: cmp dword ptr [esi + 0x28], ebp
        __asm _emit 0x39
        __asm _emit 0x6E
        __asm _emit 0x28
        // 0x587AF5EC: jbe 0x587af5f3
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587AF5EE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x7F
        __asm _emit 0xD6
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AF5F3: mov eax, dword ptr [esi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x1C
        // 0x587AF5F6: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587AF5F8: je 0x587af5fe
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587AF5FA: cmp ebx, eax
        __asm _emit 0x3B
        __asm _emit 0xD8
        // 0x587AF5FC: je 0x587af603
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587AF5FE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0xD6
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AF603: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x587AF605: je 0x587af684
        __asm _emit 0x74
        __asm _emit 0x7D
        // 0x587AF607: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587AF609: jne 0x587af648
        __asm _emit 0x75
        __asm _emit 0x3D
        // 0x587AF60B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0xD6
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AF610: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AF612: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x587AF615: jb 0x587af61c
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AF617: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0xD6
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AF61C: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x587AF61E: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587AF622: cmp dword ptr [ecx + 0x50], edx
        __asm _emit 0x39
        __asm _emit 0x51
        __asm _emit 0x50
        // 0x587AF625: je 0x587af650
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x587AF627: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587AF629: jne 0x587af64c
        __asm _emit 0x75
        __asm _emit 0x21
        // 0x587AF62B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x42
        __asm _emit 0xD6
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AF630: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AF632: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x587AF635: jb 0x587af63c
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587AF637: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0xD6
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AF63C: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587AF63F: jmp 0x587af5e6
        __asm _emit 0xEB
        __asm _emit 0xA5
        // 0x587AF641: mov ebx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x1B
        // 0x587AF643: jmp 0x587af58a
        __asm _emit 0xE9
        __asm _emit 0x42
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AF648: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587AF64A: jmp 0x587af612
        __asm _emit 0xEB
        __asm _emit 0xC6
        // 0x587AF64C: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x587AF64E: jmp 0x587af632
        __asm _emit 0xEB
        __asm _emit 0xE2
        // 0x587AF650: mov eax, dword ptr [esi + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x2C
        // 0x587AF653: lea ecx, [edi + 4]
        __asm _emit 0x8D
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x587AF656: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x587AF658: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587AF65B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587AF65D: jle 0x587af66f
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587AF65F: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x587AF661: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x587AF663: push eax
        __asm _emit 0x50
        // 0x587AF664: push ecx
        __asm _emit 0x51
        // 0x587AF665: push eax
        __asm _emit 0x50
        // 0x587AF666: push edi
        __asm _emit 0x57
        // 0x587AF667: call 0x5897cc54
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AF66C: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587AF66F: add dword ptr [esi + 0x2c], -4
        __asm _emit 0x83
        __asm _emit 0x46
        __asm _emit 0x2C
        __asm _emit 0xFC
        // 0x587AF673: mov eax, dword ptr [esi + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x2C
        // 0x587AF676: cmp dword ptr [esi + 0x28], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x28
        // 0x587AF679: ja 0x587af67f
        __asm _emit 0x77
        __asm _emit 0x04
        // 0x587AF67B: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x587AF67D: jbe 0x587af684
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587AF67F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0xD5
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AF684: pop edi
        __asm _emit 0x5F
        // 0x587AF685: pop esi
        __asm _emit 0x5E
        // 0x587AF686: pop ebp
        __asm _emit 0x5D
        // 0x587AF687: pop ebx
        __asm _emit 0x5B
        // 0x587AF688: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
