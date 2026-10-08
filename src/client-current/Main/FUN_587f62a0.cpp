// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 534 bytes in 2 exact ranges.
// Source symbol alias: FUN_587f62a0.

// Ghidra body range 0x587F62A0..0x587F644D; 429 mapped bytes.
extern "C" __declspec(naked) void FUN_587f62a0_segment_00() {
    __asm {
        // 0x587F62A0: sub esp, 0x40
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x40
        // 0x587F62A3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587F62A8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587F62AA: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587F62AE: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F62B3: push ebx
        __asm _emit 0x53
        // 0x587F62B4: push ebp
        __asm _emit 0x55
        // 0x587F62B5: push esi
        __asm _emit 0x56
        // 0x587F62B6: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587F62B8: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587F62BB: movzx dx, byte ptr [ecx + 0x354]
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x91
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F62C3: mov ecx, dword ptr [esi + 0x20d30]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x30
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F62C9: movzx eax, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC2
        // 0x587F62CC: mov edx, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F62D2: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587F62D6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587F62D8: cmp byte ptr [edx + 2], 0x65
        __asm _emit 0x80
        __asm _emit 0x7A
        __asm _emit 0x02
        __asm _emit 0x65
        // 0x587F62DC: mov ebp, 3
        __asm _emit 0xBD
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F62E1: setne al
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC0
        // 0x587F62E4: push edi
        __asm _emit 0x57
        // 0x587F62E5: mov dword ptr [esp + 0x18], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587F62E9: dec eax
        __asm _emit 0x48
        // 0x587F62EA: and eax, ebp
        __asm _emit 0x23
        __asm _emit 0xC5
        // 0x587F62EC: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x587F62EE: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587F62F0: mov dword ptr [esp + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587F62F4: cmp dword ptr [esi + 0x21ce4], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0xE4
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F62FA: je 0x587f6312
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x587F62FC: push 0x5899c528
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0xC5
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F6301: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587F6307: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587F630A: push eax
        __asm _emit 0x50
        // 0x587F630B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587F630D: call 0x587f2a70
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0xC7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F6312: mov ecx, dword ptr [esi + 0x20d30]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x30
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F6318: mov ebx, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x99
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F631E: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x587F6320: lea edx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x587F6323: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x587F6325: inc eax
        __asm _emit 0x40
        // 0x587F6326: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x587F6328: jne 0x587f6323
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x587F632A: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587F632C: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587F632E: jbe 0x587f6463
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x2F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6334: cmp byte ptr [ebx + edi - 1], 0x20
        __asm _emit 0x80
        __asm _emit 0x7C
        __asm _emit 0x3B
        __asm _emit 0xFF
        __asm _emit 0x20
        // 0x587F6339: jne 0x587f6463
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F633F: push 0x30
        __asm _emit 0x6A
        __asm _emit 0x30
        // 0x587F6341: lea edx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587F6345: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F6347: push edx
        __asm _emit 0x52
        // 0x587F6348: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F634D: mov eax, dword ptr [0x58a0b450]
        __asm _emit 0xA1
        __asm _emit 0x50
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F6352: mov ecx, dword ptr [0x58a0b454]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x54
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F6358: mov edx, dword ptr [0x58a0b458]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F635E: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587F6362: mov eax, dword ptr [0x58a0b45c]
        __asm _emit 0xA1
        __asm _emit 0x5C
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F6367: mov dword ptr [esp + 0x2c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587F636B: mov ecx, dword ptr [0x58a0b460]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x60
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F6371: mov dword ptr [esp + 0x30], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587F6375: mov edx, dword ptr [0x58a0b464]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F637B: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587F637F: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x587F6381: mov dword ptr [esp + 0x38], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587F6385: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587F6388: mov dword ptr [esp + 0x30], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587F638C: lea ecx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0x01
        // 0x587F638F: nop
        __asm _emit 0x90
        // 0x587F6390: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x587F6392: inc eax
        __asm _emit 0x40
        // 0x587F6393: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x587F6395: jne 0x587f6390
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x587F6397: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x587F6399: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x587F639B: add eax, 0x31
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x31
        // 0x587F639E: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x587F63A0: push ebp
        __asm _emit 0x55
        // 0x587F63A1: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0xB1
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x587F63A6: push ebp
        __asm _emit 0x55
        // 0x587F63A7: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x587F63A9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F63AB: push ebx
        __asm _emit 0x53
        // 0x587F63AC: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x97
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F63B1: mov ecx, 0xc
        __asm _emit 0xB9
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F63B6: lea esi, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587F63BA: mov edi, ebx
        __asm _emit 0x8B
        __asm _emit 0xFB
        // 0x587F63BC: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x587F63BE: mov esi, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587F63C2: mov ecx, dword ptr [esi + 0x20d30]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x30
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F63C8: mov edx, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F63CE: add edx, dword ptr [esp + 0x20]
        __asm _emit 0x03
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587F63D2: lea eax, [ebp - 0x30]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xD0
        // 0x587F63D5: push eax
        __asm _emit 0x50
        // 0x587F63D6: push edx
        __asm _emit 0x52
        // 0x587F63D7: lea eax, [ebx + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x43
        __asm _emit 0x30
        // 0x587F63DA: push eax
        __asm _emit 0x50
        // 0x587F63DB: call 0x5897cd4c
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0x69
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F63E0: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587F63E4: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x587F63E7: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587F63E9: push ebp
        __asm _emit 0x55
        // 0x587F63EA: push ebx
        __asm _emit 0x53
        // 0x587F63EB: push ecx
        __asm _emit 0x51
        // 0x587F63EC: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F63F2: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x587F63F4: call 0x587b8110
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0x1D
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x587F63F9: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F63FF: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587F6402: movzx cx, byte ptr [eax + 0x354]
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F640A: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F640F: movzx ecx, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC9
        // 0x587F6412: push 0x5899c208
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0xC2
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F6417: mov dword ptr [eax + 0x20d24], 1
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x24
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6421: mov word ptr [eax + 0x20d20], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x20
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F6428: mov dword ptr [eax + 0x21ce4], 3
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0xE4
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6432: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587F6438: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587F643B: push eax
        __asm _emit 0x50
        // 0x587F643C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587F643E: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x587F6440: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587F6442: call 0x587ee240
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0x7D
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F6447: push ebx
        __asm _emit 0x53
        // 0x587F6448: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0x67
        __asm _emit 0x18
        __asm _emit 0x00
    }
}

// Ghidra body range 0x587F6463..0x587F64CC; 105 mapped bytes.
extern "C" __declspec(naked) void FUN_587f62a0_segment_01() {
    __asm {
        // 0x587F6463: mov bl, byte ptr [ebx + edi - 1]
        __asm _emit 0x8A
        __asm _emit 0x5C
        __asm _emit 0x3B
        __asm _emit 0xFF
        // 0x587F6467: cmp bl, 0x20
        __asm _emit 0x80
        __asm _emit 0xFB
        __asm _emit 0x20
        // 0x587F646A: je 0x587f6470
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587F646C: test bl, bl
        __asm _emit 0x84
        __asm _emit 0xDB
        // 0x587F646E: jne 0x587f64b9
        __asm _emit 0x75
        __asm _emit 0x49
        // 0x587F6470: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F6476: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587F6479: movzx cx, byte ptr [eax + 0x354]
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6481: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F6486: movzx ecx, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC9
        // 0x587F6489: push 0x5899c208
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0xC2
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F648E: mov dword ptr [eax + 0x20d24], 1
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x24
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6498: mov word ptr [eax + 0x20d20], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x20
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F649F: mov dword ptr [eax + 0x21ce4], ebp
        __asm _emit 0x89
        __asm _emit 0xA8
        __asm _emit 0xE4
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F64A5: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587F64AB: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587F64AE: push eax
        __asm _emit 0x50
        // 0x587F64AF: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587F64B1: push ebp
        __asm _emit 0x55
        // 0x587F64B2: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587F64B4: call 0x587ee240
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0x7D
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F64B9: mov ecx, dword ptr [esp + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x587F64BD: pop edi
        __asm _emit 0x5F
        // 0x587F64BE: pop esi
        __asm _emit 0x5E
        // 0x587F64BF: pop ebp
        __asm _emit 0x5D
        // 0x587F64C0: pop ebx
        __asm _emit 0x5B
        // 0x587F64C1: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x587F64C3: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x67
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F64C8: add esp, 0x40
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x40
        // 0x587F64CB: ret
        __asm _emit 0xC3
    }
}
