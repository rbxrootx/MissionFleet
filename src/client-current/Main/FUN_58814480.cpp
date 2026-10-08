// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 306 bytes in 1 exact ranges.
// Source symbol alias: FUN_58814480.

// Ghidra body range 0x58814480..0x588145B2; 306 mapped bytes.
extern "C" __declspec(naked) void FUN_58814480_segment_00() {
    __asm {
        // 0x58814480: push esi
        __asm _emit 0x56
        // 0x58814481: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58814483: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58814487: test al, 4
        __asm _emit 0xA8
        __asm _emit 0x04
        // 0x58814489: je 0x588145ac
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x1D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881448F: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58814493: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814498: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5881449B: mov eax, 0x100
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588144A0: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588144A3: je 0x58814518
        __asm _emit 0x74
        __asm _emit 0x73
        // 0x588144A5: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588144A9: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588144AC: mov eax, 0x400
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588144B1: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588144B4: je 0x58814518
        __asm _emit 0x74
        __asm _emit 0x62
        // 0x588144B6: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588144BA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588144BD: mov eax, 0x200
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588144C2: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588144C5: jne 0x5881458e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588144CB: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588144CD: call 0x588106e0
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0xC2
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588144D2: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588144D4: call 0x58810850
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0xC3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588144D9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588144DB: call 0x58810cb0
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0xC7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588144E0: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588144E2: call 0x58810ac0
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0xC5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588144E7: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588144ED: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588144F0: mov eax, dword ptr [edx + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588144F6: mov cl, byte ptr [eax + 4]
        __asm _emit 0x8A
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588144F9: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x588144FC: cmp cl, 9
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x09
        // 0x588144FF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58814501: jne 0x58814511
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x58814503: call 0x58811960
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0xD4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58814508: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5881450A: call 0x58811e30
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0xD9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5881450F: jmp 0x5881458e
        __asm _emit 0xEB
        __asm _emit 0x7D
        // 0x58814511: call 0x58811ad0
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0xD5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58814516: jmp 0x5881458e
        __asm _emit 0xEB
        __asm _emit 0x76
        // 0x58814518: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5881451C: mov eax, 0x1f00
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814521: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x58814524: mov ecx, 0x100
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814529: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x5881452C: jne 0x58814548
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x5881452E: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x58814532: mov eax, 0xe2ff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814537: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x5881453A: mov ecx, 0x200
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881453F: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD1
        // 0x58814542: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x58814546: jmp 0x5881457c
        __asm _emit 0xEB
        __asm _emit 0x34
        // 0x58814548: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5881454C: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5881454E: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58814551: mov eax, 0x400
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814556: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58814559: jne 0x5881458e
        __asm _emit 0x75
        __asm _emit 0x33
        // 0x5881455B: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5881455F: mov edx, 0xe5ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814564: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x58814567: mov eax, 0x500
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881456C: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x5881456F: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58814573: mov ecx, 0xfffb
        __asm _emit 0xB9
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814578: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x5881457C: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58814581: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x58814585: mov eax, 0xfffd
        __asm _emit 0xB8
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881458A: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5881458E: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x58814591: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58814593: je 0x588145ac
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x58814595: push edi
        __asm _emit 0x57
        // 0x58814596: mov edi, dword ptr [ecx + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x38
        // 0x58814599: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5881459B: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x5881459E: cmp edi, dword ptr [esi + 0x3c]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x3C
        // 0x588145A1: je 0x588145ae
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588145A3: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588145A5: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588145A7: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588145A9: jne 0x58814596
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x588145AB: pop edi
        __asm _emit 0x5F
        // 0x588145AC: pop esi
        __asm _emit 0x5E
        // 0x588145AD: ret
        __asm _emit 0xC3
        // 0x588145AE: pop edi
        __asm _emit 0x5F
        // 0x588145AF: pop esi
        __asm _emit 0x5E
        // 0x588145B0: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
    }
}
