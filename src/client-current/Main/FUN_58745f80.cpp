// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 822 bytes in 3 exact ranges.
// Source symbol alias: FUN_58745f80.

// Ghidra body range 0x58745F80..0x587460B8; 312 mapped bytes.
extern "C" __declspec(naked) void FUN_58745f80_segment_00() {
    __asm {
        // 0x58745F80: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58745F84: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x58745F87: push ebx
        __asm _emit 0x53
        // 0x58745F88: push ebp
        __asm _emit 0x55
        // 0x58745F89: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x58745F8B: mov dword ptr [ebp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x58745F8E: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58745F92: push esi
        __asm _emit 0x56
        // 0x58745F93: mov dword ptr [ebp], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58745F96: mov byte ptr [ebp + 0xb8], 0
        __asm _emit 0xC6
        __asm _emit 0x85
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745F9D: push edi
        __asm _emit 0x57
        // 0x58745F9E: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58745FA0: mov dword ptr [ebp + 4], edi
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0x04
        // 0x58745FA3: mov dword ptr [ebp + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0x0C
        // 0x58745FA6: mov dword ptr [ebp + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0x10
        // 0x58745FA9: mov dword ptr [ebp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7D
        __asm _emit 0x14
        // 0x58745FAC: mov dword ptr [ebp + 0x88], edi
        __asm _emit 0x89
        __asm _emit 0xBD
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745FB2: mov dword ptr [ebp + 0x8c], edi
        __asm _emit 0x89
        __asm _emit 0xBD
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745FB8: mov dword ptr [ebp + 0x90], edi
        __asm _emit 0x89
        __asm _emit 0xBD
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745FBE: mov dword ptr [ebp + 0x98], edi
        __asm _emit 0x89
        __asm _emit 0xBD
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745FC4: mov dword ptr [ebp + 0x9c], edi
        __asm _emit 0x89
        __asm _emit 0xBD
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745FCA: mov dword ptr [ebp + 0xa0], edi
        __asm _emit 0x89
        __asm _emit 0xBD
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745FD0: mov dword ptr [ebp + 0xa4], edi
        __asm _emit 0x89
        __asm _emit 0xBD
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745FD6: mov dword ptr [ebp + 0xa8], edi
        __asm _emit 0x89
        __asm _emit 0xBD
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745FDC: mov dword ptr [ebp + 0xac], edi
        __asm _emit 0x89
        __asm _emit 0xBD
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745FE2: mov dword ptr [ebp + 0xb0], edi
        __asm _emit 0x89
        __asm _emit 0xBD
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745FE8: mov dword ptr [ebp + 0xb4], edi
        __asm _emit 0x89
        __asm _emit 0xBD
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745FEE: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58745FF1: mov dword ptr [ebp + 0xbc], ecx
        __asm _emit 0x89
        __asm _emit 0x8D
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745FF7: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58745FFA: mov dword ptr [ebp + 0xc0], edx
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746000: mov eax, dword ptr [eax + 0x6060]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x60
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746006: lea esi, [ebp + 0xe0]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874600C: mov dword ptr [ebp + 0xc4], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746012: mov dword ptr [ebp + 0xc8], edi
        __asm _emit 0x89
        __asm _emit 0xBD
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746018: mov dword ptr [ebp + 0xcc], edi
        __asm _emit 0x89
        __asm _emit 0xBD
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874601E: mov dword ptr [ebp + 0xd4], edi
        __asm _emit 0x89
        __asm _emit 0xBD
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746024: mov dword ptr [ebp + 0xd8], edi
        __asm _emit 0x89
        __asm _emit 0xBD
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874602A: mov dword ptr [ebp + 0xd0], edi
        __asm _emit 0x89
        __asm _emit 0xBD
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746030: mov dword ptr [ebp + 0xdc], edi
        __asm _emit 0x89
        __asm _emit 0xBD
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746036: mov ebx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x58746039: cmp dword ptr [esi + 0xc], ebx
        __asm _emit 0x39
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x5874603C: jbe 0x58746043
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5874603E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0x6C
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58746043: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58746045: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58746049: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x5874604C: mov dword ptr [esp + 0x24], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58746050: cmp ecx, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x58746053: jbe 0x5874605e
        __asm _emit 0x76
        __asm _emit 0x09
        // 0x58746055: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0x6C
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x5874605A: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5874605E: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58746062: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58746064: push ebx
        __asm _emit 0x53
        // 0x58746065: push edx
        __asm _emit 0x52
        // 0x58746066: push ecx
        __asm _emit 0x51
        // 0x58746067: push eax
        __asm _emit 0x50
        // 0x58746068: lea eax, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5874606C: push eax
        __asm _emit 0x50
        // 0x5874606D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5874606F: call 0x58745eb0
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58746074: mov dword ptr [esp + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58746078: mov dword ptr [esp + 0x20], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5874607C: mov dword ptr [esp + 0x24], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58746080: lea esi, [ebp + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x75
        __asm _emit 0x34
        // 0x58746083: jmp 0x58746087
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58746085: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58746087: push 0x38
        __asm _emit 0x6A
        __asm _emit 0x38
        // 0x58746089: lea ebx, [esi - 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x5E
        __asm _emit 0xE4
        // 0x5874608C: push edi
        __asm _emit 0x57
        // 0x5874608D: push ebx
        __asm _emit 0x53
        // 0x5874608E: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0x6B
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58746093: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58746095: mov word ptr [ebx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0B
        // 0x58746098: mov edi, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x00
        // 0x5874609B: mov edx, dword ptr [edi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587460A1: mov ecx, dword ptr [edx + 0x268]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587460A7: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587460AA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587460AC: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587460B0: lea edx, [edi + 0x2c0]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587460B6: jmp 0x587460c0
        __asm _emit 0xEB
        __asm _emit 0x08
    }
}

// Ghidra body range 0x587460C0..0x5874625D; 413 mapped bytes.
extern "C" __declspec(naked) void FUN_58745f80_segment_01() {
    __asm {
        // 0x587460C0: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587460C4: mov ecx, 0x1f
        __asm _emit 0xB9
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587460C9: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x587460CB: shr ebx, cl
        __asm _emit 0xD3
        __asm _emit 0xEB
        // 0x587460CD: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587460D1: and ebx, 1
        __asm _emit 0x83
        __asm _emit 0xE3
        __asm _emit 0x01
        // 0x587460D4: cmp ebx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD9
        // 0x587460D6: jne 0x587460e3
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x587460D8: cmp dword ptr [edx - 0x80], 0
        __asm _emit 0x83
        __asm _emit 0x7A
        __asm _emit 0x80
        __asm _emit 0x00
        // 0x587460DC: jne 0x587460f2
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x587460DE: cmp dword ptr [edx], 0
        __asm _emit 0x83
        __asm _emit 0x3A
        __asm _emit 0x00
        // 0x587460E1: jne 0x58746109
        __asm _emit 0x75
        __asm _emit 0x26
        // 0x587460E3: inc eax
        __asm _emit 0x40
        // 0x587460E4: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x587460E7: cmp eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x20
        // 0x587460EA: jl 0x587460c0
        __asm _emit 0x7C
        __asm _emit 0xD4
        // 0x587460EC: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587460F0: jmp 0x5874611a
        __asm _emit 0xEB
        __asm _emit 0x28
        // 0x587460F2: mov ebx, dword ptr [edi + eax*4 + 0x240]
        __asm _emit 0x8B
        __asm _emit 0x9C
        __asm _emit 0x87
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587460F9: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587460FD: mov dword ptr [esp + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58746101: mov dword ptr [ebx + 0x17c], ecx
        __asm _emit 0x89
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746107: jmp 0x5874611e
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x58746109: mov eax, dword ptr [edi + eax*4 + 0x2c0]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0xC0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746110: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58746114: mov dword ptr [eax + 0x17c], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874611A: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5874611E: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58746120: je 0x58746287
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746126: lea ecx, [ebx + 0x270]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874612C: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5874612E: je 0x58746287
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746134: mov dl, byte ptr [ebx + 0x30b]
        __asm _emit 0x8A
        __asm _emit 0x93
        __asm _emit 0x0B
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874613A: and dl, 0xf
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x0F
        // 0x5874613D: cmp dl, 1
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x01
        // 0x58746140: jne 0x58746154
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x58746142: mov eax, 2
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746147: mov dword ptr [ebp + 0x10], 1
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874614E: mov word ptr [esi - 0x1c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0xE4
        // 0x58746152: jmp 0x58746164
        __asm _emit 0xEB
        __asm _emit 0x10
        // 0x58746154: mov edx, 1
        __asm _emit 0xBA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746159: mov dword ptr [ebp + 0xc], 1
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746160: mov word ptr [esi - 0x1c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0xE4
        // 0x58746164: movzx eax, word ptr [ebx + 0x226]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x83
        __asm _emit 0x26
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874616B: shr eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x5874616E: and eax, 0x7f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x7F
        // 0x58746171: lea eax, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x80
        // 0x58746174: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x58746176: mov dword ptr [esi - 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0xEC
        // 0x58746179: movzx edx, word ptr [ebx + 0x234]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x93
        __asm _emit 0x34
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746180: mov dword ptr [esi - 4], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0xFC
        // 0x58746183: mov dword ptr [esi], ecx
        __asm _emit 0x89
        __asm _emit 0x0E
        // 0x58746185: movzx eax, word ptr [ecx + 0xa0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x81
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874618C: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5874618F: imul eax, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC0
        // 0x58746192: movzx edi, word ptr [ecx + 0x9e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xB9
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746199: cdq
        __asm _emit 0x99
        // 0x5874619A: mov dword ptr [esi + 8], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x5874619D: idiv dword ptr [0x58a244c8]
        __asm _emit 0xF7
        __asm _emit 0x3D
        __asm _emit 0xC8
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587461A3: add edi, 5
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x05
        // 0x587461A6: movsx ecx, byte ptr [ecx + 0x99]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x89
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587461AD: cdq
        __asm _emit 0x99
        // 0x587461AE: idiv edi
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587461B0: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x587461B2: mov eax, 0x64
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587461B7: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x587461B9: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x587461BC: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587461C1: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x587461C3: mov eax, dword ptr [esi - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0xEC
        // 0x587461C6: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587461C9: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587461CB: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x587461CE: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587461D0: mov edx, 0x2710
        __asm _emit 0xBA
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587461D5: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x587461D7: mov dword ptr [esi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x587461DA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587461DC: jle 0x587462a2
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587461E2: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587461E4: mov edx, 4
        __asm _emit 0xBA
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587461E9: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x587461EB: seto cl
        __asm _emit 0x0F
        __asm _emit 0x90
        __asm _emit 0xC1
        // 0x587461EE: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x587461F0: or ecx, eax
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x587461F2: push ecx
        __asm _emit 0x51
        // 0x587461F3: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0xB3
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x587461F8: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587461FA: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587461FD: cmp dword ptr [esi - 0x14], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0xEC
        // 0x58746200: mov dword ptr [esi - 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0xE8
        // 0x58746203: jle 0x5874621f
        __asm _emit 0x7E
        __asm _emit 0x1A
        // 0x58746205: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58746209: push eax
        __asm _emit 0x50
        // 0x5874620A: push edi
        __asm _emit 0x57
        // 0x5874620B: push ebx
        __asm _emit 0x53
        // 0x5874620C: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x5874620E: call 0x58745070
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0xEE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58746213: mov ecx, dword ptr [esi - 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0xE8
        // 0x58746216: mov dword ptr [ecx + edi*4], eax
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0xB9
        // 0x58746219: inc edi
        __asm _emit 0x47
        // 0x5874621A: cmp edi, dword ptr [esi - 0x14]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0xEC
        // 0x5874621D: jl 0x58746205
        __asm _emit 0x7C
        __asm _emit 0xE6
        // 0x5874621F: mov ebx, dword ptr [esi - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0xEC
        // 0x58746222: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58746224: cmp ebx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD9
        // 0x58746226: mov dword ptr [esi - 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0xF4
        // 0x58746229: mov dword ptr [esi - 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0xF0
        // 0x5874622C: mov dword ptr [esi - 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0xF8
        // 0x5874622F: jle 0x58746250
        __asm _emit 0x7E
        __asm _emit 0x1F
        // 0x58746231: mov edx, dword ptr [esi - 0x18]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0xE8
        // 0x58746234: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58746236: cmp eax, dword ptr [esi - 0x10]
        __asm _emit 0x3B
        __asm _emit 0x46
        __asm _emit 0xF0
        // 0x58746239: jbe 0x58746246
        __asm _emit 0x76
        __asm _emit 0x0B
        // 0x5874623B: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5874623D: imul edi, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xF8
        // 0x58746240: mov dword ptr [esi - 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0xF0
        // 0x58746243: mov dword ptr [esi - 8], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0xF8
        // 0x58746246: inc ecx
        __asm _emit 0x41
        // 0x58746247: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x5874624A: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5874624C: jl 0x58746234
        __asm _emit 0x7C
        __asm _emit 0xE6
        // 0x5874624E: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58746250: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58746252: cmp ebx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD9
        // 0x58746254: jle 0x587462a2
        __asm _emit 0x7E
        __asm _emit 0x4C
        // 0x58746256: mov ebx, dword ptr [esi - 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0xE8
        // 0x58746259: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5874625B: jmp 0x58746260
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x58746260..0x587462C1; 97 mapped bytes.
extern "C" __declspec(naked) void FUN_58745f80_segment_02() {
    __asm {
        // 0x58746260: mov eax, dword ptr [esi - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0xF0
        // 0x58746263: lea edx, [eax + eax*8]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xC0
        // 0x58746266: mov eax, 0xcccccccd
        __asm _emit 0xB8
        __asm _emit 0xCD
        __asm _emit 0xCC
        __asm _emit 0xCC
        __asm _emit 0xCC
        // 0x5874626B: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x5874626D: shr edx, 3
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x03
        // 0x58746270: cmp dword ptr [ecx], edx
        __asm _emit 0x39
        __asm _emit 0x11
        // 0x58746272: ja 0x5874627f
        __asm _emit 0x77
        __asm _emit 0x0B
        // 0x58746274: inc edi
        __asm _emit 0x47
        // 0x58746275: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x58746278: cmp edi, dword ptr [esi - 0x14]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0xEC
        // 0x5874627B: jl 0x58746260
        __asm _emit 0x7C
        __asm _emit 0xE3
        // 0x5874627D: jmp 0x587462a2
        __asm _emit 0xEB
        __asm _emit 0x23
        // 0x5874627F: mov eax, dword ptr [ebx + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xBB
        // 0x58746282: mov dword ptr [esi - 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0xF4
        // 0x58746285: jmp 0x587462a2
        __asm _emit 0xEB
        __asm _emit 0x1B
        // 0x58746287: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58746289: je 0x587462a2
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x5874628B: add eax, 0x238
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746290: je 0x587462a2
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x58746292: mov ecx, 3
        __asm _emit 0xB9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58746297: mov dword ptr [ebp + 0x14], 1
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874629E: mov word ptr [esi - 0x1c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0xE4
        // 0x587462A2: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587462A6: inc eax
        __asm _emit 0x40
        // 0x587462A7: add esi, 0x38
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x38
        // 0x587462AA: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587462AD: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587462B1: jl 0x58746085
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xCE
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587462B7: pop edi
        __asm _emit 0x5F
        // 0x587462B8: pop esi
        __asm _emit 0x5E
        // 0x587462B9: pop ebp
        __asm _emit 0x5D
        // 0x587462BA: pop ebx
        __asm _emit 0x5B
        // 0x587462BB: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587462BE: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
