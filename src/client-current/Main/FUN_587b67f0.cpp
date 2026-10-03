// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B67F0 .. +0x1E4 bytes.
extern "C" __declspec(naked) void FUN_587b67f0() {
    __asm {
        // 0x587B67F0: push esi
        __asm _emit 0x56
        // 0x587B67F1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587B67F3: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x587B67F7: test al, 4
        __asm _emit 0xA8
        __asm _emit 0x04
        // 0x587B67F9: je 0x587b69ce
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xCF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B67FF: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x587B6803: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B6808: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x587B680B: mov eax, 0x100
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B6810: push edi
        __asm _emit 0x57
        // 0x587B6811: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x587B6814: je 0x587b6834
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x587B6816: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x587B681A: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x587B681D: mov eax, 0x400
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B6822: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x587B6825: je 0x587b6834
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x587B6827: cmp dword ptr [esi + 0x70], 0x40000000
        __asm _emit 0x81
        __asm _emit 0x7E
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587B682E: jne 0x587b69b1
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x7D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B6834: cmp dword ptr [esi + 0x54], 0x40000000
        __asm _emit 0x81
        __asm _emit 0x7E
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587B683B: jne 0x587b6912
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B6841: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587B6844: mov edi, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x68
        // 0x587B6847: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587B6849: jne 0x587b6857
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x587B684B: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x587B684E: cmp ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x3B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x587B6851: je 0x587b6912
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xBB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B6857: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x587B685A: sub ecx, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x587B685D: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x587B685F: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x587B6862: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587B6865: jne 0x587b68d9
        __asm _emit 0x75
        __asm _emit 0x72
        // 0x587B6867: lea edx, [edi + 7]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x07
        // 0x587B686A: cmp edx, 0xe
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0E
        // 0x587B686D: ja 0x587b6894
        __asm _emit 0x77
        __asm _emit 0x25
        // 0x587B686F: lea eax, [edi + 3]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x03
        // 0x587B6872: cmp eax, 6
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x587B6875: ja 0x587b688b
        __asm _emit 0x77
        __asm _emit 0x14
        // 0x587B6877: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587B6879: jge 0x587b6880
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x587B687B: or edi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCF
        __asm _emit 0xFF
        // 0x587B687E: jmp 0x587b68a1
        __asm _emit 0xEB
        __asm _emit 0x21
        // 0x587B6880: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587B6882: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587B6884: setg dl
        __asm _emit 0x0F
        __asm _emit 0x9F
        __asm _emit 0xC2
        // 0x587B6887: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x587B6889: jmp 0x587b68a1
        __asm _emit 0xEB
        __asm _emit 0x16
        // 0x587B688B: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587B688D: cdq
        __asm _emit 0x99
        // 0x587B688E: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587B6890: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x587B6892: jmp 0x587b689f
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x587B6894: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587B6896: cdq
        __asm _emit 0x99
        // 0x587B6897: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x587B689A: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587B689C: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587B689F: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587B68A1: lea eax, [ecx + 7]
        __asm _emit 0x8D
        __asm _emit 0x41
        __asm _emit 0x07
        // 0x587B68A4: cmp eax, 0xe
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0E
        // 0x587B68A7: ja 0x587b68cc
        __asm _emit 0x77
        __asm _emit 0x23
        // 0x587B68A9: lea edx, [ecx + 3]
        __asm _emit 0x8D
        __asm _emit 0x51
        __asm _emit 0x03
        // 0x587B68AC: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587B68AF: ja 0x587b68c3
        __asm _emit 0x77
        __asm _emit 0x12
        // 0x587B68B1: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587B68B3: jge 0x587b68ba
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x587B68B5: or ecx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0xFF
        // 0x587B68B8: jmp 0x587b6909
        __asm _emit 0xEB
        __asm _emit 0x4F
        // 0x587B68BA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587B68BC: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587B68BE: setg al
        __asm _emit 0x0F
        __asm _emit 0x9F
        __asm _emit 0xC0
        // 0x587B68C1: jmp 0x587b6907
        __asm _emit 0xEB
        __asm _emit 0x44
        // 0x587B68C3: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587B68C5: cdq
        __asm _emit 0x99
        // 0x587B68C6: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587B68C8: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x587B68CA: jmp 0x587b6907
        __asm _emit 0xEB
        __asm _emit 0x3B
        // 0x587B68CC: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587B68CE: cdq
        __asm _emit 0x99
        // 0x587B68CF: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x587B68D2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587B68D4: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587B68D7: jmp 0x587b6907
        __asm _emit 0xEB
        __asm _emit 0x2E
        // 0x587B68D9: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x587B68DC: jne 0x587b6909
        __asm _emit 0x75
        __asm _emit 0x2B
        // 0x587B68DE: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x587B68E1: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587B68E3: jle 0x587b68ed
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x587B68E5: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x587B68E7: jl 0x587b68f7
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x587B68E9: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587B68EB: jmp 0x587b68f7
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x587B68ED: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x587B68EF: neg edx
        __asm _emit 0xF7
        __asm _emit 0xDA
        // 0x587B68F1: cmp edi, edx
        __asm _emit 0x3B
        __asm _emit 0xFA
        // 0x587B68F3: jg 0x587b68f7
        __asm _emit 0x7F
        __asm _emit 0x02
        // 0x587B68F5: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x587B68F7: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587B68F9: jle 0x587b6901
        __asm _emit 0x7E
        __asm _emit 0x06
        // 0x587B68FB: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x587B68FD: jl 0x587b6909
        __asm _emit 0x7C
        __asm _emit 0x0A
        // 0x587B68FF: jmp 0x587b6907
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x587B6901: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x587B6903: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x587B6905: jg 0x587b6909
        __asm _emit 0x7F
        __asm _emit 0x02
        // 0x587B6907: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587B6909: push ecx
        __asm _emit 0x51
        // 0x587B690A: push edi
        __asm _emit 0x57
        // 0x587B690B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B690D: call 0x58902e10
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0xC4
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587B6912: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587B6915: cmp ecx, dword ptr [esi + 0x68]
        __asm _emit 0x3B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x587B6918: jne 0x587b69b1
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B691E: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x587B6921: cmp edx, dword ptr [esi + 0x6c]
        __asm _emit 0x3B
        __asm _emit 0x56
        __asm _emit 0x6C
        // 0x587B6924: jne 0x587b69b1
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B692A: cmp dword ptr [esi + 0x70], 0x40000000
        __asm _emit 0x81
        __asm _emit 0x7E
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587B6931: jne 0x587b693c
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x587B6933: mov dword ptr [esi + 0x70], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B693A: jmp 0x587b69b1
        __asm _emit 0xEB
        __asm _emit 0x75
        // 0x587B693C: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x587B6940: mov ecx, 0x1f00
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B6945: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x587B6948: mov edx, 0x100
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B694D: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587B6950: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x587B6954: jne 0x587b6971
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x587B6956: mov ecx, 0xe2ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B695B: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x587B695E: mov edx, 0x200
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B6963: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x587B6966: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x587B696A: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x587B696F: jmp 0x587b69b1
        __asm _emit 0xEB
        __asm _emit 0x40
        // 0x587B6971: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x587B6974: mov edx, 0x400
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B6979: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587B697C: jne 0x587b69b1
        __asm _emit 0x75
        __asm _emit 0x33
        // 0x587B697E: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x587B6982: mov ecx, 0xe5ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B6987: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x587B698A: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B698F: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x587B6992: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x587B6996: mov eax, 0xfffd
        __asm _emit 0xB8
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B699B: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x587B699F: mov ecx, 0xfffb
        __asm _emit 0xB9
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B69A4: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x587B69A8: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B69AD: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x587B69B1: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x587B69B4: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587B69B6: je 0x587b69cd
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x587B69B8: mov edi, dword ptr [ecx + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x38
        // 0x587B69BB: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587B69BD: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x587B69C0: cmp edi, dword ptr [esi + 0x3c]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x3C
        // 0x587B69C3: je 0x587b69d0
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587B69C5: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587B69C7: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587B69C9: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587B69CB: jne 0x587b69b8
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x587B69CD: pop edi
        __asm _emit 0x5F
        // 0x587B69CE: pop esi
        __asm _emit 0x5E
        // 0x587B69CF: ret
        __asm _emit 0xC3
        // 0x587B69D0: pop edi
        __asm _emit 0x5F
        // 0x587B69D1: pop esi
        __asm _emit 0x5E
        // 0x587B69D2: jmp edx
        __asm _emit 0xFF
        __asm _emit 0xE2
    }
}
