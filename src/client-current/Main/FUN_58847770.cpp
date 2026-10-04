// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58847770 .. +0x2CE bytes.
// Source symbol alias: FUN_58847770.
extern "C" __declspec(naked) void FUN_58847770() {
    __asm {
        // 0x58847770: sub esp, 0x64
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x64
        // 0x58847773: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58847778: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5884777A: mov dword ptr [esp + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x60
        // 0x5884777E: push ebx
        __asm _emit 0x53
        // 0x5884777F: push ebp
        __asm _emit 0x55
        // 0x58847780: mov ebp, dword ptr [esp + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x70
        // 0x58847784: push esi
        __asm _emit 0x56
        // 0x58847785: push edi
        __asm _emit 0x57
        // 0x58847786: push 0x58a0b450
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5884778B: lea esi, [ebp + 1]
        __asm _emit 0x8D
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x5884778E: push esi
        __asm _emit 0x56
        // 0x5884778F: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x58847791: call dword ptr [0x5898c1a4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58847797: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58847799: jne 0x58847988
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884779F: mov edi, dword ptr [0x5898c198]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588477A5: push 0x58a0b450
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x588477AA: lea eax, [esp + 0x15]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x15
        // 0x588477AE: push eax
        __asm _emit 0x50
        // 0x588477AF: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x588477B1: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588477B7: movzx eax, byte ptr [ecx + 0x9c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x81
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588477BE: add eax, -2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xFE
        // 0x588477C1: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x588477C4: ja 0x588477f8
        __asm _emit 0x77
        __asm _emit 0x32
        // 0x588477C6: jmp dword ptr [eax*4 + 0x58847a40]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0x7A
        __asm _emit 0x84
        __asm _emit 0x58
        // 0x588477CD: mov edx, 2
        __asm _emit 0xBA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588477D2: mov word ptr [esp + 0x2a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2A
        // 0x588477D7: jmp 0x58847802
        __asm _emit 0xEB
        __asm _emit 0x29
        // 0x588477D9: mov eax, 3
        __asm _emit 0xB8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588477DE: jmp 0x588477fd
        __asm _emit 0xEB
        __asm _emit 0x1D
        // 0x588477E0: mov ecx, 5
        __asm _emit 0xB9
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588477E5: mov word ptr [esp + 0x2a], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2A
        // 0x588477EA: jmp 0x58847802
        __asm _emit 0xEB
        __asm _emit 0x16
        // 0x588477EC: mov edx, 6
        __asm _emit 0xBA
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588477F1: mov word ptr [esp + 0x2a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2A
        // 0x588477F6: jmp 0x58847802
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x588477F8: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588477FD: mov word ptr [esp + 0x2a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2A
        // 0x58847802: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58847808: mov esi, dword ptr [ecx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x30
        // 0x5884780B: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5884780D: je 0x58847959
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847813: lea edx, [esi + 0x54]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x58847816: push edx
        __asm _emit 0x52
        // 0x58847817: lea eax, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5884781B: push eax
        __asm _emit 0x50
        // 0x5884781C: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5884781E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58847820: lea edx, [esi + 0x9a8]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0xA8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847826: lea esi, [eax + 8]
        __asm _emit 0x8D
        __asm _emit 0x70
        __asm _emit 0x08
        // 0x58847829: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847830: mov ecx, dword ptr [edx - 4]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0xFC
        // 0x58847833: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58847835: je 0x5884784e
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x58847837: mov cx, word ptr [ecx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x5E
        // 0x5884783B: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x04
        // 0x5884783F: movzx ecx, cl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC9
        // 0x58847842: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847848: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5884784A: jle 0x5884784e
        __asm _emit 0x7E
        __asm _emit 0x02
        // 0x5884784C: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5884784E: mov ecx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x0A
        // 0x58847850: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58847852: je 0x5884786b
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x58847854: mov cx, word ptr [ecx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x5E
        // 0x58847858: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x04
        // 0x5884785C: movzx ecx, cl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC9
        // 0x5884785F: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847865: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58847867: jle 0x5884786b
        __asm _emit 0x7E
        __asm _emit 0x02
        // 0x58847869: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5884786B: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x5884786E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58847870: je 0x58847889
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x58847872: mov cx, word ptr [ecx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x5E
        // 0x58847876: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x04
        // 0x5884787A: movzx ecx, cl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC9
        // 0x5884787D: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847883: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58847885: jle 0x58847889
        __asm _emit 0x7E
        __asm _emit 0x02
        // 0x58847887: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58847889: mov ecx, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x08
        // 0x5884788C: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5884788E: je 0x588478a7
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x58847890: mov cx, word ptr [ecx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x5E
        // 0x58847894: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x04
        // 0x58847898: movzx ecx, cl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC9
        // 0x5884789B: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588478A1: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588478A3: jle 0x588478a7
        __asm _emit 0x7E
        __asm _emit 0x02
        // 0x588478A5: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x588478A7: add edx, 0x10
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x10
        // 0x588478AA: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x588478AD: jne 0x58847830
        __asm _emit 0x75
        __asm _emit 0x81
        // 0x588478AF: cmp eax, 0x11
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x11
        // 0x588478B2: jge 0x588478bd
        __asm _emit 0x7D
        __asm _emit 0x09
        // 0x588478B4: mov dword ptr [esp + 0x44], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x588478B8: jmp 0x5884796d
        __asm _emit 0xE9
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588478BD: cmp eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x18
        // 0x588478C0: jge 0x588478cf
        __asm _emit 0x7D
        __asm _emit 0x0D
        // 0x588478C2: mov dword ptr [esp + 0x44], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588478CA: jmp 0x5884796d
        __asm _emit 0xE9
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588478CF: cmp eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x1F
        // 0x588478D2: jge 0x588478e1
        __asm _emit 0x7D
        __asm _emit 0x0D
        // 0x588478D4: mov dword ptr [esp + 0x44], 2
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588478DC: jmp 0x5884796d
        __asm _emit 0xE9
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588478E1: cmp eax, 0x26
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x26
        // 0x588478E4: jge 0x588478f0
        __asm _emit 0x7D
        __asm _emit 0x0A
        // 0x588478E6: mov dword ptr [esp + 0x44], 3
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588478EE: jmp 0x5884796d
        __asm _emit 0xEB
        __asm _emit 0x7D
        // 0x588478F0: cmp eax, 0x2f
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x2F
        // 0x588478F3: jge 0x588478ff
        __asm _emit 0x7D
        __asm _emit 0x0A
        // 0x588478F5: mov dword ptr [esp + 0x44], 4
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588478FD: jmp 0x5884796d
        __asm _emit 0xEB
        __asm _emit 0x6E
        // 0x588478FF: cmp eax, 0x38
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x38
        // 0x58847902: jge 0x5884790e
        __asm _emit 0x7D
        __asm _emit 0x0A
        // 0x58847904: mov dword ptr [esp + 0x44], 5
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884790C: jmp 0x5884796d
        __asm _emit 0xEB
        __asm _emit 0x5F
        // 0x5884790E: cmp eax, 0x41
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x41
        // 0x58847911: jge 0x5884791d
        __asm _emit 0x7D
        __asm _emit 0x0A
        // 0x58847913: mov dword ptr [esp + 0x44], 6
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884791B: jmp 0x5884796d
        __asm _emit 0xEB
        __asm _emit 0x50
        // 0x5884791D: cmp eax, 0x4c
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x4C
        // 0x58847920: jge 0x5884792c
        __asm _emit 0x7D
        __asm _emit 0x0A
        // 0x58847922: mov dword ptr [esp + 0x44], 7
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884792A: jmp 0x5884796d
        __asm _emit 0xEB
        __asm _emit 0x41
        // 0x5884792C: cmp eax, 0x57
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x57
        // 0x5884792F: jge 0x5884793b
        __asm _emit 0x7D
        __asm _emit 0x0A
        // 0x58847931: mov dword ptr [esp + 0x44], 8
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847939: jmp 0x5884796d
        __asm _emit 0xEB
        __asm _emit 0x32
        // 0x5884793B: cmp eax, 0x62
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x62
        // 0x5884793E: jge 0x5884794a
        __asm _emit 0x7D
        __asm _emit 0x0A
        // 0x58847940: mov dword ptr [esp + 0x44], 9
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847948: jmp 0x5884796d
        __asm _emit 0xEB
        __asm _emit 0x23
        // 0x5884794A: cmp eax, 0x7d
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x7D
        // 0x5884794D: jge 0x5884796d
        __asm _emit 0x7D
        __asm _emit 0x1E
        // 0x5884794F: mov dword ptr [esp + 0x44], 0xa
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847957: jmp 0x5884796d
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x58847959: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5884795E: lea edx, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58847962: push edx
        __asm _emit 0x52
        // 0x58847963: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58847965: mov dword ptr [esp + 0x44], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884796D: mov ecx, 9
        __asm _emit 0xB9
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847972: mov esi, 0x58a0b4a0
        __asm _emit 0xBE
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58847977: lea edi, [esp + 0x4c]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5884797B: push ebp
        __asm _emit 0x55
        // 0x5884797C: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58847980: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58847982: push eax
        __asm _emit 0x50
        // 0x58847983: jmp 0x58847a22
        __asm _emit 0xE9
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58847988: mov al, byte ptr [ebp]
        __asm _emit 0x8A
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x5884798B: push esi
        __asm _emit 0x56
        // 0x5884798C: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5884798E: jne 0x588479d8
        __asm _emit 0x75
        __asm _emit 0x48
        // 0x58847990: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58847996: mov ecx, dword ptr [ecx + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884799C: call 0x58848380
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588479A1: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588479A3: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588479A5: jne 0x588479c4
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x588479A7: mov ecx, dword ptr [0x58a245b0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588479AD: push esi
        __asm _emit 0x56
        // 0x588479AE: call 0x587522f0
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0xA9
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x588479B3: mov ecx, dword ptr [0x58a245b0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588479B9: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588479BB: call 0x58752340
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0xA9
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x588479C0: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588479C2: je 0x58847a29
        __asm _emit 0x74
        __asm _emit 0x65
        // 0x588479C4: lea edx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588479C8: push edx
        __asm _emit 0x52
        // 0x588479C9: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588479CB: call 0x5875a440
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0x2A
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x588479D0: push ebp
        __asm _emit 0x55
        // 0x588479D1: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588479D5: push eax
        __asm _emit 0x50
        // 0x588479D6: jmp 0x58847a22
        __asm _emit 0xEB
        __asm _emit 0x4A
        // 0x588479D8: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x588479DA: jne 0x58847a01
        __asm _emit 0x75
        __asm _emit 0x25
        // 0x588479DC: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588479E2: mov ecx, dword ptr [ecx + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588479E8: call 0x588483d0
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588479ED: lea edx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588479F1: push edx
        __asm _emit 0x52
        // 0x588479F2: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588479F4: call 0x5875a440
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0x2A
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x588479F9: push ebp
        __asm _emit 0x55
        // 0x588479FA: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588479FE: push eax
        __asm _emit 0x50
        // 0x588479FF: jmp 0x58847a22
        __asm _emit 0xEB
        __asm _emit 0x21
        // 0x58847A01: mov ecx, dword ptr [0x58a245b0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58847A07: call 0x587522f0
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0xA8
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58847A0C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58847A0E: je 0x58847a29
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x58847A10: lea ecx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58847A14: push ecx
        __asm _emit 0x51
        // 0x58847A15: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58847A17: call 0x5875a440
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0x2A
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58847A1C: push ebp
        __asm _emit 0x55
        // 0x58847A1D: lea edx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58847A21: push edx
        __asm _emit 0x52
        // 0x58847A22: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58847A24: call 0x588471e0
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58847A29: mov ecx, dword ptr [esp + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x70
        // 0x58847A2D: pop edi
        __asm _emit 0x5F
        // 0x58847A2E: pop esi
        __asm _emit 0x5E
        // 0x58847A2F: pop ebp
        __asm _emit 0x5D
        // 0x58847A30: pop ebx
        __asm _emit 0x5B
        // 0x58847A31: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x58847A33: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0x51
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x58847A38: add esp, 0x64
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x64
        // 0x58847A3B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
