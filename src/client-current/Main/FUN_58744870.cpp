// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 761 bytes in 4 exact ranges.
// Source symbol alias: FUN_58744870.

// Ghidra body range 0x58744870..0x58744B33; 707 mapped bytes.
extern "C" __declspec(naked) void FUN_58744870_segment_00() {
    __asm {
        // 0x58744870: push ebp
        __asm _emit 0x55
        // 0x58744871: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58744873: and esp, 0xfffffff8
        __asm _emit 0x83
        __asm _emit 0xE4
        __asm _emit 0xF8
        // 0x58744876: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58744878: push 0x5897e140
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0xE1
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5874487D: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744883: push eax
        __asm _emit 0x50
        // 0x58744884: sub esp, 0x74
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x74
        // 0x58744887: push ebx
        __asm _emit 0x53
        // 0x58744888: push ebp
        __asm _emit 0x55
        // 0x58744889: push esi
        __asm _emit 0x56
        // 0x5874488A: push edi
        __asm _emit 0x57
        // 0x5874488B: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58744890: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58744892: push eax
        __asm _emit 0x50
        // 0x58744893: lea eax, [esp + 0x88]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874489A: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587448A0: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x587448A2: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587448A6: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587448A9: push eax
        __asm _emit 0x50
        // 0x587448AA: lea ecx, [esp + 0x50]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x587448AE: push ecx
        __asm _emit 0x51
        // 0x587448AF: call 0x58747c50
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587448B4: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587448B7: lea edx, [esp + 0x1b]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1B
        // 0x587448BB: push edx
        __asm _emit 0x52
        // 0x587448BC: lea eax, [esp + 0x1f]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1F
        // 0x587448C0: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587448C2: push eax
        __asm _emit 0x50
        // 0x587448C3: lea ecx, [esp + 0x6c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x6C
        // 0x587448C7: mov dword ptr [esp + 0x98], esi
        __asm _emit 0x89
        __asm _emit 0xB4
        __asm _emit 0x24
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587448CE: call 0x58743bf0
        __asm _emit 0xE8
        __asm _emit 0x1D
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587448D3: cmp dword ptr [ebp + 8], esi
        __asm _emit 0x39
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x587448D6: mov byte ptr [esp + 0x90], 1
        __asm _emit 0xC6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x587448DE: mov dword ptr [esp + 0x1c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587448E2: jle 0x58744a18
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587448E8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587448EA: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587448EE: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x587448F1: lea eax, [eax + ecx + 0x138c]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x8C
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587448F8: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587448FB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587448FD: je 0x587449fb
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744903: mov ebx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x0C
        // 0x58744906: mov dword ptr [esp + 0x2c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5874490A: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5874490C: je 0x587449fb
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744912: mov eax, dword ptr [esp + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5C
        // 0x58744916: fld qword ptr [0x5898cf00]
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0xCF
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5874491C: sub eax, dword ptr [esp + 0x58]
        __asm _emit 0x2B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x58744920: fstp qword ptr [esp + 0x34]
        __asm _emit 0xDD
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58744924: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58744926: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58744929: mov dword ptr [esp + 0x24], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5874492D: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5874492F: jbe 0x587449fb
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744935: jmp 0x58744939
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58744937: fstp st(0)
        __asm _emit 0xDD
        __asm _emit 0xD8
        // 0x58744939: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x5874493B: jb 0x58744942
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5874493D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0x83
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58744942: mov edx, dword ptr [esp + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x58744946: mov esi, dword ptr [edx + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x34
        __asm _emit 0xBA
        // 0x58744949: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5874494B: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0x1D
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58744950: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58744955: jne 0x587449a6
        __asm _emit 0x75
        __asm _emit 0x4F
        // 0x58744957: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x5874495A: mov cl, byte ptr [eax + 0x354]
        __asm _emit 0x8A
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744960: cmp cl, byte ptr [esi + 0x354]
        __asm _emit 0x3A
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744966: je 0x587449a6
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x58744968: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5874496B: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5874496E: mov edx, dword ptr [ebx + 8]
        __asm _emit 0x8B
        __asm _emit 0x53
        __asm _emit 0x08
        // 0x58744971: mov ebp, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x6B
        __asm _emit 0x04
        // 0x58744974: push eax
        __asm _emit 0x50
        // 0x58744975: push ecx
        __asm _emit 0x51
        // 0x58744976: push edx
        __asm _emit 0x52
        // 0x58744977: push ebp
        __asm _emit 0x55
        // 0x58744978: call 0x587473e0
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0x2A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874497D: fldz
        __asm _emit 0xD9
        __asm _emit 0xEE
        // 0x5874497F: fld qword ptr [esp + 0x44]
        __asm _emit 0xDD
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x44
        // 0x58744983: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58744986: fcom st(1)
        __asm _emit 0xD8
        __asm _emit 0xD1
        // 0x58744988: fnstsw ax
        __asm _emit 0xDF
        __asm _emit 0xE0
        // 0x5874498A: fstp st(1)
        __asm _emit 0xDD
        __asm _emit 0xD9
        // 0x5874498C: test ah, 5
        __asm _emit 0xF6
        __asm _emit 0xC4
        __asm _emit 0x05
        // 0x5874498F: jnp 0x5874499a
        __asm _emit 0x7B
        __asm _emit 0x09
        // 0x58744991: fcom st(1)
        __asm _emit 0xD8
        __asm _emit 0xD1
        // 0x58744993: fnstsw ax
        __asm _emit 0xDF
        __asm _emit 0xE0
        // 0x58744995: test ah, 0x41
        __asm _emit 0xF6
        __asm _emit 0xC4
        __asm _emit 0x41
        // 0x58744998: jne 0x587449ac
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x5874499A: fstp st(0)
        __asm _emit 0xDD
        __asm _emit 0xD8
        // 0x5874499C: mov dword ptr [esp + 0x24], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587449A0: fst qword ptr [esp + 0x34]
        __asm _emit 0xDD
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587449A4: jmp 0x587449ae
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x587449A6: fld qword ptr [esp + 0x34]
        __asm _emit 0xDD
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587449AA: jmp 0x587449b2
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x587449AC: fstp st(1)
        __asm _emit 0xDD
        __asm _emit 0xD9
        // 0x587449AE: mov ebp, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587449B2: mov eax, dword ptr [esp + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5C
        // 0x587449B6: sub eax, dword ptr [esp + 0x58]
        __asm _emit 0x2B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x587449BA: inc edi
        __asm _emit 0x47
        // 0x587449BB: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587449BE: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x587449C0: jb 0x58744937
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0x71
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587449C6: mov esi, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587449CA: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587449CC: je 0x587449f9
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x587449CE: mov edi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587449D2: fstp qword ptr [esp + 0x3c]
        __asm _emit 0xDD
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587449D6: lea edx, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587449DA: push edx
        __asm _emit 0x52
        // 0x587449DB: lea ecx, [esp + 0x68]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x68
        // 0x587449DF: call 0x587445f0
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587449E4: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587449E8: mov edx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x587449EC: mov dword ptr [eax], ecx
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x587449EE: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587449F1: mov dword ptr [eax + 8], esi
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x08
        // 0x587449F4: mov dword ptr [eax + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x0C
        // 0x587449F7: jmp 0x587449fb
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587449F9: fstp st(0)
        __asm _emit 0xDD
        __asm _emit 0xD8
        // 0x587449FB: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587449FF: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58744A03: inc ecx
        __asm _emit 0x41
        // 0x58744A04: add eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x10
        // 0x58744A07: cmp ecx, dword ptr [ebp + 8]
        __asm _emit 0x3B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x58744A0A: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58744A0E: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58744A12: jl 0x587448ee
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xD6
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58744A18: mov eax, dword ptr [esp + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x7C
        // 0x58744A1C: fld qword ptr [0x5898cf00]
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0xCF
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58744A22: mov edi, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x38
        // 0x58744A24: fstp qword ptr [esp + 0x34]
        __asm _emit 0xDD
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58744A28: mov esi, dword ptr [esp + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x58744A2C: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58744A2E: mov dword ptr [esp + 0x30], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58744A32: mov dword ptr [esp + 0x2c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58744A36: mov ebx, dword ptr [esp + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x7C
        // 0x58744A3A: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58744A3C: je 0x58744a44
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58744A3E: cmp esi, dword ptr [esp + 0x64]
        __asm _emit 0x3B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x58744A42: je 0x58744a49
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58744A44: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x29
        __asm _emit 0x82
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58744A49: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x58744A4B: je 0x58744b0e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xBD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744A51: fldz
        __asm _emit 0xD9
        __asm _emit 0xEE
        // 0x58744A53: fcomp qword ptr [esp + 0x34]
        __asm _emit 0xDC
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58744A57: fnstsw ax
        __asm _emit 0xDF
        __asm _emit 0xE0
        // 0x58744A59: test ah, 0x41
        __asm _emit 0xF6
        __asm _emit 0xC4
        __asm _emit 0x41
        // 0x58744A5C: je 0x58744a85
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x58744A5E: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58744A60: jne 0x58744af7
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744A66: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0x82
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58744A6B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58744A6D: cmp edi, dword ptr [eax + 0x18]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x18
        // 0x58744A70: jne 0x58744a77
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x58744A72: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0x81
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58744A77: fld qword ptr [esp + 0x34]
        __asm _emit 0xDD
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58744A7B: fcomp qword ptr [edi + 0x18]
        __asm _emit 0xDC
        __asm _emit 0x5F
        __asm _emit 0x18
        // 0x58744A7E: fnstsw ax
        __asm _emit 0xDF
        __asm _emit 0xE0
        // 0x58744A80: test ah, 0x41
        __asm _emit 0xF6
        __asm _emit 0xC4
        __asm _emit 0x41
        // 0x58744A83: jne 0x58744ae1
        __asm _emit 0x75
        __asm _emit 0x5C
        // 0x58744A85: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58744A87: jne 0x58744afe
        __asm _emit 0x75
        __asm _emit 0x75
        // 0x58744A89: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0x81
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58744A8E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58744A90: cmp edi, dword ptr [eax + 0x18]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x18
        // 0x58744A93: jne 0x58744a9a
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x58744A95: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0x81
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58744A9A: fld qword ptr [edi + 0x18]
        __asm _emit 0xDD
        __asm _emit 0x47
        __asm _emit 0x18
        // 0x58744A9D: fstp qword ptr [esp + 0x34]
        __asm _emit 0xDD
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58744AA1: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58744AA3: jne 0x58744b02
        __asm _emit 0x75
        __asm _emit 0x5D
        // 0x58744AA5: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0x81
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58744AAA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58744AAC: cmp edi, dword ptr [eax + 0x18]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x18
        // 0x58744AAF: jne 0x58744ab6
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x58744AB1: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xBC
        __asm _emit 0x81
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58744AB6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58744AB8: jne 0x58744b06
        __asm _emit 0x75
        __asm _emit 0x4C
        // 0x58744ABA: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0x81
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58744ABF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58744AC1: cmp edi, dword ptr [eax + 0x18]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x18
        // 0x58744AC4: jne 0x58744acb
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x58744AC6: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0x81
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58744ACB: mov ebp, dword ptr [edi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x6F
        __asm _emit 0x20
        // 0x58744ACE: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58744AD0: jne 0x58744b0a
        __asm _emit 0x75
        __asm _emit 0x38
        // 0x58744AD2: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0x81
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58744AD7: cmp edi, dword ptr [esi + 0x18]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x58744ADA: jne 0x58744ae1
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x58744ADC: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0x81
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58744AE1: lea ecx, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58744AE5: call 0x587436b0
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0xEB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58744AEA: mov edi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58744AEE: mov esi, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58744AF2: jmp 0x58744a36
        __asm _emit 0xE9
        __asm _emit 0x3F
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58744AF7: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58744AF9: jmp 0x58744a6d
        __asm _emit 0xE9
        __asm _emit 0x6F
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58744AFE: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58744B00: jmp 0x58744a90
        __asm _emit 0xEB
        __asm _emit 0x8E
        // 0x58744B02: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58744B04: jmp 0x58744aac
        __asm _emit 0xEB
        __asm _emit 0xA6
        // 0x58744B06: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58744B08: jmp 0x58744ac1
        __asm _emit 0xEB
        __asm _emit 0xB7
        // 0x58744B0A: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x58744B0C: jmp 0x58744ad7
        __asm _emit 0xEB
        __asm _emit 0xC9
        // 0x58744B0E: lea ecx, [esp + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x58744B12: mov byte ptr [esp + 0x90], 0
        __asm _emit 0xC6
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744B1A: call 0x587446b0
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58744B1F: mov eax, dword ptr [esp + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x58744B23: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58744B25: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58744B27: je 0x58744b68
        __asm _emit 0x74
        __asm _emit 0x3F
        // 0x58744B29: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x58744B2B: je 0x58744b36
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58744B2D: push eax
        __asm _emit 0x50
        // 0x58744B2E: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0x81
        __asm _emit 0x23
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58744B36..0x58744B4C; 22 mapped bytes.
extern "C" __declspec(naked) void FUN_58744870_segment_01() {
    __asm {
        // 0x58744B36: mov ecx, dword ptr [esp + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x58744B3A: push ecx
        __asm _emit 0x51
        // 0x58744B3B: mov dword ptr [esp + 0x5c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x5C
        // 0x58744B3F: mov dword ptr [esp + 0x60], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x60
        // 0x58744B43: mov dword ptr [esp + 0x64], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x58744B47: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0x80
        __asm _emit 0x23
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58744B68..0x58744B72; 10 mapped bytes.
extern "C" __declspec(naked) void FUN_58744870_segment_02() {
    __asm {
        // 0x58744B68: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x58744B6A: je 0x58744b75
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58744B6C: push eax
        __asm _emit 0x50
        // 0x58744B6D: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0x80
        __asm _emit 0x23
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58744B75..0x58744B8B; 22 mapped bytes.
extern "C" __declspec(naked) void FUN_58744870_segment_03() {
    __asm {
        // 0x58744B75: mov edx, dword ptr [esp + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x58744B79: push edx
        __asm _emit 0x52
        // 0x58744B7A: mov dword ptr [esp + 0x5c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x5C
        // 0x58744B7E: mov dword ptr [esp + 0x60], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x60
        // 0x58744B82: mov dword ptr [esp + 0x64], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x58744B86: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0x80
        __asm _emit 0x23
        __asm _emit 0x00
    }
}
