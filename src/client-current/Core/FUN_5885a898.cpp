// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885A898 .. +0x194 bytes.
extern "C" __declspec(naked) void FUN_5885a898() {
    __asm {
        // 0x5885A898: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885A89A: push ebp
        __asm _emit 0x55
        // 0x5885A89B: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885A89D: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x5885A8A0: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x5885A8A3: push ebx
        __asm _emit 0x53
        // 0x5885A8A4: push esi
        __asm _emit 0x56
        // 0x5885A8A5: push edi
        __asm _emit 0x57
        // 0x5885A8A6: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5885A8A8: je 0x5885a8d6
        __asm _emit 0x74
        __asm _emit 0x2C
        // 0x5885A8AA: mov edi, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x10
        // 0x5885A8AD: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5885A8AF: je 0x5885a8d6
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x5885A8B1: mov ebx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0x14
        // 0x5885A8B4: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5885A8B6: jne 0x5885a8dd
        __asm _emit 0x75
        __asm _emit 0x25
        // 0x5885A8B8: mov eax, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x18
        // 0x5885A8BB: push eax
        __asm _emit 0x50
        // 0x5885A8BC: mov byte ptr [eax + 0x1c], 1
        __asm _emit 0xC6
        __asm _emit 0x40
        __asm _emit 0x1C
        __asm _emit 0x01
        // 0x5885A8C0: mov dword ptr [eax + 0x18], 0x16
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x18
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A8C7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885A8C9: push eax
        __asm _emit 0x50
        // 0x5885A8CA: push eax
        __asm _emit 0x50
        // 0x5885A8CB: push eax
        __asm _emit 0x50
        // 0x5885A8CC: push eax
        __asm _emit 0x50
        // 0x5885A8CD: push eax
        __asm _emit 0x50
        // 0x5885A8CE: call 0x58850f2e
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0x66
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A8D3: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x5885A8D6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885A8D8: pop edi
        __asm _emit 0x5F
        // 0x5885A8D9: pop esi
        __asm _emit 0x5E
        // 0x5885A8DA: pop ebx
        __asm _emit 0x5B
        // 0x5885A8DB: leave
        __asm _emit 0xC9
        // 0x5885A8DC: ret
        __asm _emit 0xC3
        // 0x5885A8DD: cmp dword ptr [ebp + 8], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5885A8E1: je 0x5885a8b8
        __asm _emit 0x74
        __asm _emit 0xD5
        // 0x5885A8E3: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x5885A8E6: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5885A8E8: div ecx
        __asm _emit 0xF7
        __asm _emit 0xF1
        // 0x5885A8EA: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x5885A8EC: ja 0x5885a8b8
        __asm _emit 0x77
        __asm _emit 0xCA
        // 0x5885A8EE: lea eax, [ebx + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x43
        __asm _emit 0x0C
        // 0x5885A8F1: mov dword ptr [ebp - 8], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xF8
        // 0x5885A8F4: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x5885A8F6: nop
        __asm _emit 0x90
        // 0x5885A8F7: test eax, 0x4c0
        __asm _emit 0xA9
        __asm _emit 0xC0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A8FC: je 0x5885a903
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5885A8FE: mov edx, dword ptr [ebx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x53
        __asm _emit 0x18
        // 0x5885A901: jmp 0x5885a908
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x5885A903: mov edx, 0x1000
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A908: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5885A90A: mov dword ptr [ebp - 4], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xFC
        // 0x5885A90D: imul esi, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xF7
        // 0x5885A910: mov edi, esi
        __asm _emit 0x8B
        __asm _emit 0xFE
        // 0x5885A912: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5885A914: je 0x5885aa05
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xEB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A91A: lea ecx, [ebx + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x0C
        // 0x5885A91D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5885A91F: nop
        __asm _emit 0x90
        // 0x5885A920: test al, 0xc0
        __asm _emit 0xA8
        __asm _emit 0xC0
        // 0x5885A922: je 0x5885a962
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x5885A924: mov eax, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x08
        // 0x5885A927: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885A929: je 0x5885a962
        __asm _emit 0x74
        __asm _emit 0x37
        // 0x5885A92B: js 0x5885aa0d
        __asm _emit 0x0F
        __asm _emit 0x88
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A931: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5885A933: nop
        __asm _emit 0x90
        // 0x5885A934: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x5885A936: jne 0x5885aa13
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A93C: cmp edi, dword ptr [ebx + 8]
        __asm _emit 0x3B
        __asm _emit 0x7B
        __asm _emit 0x08
        // 0x5885A93F: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x5885A941: cmovae eax, dword ptr [ebx + 8]
        __asm _emit 0x0F
        __asm _emit 0x43
        __asm _emit 0x43
        __asm _emit 0x08
        // 0x5885A945: push eax
        __asm _emit 0x50
        // 0x5885A946: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5885A949: mov dword ptr [ebp - 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xF4
        // 0x5885A94C: push dword ptr [ebx]
        __asm _emit 0xFF
        __asm _emit 0x33
        // 0x5885A94E: call 0x5884c890
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0x1F
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A953: mov eax, dword ptr [ebp - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xF4
        // 0x5885A956: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5885A959: sub dword ptr [ebx + 8], eax
        __asm _emit 0x29
        __asm _emit 0x43
        __asm _emit 0x08
        // 0x5885A95C: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x5885A95E: add dword ptr [ebx], eax
        __asm _emit 0x01
        __asm _emit 0x03
        // 0x5885A960: jmp 0x5885a9c9
        __asm _emit 0xEB
        __asm _emit 0x67
        // 0x5885A962: cmp edi, edx
        __asm _emit 0x3B
        __asm _emit 0xFA
        // 0x5885A964: jb 0x5885a9ce
        __asm _emit 0x72
        __asm _emit 0x68
        // 0x5885A966: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5885A968: nop
        __asm _emit 0x90
        // 0x5885A969: test al, 0xc0
        __asm _emit 0xA8
        __asm _emit 0xC0
        // 0x5885A96B: je 0x5885a983
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x5885A96D: push dword ptr [ebp + 0x18]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x5885A970: push ebx
        __asm _emit 0x53
        // 0x5885A971: call 0x58859f62
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A976: pop ecx
        __asm _emit 0x59
        // 0x5885A977: pop ecx
        __asm _emit 0x59
        // 0x5885A978: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885A97A: jne 0x5885aa13
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A980: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xFC
        // 0x5885A983: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5885A985: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5885A987: je 0x5885a992
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5885A989: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5885A98B: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x5885A98D: div dword ptr [ebp - 4]
        __asm _emit 0xF7
        __asm _emit 0x75
        __asm _emit 0xFC
        // 0x5885A990: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x5885A992: push -2
        __asm _emit 0x6A
        __asm _emit 0xFE
        // 0x5885A994: pop eax
        __asm _emit 0x58
        // 0x5885A995: push dword ptr [ebp + 0x18]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x5885A998: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5885A99A: cmovb eax, ecx
        __asm _emit 0x0F
        __asm _emit 0x42
        __asm _emit 0xC1
        // 0x5885A99D: push eax
        __asm _emit 0x50
        // 0x5885A99E: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5885A9A1: mov dword ptr [ebp - 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xF4
        // 0x5885A9A4: push ebx
        __asm _emit 0x53
        // 0x5885A9A5: call 0x5886cc56
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5885A9AA: pop ecx
        __asm _emit 0x59
        // 0x5885A9AB: push eax
        __asm _emit 0x50
        // 0x5885A9AC: call 0x58870b79
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5885A9B1: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5885A9B3: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5885A9B6: cmp edx, -1
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x5885A9B9: je 0x5885aa21
        __asm _emit 0x74
        __asm _emit 0x66
        // 0x5885A9BB: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF4
        // 0x5885A9BE: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x5885A9C0: cmova eax, ecx
        __asm _emit 0x0F
        __asm _emit 0x47
        __asm _emit 0xC1
        // 0x5885A9C3: sub edi, eax
        __asm _emit 0x2B
        __asm _emit 0xF8
        // 0x5885A9C5: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x5885A9C7: jb 0x5885aa21
        __asm _emit 0x72
        __asm _emit 0x58
        // 0x5885A9C9: mov edx, dword ptr [ebp - 4]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0xFC
        // 0x5885A9CC: jmp 0x5885a9fa
        __asm _emit 0xEB
        __asm _emit 0x2C
        // 0x5885A9CE: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5885A9D1: push dword ptr [ebp + 0x18]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x5885A9D4: push ebx
        __asm _emit 0x53
        // 0x5885A9D5: movsx eax, byte ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x00
        // 0x5885A9D8: push eax
        __asm _emit 0x50
        // 0x5885A9D9: call 0x588710fd
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5885A9DE: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5885A9E1: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5885A9E4: je 0x5885aa13
        __asm _emit 0x74
        __asm _emit 0x2D
        // 0x5885A9E6: mov edx, dword ptr [ebx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x53
        __asm _emit 0x18
        // 0x5885A9E9: dec edi
        __asm _emit 0x4F
        // 0x5885A9EA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885A9EC: mov dword ptr [ebp - 4], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xFC
        // 0x5885A9EF: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5885A9F1: jg 0x5885a9f9
        __asm _emit 0x7F
        __asm _emit 0x06
        // 0x5885A9F3: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5885A9F5: inc edx
        __asm _emit 0x42
        // 0x5885A9F6: mov dword ptr [ebp - 4], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xFC
        // 0x5885A9F9: inc eax
        __asm _emit 0x40
        // 0x5885A9FA: add dword ptr [ebp + 8], eax
        __asm _emit 0x01
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5885A9FD: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5885A9FF: jne 0x5885a91a
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x15
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885AA05: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x5885AA08: jmp 0x5885a8d8
        __asm _emit 0xE9
        __asm _emit 0xCB
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885AA0D: push 0x10
        __asm _emit 0x6A
        __asm _emit 0x10
        // 0x5885AA0F: pop eax
        __asm _emit 0x58
        // 0x5885AA10: lock or dword ptr [ecx], eax
        __asm _emit 0xF0
        __asm _emit 0x09
        __asm _emit 0x01
        // 0x5885AA13: sub esi, edi
        __asm _emit 0x2B
        __asm _emit 0xF7
        // 0x5885AA15: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5885AA17: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5885AA19: div dword ptr [ebp + 0xc]
        __asm _emit 0xF7
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x5885AA1C: jmp 0x5885a8d8
        __asm _emit 0xE9
        __asm _emit 0xB7
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885AA21: mov eax, dword ptr [ebp - 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xF8
        // 0x5885AA24: push 0x10
        __asm _emit 0x6A
        __asm _emit 0x10
        // 0x5885AA26: pop ecx
        __asm _emit 0x59
        // 0x5885AA27: lock or dword ptr [eax], ecx
        __asm _emit 0xF0
        __asm _emit 0x09
        __asm _emit 0x08
        // 0x5885AA2A: jmp 0x5885aa13
        __asm _emit 0xEB
        __asm _emit 0xE7
    }
}
