// Complete Ghidra body ranges; intervening unowned gaps are excluded.
// Total body size: 1519 bytes across one range.

// Ghidra range: 0x58857850 .. +0x5EF bytes.
extern "C" __declspec(naked) void FUN_58857850_segment_00() {
    __asm {
        // 0x58857850: push esi
        __asm _emit 0x56
        // 0x58857851: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58857853: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58857857: push edi
        __asm _emit 0x57
        // 0x58857858: test al, 4
        __asm _emit 0xA8
        __asm _emit 0x04
        // 0x5885785A: je 0x58857e1c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xBC
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857860: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58857864: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857869: push ebx
        __asm _emit 0x53
        // 0x5885786A: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5885786D: mov eax, 0x100
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857872: push ebp
        __asm _emit 0x55
        // 0x58857873: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857878: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5885787B: je 0x58857892
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x5885787D: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58857881: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58857884: mov eax, 0x400
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857889: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5885788C: jne 0x58857bba
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857892: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58857896: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885789B: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5885789E: mov eax, 0x400
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588578A3: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588578A6: jne 0x588578f3
        __asm _emit 0x75
        __asm _emit 0x4B
        // 0x588578A8: mov ecx, dword ptr [esi + 0x2e8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588578AE: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x588578B1: sub eax, dword ptr [ecx + 8]
        __asm _emit 0x2B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x588578B4: add eax, 0x3e8
        __asm _emit 0x05
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588578B9: lea edx, [eax + 7]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x07
        // 0x588578BC: cmp edx, 0xe
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0E
        // 0x588578BF: ja 0x588578e4
        __asm _emit 0x77
        __asm _emit 0x23
        // 0x588578C1: lea edx, [eax + 3]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x03
        // 0x588578C4: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x588578C7: ja 0x588578dd
        __asm _emit 0x77
        __asm _emit 0x14
        // 0x588578C9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588578CB: jge 0x588578d2
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x588578CD: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x588578D0: jmp 0x588578ed
        __asm _emit 0xEB
        __asm _emit 0x1B
        // 0x588578D2: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588578D4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588578D6: setg dl
        __asm _emit 0x0F
        __asm _emit 0x9F
        __asm _emit 0xC2
        // 0x588578D9: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588578DB: jmp 0x588578ed
        __asm _emit 0xEB
        __asm _emit 0x10
        // 0x588578DD: cdq
        __asm _emit 0x99
        // 0x588578DE: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588578E0: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x588578E2: jmp 0x588578ed
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x588578E4: cdq
        __asm _emit 0x99
        // 0x588578E5: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x588578E8: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588578EA: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588578ED: push eax
        __asm _emit 0x50
        // 0x588578EE: call 0x58902ea0
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0xB5
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588578F3: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x588578F6: mov eax, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x588578F9: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588578FB: je 0x5885793b
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x588578FD: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x588578FF: lea ecx, [eax + 7]
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0x07
        // 0x58857902: cmp ecx, 0xe
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x0E
        // 0x58857905: ja 0x5885792a
        __asm _emit 0x77
        __asm _emit 0x23
        // 0x58857907: lea edx, [eax + 3]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x03
        // 0x5885790A: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5885790D: ja 0x58857923
        __asm _emit 0x77
        __asm _emit 0x14
        // 0x5885790F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58857911: jge 0x58857918
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x58857913: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x58857916: jmp 0x58857933
        __asm _emit 0xEB
        __asm _emit 0x1B
        // 0x58857918: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5885791A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885791C: setg cl
        __asm _emit 0x0F
        __asm _emit 0x9F
        __asm _emit 0xC1
        // 0x5885791F: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58857921: jmp 0x58857933
        __asm _emit 0xEB
        __asm _emit 0x10
        // 0x58857923: cdq
        __asm _emit 0x99
        // 0x58857924: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58857926: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x58857928: jmp 0x58857933
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x5885792A: cdq
        __asm _emit 0x99
        // 0x5885792B: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x5885792E: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58857930: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58857933: push eax
        __asm _emit 0x50
        // 0x58857934: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58857936: call 0x58902ea0
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0xB5
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5885793B: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x5885793E: cmp edx, dword ptr [esi + 0x54]
        __asm _emit 0x3B
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x58857941: jne 0x58857bba
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x73
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857947: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5885794B: mov ecx, 0x1f00
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857950: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x58857953: mov edx, 0x100
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857958: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x5885795B: jne 0x58857b24
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857961: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58857965: mov ecx, 0xe2ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885796A: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x5885796D: mov edx, 0x200
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857972: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x58857975: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58857979: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x5885797E: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58857981: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x58857984: mov dword ptr [esi + 0x2dc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885798A: mov dword ptr [esi + 0x2e0], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857990: lea edi, [esi + 0x80]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857996: mov ebp, 4
        __asm _emit 0xBD
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885799B: jmp 0x588579a0
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x5885799D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x588579A0: mov ecx, dword ptr [edi - 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xFC
        // 0x588579A3: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588579A5: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588579A8: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588579AA: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588579AC: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588579AE: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588579B1: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588579B3: mov eax, dword ptr [edi - 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0xFC
        // 0x588579B6: mov ecx, 2
        __asm _emit 0xB9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588579BB: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588579BF: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x588579C1: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588579C5: mov ecx, dword ptr [edi - 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xFC
        // 0x588579C8: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588579CA: mov eax, dword ptr [edx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x1C
        // 0x588579CD: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588579CF: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588579D1: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588579D3: mov eax, dword ptr [edx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x1C
        // 0x588579D6: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588579D8: add edi, 8
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x08
        // 0x588579DB: sub ebp, ebx
        __asm _emit 0x2B
        __asm _emit 0xEB
        // 0x588579DD: jne 0x588579a0
        __asm _emit 0x75
        __asm _emit 0xC1
        // 0x588579DF: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x588579E2: mov ecx, dword ptr [0x58a246d8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588579E8: mov edx, 0x12c
        __asm _emit 0xBA
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588579ED: sub edx, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x588579F0: sub eax, 0x190
        __asm _emit 0x2D
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588579F5: cmp dword ptr [ecx + 0x170], 0xc
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0C
        // 0x588579FC: jle 0x58857a11
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588579FE: cmp dword ptr [ecx + 0x194], ebp
        __asm _emit 0x39
        __asm _emit 0xA9
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857A04: je 0x58857a11
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58857A06: mov ecx, dword ptr [ecx + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857A0C: mov ecx, dword ptr [ecx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x30
        // 0x58857A0F: jmp 0x58857a13
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58857A11: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58857A13: mov edi, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58857A19: push edi
        __asm _emit 0x57
        // 0x58857A1A: push edx
        __asm _emit 0x52
        // 0x58857A1B: push eax
        __asm _emit 0x50
        // 0x58857A1C: call 0x587b7400
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0xF9
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x58857A21: mov eax, dword ptr [esi + 0x2a8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857A27: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x58857A2B: mov eax, dword ptr [esi + 0x2ac]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857A31: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x58857A35: mov eax, dword ptr [esi + 0x2b0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857A3B: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x58857A3F: mov eax, dword ptr [esi + 0x2b4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857A45: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x58857A49: mov eax, dword ptr [esi + 0x2b8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857A4F: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x58857A53: mov eax, dword ptr [esi + 0x2bc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857A59: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x58857A5D: mov eax, dword ptr [esi + 0x304]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857A63: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x58857A67: mov eax, dword ptr [esi + 0x308]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857A6D: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x58857A71: mov edx, dword ptr [esi + 0x2c0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857A77: mov ecx, dword ptr [edx + 0x58c]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x8C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857A7D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58857A7F: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0xB2
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58857A84: mov eax, dword ptr [esi + 0x2c0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857A8A: mov ecx, dword ptr [eax + 0x588]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x88
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857A90: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857A95: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0xB2
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58857A9A: mov ecx, dword ptr [esi + 0x2c0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857AA0: mov ecx, dword ptr [ecx + 0x588]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857AA6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58857AA8: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0xB2
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58857AAD: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xA1
        __asm _emit 0xA0
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58857AB2: cmp dword ptr [eax + 0x164], 0x4ff
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857ABC: jle 0x58857ad5
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58857ABE: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857AC5: je 0x58857ad5
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58857AC7: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857ACD: mov eax, dword ptr [edx + 0x13fc]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xFC
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857AD3: jmp 0x58857ad7
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58857AD5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58857AD7: mov ecx, dword ptr [esi + 0x2c0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857ADD: mov ecx, dword ptr [ecx + 0x588]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857AE3: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x58857AE6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58857AE8: je 0x58857b12
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58857AEA: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58857AED: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x58857AF0: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x58857AF3: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x58857AF6: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58857AF9: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58857AFB: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58857AFE: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58857B00: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58857B03: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58857B06: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58857B09: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58857B0C: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58857B0F: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58857B12: mov ecx, dword ptr [esi + 0x2c0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857B18: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58857B1A: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58857B1D: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58857B1F: jmp 0x58857bba
        __asm _emit 0xE9
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857B24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58857B28: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857B2D: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58857B30: mov eax, 0x400
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857B35: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58857B38: jne 0x58857bba
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x7C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857B3E: mov ecx, dword ptr [esi + 0x2c0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857B44: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x58857B48: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x08
        // 0x58857B4C: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x58857B4F: cmp dl, 5
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x58857B52: jne 0x58857bba
        __asm _emit 0x75
        __asm _emit 0x66
        // 0x58857B54: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58857B56: mov dword ptr [0x58a28378], eax
        __asm _emit 0xA3
        __asm _emit 0x78
        __asm _emit 0x83
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58857B5B: mov dword ptr [0x58a28374], eax
        __asm _emit 0xA3
        __asm _emit 0x74
        __asm _emit 0x83
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58857B60: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58857B64: mov ecx, 0xe5ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857B69: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x58857B6C: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857B71: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x58857B74: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58857B78: mov eax, 0xfffd
        __asm _emit 0xB8
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857B7D: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58857B81: mov ecx, 0xfffb
        __asm _emit 0xB9
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857B86: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58857B8A: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857B8F: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x58857B93: lea edi, [esi + 0x80]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857B99: mov ebp, 4
        __asm _emit 0xBD
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857B9E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58857BA0: mov ecx, dword ptr [edi - 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xFC
        // 0x58857BA3: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58857BA5: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58857BA8: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58857BAA: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58857BAC: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58857BAE: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58857BB1: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58857BB3: add edi, 8
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x08
        // 0x58857BB6: sub ebp, ebx
        __asm _emit 0x2B
        __asm _emit 0xEB
        // 0x58857BB8: jne 0x58857ba0
        __asm _emit 0x75
        __asm _emit 0xE6
        // 0x58857BBA: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58857BBE: mov ecx, 0x1f00
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857BC3: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x58857BC6: mov edx, 0x200
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857BCB: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58857BCE: jne 0x58857e1a
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x46
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857BD4: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58857BD6: cmp dword ptr [0x58a28378], 0x19
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0x78
        __asm _emit 0x83
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x19
        // 0x58857BDD: jl 0x58857c44
        __asm _emit 0x7C
        __asm _emit 0x65
        // 0x58857BDF: cmp dword ptr [0x58a28374], ebp
        __asm _emit 0x39
        __asm _emit 0x2D
        __asm _emit 0x74
        __asm _emit 0x83
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58857BE5: jne 0x58857c44
        __asm _emit 0x75
        __asm _emit 0x5D
        // 0x58857BE7: mov ecx, dword ptr [esi + 0x2e8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857BED: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58857BF0: sub eax, dword ptr [ecx + 8]
        __asm _emit 0x2B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x58857BF3: add eax, 0x138
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857BF8: lea edx, [eax + 7]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x07
        // 0x58857BFB: cmp edx, 0xe
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0E
        // 0x58857BFE: ja 0x58857c25
        __asm _emit 0x77
        __asm _emit 0x25
        // 0x58857C00: lea edx, [eax + 3]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x03
        // 0x58857C03: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58857C06: ja 0x58857c1c
        __asm _emit 0x77
        __asm _emit 0x14
        // 0x58857C08: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x58857C0A: jge 0x58857c11
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x58857C0C: or edi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCF
        __asm _emit 0xFF
        // 0x58857C0F: jmp 0x58857c30
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x58857C11: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58857C13: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58857C15: setg dl
        __asm _emit 0x0F
        __asm _emit 0x9F
        __asm _emit 0xC2
        // 0x58857C18: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58857C1A: jmp 0x58857c30
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x58857C1C: cdq
        __asm _emit 0x99
        // 0x58857C1D: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58857C1F: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58857C21: sar edi, 1
        __asm _emit 0xD1
        __asm _emit 0xFF
        // 0x58857C23: jmp 0x58857c30
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x58857C25: cdq
        __asm _emit 0x99
        // 0x58857C26: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x58857C29: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58857C2B: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58857C2D: sar edi, 2
        __asm _emit 0xC1
        __asm _emit 0xFF
        __asm _emit 0x02
        // 0x58857C30: push edi
        __asm _emit 0x57
        // 0x58857C31: call 0x58902ea0
        __asm _emit 0xE8
        __asm _emit 0x6A
        __asm _emit 0xB2
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58857C36: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58857C38: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x58857C3A: jne 0x58857c4a
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x58857C3C: mov dword ptr [0x58a28374], ebx
        __asm _emit 0x89
        __asm _emit 0x1D
        __asm _emit 0x74
        __asm _emit 0x83
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58857C42: jmp 0x58857c4a
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x58857C44: add dword ptr [0x58a28378], ebx
        __asm _emit 0x01
        __asm _emit 0x1D
        __asm _emit 0x78
        __asm _emit 0x83
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58857C4A: mov eax, dword ptr [esi + 0x2c0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857C50: mov ecx, dword ptr [eax + 0x588]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x88
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857C56: call 0x5875ee10
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0x71
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x58857C5B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58857C5D: jne 0x58857c86
        __asm _emit 0x75
        __asm _emit 0x27
        // 0x58857C5F: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x58857C62: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58857C66: test bl, cl
        __asm _emit 0x84
        __asm _emit 0xCB
        // 0x58857C68: jne 0x58857c86
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x58857C6A: mov edx, dword ptr [0x58a245c8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58857C70: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x58857C74: test bl, al
        __asm _emit 0x84
        __asm _emit 0xC3
        // 0x58857C76: jne 0x58857c86
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x58857C78: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x58857C7B: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x58857C7F: mov eax, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x58857C82: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x58857C86: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x58857C89: mov eax, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x58857C8C: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58857C8E: je 0x58857cce
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x58857C90: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x58857C92: lea ecx, [eax + 7]
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0x07
        // 0x58857C95: cmp ecx, 0xe
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x0E
        // 0x58857C98: ja 0x58857cbd
        __asm _emit 0x77
        __asm _emit 0x23
        // 0x58857C9A: lea edx, [eax + 3]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x03
        // 0x58857C9D: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58857CA0: ja 0x58857cb6
        __asm _emit 0x77
        __asm _emit 0x14
        // 0x58857CA2: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x58857CA4: jge 0x58857cab
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x58857CA6: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x58857CA9: jmp 0x58857cc6
        __asm _emit 0xEB
        __asm _emit 0x1B
        // 0x58857CAB: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58857CAD: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x58857CAF: setg cl
        __asm _emit 0x0F
        __asm _emit 0x9F
        __asm _emit 0xC1
        // 0x58857CB2: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58857CB4: jmp 0x58857cc6
        __asm _emit 0xEB
        __asm _emit 0x10
        // 0x58857CB6: cdq
        __asm _emit 0x99
        // 0x58857CB7: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58857CB9: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x58857CBB: jmp 0x58857cc6
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x58857CBD: cdq
        __asm _emit 0x99
        // 0x58857CBE: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x58857CC1: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58857CC3: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58857CC6: push eax
        __asm _emit 0x50
        // 0x58857CC7: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58857CC9: call 0x58902ea0
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0xB1
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58857CCE: push 0xa0
        __asm _emit 0x68
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857CD3: call dword ptr [0x5898c3e8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58857CD9: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x58857CDB: jns 0x58857cf8
        __asm _emit 0x79
        __asm _emit 0x1B
        // 0x58857CDD: cmp dword ptr [esi + 0x2d4], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0xD4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857CE3: jne 0x58857d0d
        __asm _emit 0x75
        __asm _emit 0x28
        // 0x58857CE5: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58857CE7: call 0x58853f20
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0xC2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58857CEC: mov dword ptr [esi + 0x2d4], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xD4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58857CF6: jmp 0x58857d0d
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x58857CF8: cmp dword ptr [esi + 0x2d4], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0xD4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857CFE: je 0x58857d0d
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x58857D00: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58857D02: call 0x58853f20
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0xC2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58857D07: mov dword ptr [esi + 0x2d4], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xD4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857D0D: cmp dword ptr [0x58a248dc], ebp
        __asm _emit 0x39
        __asm _emit 0x2D
        __asm _emit 0xDC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58857D13: jne 0x58857d48
        __asm _emit 0x75
        __asm _emit 0x33
        // 0x58857D15: mov eax, dword ptr [esi + 0x2c4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857D1B: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x58857D1D: jle 0x58857d48
        __asm _emit 0x7E
        __asm _emit 0x29
        // 0x58857D1F: dec eax
        __asm _emit 0x48
        // 0x58857D20: mov dword ptr [esi + 0x2c4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857D26: call 0x5897cc36
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0x4F
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x58857D2B: cdq
        __asm _emit 0x99
        // 0x58857D2C: mov ecx, 5
        __asm _emit 0xB9
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857D31: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x58857D33: mov eax, dword ptr [esi + 0x2e0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857D39: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58857D3B: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58857D3D: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x58857D40: push eax
        __asm _emit 0x50
        // 0x58857D41: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0xB6
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58857D46: jmp 0x58857d6f
        __asm _emit 0xEB
        __asm _emit 0x27
        // 0x58857D48: cmp dword ptr [esi + 0x2c4], ebp
        __asm _emit 0x39
        __asm _emit 0xAE
        __asm _emit 0xC4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857D4E: jne 0x58857d6f
        __asm _emit 0x75
        __asm _emit 0x1F
        // 0x58857D50: mov dword ptr [esi + 0x2c4], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58857D5A: mov ecx, dword ptr [esi + 0x2e0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857D60: mov edx, dword ptr [esi + 0x2dc]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xDC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857D66: push ecx
        __asm _emit 0x51
        // 0x58857D67: push edx
        __asm _emit 0x52
        // 0x58857D68: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58857D6A: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0xB5
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58857D6F: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58857D74: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58857D77: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0xE9
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58857D7C: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58857D81: je 0x58857dd0
        __asm _emit 0x74
        __asm _emit 0x4D
        // 0x58857D83: mov dword ptr [esi + 0x2ec], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xEC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857D89: mov byte ptr [esi + 0x2fc], 0
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857D90: mov dword ptr [esi + 0x300], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857D96: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58857D9C: cmp word ptr [ecx + 0x105f0], 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x07
        // 0x58857DA4: je 0x58857dd0
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x58857DA6: mov eax, dword ptr [esi + 0x2f8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857DAC: mov edx, 0xfffd
        __asm _emit 0xBA
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857DB1: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58857DB5: mov eax, dword ptr [esi + 0x2f8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857DBB: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857DC0: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58857DC4: mov eax, dword ptr [esi + 0x2f4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857DCA: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58857DCC: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58857DD0: mov eax, dword ptr [esi + 0x2ec]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xEC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857DD6: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x58857DD8: je 0x58857e1a
        __asm _emit 0x74
        __asm _emit 0x40
        // 0x58857DDA: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58857DE0: cmp dword ptr [ecx + 0x10488], ebx
        __asm _emit 0x39
        __asm _emit 0x99
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58857DE6: jne 0x58857e1a
        __asm _emit 0x75
        __asm _emit 0x32
        // 0x58857DE8: mov ecx, dword ptr [ecx + 0x10490]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58857DEE: and ecx, 0x80000003
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x58857DF4: jns 0x58857dfb
        __asm _emit 0x79
        __asm _emit 0x05
        // 0x58857DF6: dec ecx
        __asm _emit 0x49
        // 0x58857DF7: or ecx, 0xfffffffc
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0xFC
        // 0x58857DFA: inc ecx
        __asm _emit 0x41
        // 0x58857DFB: jne 0x58857e1a
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x58857DFD: dec eax
        __asm _emit 0x48
        // 0x58857DFE: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x58857E00: mov dword ptr [esi + 0x2ec], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xEC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857E06: jg 0x58857e1a
        __asm _emit 0x7F
        __asm _emit 0x12
        // 0x58857E08: mov ecx, dword ptr [esi + 0x2f8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857E0E: push ebx
        __asm _emit 0x53
        // 0x58857E0F: call 0x58731620
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x98
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x58857E14: mov dword ptr [esi + 0x2ec], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xEC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857E1A: pop ebp
        __asm _emit 0x5D
        // 0x58857E1B: pop ebx
        __asm _emit 0x5B
        // 0x58857E1C: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x58857E1F: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58857E21: je 0x58857e38
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x58857E23: mov edi, dword ptr [ecx + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x38
        // 0x58857E26: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58857E28: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x58857E2B: cmp edi, dword ptr [esi + 0x3c]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x3C
        // 0x58857E2E: je 0x58857e3b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58857E30: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58857E32: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58857E34: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58857E36: jne 0x58857e23
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x58857E38: pop edi
        __asm _emit 0x5F
        // 0x58857E39: pop esi
        __asm _emit 0x5E
        // 0x58857E3A: ret
        __asm _emit 0xC3
        // 0x58857E3B: pop edi
        __asm _emit 0x5F
        // 0x58857E3C: pop esi
        __asm _emit 0x5E
        // 0x58857E3D: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
    }
}
