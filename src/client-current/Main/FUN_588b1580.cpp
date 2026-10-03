// Complete Ghidra body ranges; intervening unowned gaps are excluded.
// Total body size: 1166 bytes across two ranges.

// Ghidra range: 0x588B1580 .. +0x3AD bytes.
extern "C" __declspec(naked) void FUN_588b1580_segment_00() {
    __asm {
        // 0x588B1580: push esi
        __asm _emit 0x56
        // 0x588B1581: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588B1583: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588B1587: test al, 2
        __asm _emit 0xA8
        __asm _emit 0x02
        // 0x588B1589: je 0x588b1a0a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x7B
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B158F: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x588B1592: push ebx
        __asm _emit 0x53
        // 0x588B1593: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588B1595: push ebp
        __asm _emit 0x55
        // 0x588B1596: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588B159A: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588B159C: je 0x588b15c3
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x588B159E: mov eax, dword ptr [eax + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x34
        // 0x588B15A1: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588B15A3: je 0x588b15bb
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x588B15A5: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588B15A7: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588B15A9: mov eax, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x10
        // 0x588B15AC: push ebp
        __asm _emit 0x55
        // 0x588B15AD: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588B15AF: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x588B15B2: cmp eax, dword ptr [ecx + 0x34]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x34
        // 0x588B15B5: je 0x588b15c3
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x588B15B7: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588B15B9: jne 0x588b15a5
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x588B15BB: pop ebp
        __asm _emit 0x5D
        // 0x588B15BC: pop ebx
        __asm _emit 0x5B
        // 0x588B15BD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B15BF: pop esi
        __asm _emit 0x5E
        // 0x588B15C0: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B15C3: mov ecx, dword ptr [esi + 0x22c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B15C9: push edi
        __asm _emit 0x57
        // 0x588B15CA: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588B15CC: je 0x588b164a
        __asm _emit 0x74
        __asm _emit 0x7C
        // 0x588B15CE: mov edx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x68
        // 0x588B15D1: mov edi, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x7A
        __asm _emit 0x04
        // 0x588B15D4: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x588B15D6: shl eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x04
        // 0x588B15D9: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xF8
        // 0x588B15DB: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588B15DD: jle 0x588b15f1
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x588B15DF: cmp edi, 0xfa
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B15E5: jge 0x588b15f1
        __asm _emit 0x7D
        __asm _emit 0x0A
        // 0x588B15E7: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588B15E9: push eax
        __asm _emit 0x50
        // 0x588B15EA: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588B15EC: call 0x588aeef0
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0xD8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B15F1: mov eax, dword ptr [esi + 0x22c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B15F7: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588B15F9: jge 0x588b161b
        __asm _emit 0x7D
        __asm _emit 0x20
        // 0x588B15FB: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x588B15FE: mov edx, dword ptr [ecx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x14
        // 0x588B1601: sub edx, dword ptr [ecx + 0x1c]
        __asm _emit 0x2B
        __asm _emit 0x51
        __asm _emit 0x1C
        // 0x588B1604: add edx, 0x2bc
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B160A: cmp edi, edx
        __asm _emit 0x3B
        __asm _emit 0xFA
        // 0x588B160C: jle 0x588b161b
        __asm _emit 0x7E
        __asm _emit 0x0D
        // 0x588B160E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588B1610: shl eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x04
        // 0x588B1613: push eax
        __asm _emit 0x50
        // 0x588B1614: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588B1616: call 0x588aeef0
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0xD8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B161B: mov eax, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x588B161E: mov ecx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x1C
        // 0x588B1621: sub ecx, dword ptr [eax + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x588B1624: mov eax, 0xfa
        __asm _emit 0xB8
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1629: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x588B162B: imul eax, eax, 0xf0
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1631: cdq
        __asm _emit 0x99
        // 0x588B1632: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x588B1634: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x588B1637: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B163D: lea eax, [eax + edx + 0x12e]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x2E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1644: push eax
        __asm _emit 0x50
        // 0x588B1645: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0x1C
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B164A: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x588B164D: cmp eax, 0x200
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1652: ja 0x588b1813
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1658: je 0x588b16f1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B165E: cmp eax, 0x100
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1663: jne 0x588b1a01
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1669: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x588B166C: add eax, -0xd
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xF3
        // 0x588B166F: cmp eax, 0x1a
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x1A
        // 0x588B1672: ja 0x588b1a01
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x89
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1678: movzx ecx, byte ptr [eax + 0x588b1a28]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x88
        __asm _emit 0x28
        __asm _emit 0x1A
        __asm _emit 0x8B
        __asm _emit 0x58
        // 0x588B167F: jmp dword ptr [ecx*4 + 0x588b1a14]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x1A
        __asm _emit 0x8B
        __asm _emit 0x58
        // 0x588B1686: mov edx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x68
        // 0x588B1689: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588B168C: sub eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x10
        // 0x588B168F: cmp eax, 0xfa
        __asm _emit 0x3D
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1694: jge 0x588b1a01
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x67
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B169A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588B169C: push 0x10
        __asm _emit 0x6A
        __asm _emit 0x10
        // 0x588B169E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588B16A0: call 0x588aeef0
        __asm _emit 0xE8
        __asm _emit 0x4B
        __asm _emit 0xD8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B16A5: pop edi
        __asm _emit 0x5F
        // 0x588B16A6: pop ebp
        __asm _emit 0x5D
        // 0x588B16A7: pop ebx
        __asm _emit 0x5B
        // 0x588B16A8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B16AA: pop esi
        __asm _emit 0x5E
        // 0x588B16AB: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B16AE: mov eax, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x588B16B1: mov ecx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x588B16B4: sub ecx, dword ptr [eax + 0x1c]
        __asm _emit 0x2B
        __asm _emit 0x48
        __asm _emit 0x1C
        // 0x588B16B7: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588B16BA: add ecx, 0x2bc
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B16C0: add edx, 0x10
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x10
        // 0x588B16C3: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x588B16C5: jle 0x588b1a01
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x36
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B16CB: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588B16CD: push -0x10
        __asm _emit 0x6A
        __asm _emit 0xF0
        // 0x588B16CF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588B16D1: call 0x588aeef0
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0xD8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B16D6: pop edi
        __asm _emit 0x5F
        // 0x588B16D7: pop ebp
        __asm _emit 0x5D
        // 0x588B16D8: pop ebx
        __asm _emit 0x5B
        // 0x588B16D9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B16DB: pop esi
        __asm _emit 0x5E
        // 0x588B16DC: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B16DF: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588B16E1: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588B16E4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588B16E6: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588B16E8: pop edi
        __asm _emit 0x5F
        // 0x588B16E9: pop ebp
        __asm _emit 0x5D
        // 0x588B16EA: pop ebx
        __asm _emit 0x5B
        // 0x588B16EB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B16ED: pop esi
        __asm _emit 0x5E
        // 0x588B16EE: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B16F1: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x588B16F4: mov ebx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x04
        // 0x588B16F7: mov ecx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x588B16FA: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x588B16FD: mov ebp, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x08
        // 0x588B1700: mov edi, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x18
        // 0x588B1703: mov eax, dword ptr [eax + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x20
        // 0x588B1706: add ecx, ebx
        __asm _emit 0x03
        __asm _emit 0xCB
        // 0x588B1708: add edx, ebx
        __asm _emit 0x03
        __asm _emit 0xD3
        // 0x588B170A: mov ebx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B1710: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x588B1713: mov ebx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x1B
        // 0x588B1715: add edi, ebp
        __asm _emit 0x03
        __asm _emit 0xFD
        // 0x588B1717: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x588B1719: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588B171B: jge 0x588b17cb
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1721: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x588B1723: jle 0x588b17cb
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xA2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1729: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B172F: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x588B1732: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x588B1735: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x588B1737: jge 0x588b17cb
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B173D: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x588B173F: jle 0x588b17cb
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1745: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588B1747: lea ebx, [esi + 0x20f8]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0xF8
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B174D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x588B1750: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x588B1752: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588B1754: je 0x588b1768
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x588B1756: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B175B: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x588B175E: push eax
        __asm _emit 0x50
        // 0x588B175F: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0xFD
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B1764: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B1766: jne 0x588b1773
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x588B1768: inc edi
        __asm _emit 0x47
        // 0x588B1769: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x588B176C: cmp edi, 0x64
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x64
        // 0x588B176F: jl 0x588b1750
        __asm _emit 0x7C
        __asm _emit 0xDF
        // 0x588B1771: jmp 0x588b17b9
        __asm _emit 0xEB
        __asm _emit 0x46
        // 0x588B1773: mov ecx, dword ptr [esi + edi*4 + 0x20f8]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xBE
        __asm _emit 0xF8
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B177A: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x588B177D: mov ecx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x08
        // 0x588B1780: sub ecx, 0x5a
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x5A
        // 0x588B1783: cmp eax, 0x168
        __asm _emit 0x3D
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1788: jge 0x588b179c
        __asm _emit 0x7D
        __asm _emit 0x12
        // 0x588B178A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588B178C: add eax, 0x60
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x60
        // 0x588B178F: push ecx
        __asm _emit 0x51
        // 0x588B1790: push eax
        __asm _emit 0x50
        // 0x588B1791: movzx eax, word ptr [esi + edi*2 + 0x202c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x84
        __asm _emit 0x7E
        __asm _emit 0x2C
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1799: push eax
        __asm _emit 0x50
        // 0x588B179A: jmp 0x588b17ae
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x588B179C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588B179E: push ecx
        __asm _emit 0x51
        // 0x588B179F: movzx ecx, word ptr [esi + edi*2 + 0x202c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8C
        __asm _emit 0x7E
        __asm _emit 0x2C
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B17A7: sub eax, 0x136
        __asm _emit 0x2D
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B17AC: push eax
        __asm _emit 0x50
        // 0x588B17AD: push ecx
        __asm _emit 0x51
        // 0x588B17AE: mov ecx, dword ptr [esi + 0x2478]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B17B4: call 0x588b1b40
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B17B9: cmp edi, 0x64
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x64
        // 0x588B17BC: jne 0x588b17cb
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x588B17BE: mov ecx, dword ptr [esi + 0x2478]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B17C4: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588B17C6: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x588B17C9: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588B17CB: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B17D1: mov edi, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x7C
        // 0x588B17D4: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x588B17D7: push ecx
        __asm _emit 0x51
        // 0x588B17D8: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588B17DA: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x61
        __asm _emit 0xFD
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B17DF: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x588B17E1: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x588B17E3: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x588B17E5: inc eax
        __asm _emit 0x40
        // 0x588B17E6: mov dword ptr [edi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x50
        // 0x588B17E9: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B17EF: mov esi, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B17F5: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x588B17F8: push edx
        __asm _emit 0x52
        // 0x588B17F9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588B17FB: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0xFD
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B1800: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x588B1802: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x588B1804: pop edi
        __asm _emit 0x5F
        // 0x588B1805: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x588B1807: pop ebp
        __asm _emit 0x5D
        // 0x588B1808: inc eax
        __asm _emit 0x40
        // 0x588B1809: mov dword ptr [esi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x588B180C: pop ebx
        __asm _emit 0x5B
        // 0x588B180D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B180F: pop esi
        __asm _emit 0x5E
        // 0x588B1810: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B1813: sub eax, 0x201
        __asm _emit 0x2D
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1818: cmp eax, 9
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x588B181B: ja 0x588b1a01
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xE0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1821: jmp dword ptr [eax*4 + 0x588b1a44]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x44
        __asm _emit 0x1A
        __asm _emit 0x8B
        __asm _emit 0x58
        // 0x588B1828: movsx ecx, word ptr [ebp + 0xa]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x4D
        __asm _emit 0x0A
        // 0x588B182C: mov eax, 0x88888889
        __asm _emit 0xB8
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x88
        __asm _emit 0x88
        // 0x588B1831: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x588B1833: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x588B1835: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x588B1838: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588B183A: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588B183D: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588B183F: movzx ecx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC8
        // 0x588B1842: cmp cx, bx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588B1845: je 0x588b1a01
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B184B: mov edx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x68
        // 0x588B184E: mov edi, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x7A
        __asm _emit 0x04
        // 0x588B1851: movsx eax, cx
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0xC1
        // 0x588B1854: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x588B1856: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x588B1858: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x588B185A: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xF8
        // 0x588B185C: cmp cx, bx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588B185F: jle 0x588b186f
        __asm _emit 0x7E
        __asm _emit 0x0E
        // 0x588B1861: cmp edi, 0xfa
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1867: jge 0x588b1a01
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B186D: jmp 0x588b1883
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x588B186F: mov ecx, dword ptr [edx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x14
        // 0x588B1872: sub ecx, dword ptr [edx + 0x1c]
        __asm _emit 0x2B
        __asm _emit 0x4A
        __asm _emit 0x1C
        // 0x588B1875: add ecx, 0x2bc
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B187B: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x588B187D: jle 0x588b1a01
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x7E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1883: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588B1885: push eax
        __asm _emit 0x50
        // 0x588B1886: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588B1888: call 0x588aeef0
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0xD6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B188D: mov eax, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x588B1890: mov ecx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x1C
        // 0x588B1893: sub ecx, dword ptr [eax + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x588B1896: mov eax, 0xfa
        __asm _emit 0xB8
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B189B: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x588B189D: imul eax, eax, 0xf0
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B18A3: cdq
        __asm _emit 0x99
        // 0x588B18A4: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x588B18A6: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x588B18A9: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B18AF: lea eax, [eax + edx + 0x12e]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x2E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B18B6: push eax
        __asm _emit 0x50
        // 0x588B18B7: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0x1A
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B18BC: pop edi
        __asm _emit 0x5F
        // 0x588B18BD: pop ebp
        __asm _emit 0x5D
        // 0x588B18BE: pop ebx
        __asm _emit 0x5B
        // 0x588B18BF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B18C1: pop esi
        __asm _emit 0x5E
        // 0x588B18C2: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B18C5: mov ebp, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588B18CB: mov edi, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x7C
        // 0x588B18CE: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x588B18D1: push ebp
        __asm _emit 0x55
        // 0x588B18D2: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588B18D4: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0xFC
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B18D9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B18DB: je 0x588b18f7
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x588B18DD: mov dword ptr [esi + 0x22c], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B18E7: mov dword ptr [edi + 0x50], 4
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x50
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B18EE: pop edi
        __asm _emit 0x5F
        // 0x588B18EF: pop ebp
        __asm _emit 0x5D
        // 0x588B18F0: pop ebx
        __asm _emit 0x5B
        // 0x588B18F1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B18F3: pop esi
        __asm _emit 0x5E
        // 0x588B18F4: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B18F7: mov edi, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B18FD: push ebp
        __asm _emit 0x55
        // 0x588B18FE: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588B1900: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0xFC
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B1905: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B1907: je 0x588b1923
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x588B1909: mov dword ptr [esi + 0x22c], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588B1913: mov dword ptr [edi + 0x50], 4
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x50
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B191A: pop edi
        __asm _emit 0x5F
        // 0x588B191B: pop ebp
        __asm _emit 0x5D
        // 0x588B191C: pop ebx
        __asm _emit 0x5B
        // 0x588B191D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B191F: pop esi
        __asm _emit 0x5E
        // 0x588B1920: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B1923: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588B1925: lea ebx, [esi + 0x8c]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B192B: jmp 0x588b1930
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra range: 0x588B1930 .. +0xE1 bytes.
extern "C" __declspec(naked) void FUN_588b1580_segment_01() {
    __asm {
        // 0x588B1930: cmp dword ptr [ebx + 0x1f80], 0
        __asm _emit 0x83
        __asm _emit 0xBB
        __asm _emit 0x80
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1937: je 0x588b1945
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x588B1939: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x588B193B: push ebp
        __asm _emit 0x55
        // 0x588B193C: call 0x58731540
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0xFB
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B1941: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B1943: jne 0x588b1950
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x588B1945: inc edi
        __asm _emit 0x47
        // 0x588B1946: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x588B1949: cmp edi, 8
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x08
        // 0x588B194C: jl 0x588b1930
        __asm _emit 0x7C
        __asm _emit 0xE2
        // 0x588B194E: jmp 0x588b1984
        __asm _emit 0xEB
        __asm _emit 0x34
        // 0x588B1950: mov ecx, dword ptr [esi + edi*4 + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xBE
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1957: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x588B195A: push ecx
        __asm _emit 0x51
        // 0x588B195B: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588B195E: call 0x5873a2e0
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0x89
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588B1963: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588B1966: push 0xf
        __asm _emit 0x6A
        __asm _emit 0x0F
        // 0x588B1968: call 0x587315c0
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0xFC
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B196D: mov edx, dword ptr [esi + edi*4 + 0x200c]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0xBE
        __asm _emit 0x0C
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1974: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x588B1977: mov dword ptr [esi + 0x20f4], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xF4
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B197D: mov dword ptr [eax + 0x50], 1
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B1984: cmp edi, 8
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x08
        // 0x588B1987: jne 0x588b1a01
        __asm _emit 0x75
        __asm _emit 0x78
        // 0x588B1989: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588B198C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588B198E: call 0x587315c0
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0xFC
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B1993: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x588B1996: pop edi
        __asm _emit 0x5F
        // 0x588B1997: pop ebp
        __asm _emit 0x5D
        // 0x588B1998: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B199A: mov dword ptr [esi + 0x20f4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B19A0: pop ebx
        __asm _emit 0x5B
        // 0x588B19A1: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588B19A4: pop esi
        __asm _emit 0x5E
        // 0x588B19A5: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B19A8: cmp dword ptr [esi + 0x22c], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B19AE: je 0x588b1a01
        __asm _emit 0x74
        __asm _emit 0x51
        // 0x588B19B0: mov edx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x7C
        // 0x588B19B3: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B19B8: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x588B19BB: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B19C1: pop edi
        __asm _emit 0x5F
        // 0x588B19C2: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588B19C5: pop ebp
        __asm _emit 0x5D
        // 0x588B19C6: mov dword ptr [esi + 0x22c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B19CC: pop ebx
        __asm _emit 0x5B
        // 0x588B19CD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B19CF: pop esi
        __asm _emit 0x5E
        // 0x588B19D0: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B19D3: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588B19D6: push ebx
        __asm _emit 0x53
        // 0x588B19D7: call 0x587315c0
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0xFB
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588B19DC: mov edx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x74
        // 0x588B19DF: pop edi
        __asm _emit 0x5F
        // 0x588B19E0: mov dword ptr [esi + 0x20f4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xF4
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B19E6: pop ebp
        __asm _emit 0x5D
        // 0x588B19E7: mov dword ptr [edx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x50
        // 0x588B19EA: pop ebx
        __asm _emit 0x5B
        // 0x588B19EB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B19ED: pop esi
        __asm _emit 0x5E
        // 0x588B19EE: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B19F1: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x588B19F4: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588B19F6: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x588B19F9: push ebx
        __asm _emit 0x53
        // 0x588B19FA: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x588B19FC: push ecx
        __asm _emit 0x51
        // 0x588B19FD: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588B19FF: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588B1A01: pop edi
        __asm _emit 0x5F
        // 0x588B1A02: pop ebp
        __asm _emit 0x5D
        // 0x588B1A03: pop ebx
        __asm _emit 0x5B
        // 0x588B1A04: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B1A06: pop esi
        __asm _emit 0x5E
        // 0x588B1A07: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588B1A0A: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x588B1A0D: pop esi
        __asm _emit 0x5E
        // 0x588B1A0E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
