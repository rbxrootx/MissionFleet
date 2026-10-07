// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1808 bytes in 3 exact ranges.
// Source symbol alias: FUN_587eb370.

// Ghidra body range 0x587EB370..0x587EB44D; 221 mapped bytes.
extern "C" __declspec(naked) void FUN_587eb370_segment_00() {
    __asm {
        // 0x587EB370: sub esp, 0x724
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x24
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB376: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587EB37B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587EB37D: mov dword ptr [esp + 0x720], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB384: mov eax, dword ptr [esp + 0x728]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB38B: push ebx
        __asm _emit 0x53
        // 0x587EB38C: push ebp
        __asm _emit 0x55
        // 0x587EB38D: push esi
        __asm _emit 0x56
        // 0x587EB38E: push edi
        __asm _emit 0x57
        // 0x587EB38F: push eax
        __asm _emit 0x50
        // 0x587EB390: lea eax, [esp + 0x434]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB397: push eax
        __asm _emit 0x50
        // 0x587EB398: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x587EB39A: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587EB3A0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587EB3A2: push 0x589c8ee0
        __asm _emit 0x68
        __asm _emit 0xE0
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587EB3A7: call dword ptr [0x5898c148]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587EB3AD: lea ecx, [esp + 0x430]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB3B4: push ecx
        __asm _emit 0x51
        // 0x587EB3B5: push 0x589c8ee0
        __asm _emit 0x68
        __asm _emit 0xE0
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587EB3BA: lea edx, [esp + 0x638]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB3C1: push 0x5899c034
        __asm _emit 0x68
        __asm _emit 0x34
        __asm _emit 0xC0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587EB3C6: push edx
        __asm _emit 0x52
        // 0x587EB3C7: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587EB3CD: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587EB3D0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587EB3D2: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB3D7: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587EB3D9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587EB3DB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587EB3DD: push 0x40000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587EB3E2: lea eax, [esp + 0x648]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB3E9: push eax
        __asm _emit 0x50
        // 0x587EB3EA: call dword ptr [0x5898c180]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587EB3F0: mov dword ptr [ebp + 0x21c3c], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x3C
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EB3F6: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587EB3F9: jne 0x587eb4ee
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xEF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB3FF: mov ebx, dword ptr [0x5898c1a8]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587EB405: lea ecx, [esp + 0x430]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB40C: push ecx
        __asm _emit 0x51
        // 0x587EB40D: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587EB40F: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x587EB411: cmp eax, 5
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x587EB414: jle 0x587eb49a
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB41A: lea edx, [esp + 0x430]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB421: push edx
        __asm _emit 0x52
        // 0x587EB422: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587EB424: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x587EB426: cmp byte ptr [esp + eax + 0x42b], 0x5f
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x04
        __asm _emit 0x2B
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x5F
        // 0x587EB42E: lea ecx, [esp + eax + 0x42b]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x04
        __asm _emit 0x2B
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB435: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587EB439: jne 0x587eb49a
        __asm _emit 0x75
        __asm _emit 0x5F
        // 0x587EB43B: lea ecx, [eax - 4]
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0xFC
        // 0x587EB43E: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x587EB440: jge 0x587eb476
        __asm _emit 0x7D
        __asm _emit 0x34
        // 0x587EB442: lea ebx, [esp + 0x530]
        __asm _emit 0x8D
        __asm _emit 0x9C
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB449: sub ebx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD9
        // 0x587EB44B: jmp 0x587eb450
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x587EB450..0x587EB927; 1239 mapped bytes.
extern "C" __declspec(naked) void FUN_587eb370_segment_01() {
    __asm {
        // 0x587EB450: mov dl, byte ptr [esp + ecx + 0x430]
        __asm _emit 0x8A
        __asm _emit 0x94
        __asm _emit 0x0C
        __asm _emit 0x30
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB457: cmp dl, 0x30
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x30
        // 0x587EB45A: jl 0x587eb46c
        __asm _emit 0x7C
        __asm _emit 0x10
        // 0x587EB45C: cmp dl, 0x39
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x39
        // 0x587EB45F: jg 0x587eb46c
        __asm _emit 0x7F
        __asm _emit 0x0B
        // 0x587EB461: mov byte ptr [ebx + ecx], dl
        __asm _emit 0x88
        __asm _emit 0x14
        __asm _emit 0x0B
        // 0x587EB464: inc ecx
        __asm _emit 0x41
        // 0x587EB465: inc edi
        __asm _emit 0x47
        // 0x587EB466: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x587EB468: jl 0x587eb450
        __asm _emit 0x7C
        __asm _emit 0xE6
        // 0x587EB46A: jmp 0x587eb474
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x587EB46C: mov byte ptr [esp + edi + 0x530], 0
        __asm _emit 0xC6
        __asm _emit 0x84
        __asm _emit 0x3C
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB474: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x587EB476: jne 0x587eb49a
        __asm _emit 0x75
        __asm _emit 0x22
        // 0x587EB478: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587EB47C: lea ecx, [esp + 0x530]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB483: push ecx
        __asm _emit 0x51
        // 0x587EB484: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB487: mov byte ptr [esp + edi + 0x534], 0
        __asm _emit 0xC6
        __asm _emit 0x84
        __asm _emit 0x3C
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB48F: call 0x5897ce98
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0x1A
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587EB494: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587EB496: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587EB499: inc esi
        __asm _emit 0x46
        // 0x587EB49A: mov edi, dword ptr [0x5898c3c4]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587EB4A0: mov ebx, dword ptr [0x5898c180]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0x80
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587EB4A6: push esi
        __asm _emit 0x56
        // 0x587EB4A7: lea edx, [esp + 0x434]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB4AE: push edx
        __asm _emit 0x52
        // 0x587EB4AF: push 0x589c8ee0
        __asm _emit 0x68
        __asm _emit 0xE0
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587EB4B4: lea eax, [esp + 0x63c]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB4BB: push 0x5899c024
        __asm _emit 0x68
        __asm _emit 0x24
        __asm _emit 0xC0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587EB4C0: push eax
        __asm _emit 0x50
        // 0x587EB4C1: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587EB4C3: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x587EB4C6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587EB4C8: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB4CD: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587EB4CF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587EB4D1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587EB4D3: push 0x40000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587EB4D8: lea ecx, [esp + 0x648]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB4DF: push ecx
        __asm _emit 0x51
        // 0x587EB4E0: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x587EB4E2: inc esi
        __asm _emit 0x46
        // 0x587EB4E3: mov dword ptr [ebp + 0x21c3c], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x3C
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EB4E9: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587EB4EC: je 0x587eb4a6
        __asm _emit 0x74
        __asm _emit 0xB8
        // 0x587EB4EE: cmp dword ptr [ebp + 0x21c3c], -1
        __asm _emit 0x83
        __asm _emit 0xBD
        __asm _emit 0x3C
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0xFF
        // 0x587EB4F5: je 0x587eba71
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x76
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB4FB: push 0x5899c004
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0xC0
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587EB500: lea ebx, [ebp + 0x21918]
        __asm _emit 0x8D
        __asm _emit 0x9D
        __asm _emit 0x18
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EB506: push ebx
        __asm _emit 0x53
        // 0x587EB507: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587EB50D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587EB50F: mov word ptr [ebp + 0x2194a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x4A
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EB516: movzx eax, byte ptr [ebp + 0x1059e]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x85
        __asm _emit 0x9E
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587EB51D: mov edx, 1
        __asm _emit 0xBA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB522: mov word ptr [ebp + 0x21948], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x48
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EB529: mov cx, word ptr [0x589c3144]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x44
        __asm _emit 0x31
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587EB530: mov word ptr [ebp + 0x2194c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EB537: mov dx, word ptr [0x589c31ac]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xAC
        __asm _emit 0x31
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587EB53E: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x587EB541: mov word ptr [ebp + 0x2194e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x4E
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EB548: mov dword ptr [ebp + 0x2195c], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x5C
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EB54E: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EB554: call 0x58789fb0
        __asm _emit 0xE8
        __asm _emit 0x57
        __asm _emit 0xEA
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587EB559: lea ecx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587EB55D: push ecx
        __asm _emit 0x51
        // 0x587EB55E: mov dword ptr [ebp + 0x21960], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EB564: call dword ptr [0x5898c158]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587EB56A: movzx eax, byte ptr [esp + 0x2a]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2A
        // 0x587EB56F: mov esi, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587EB573: mov cl, byte ptr [esp + 0x22]
        __asm _emit 0x8A
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x22
        // 0x587EB577: mov dl, byte ptr [esp + 0x26]
        __asm _emit 0x8A
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x26
        // 0x587EB57B: mov byte ptr [ebp + 0x21955], al
        __asm _emit 0x88
        __asm _emit 0x85
        __asm _emit 0x55
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EB581: movzx eax, byte ptr [esp + 0x2c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587EB586: mov byte ptr [ebp + 0x21956], al
        __asm _emit 0x88
        __asm _emit 0x85
        __asm _emit 0x56
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EB58C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587EB58E: mov word ptr [ebp + 0x21958], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x58
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EB595: mov al, byte ptr [esp + 0x28]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587EB599: add al, 9
        __asm _emit 0x04
        __asm _emit 0x09
        // 0x587EB59B: mov word ptr [ebp + 0x21950], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xB5
        __asm _emit 0x50
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EB5A2: mov byte ptr [ebp + 0x21952], cl
        __asm _emit 0x88
        __asm _emit 0x8D
        __asm _emit 0x52
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EB5A8: mov byte ptr [ebp + 0x21953], dl
        __asm _emit 0x88
        __asm _emit 0x95
        __asm _emit 0x53
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EB5AE: mov byte ptr [ebp + 0x21954], al
        __asm _emit 0x88
        __asm _emit 0x85
        __asm _emit 0x54
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EB5B4: cmp al, 0x18
        __asm _emit 0x3C
        __asm _emit 0x18
        // 0x587EB5B6: jbe 0x587eb5c8
        __asm _emit 0x76
        __asm _emit 0x10
        // 0x587EB5B8: inc dl
        __asm _emit 0xFE
        __asm _emit 0xC2
        // 0x587EB5BA: sub al, 0x18
        __asm _emit 0x2C
        __asm _emit 0x18
        // 0x587EB5BC: mov byte ptr [ebp + 0x21953], dl
        __asm _emit 0x88
        __asm _emit 0x95
        __asm _emit 0x53
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EB5C2: mov byte ptr [ebp + 0x21954], al
        __asm _emit 0x88
        __asm _emit 0x85
        __asm _emit 0x54
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EB5C8: mov al, byte ptr [ebp + 0x21953]
        __asm _emit 0x8A
        __asm _emit 0x85
        __asm _emit 0x53
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EB5CE: cmp al, 0x1c
        __asm _emit 0x3C
        __asm _emit 0x1C
        // 0x587EB5D0: jbe 0x587eb5f4
        __asm _emit 0x76
        __asm _emit 0x22
        // 0x587EB5D2: cmp cl, 2
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x587EB5D5: jne 0x587eb5f4
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x587EB5D7: movzx edx, si
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD6
        // 0x587EB5DA: and edx, 0x80000003
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x587EB5E0: jns 0x587eb5e7
        __asm _emit 0x79
        __asm _emit 0x05
        // 0x587EB5E2: dec edx
        __asm _emit 0x4A
        // 0x587EB5E3: or edx, 0xfffffffc
        __asm _emit 0x83
        __asm _emit 0xCA
        __asm _emit 0xFC
        // 0x587EB5E6: inc edx
        __asm _emit 0x42
        // 0x587EB5E7: je 0x587eb5f4
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587EB5E9: mov byte ptr [ebp + 0x21952], 3
        __asm _emit 0xC6
        __asm _emit 0x85
        __asm _emit 0x52
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x587EB5F0: sub al, 0x1c
        __asm _emit 0x2C
        __asm _emit 0x1C
        // 0x587EB5F2: jmp 0x587eb646
        __asm _emit 0xEB
        __asm _emit 0x52
        // 0x587EB5F4: cmp al, 0x1d
        __asm _emit 0x3C
        __asm _emit 0x1D
        // 0x587EB5F6: jbe 0x587eb61a
        __asm _emit 0x76
        __asm _emit 0x22
        // 0x587EB5F8: cmp cl, 2
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x587EB5FB: jne 0x587eb61a
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x587EB5FD: movzx edx, si
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD6
        // 0x587EB600: and edx, 0x80000003
        __asm _emit 0x81
        __asm _emit 0xE2
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x587EB606: jns 0x587eb60d
        __asm _emit 0x79
        __asm _emit 0x05
        // 0x587EB608: dec edx
        __asm _emit 0x4A
        // 0x587EB609: or edx, 0xfffffffc
        __asm _emit 0x83
        __asm _emit 0xCA
        __asm _emit 0xFC
        // 0x587EB60C: inc edx
        __asm _emit 0x42
        // 0x587EB60D: jne 0x587eb61a
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x587EB60F: mov byte ptr [ebp + 0x21952], 3
        __asm _emit 0xC6
        __asm _emit 0x85
        __asm _emit 0x52
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x587EB616: sub al, 0x1d
        __asm _emit 0x2C
        __asm _emit 0x1D
        // 0x587EB618: jmp 0x587eb646
        __asm _emit 0xEB
        __asm _emit 0x2C
        // 0x587EB61A: cmp al, 0x1e
        __asm _emit 0x3C
        __asm _emit 0x1E
        // 0x587EB61C: jbe 0x587eb638
        __asm _emit 0x76
        __asm _emit 0x1A
        // 0x587EB61E: cmp cl, 4
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x04
        // 0x587EB621: je 0x587eb632
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x587EB623: cmp cl, 6
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x06
        // 0x587EB626: je 0x587eb632
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587EB628: cmp cl, 9
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x09
        // 0x587EB62B: je 0x587eb632
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587EB62D: cmp cl, 0xb
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x0B
        // 0x587EB630: jne 0x587eb638
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x587EB632: inc cl
        __asm _emit 0xFE
        __asm _emit 0xC1
        // 0x587EB634: sub al, 0x1e
        __asm _emit 0x2C
        __asm _emit 0x1E
        // 0x587EB636: jmp 0x587eb640
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x587EB638: cmp al, 0x1f
        __asm _emit 0x3C
        __asm _emit 0x1F
        // 0x587EB63A: jbe 0x587eb64c
        __asm _emit 0x76
        __asm _emit 0x10
        // 0x587EB63C: inc cl
        __asm _emit 0xFE
        __asm _emit 0xC1
        // 0x587EB63E: sub al, 0x1f
        __asm _emit 0x2C
        __asm _emit 0x1F
        // 0x587EB640: mov byte ptr [ebp + 0x21952], cl
        __asm _emit 0x88
        __asm _emit 0x8D
        __asm _emit 0x52
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EB646: mov byte ptr [ebp + 0x21953], al
        __asm _emit 0x88
        __asm _emit 0x85
        __asm _emit 0x53
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EB64C: mov al, byte ptr [ebp + 0x21952]
        __asm _emit 0x8A
        __asm _emit 0x85
        __asm _emit 0x52
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EB652: cmp al, 0xc
        __asm _emit 0x3C
        __asm _emit 0x0C
        // 0x587EB654: jbe 0x587eb666
        __asm _emit 0x76
        __asm _emit 0x10
        // 0x587EB656: inc esi
        __asm _emit 0x46
        // 0x587EB657: sub al, 0xc
        __asm _emit 0x2C
        __asm _emit 0x0C
        // 0x587EB659: mov word ptr [ebp + 0x21950], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xB5
        __asm _emit 0x50
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EB660: mov byte ptr [ebp + 0x21952], al
        __asm _emit 0x88
        __asm _emit 0x85
        __asm _emit 0x52
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EB666: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587EB668: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587EB66C: push eax
        __asm _emit 0x50
        // 0x587EB66D: lea edi, [ebp + 0x21964]
        __asm _emit 0x8D
        __asm _emit 0xBD
        __asm _emit 0x64
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EB673: mov ecx, 0x77
        __asm _emit 0xB9
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB678: mov esi, 0x58a242f8
        __asm _emit 0xBE
        __asm _emit 0xF8
        __asm _emit 0x42
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EB67D: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x587EB67F: push 0x31c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB684: lea esi, [ebp + 0x1056c]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0x6C
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587EB68A: lea edi, [ebp + 0x21b40]
        __asm _emit 0x8D
        __asm _emit 0xBD
        __asm _emit 0x40
        __asm _emit 0x1B
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EB690: mov ecx, 0x31
        __asm _emit 0xB9
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB695: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x587EB697: mov ecx, dword ptr [ebp + 0x21c3c]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x3C
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EB69D: mov edi, dword ptr [0x5898c1a0]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xA0
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587EB6A3: push ebx
        __asm _emit 0x53
        // 0x587EB6A4: push ecx
        __asm _emit 0x51
        // 0x587EB6A5: mov dword ptr [ebp + 0x21c30], 0
        __asm _emit 0xC7
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB6AF: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587EB6B1: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EB6B7: mov ebx, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5A
        __asm _emit 0x0C
        // 0x587EB6BA: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587EB6BC: je 0x587eba71
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xAF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB6C2: mov edx, dword ptr [ebp + 0x21c3c]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x3C
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EB6C8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587EB6CA: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587EB6CE: push eax
        __asm _emit 0x50
        // 0x587EB6CF: push 0x114
        __asm _emit 0x68
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB6D4: lea ecx, [ebx + 0x350]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB6DA: push ecx
        __asm _emit 0x51
        // 0x587EB6DB: push edx
        __asm _emit 0x52
        // 0x587EB6DC: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587EB6DE: mov eax, dword ptr [ebx + 0x394]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB6E4: shr eax, 1
        __asm _emit 0xD1
        __asm _emit 0xE8
        // 0x587EB6E6: and eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x1F
        // 0x587EB6E9: je 0x587eb70c
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x587EB6EB: lea edx, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x40
        // 0x587EB6EE: mov eax, dword ptr [ebx + 0x464]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x64
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB6F4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587EB6F6: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x587EB6F8: lea ecx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587EB6FC: push ecx
        __asm _emit 0x51
        // 0x587EB6FD: mov ecx, dword ptr [ebp + 0x21c3c]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x3C
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EB703: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x587EB705: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x587EB707: push edx
        __asm _emit 0x52
        // 0x587EB708: push eax
        __asm _emit 0x50
        // 0x587EB709: push ecx
        __asm _emit 0x51
        // 0x587EB70A: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587EB70C: cmp byte ptr [ebx + 0x450], 0
        __asm _emit 0x80
        __asm _emit 0xBB
        __asm _emit 0x50
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB713: je 0x587eb7fd
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB719: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB721: lea eax, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587EB725: lea edx, [ebx + 0x468]
        __asm _emit 0x8D
        __asm _emit 0x93
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB72B: mov dword ptr [esp + 0x18], 8
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB733: cmp byte ptr [edx + 1], 0x2a
        __asm _emit 0x80
        __asm _emit 0x7A
        __asm _emit 0x01
        __asm _emit 0x2A
        // 0x587EB737: je 0x587eb751
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x587EB739: inc dword ptr [esp + 0x14]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587EB73D: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587EB73F: mov ecx, 8
        __asm _emit 0xB9
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB744: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x587EB746: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x587EB748: mov edi, dword ptr [0x5898c1a0]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xA0
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587EB74E: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x587EB751: cmp byte ptr [edx + 0x21], 0x2a
        __asm _emit 0x80
        __asm _emit 0x7A
        __asm _emit 0x21
        __asm _emit 0x2A
        // 0x587EB755: je 0x587eb770
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x587EB757: inc dword ptr [esp + 0x14]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587EB75B: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587EB75D: lea esi, [edx + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x72
        __asm _emit 0x20
        // 0x587EB760: mov ecx, 8
        __asm _emit 0xB9
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB765: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x587EB767: mov edi, dword ptr [0x5898c1a0]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xA0
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587EB76D: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x587EB770: cmp byte ptr [edx + 0x41], 0x2a
        __asm _emit 0x80
        __asm _emit 0x7A
        __asm _emit 0x41
        __asm _emit 0x2A
        // 0x587EB774: je 0x587eb78f
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x587EB776: inc dword ptr [esp + 0x14]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587EB77A: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587EB77C: lea esi, [edx + 0x40]
        __asm _emit 0x8D
        __asm _emit 0x72
        __asm _emit 0x40
        // 0x587EB77F: mov ecx, 8
        __asm _emit 0xB9
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB784: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x587EB786: mov edi, dword ptr [0x5898c1a0]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xA0
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587EB78C: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x587EB78F: cmp byte ptr [edx + 0x61], 0x2a
        __asm _emit 0x80
        __asm _emit 0x7A
        __asm _emit 0x61
        __asm _emit 0x2A
        // 0x587EB793: je 0x587eb7ae
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x587EB795: inc dword ptr [esp + 0x14]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587EB799: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587EB79B: lea esi, [edx + 0x60]
        __asm _emit 0x8D
        __asm _emit 0x72
        __asm _emit 0x60
        // 0x587EB79E: mov ecx, 8
        __asm _emit 0xB9
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB7A3: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x587EB7A5: mov edi, dword ptr [0x5898c1a0]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xA0
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587EB7AB: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x587EB7AE: sub edx, -0x80
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x80
        // 0x587EB7B1: sub dword ptr [esp + 0x18], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x01
        // 0x587EB7B6: jne 0x587eb733
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x77
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587EB7BC: movzx edx, byte ptr [ebx + 0x450]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x93
        __asm _emit 0x50
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB7C3: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587EB7C7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587EB7C9: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x587EB7CB: jne 0x587eb7e6
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x587EB7CD: lea ecx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587EB7D1: push ecx
        __asm _emit 0x51
        // 0x587EB7D2: shl eax, 5
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x05
        // 0x587EB7D5: push eax
        __asm _emit 0x50
        // 0x587EB7D6: mov eax, dword ptr [ebp + 0x21c3c]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x3C
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EB7DC: lea edx, [esp + 0x3c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x587EB7E0: push edx
        __asm _emit 0x52
        // 0x587EB7E1: push eax
        __asm _emit 0x50
        // 0x587EB7E2: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587EB7E4: jmp 0x587eb7fd
        __asm _emit 0xEB
        __asm _emit 0x17
        // 0x587EB7E6: mov ecx, dword ptr [0x58a284c4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC4
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EB7EC: push 0x5898ce74
        __asm _emit 0x68
        __asm _emit 0x74
        __asm _emit 0xCE
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587EB7F1: push 0x5899bff8
        __asm _emit 0x68
        __asm _emit 0xF8
        __asm _emit 0xBF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587EB7F6: push ecx
        __asm _emit 0x51
        // 0x587EB7F7: call dword ptr [0x5898c3cc]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xCC
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587EB7FD: mov eax, dword ptr [ebx + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB803: mov ecx, dword ptr [ebp + 0x21c3c]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x3C
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EB809: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587EB80B: lea edx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587EB80F: push edx
        __asm _emit 0x52
        // 0x587EB810: push 0x390
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB815: push eax
        __asm _emit 0x50
        // 0x587EB816: push ecx
        __asm _emit 0x51
        // 0x587EB817: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587EB819: mov eax, dword ptr [ebx + 0x1010]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x10
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB81F: mov ecx, dword ptr [ebp + 0x21c3c]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x3C
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EB825: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587EB827: lea edx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587EB82B: push edx
        __asm _emit 0x52
        // 0x587EB82C: push 0xce
        __asm _emit 0x68
        __asm _emit 0xCE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB831: push eax
        __asm _emit 0x50
        // 0x587EB832: push ecx
        __asm _emit 0x51
        // 0x587EB833: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587EB835: mov eax, dword ptr [ebx + 0x1014]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x14
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB83B: mov ecx, dword ptr [ebp + 0x21c3c]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x3C
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EB841: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587EB843: lea edx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587EB847: push edx
        __asm _emit 0x52
        // 0x587EB848: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB84D: push eax
        __asm _emit 0x50
        // 0x587EB84E: push ecx
        __asm _emit 0x51
        // 0x587EB84F: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587EB851: mov eax, dword ptr [ebx + 0x1018]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x18
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB857: mov ecx, dword ptr [ebp + 0x21c3c]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x3C
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EB85D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587EB85F: lea edx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587EB863: push edx
        __asm _emit 0x52
        // 0x587EB864: push 0xa4
        __asm _emit 0x68
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB869: push eax
        __asm _emit 0x50
        // 0x587EB86A: push ecx
        __asm _emit 0x51
        // 0x587EB86B: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587EB86D: cmp word ptr [ebx + 0x3d4], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBB
        __asm _emit 0xD4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB875: je 0x587eb893
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x587EB877: mov eax, dword ptr [ebx + 0x101c]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x1C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB87D: mov ecx, dword ptr [ebp + 0x21c3c]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x3C
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EB883: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587EB885: lea edx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587EB889: push edx
        __asm _emit 0x52
        // 0x587EB88A: push 0x9c
        __asm _emit 0x68
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB88F: push eax
        __asm _emit 0x50
        // 0x587EB890: push ecx
        __asm _emit 0x51
        // 0x587EB891: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587EB893: cmp word ptr [ebx + 0x3d6], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBB
        __asm _emit 0xD6
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB89B: je 0x587eb8b9
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x587EB89D: mov eax, dword ptr [ebx + 0x1020]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x20
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB8A3: mov ecx, dword ptr [ebp + 0x21c3c]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x3C
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EB8A9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587EB8AB: lea edx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587EB8AF: push edx
        __asm _emit 0x52
        // 0x587EB8B0: push 0x9c
        __asm _emit 0x68
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB8B5: push eax
        __asm _emit 0x50
        // 0x587EB8B6: push ecx
        __asm _emit 0x51
        // 0x587EB8B7: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587EB8B9: cmp word ptr [ebx + 0x3d8], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBB
        __asm _emit 0xD8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB8C1: je 0x587eb8df
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x587EB8C3: mov eax, dword ptr [ebx + 0x1024]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB8C9: mov ecx, dword ptr [ebp + 0x21c3c]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x3C
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EB8CF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587EB8D1: lea edx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587EB8D5: push edx
        __asm _emit 0x52
        // 0x587EB8D6: push 0x9c
        __asm _emit 0x68
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB8DB: push eax
        __asm _emit 0x50
        // 0x587EB8DC: push ecx
        __asm _emit 0x51
        // 0x587EB8DD: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587EB8DF: cmp word ptr [ebx + 0x3da], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBB
        __asm _emit 0xDA
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB8E7: je 0x587eb905
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x587EB8E9: mov eax, dword ptr [ebx + 0x1028]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x28
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB8EF: mov ecx, dword ptr [ebp + 0x21c3c]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x3C
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EB8F5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587EB8F7: lea edx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587EB8FB: push edx
        __asm _emit 0x52
        // 0x587EB8FC: push 0x9c
        __asm _emit 0x68
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB901: push eax
        __asm _emit 0x50
        // 0x587EB902: push ecx
        __asm _emit 0x51
        // 0x587EB903: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587EB905: test dword ptr [ebx + 0x394], 0x3e
        __asm _emit 0xF7
        __asm _emit 0x83
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x3E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB90F: mov dword ptr [esp + 0x1c], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB917: jbe 0x587eba66
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB91D: mov dword ptr [esp + 0x18], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB925: jmp 0x587eb930
        __asm _emit 0xEB
        __asm _emit 0x09
    }
}

// Ghidra body range 0x587EB930..0x587EBA8C; 348 mapped bytes.
extern "C" __declspec(naked) void FUN_587eb370_segment_02() {
    __asm {
        // 0x587EB930: mov esi, dword ptr [ebx + 0x464]
        __asm _emit 0x8B
        __asm _emit 0xB3
        __asm _emit 0x64
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB936: add esi, dword ptr [esp + 0x18]
        __asm _emit 0x03
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587EB93A: movzx eax, byte ptr [esi]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x06
        // 0x587EB93D: sub eax, 5
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x05
        // 0x587EB940: je 0x587eb977
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x587EB942: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x587EB945: je 0x587eb969
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x587EB947: sub eax, 7
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x07
        // 0x587EB94A: jne 0x587eba45
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xF5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB950: movzx edx, byte ptr [esi + 0xe]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x56
        __asm _emit 0x0E
        // 0x587EB954: mov eax, dword ptr [ebx + edx*4 + 0xe8c]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x8C
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB95B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587EB95D: lea ecx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587EB961: push ecx
        __asm _emit 0x51
        // 0x587EB962: push 0xd4
        __asm _emit 0x68
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB967: jmp 0x587eb98e
        __asm _emit 0xEB
        __asm _emit 0x25
        // 0x587EB969: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587EB96B: lea ecx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587EB96F: push ecx
        __asm _emit 0x51
        // 0x587EB970: push 0xa8
        __asm _emit 0x68
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB975: jmp 0x587eb983
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x587EB977: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587EB979: lea ecx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587EB97D: push ecx
        __asm _emit 0x51
        // 0x587EB97E: push 0xb4
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB983: movzx eax, byte ptr [esi + 0xe]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x46
        __asm _emit 0x0E
        // 0x587EB987: mov eax, dword ptr [ebx + eax*4 + 0xe8c]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x8C
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB98E: mov edx, dword ptr [ebp + 0x21c3c]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x3C
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EB994: push eax
        __asm _emit 0x50
        // 0x587EB995: push edx
        __asm _emit 0x52
        // 0x587EB996: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587EB99A: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587EB99C: cmp dword ptr [esp + 0x14], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587EB9A1: je 0x587eba45
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB9A7: movzx eax, byte ptr [esi + 4]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587EB9AB: sub eax, 0xb
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x0B
        // 0x587EB9AE: je 0x587eb9d5
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x587EB9B0: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x587EB9B3: jne 0x587eb9f6
        __asm _emit 0x75
        __asm _emit 0x41
        // 0x587EB9B5: movzx ecx, byte ptr [esi + 0xe]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x4E
        __asm _emit 0x0E
        // 0x587EB9B9: mov edx, dword ptr [ebx + ecx*8 + 0xf0c]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0xCB
        __asm _emit 0x0C
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB9C0: push eax
        __asm _emit 0x50
        // 0x587EB9C1: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587EB9C5: push eax
        __asm _emit 0x50
        // 0x587EB9C6: mov eax, dword ptr [ebp + 0x21c3c]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x3C
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EB9CC: push 0xb4
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB9D1: push edx
        __asm _emit 0x52
        // 0x587EB9D2: push eax
        __asm _emit 0x50
        // 0x587EB9D3: jmp 0x587eb9f4
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x587EB9D5: movzx edx, byte ptr [esi + 0xe]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x56
        __asm _emit 0x0E
        // 0x587EB9D9: mov eax, dword ptr [ebx + edx*8 + 0xf0c]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xD3
        __asm _emit 0x0C
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB9E0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587EB9E2: lea ecx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587EB9E6: push ecx
        __asm _emit 0x51
        // 0x587EB9E7: mov ecx, dword ptr [ebp + 0x21c3c]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x3C
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EB9ED: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EB9F2: push eax
        __asm _emit 0x50
        // 0x587EB9F3: push ecx
        __asm _emit 0x51
        // 0x587EB9F4: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587EB9F6: movzx eax, byte ptr [esi + 8]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587EB9FA: sub eax, 0xb
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x0B
        // 0x587EB9FD: je 0x587eba24
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x587EB9FF: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x587EBA02: jne 0x587eba45
        __asm _emit 0x75
        __asm _emit 0x41
        // 0x587EBA04: push eax
        __asm _emit 0x50
        // 0x587EBA05: movzx eax, byte ptr [esi + 0xe]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x46
        __asm _emit 0x0E
        // 0x587EBA09: mov ecx, dword ptr [ebx + eax*8 + 0xf10]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xC3
        __asm _emit 0x10
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBA10: lea edx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587EBA14: push edx
        __asm _emit 0x52
        // 0x587EBA15: mov edx, dword ptr [ebp + 0x21c3c]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x3C
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EBA1B: push 0xb4
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBA20: push ecx
        __asm _emit 0x51
        // 0x587EBA21: push edx
        __asm _emit 0x52
        // 0x587EBA22: jmp 0x587eba43
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x587EBA24: movzx ecx, byte ptr [esi + 0xe]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x4E
        __asm _emit 0x0E
        // 0x587EBA28: mov edx, dword ptr [ebx + ecx*8 + 0xf10]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0xCB
        __asm _emit 0x10
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBA2F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587EBA31: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587EBA35: push eax
        __asm _emit 0x50
        // 0x587EBA36: mov eax, dword ptr [ebp + 0x21c3c]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x3C
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587EBA3C: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBA41: push edx
        __asm _emit 0x52
        // 0x587EBA42: push eax
        __asm _emit 0x50
        // 0x587EBA43: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x587EBA45: mov ecx, dword ptr [ebx + 0x394]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBA4B: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587EBA4F: add dword ptr [esp + 0x18], 0x18
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x18
        // 0x587EBA54: shr ecx, 1
        __asm _emit 0xD1
        __asm _emit 0xE9
        // 0x587EBA56: inc eax
        __asm _emit 0x40
        // 0x587EBA57: and ecx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x587EBA5A: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587EBA5E: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x587EBA60: jb 0x587eb930
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0xCA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587EBA66: mov ebx, dword ptr [ebx + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x5B
        __asm _emit 0x78
        // 0x587EBA69: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587EBA6B: jne 0x587eb6c2
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x51
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587EBA71: mov ecx, dword ptr [esp + 0x730]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBA78: pop edi
        __asm _emit 0x5F
        // 0x587EBA79: pop esi
        __asm _emit 0x5E
        // 0x587EBA7A: pop ebp
        __asm _emit 0x5D
        // 0x587EBA7B: pop ebx
        __asm _emit 0x5B
        // 0x587EBA7C: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x587EBA7E: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x57
        __asm _emit 0x11
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x587EBA83: add esp, 0x724
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x24
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBA89: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
