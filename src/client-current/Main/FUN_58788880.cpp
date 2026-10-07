// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1721 bytes in 2 exact ranges.
// Source symbol alias: FUN_58788880.

// Ghidra body range 0x58788880..0x58788D79; 1273 mapped bytes.
extern "C" __declspec(naked) void FUN_58788880_segment_00() {
    __asm {
        // 0x58788880: push ebp
        __asm _emit 0x55
        // 0x58788881: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58788883: and esp, 0xfffffff8
        __asm _emit 0x83
        __asm _emit 0xE4
        __asm _emit 0xF8
        // 0x58788886: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58788888: push 0x5897faea
        __asm _emit 0x68
        __asm _emit 0xEA
        __asm _emit 0xFA
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x5878888D: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788893: push eax
        __asm _emit 0x50
        // 0x58788894: sub esp, 0xb0
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878889A: push ebx
        __asm _emit 0x53
        // 0x5878889B: push esi
        __asm _emit 0x56
        // 0x5878889C: push edi
        __asm _emit 0x57
        // 0x5878889D: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587888A2: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587888A4: push eax
        __asm _emit 0x50
        // 0x587888A5: lea eax, [esp + 0xc0]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587888AC: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587888B2: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587888B4: mov dword ptr [esp + 0x30], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587888B8: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587888BD: mov eax, dword ptr [eax + 0x10910]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x10
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587888C3: mov ecx, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x587888C6: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587888C8: mov edx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x04
        // 0x587888CB: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587888CD: shl edi, 4
        __asm _emit 0xC1
        __asm _emit 0xE7
        __asm _emit 0x04
        // 0x587888D0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587888D2: lea eax, [edi + eax + 0x1f]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x07
        __asm _emit 0x1F
        // 0x587888D6: push eax
        __asm _emit 0x50
        // 0x587888D7: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587888D9: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x587888DC: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587888E1: lea ecx, [esp + 0x40]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x587888E5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587888E7: push ecx
        __asm _emit 0x51
        // 0x587888E8: mov dword ptr [esi + 0x914], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587888EE: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0x43
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x587888F3: mov ebx, dword ptr [esi + 0x820]
        __asm _emit 0x8B
        __asm _emit 0x9E
        __asm _emit 0x20
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587888F9: add ebx, dword ptr [esi + 0x81c]
        __asm _emit 0x03
        __asm _emit 0x9E
        __asm _emit 0x1C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587888FF: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58788902: add ebx, dword ptr [esi + 0x824]
        __asm _emit 0x03
        __asm _emit 0x9E
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788908: mov dword ptr [esp + 0x10], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788910: add ebx, dword ptr [esi + 0x818]
        __asm _emit 0x03
        __asm _emit 0x9E
        __asm _emit 0x18
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788916: mov dword ptr [esp + 0x2c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5878891A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788920: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58788924: cmp byte ptr [edx + 0x58a0ae30], 5
        __asm _emit 0x80
        __asm _emit 0xBA
        __asm _emit 0x30
        __asm _emit 0xAE
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x05
        // 0x5878892B: jne 0x58788af7
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788931: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58788933: movzx edi, word ptr [eax + 0x58a0ae32]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xB8
        __asm _emit 0x32
        __asm _emit 0xAE
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5878893A: test di, di
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5878893D: je 0x58788af7
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788943: mov edx, dword ptr [0x58a0add8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xD8
        __asm _emit 0xAD
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58788949: mov ecx, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x5878894C: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5878894E: shl eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x04
        // 0x58788951: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58788953: movzx edx, di
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD7
        // 0x58788956: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58788958: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5878895A: div dword ptr [ecx + 4]
        __asm _emit 0xF7
        __asm _emit 0x71
        __asm _emit 0x04
        // 0x5878895D: mov eax, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58788960: mov dword ptr [esp + 0x24], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788968: mov ecx, dword ptr [eax + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x90
        // 0x5878896B: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5878896D: cdq
        __asm _emit 0x99
        // 0x5878896E: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58788970: idiv ebx
        __asm _emit 0xF7
        __asm _emit 0xFB
        // 0x58788972: mov ebx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58788976: mov dword ptr [esp + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5878897A: lea eax, [esi + 0x818]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788980: add ebx, dword ptr [eax]
        __asm _emit 0x03
        __asm _emit 0x18
        // 0x58788982: cmp edx, ebx
        __asm _emit 0x3B
        __asm _emit 0xD3
        // 0x58788984: jl 0x58788998
        __asm _emit 0x7C
        __asm _emit 0x12
        // 0x58788986: inc edi
        __asm _emit 0x47
        // 0x58788987: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x5878898A: cmp edi, 3
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x03
        // 0x5878898D: jl 0x58788980
        __asm _emit 0x7C
        __asm _emit 0xF1
        // 0x5878898F: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58788993: jmp 0x58788ae8
        __asm _emit 0xE9
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788998: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5878899A: cdq
        __asm _emit 0x99
        // 0x5878899B: idiv dword ptr [esi + edi*4 + 0x818]
        __asm _emit 0xF7
        __asm _emit 0xBC
        __asm _emit 0xBE
        __asm _emit 0x18
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587889A2: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587889A6: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587889AA: mov ebx, edx
        __asm _emit 0x8B
        __asm _emit 0xDA
        // 0x587889AC: cmp dword ptr [esp + ebx*4 + 0x3c], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x9C
        __asm _emit 0x3C
        __asm _emit 0x00
        // 0x587889B1: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587889B5: je 0x587889e4
        __asm _emit 0x74
        __asm _emit 0x2D
        // 0x587889B7: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587889B9: mov ecx, dword ptr [esi + edi*4 + 0x818]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xBE
        __asm _emit 0x18
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587889C0: cdq
        __asm _emit 0x99
        // 0x587889C1: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x587889C3: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587889C7: lea eax, [ebx + 1]
        __asm _emit 0x8D
        __asm _emit 0x43
        __asm _emit 0x01
        // 0x587889CA: cdq
        __asm _emit 0x99
        // 0x587889CB: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x587889CD: mov ebx, edx
        __asm _emit 0x8B
        __asm _emit 0xDA
        // 0x587889CF: cmp ebx, dword ptr [esp + 0x14]
        __asm _emit 0x3B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587889D3: je 0x58788ae4
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x0B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587889D9: cmp dword ptr [esp + ebx*4 + 0x3c], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x9C
        __asm _emit 0x3C
        __asm _emit 0x00
        // 0x587889DE: jne 0x587889c7
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x587889E0: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587889E4: push 0xbc
        __asm _emit 0x68
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587889E9: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0x42
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x587889EE: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587889F1: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587889F5: mov dword ptr [esp + 0xc8], 0
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788A00: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58788A02: je 0x58788a42
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x58788A04: shl edi, 6
        __asm _emit 0xC1
        __asm _emit 0xE7
        __asm _emit 0x06
        // 0x58788A07: lea edx, [edi + ebx]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x1F
        // 0x58788A0A: mov ecx, dword ptr [esi + edx*8 + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0xD6
        __asm _emit 0x1C
        // 0x58788A0E: mov edx, dword ptr [esi + edx*8 + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0xD6
        __asm _emit 0x18
        // 0x58788A12: push ecx
        __asm _emit 0x51
        // 0x58788A13: push edx
        __asm _emit 0x52
        // 0x58788A14: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58788A18: mov ecx, dword ptr [edx + 0x58a0af30]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x30
        __asm _emit 0xAF
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58788A1E: push ecx
        __asm _emit 0x51
        // 0x58788A1F: mov ecx, dword ptr [edx + 0x58a0aeb0]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xB0
        __asm _emit 0xAE
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58788A25: mov edx, dword ptr [edx + 0x58a0ae30]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x30
        __asm _emit 0xAE
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58788A2B: push ecx
        __asm _emit 0x51
        // 0x58788A2C: mov ecx, dword ptr [esi + 0x914]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788A32: push edx
        __asm _emit 0x52
        // 0x58788A33: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58788A35: push ecx
        __asm _emit 0x51
        // 0x58788A36: push esi
        __asm _emit 0x56
        // 0x58788A37: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58788A39: call 0x58785300
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0xC8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58788A3E: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58788A40: jmp 0x58788a44
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58788A42: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58788A44: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x58788A47: mov edx, 0x1f8
        __asm _emit 0xBA
        __asm _emit 0xF8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788A4C: mov dword ptr [esp + 0xc8], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58788A57: mov dword ptr [esp + 0x28], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58788A5B: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        // 0x58788A5F: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58788A61: je 0x58788a69
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58788A63: push edi
        __asm _emit 0x57
        // 0x58788A64: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0xA4
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58788A69: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x58788A6C: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58788A6E: je 0x58788a76
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58788A70: push edi
        __asm _emit 0x57
        // 0x58788A71: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x6A
        __asm _emit 0xA4
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58788A76: mov ecx, dword ptr [esi + 0x864]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x64
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788A7C: lea ebx, [esi + 0x858]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0x58
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788A82: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58788A84: jne 0x58788a8a
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x58788A86: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58788A88: jmp 0x58788a92
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x58788A8A: mov eax, dword ptr [ebx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x14
        // 0x58788A8D: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x58788A8F: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58788A92: mov edx, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x53
        __asm _emit 0x10
        // 0x58788A95: mov dword ptr [esp + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58788A99: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x58788A9B: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x58788A9E: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x58788AA0: jae 0x58788ab0
        __asm _emit 0x73
        __asm _emit 0x0E
        // 0x58788AA2: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58788AA6: mov dword ptr [eax], edi
        __asm _emit 0x89
        __asm _emit 0x38
        // 0x58788AA8: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x58788AAB: mov dword ptr [ebx + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x10
        // 0x58788AAE: jmp 0x58788ad4
        __asm _emit 0xEB
        __asm _emit 0x24
        // 0x58788AB0: cmp ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x3B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58788AB4: jbe 0x58788abb
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58788AB6: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0x41
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58788ABB: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58788ABF: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58788AC1: lea ecx, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58788AC5: push ecx
        __asm _emit 0x51
        // 0x58788AC6: push edx
        __asm _emit 0x52
        // 0x58788AC7: push eax
        __asm _emit 0x50
        // 0x58788AC8: lea eax, [esp + 0x40]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58788ACC: push eax
        __asm _emit 0x50
        // 0x58788ACD: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58788ACF: call 0x588f6890
        __asm _emit 0xE8
        __asm _emit 0xBC
        __asm _emit 0xDD
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x58788AD4: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58788AD8: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58788ADC: mov dword ptr [esp + ecx*4 + 0x3c], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x8C
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788AE4: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58788AE8: mov ebx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58788AEC: cmp edi, 3
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x03
        // 0x58788AEF: jne 0x58788af7
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x58788AF1: dec ecx
        __asm _emit 0x49
        // 0x58788AF2: jmp 0x5878896b
        __asm _emit 0xE9
        __asm _emit 0x74
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58788AF7: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58788AFB: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x58788AFE: cmp eax, 0x80
        __asm _emit 0x3D
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788B03: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58788B07: jl 0x58788920
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x13
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58788B0D: mov dword ptr [esp + 0x10], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788B15: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58788B19: cmp byte ptr [edx + 0x58a0afb0], 5
        __asm _emit 0x80
        __asm _emit 0xBA
        __asm _emit 0xB0
        __asm _emit 0xAF
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x05
        // 0x58788B20: jne 0x58788cea
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788B26: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58788B28: movzx edx, word ptr [eax + 0x58a0afb2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x90
        __asm _emit 0xB2
        __asm _emit 0xAF
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58788B2F: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58788B32: je 0x58788cea
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788B38: mov eax, dword ptr [0x58a0add8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0xAD
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58788B3D: mov ecx, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x58788B40: imul eax, eax, 0x13
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x13
        // 0x58788B43: movzx edx, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD2
        // 0x58788B46: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58788B48: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58788B4A: div dword ptr [ecx + 4]
        __asm _emit 0xF7
        __asm _emit 0x71
        __asm _emit 0x04
        // 0x58788B4D: mov eax, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58788B50: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58788B52: mov edi, dword ptr [eax + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x3C
        __asm _emit 0x90
        // 0x58788B55: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58788B59: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788B60: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x58788B62: cdq
        __asm _emit 0x99
        // 0x58788B63: idiv dword ptr [esp + 0x2c]
        __asm _emit 0xF7
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58788B67: mov ebx, 3
        __asm _emit 0xBB
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788B6C: lea eax, [esi + 0x824]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788B72: add ecx, dword ptr [eax]
        __asm _emit 0x03
        __asm _emit 0x08
        // 0x58788B74: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x58788B76: jl 0x58788b86
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x58788B78: inc ebx
        __asm _emit 0x43
        // 0x58788B79: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x58788B7C: cmp ebx, 4
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x04
        // 0x58788B7F: jl 0x58788b72
        __asm _emit 0x7C
        __asm _emit 0xF1
        // 0x58788B81: jmp 0x58788cd8
        __asm _emit 0xE9
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788B86: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x58788B88: cdq
        __asm _emit 0x99
        // 0x58788B89: idiv dword ptr [esi + ebx*4 + 0x818]
        __asm _emit 0xF7
        __asm _emit 0xBC
        __asm _emit 0x9E
        __asm _emit 0x18
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788B90: mov dword ptr [esp + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58788B94: mov dword ptr [esp + 0x24], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58788B98: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58788B9A: cmp dword ptr [esp + edi*4 + 0x3c], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0xBC
        __asm _emit 0x3C
        __asm _emit 0x00
        // 0x58788B9F: mov dword ptr [esp + 0x1c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58788BA3: je 0x58788bd4
        __asm _emit 0x74
        __asm _emit 0x2F
        // 0x58788BA5: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58788BA9: mov ecx, dword ptr [esi + ebx*4 + 0x818]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x9E
        __asm _emit 0x18
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788BB0: cdq
        __asm _emit 0x99
        // 0x58788BB1: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x58788BB3: mov dword ptr [esp + 0x28], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58788BB7: lea eax, [edi + 1]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x01
        // 0x58788BBA: cdq
        __asm _emit 0x99
        // 0x58788BBB: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x58788BBD: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58788BBF: cmp edi, dword ptr [esp + 0x28]
        __asm _emit 0x3B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58788BC3: je 0x58788cd4
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x0B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788BC9: cmp dword ptr [esp + edi*4 + 0x3c], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0xBC
        __asm _emit 0x3C
        __asm _emit 0x00
        // 0x58788BCE: jne 0x58788bb7
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x58788BD0: mov dword ptr [esp + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58788BD4: push 0xbc
        __asm _emit 0x68
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788BD9: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0x40
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58788BDE: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58788BE1: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58788BE5: mov dword ptr [esp + 0xc8], 1
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788BF0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58788BF2: je 0x58788c32
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x58788BF4: shl ebx, 6
        __asm _emit 0xC1
        __asm _emit 0xE3
        __asm _emit 0x06
        // 0x58788BF7: lea edx, [ebx + edi]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x3B
        // 0x58788BFA: mov ecx, dword ptr [esi + edx*8 + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0xD6
        __asm _emit 0x1C
        // 0x58788BFE: mov edx, dword ptr [esi + edx*8 + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0xD6
        __asm _emit 0x18
        // 0x58788C02: push ecx
        __asm _emit 0x51
        // 0x58788C03: push edx
        __asm _emit 0x52
        // 0x58788C04: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58788C08: mov ecx, dword ptr [edx + 0x58a0b0b0]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xB0
        __asm _emit 0xB0
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58788C0E: push ecx
        __asm _emit 0x51
        // 0x58788C0F: mov ecx, dword ptr [edx + 0x58a0b030]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x30
        __asm _emit 0xB0
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58788C15: mov edx, dword ptr [edx + 0x58a0afb0]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0xB0
        __asm _emit 0xAF
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58788C1B: push ecx
        __asm _emit 0x51
        // 0x58788C1C: mov ecx, dword ptr [esi + 0x914]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788C22: push edx
        __asm _emit 0x52
        // 0x58788C23: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58788C25: push ecx
        __asm _emit 0x51
        // 0x58788C26: push esi
        __asm _emit 0x56
        // 0x58788C27: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58788C29: call 0x58785300
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0xC6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58788C2E: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58788C30: jmp 0x58788c34
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58788C32: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58788C34: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x58788C37: mov edx, 0x1f8
        __asm _emit 0xBA
        __asm _emit 0xF8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788C3C: mov dword ptr [esp + 0xc8], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58788C47: mov dword ptr [esp + 0x28], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58788C4B: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        // 0x58788C4F: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58788C51: je 0x58788c59
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58788C53: push edi
        __asm _emit 0x57
        // 0x58788C54: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0xA2
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58788C59: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x58788C5C: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58788C5E: je 0x58788c66
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58788C60: push edi
        __asm _emit 0x57
        // 0x58788C61: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0xA2
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58788C66: mov ecx, dword ptr [esi + 0x864]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x64
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788C6C: lea ebx, [esi + 0x858]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0x58
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788C72: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58788C74: jne 0x58788c7a
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x58788C76: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58788C78: jmp 0x58788c82
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x58788C7A: mov eax, dword ptr [ebx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x14
        // 0x58788C7D: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x58788C7F: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58788C82: mov edx, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x53
        __asm _emit 0x10
        // 0x58788C85: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58788C89: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x58788C8B: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x58788C8E: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x58788C90: jae 0x58788ca0
        __asm _emit 0x73
        __asm _emit 0x0E
        // 0x58788C92: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58788C96: mov dword ptr [eax], edi
        __asm _emit 0x89
        __asm _emit 0x38
        // 0x58788C98: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x58788C9B: mov dword ptr [ebx + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x10
        // 0x58788C9E: jmp 0x58788cc4
        __asm _emit 0xEB
        __asm _emit 0x24
        // 0x58788CA0: cmp ecx, dword ptr [esp + 0x14]
        __asm _emit 0x3B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58788CA4: jbe 0x58788cab
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58788CA6: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC7
        __asm _emit 0x3F
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58788CAB: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58788CAF: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58788CB1: lea ecx, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58788CB5: push ecx
        __asm _emit 0x51
        // 0x58788CB6: push edx
        __asm _emit 0x52
        // 0x58788CB7: push eax
        __asm _emit 0x50
        // 0x58788CB8: lea eax, [esp + 0x40]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58788CBC: push eax
        __asm _emit 0x50
        // 0x58788CBD: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58788CBF: call 0x588f6890
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0xDB
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x58788CC4: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58788CC8: mov ebx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58788CCC: mov dword ptr [esp + ecx*4 + 0x3c], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x8C
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788CD4: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58788CD8: cmp ebx, 4
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x04
        // 0x58788CDB: jne 0x58788cea
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x58788CDD: dec dword ptr [esp + 0x20]
        __asm _emit 0xFF
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58788CE1: mov edi, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58788CE5: jmp 0x58788b60
        __asm _emit 0xE9
        __asm _emit 0x76
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58788CEA: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58788CEE: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x58788CF1: cmp eax, 0x80
        __asm _emit 0x3D
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788CF6: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58788CFA: jl 0x58788b15
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x15
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58788D00: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58788D06: movzx ecx, word ptr [0x58a0add0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x0D
        __asm _emit 0xD0
        __asm _emit 0xAD
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58788D0D: mov eax, dword ptr [edx + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788D13: mov eax, dword ptr [eax + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788D19: push ecx
        __asm _emit 0x51
        // 0x58788D1A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58788D1C: call 0x5882f0b0
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0x63
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58788D21: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58788D23: call 0x587867e0
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0xDA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58788D28: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58788D2A: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58788D2C: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58788D30: cmp dx, word ptr [0x58a0b194]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58788D37: jae 0x58788f22
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0xE5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788D3D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58788D40: mov ecx, dword ptr [0x58a0add4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xD4
        __asm _emit 0xAD
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58788D46: mov esi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58788D4A: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58788D4C: shl eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x04
        // 0x58788D4F: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x58788D51: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58788D55: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58788D59: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58788D5B: imul eax, eax, 0x17
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x17
        // 0x58788D5E: imul ecx, ecx, 0x1d
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x1D
        // 0x58788D61: mov dword ptr [esp + 0x1c], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788D69: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58788D6D: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58788D71: add esi, 0x828
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0x28
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788D77: jmp 0x58788d80
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra body range 0x58788D80..0x58788F40; 448 mapped bytes.
extern "C" __declspec(naked) void FUN_58788880_segment_01() {
    __asm {
        // 0x58788D80: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58788D84: mov ecx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x14
        // 0x58788D87: mov ebx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58788D8B: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58788D8F: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58788D93: add edx, ebx
        __asm _emit 0x03
        __asm _emit 0xD3
        // 0x58788D95: lea eax, [edx + eax - 0xd]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0xF3
        // 0x58788D99: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58788D9B: div dword ptr [ecx + 4]
        __asm _emit 0xF7
        __asm _emit 0x71
        __asm _emit 0x04
        // 0x58788D9E: mov eax, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58788DA1: mov edi, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x58788DA4: sub edi, dword ptr [esi]
        __asm _emit 0x2B
        __asm _emit 0x3E
        // 0x58788DA6: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x58788DA8: mov edx, dword ptr [eax + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x90
        // 0x58788DAB: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58788DAD: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58788DAF: div edi
        __asm _emit 0xF7
        __asm _emit 0xF7
        // 0x58788DB1: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58788DB5: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58788DB7: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58788DBB: add edx, ebx
        __asm _emit 0x03
        __asm _emit 0xD3
        // 0x58788DBD: lea eax, [edx + eax - 0x11]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0xEF
        // 0x58788DC1: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58788DC3: div dword ptr [ecx + 4]
        __asm _emit 0xF7
        __asm _emit 0x71
        __asm _emit 0x04
        // 0x58788DC6: mov ecx, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x0C
        // 0x58788DC9: add edi, dword ptr [esi]
        __asm _emit 0x03
        __asm _emit 0x3E
        // 0x58788DCB: mov edx, dword ptr [ecx + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x91
        // 0x58788DCE: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x58788DD1: sub ecx, dword ptr [esi + 4]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x58788DD4: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58788DD6: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58788DD8: div ecx
        __asm _emit 0xF7
        __asm _emit 0xF1
        // 0x58788DDA: mov ebx, edx
        __asm _emit 0x8B
        __asm _emit 0xDA
        // 0x58788DDC: add ebx, dword ptr [esi + 4]
        __asm _emit 0x03
        __asm _emit 0x5E
        __asm _emit 0x04
        // 0x58788DDF: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x6A
        __asm _emit 0x3E
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58788DE4: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58788DE7: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58788DEB: mov dword ptr [esp + 0xc8], 2
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788DF6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58788DF8: je 0x58788e21
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x58788DFA: mov edx, dword ptr [0x58a0ae1c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x1C
        __asm _emit 0xAE
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58788E00: mov ecx, dword ptr [0x58a0b190]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x90
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58788E06: push edx
        __asm _emit 0x52
        // 0x58788E07: push ecx
        __asm _emit 0x51
        // 0x58788E08: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58788E0C: mov edx, dword ptr [ecx + 0x914]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x14
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788E12: push ebx
        __asm _emit 0x53
        // 0x58788E13: push edi
        __asm _emit 0x57
        // 0x58788E14: push edx
        __asm _emit 0x52
        // 0x58788E15: push ecx
        __asm _emit 0x51
        // 0x58788E16: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58788E18: call 0x58783d20
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0xAF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58788E1D: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58788E1F: jmp 0x58788e23
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58788E21: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58788E23: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x58788E26: mov eax, 0xfffffde8
        __asm _emit 0xB8
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58788E2B: mov dword ptr [esp + 0xc8], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58788E36: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58788E3A: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        // 0x58788E3E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58788E40: je 0x58788e48
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58788E42: push edi
        __asm _emit 0x57
        // 0x58788E43: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0xA1
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58788E48: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x58788E4B: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58788E4D: je 0x58788e55
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58788E4F: push edi
        __asm _emit 0x57
        // 0x58788E50: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0xA0
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58788E55: mov ebx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58788E59: mov ecx, dword ptr [ebx + 0x87c]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788E5F: add ebx, 0x870
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0x70
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788E65: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58788E67: jne 0x58788e6f
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x58788E69: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58788E6D: jmp 0x58788e7b
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x58788E6F: mov eax, dword ptr [ebx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x14
        // 0x58788E72: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x58788E74: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58788E77: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58788E7B: mov eax, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x10
        // 0x58788E7E: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x58788E80: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x58788E82: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x58788E85: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58788E89: cmp edx, dword ptr [esp + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58788E8D: jae 0x58788e99
        __asm _emit 0x73
        __asm _emit 0x0A
        // 0x58788E8F: mov dword ptr [eax], edi
        __asm _emit 0x89
        __asm _emit 0x38
        // 0x58788E91: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x58788E94: mov dword ptr [ebx + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x10
        // 0x58788E97: jmp 0x58788ebb
        __asm _emit 0xEB
        __asm _emit 0x22
        // 0x58788E99: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58788E9B: jbe 0x58788ea6
        __asm _emit 0x76
        __asm _emit 0x09
        // 0x58788E9D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0x3D
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58788EA2: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58788EA6: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x58788EA8: lea edx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58788EAC: push edx
        __asm _emit 0x52
        // 0x58788EAD: push eax
        __asm _emit 0x50
        // 0x58788EAE: push ecx
        __asm _emit 0x51
        // 0x58788EAF: lea eax, [esp + 0x40]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58788EB3: push eax
        __asm _emit 0x50
        // 0x58788EB4: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58788EB6: call 0x588f6890
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0xD9
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x58788EBB: mov dx, word ptr [0x58a0b194]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xB1
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58788EC2: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58788EC6: add dword ptr [esp + 0x14], 0x17
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x17
        // 0x58788ECB: add dword ptr [esp + 0x18], 0x1d
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x1D
        // 0x58788ED0: movzx ecx, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xCA
        // 0x58788ED3: inc eax
        __asm _emit 0x40
        // 0x58788ED4: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58788ED8: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58788EDA: je 0x58788ef1
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x58788EDC: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58788EE0: inc ecx
        __asm _emit 0x41
        // 0x58788EE1: add esi, 0x10
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x10
        // 0x58788EE4: cmp ecx, 3
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x03
        // 0x58788EE7: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58788EEB: jl 0x58788d80
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x8F
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58788EF1: movzx edx, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD2
        // 0x58788EF4: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58788EF6: jl 0x58788d40
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x44
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58788EFC: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58788F00: mov dword ptr [eax + 0x888], 0
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x88
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788F0A: mov ecx, dword ptr [esp + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788F11: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788F18: pop ecx
        __asm _emit 0x59
        // 0x58788F19: pop edi
        __asm _emit 0x5F
        // 0x58788F1A: pop esi
        __asm _emit 0x5E
        // 0x58788F1B: pop ebx
        __asm _emit 0x5B
        // 0x58788F1C: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x58788F1E: pop ebp
        __asm _emit 0x5D
        // 0x58788F1F: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58788F22: mov dword ptr [esi + 0x888], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788F28: mov ecx, dword ptr [esp + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788F2F: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58788F36: pop ecx
        __asm _emit 0x59
        // 0x58788F37: pop edi
        __asm _emit 0x5F
        // 0x58788F38: pop esi
        __asm _emit 0x5E
        // 0x58788F39: pop ebx
        __asm _emit 0x5B
        // 0x58788F3A: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x58788F3C: pop ebp
        __asm _emit 0x5D
        // 0x58788F3D: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
