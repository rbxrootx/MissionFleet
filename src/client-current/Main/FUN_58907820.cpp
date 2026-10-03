// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58907820 .. +0x12E bytes.
extern "C" __declspec(naked) void FUN_58907820() {
    __asm {
        // 0x58907820: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x58907823: push esi
        __asm _emit 0x56
        // 0x58907824: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58907826: mov eax, dword ptr [esi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x1C
        // 0x58907829: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5890782B: je 0x58907858
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x5890782D: fld dword ptr [esp + 0x20]
        __asm _emit 0xD9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58907831: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x58907833: mov edx, dword ptr [ecx + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x4C
        // 0x58907836: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58907838: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x5890783B: fstp dword ptr [esp + 8]
        __asm _emit 0xD9
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5890783F: fld dword ptr [esp + 0x2c]
        __asm _emit 0xD9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58907843: fstp dword ptr [esp + 4]
        __asm _emit 0xD9
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58907847: fld dword ptr [esp + 0x28]
        __asm _emit 0xD9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5890784B: fstp dword ptr [esp]
        __asm _emit 0xD9
        __asm _emit 0x1C
        __asm _emit 0x24
        // 0x5890784E: push eax
        __asm _emit 0x50
        // 0x5890784F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58907851: pop esi
        __asm _emit 0x5E
        // 0x58907852: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58907855: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58907858: mov eax, dword ptr [0x58a2853c]
        __asm _emit 0xA1
        __asm _emit 0x3C
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5890785D: fld dword ptr [esp + 0x18]
        __asm _emit 0xD9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58907861: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58907864: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58907867: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5890786A: mov dword ptr [esp + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5890786E: fsub dword ptr [esp + 8]
        __asm _emit 0xD8
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58907872: mov dword ptr [esp + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58907876: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5890787A: fstp dword ptr [esp + 0x18]
        __asm _emit 0xD9
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5890787E: fld dword ptr [esp + 0x1c]
        __asm _emit 0xD9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58907882: fsub dword ptr [esp + 0xc]
        __asm _emit 0xD8
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58907886: fstp dword ptr [esp + 0x1c]
        __asm _emit 0xD9
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5890788A: fld dword ptr [esp + 0x20]
        __asm _emit 0xD9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5890788E: fsub dword ptr [esp + 0x10]
        __asm _emit 0xD8
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58907892: fstp dword ptr [esp + 0x20]
        __asm _emit 0xD9
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58907896: fld dword ptr [esp + 0x18]
        __asm _emit 0xD9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5890789A: fld dword ptr [esp + 0x20]
        __asm _emit 0xD9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5890789E: fld dword ptr [esp + 0x1c]
        __asm _emit 0xD9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x589078A2: fld st(1)
        __asm _emit 0xD9
        __asm _emit 0xC1
        // 0x589078A4: fmulp st(2)
        __asm _emit 0xDE
        __asm _emit 0xCA
        // 0x589078A6: fld st(2)
        __asm _emit 0xD9
        __asm _emit 0xC2
        // 0x589078A8: fmulp st(3)
        __asm _emit 0xDE
        __asm _emit 0xCB
        // 0x589078AA: fxch st(1)
        __asm _emit 0xD9
        __asm _emit 0xC9
        // 0x589078AC: faddp st(2)
        __asm _emit 0xDE
        __asm _emit 0xC2
        // 0x589078AE: fmul st(0), st(0)
        __asm _emit 0xDC
        __asm _emit 0xC8
        // 0x589078B0: faddp st(1)
        __asm _emit 0xDE
        __asm _emit 0xC1
        // 0x589078B2: fstp dword ptr [esp + 4]
        __asm _emit 0xD9
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x589078B6: fld dword ptr [esp + 4]
        __asm _emit 0xD9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x589078BA: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0x53
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x589078BF: fstp dword ptr [esp + 4]
        __asm _emit 0xD9
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x589078C3: fld dword ptr [esp + 4]
        __asm _emit 0xD9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x589078C7: fstp dword ptr [esp + 4]
        __asm _emit 0xD9
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x589078CB: fld dword ptr [0x589a2958]
        __asm _emit 0xD9
        __asm _emit 0x05
        __asm _emit 0x58
        __asm _emit 0x29
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x589078D1: fld dword ptr [esp + 4]
        __asm _emit 0xD9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x589078D5: fcom st(1)
        __asm _emit 0xD8
        __asm _emit 0xD1
        // 0x589078D7: fnstsw ax
        __asm _emit 0xDF
        __asm _emit 0xE0
        // 0x589078D9: fstp st(1)
        __asm _emit 0xDD
        __asm _emit 0xD9
        // 0x589078DB: test ah, 5
        __asm _emit 0xF6
        __asm _emit 0xC4
        __asm _emit 0x05
        // 0x589078DE: jp 0x58907937
        __asm _emit 0x7A
        __asm _emit 0x57
        // 0x589078E0: fld dword ptr [0x589a3050]
        __asm _emit 0xD9
        __asm _emit 0x05
        __asm _emit 0x50
        __asm _emit 0x30
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x589078E6: push edi
        __asm _emit 0x57
        // 0x589078E7: fcomp st(1)
        __asm _emit 0xD8
        __asm _emit 0xD9
        // 0x589078E9: fnstsw ax
        __asm _emit 0xDF
        __asm _emit 0xE0
        // 0x589078EB: test ah, 5
        __asm _emit 0xF6
        __asm _emit 0xC4
        __asm _emit 0x05
        // 0x589078EE: jp 0x58907909
        __asm _emit 0x7A
        __asm _emit 0x19
        // 0x589078F0: fsubr qword ptr [0x5898cf60]
        __asm _emit 0xDC
        __asm _emit 0x2D
        __asm _emit 0x60
        __asm _emit 0xCF
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x589078F6: mov edi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x3E
        // 0x589078F8: fmul qword ptr [0x5898cf10]
        __asm _emit 0xDC
        __asm _emit 0x0D
        __asm _emit 0x10
        __asm _emit 0xCF
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x589078FE: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0x53
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58907903: mov edx, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x0C
        // 0x58907906: push eax
        __asm _emit 0x50
        // 0x58907907: jmp 0x58907912
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x58907909: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5890790B: fstp st(0)
        __asm _emit 0xDD
        __asm _emit 0xD8
        // 0x5890790D: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58907910: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58907912: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58907914: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58907916: fld dword ptr [esp + 0x1c]
        __asm _emit 0xD9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5890791A: fmul qword ptr [0x5898ceb8]
        __asm _emit 0xDC
        __asm _emit 0x0D
        __asm _emit 0xB8
        __asm _emit 0xCE
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58907920: mov edi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x3E
        // 0x58907922: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x53
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58907927: push eax
        __asm _emit 0x50
        // 0x58907928: mov eax, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x10
        // 0x5890792B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5890792D: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5890792F: pop edi
        __asm _emit 0x5F
        // 0x58907930: pop esi
        __asm _emit 0x5E
        // 0x58907931: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58907934: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58907937: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58907939: fstp st(0)
        __asm _emit 0xDD
        __asm _emit 0xD8
        // 0x5890793B: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x5890793E: push 0xffffd8f0
        __asm _emit 0x68
        __asm _emit 0xF0
        __asm _emit 0xD8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58907943: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58907945: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58907947: pop esi
        __asm _emit 0x5E
        // 0x58907948: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5890794B: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
