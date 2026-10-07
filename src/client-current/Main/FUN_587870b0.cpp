// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 264 bytes in 1 exact ranges.
// Source symbol alias: FUN_587870b0.

// Ghidra body range 0x587870B0..0x587871B8; 264 mapped bytes.
extern "C" __declspec(naked) void FUN_587870b0_segment_00() {
    __asm {
        // 0x587870B0: push ebx
        __asm _emit 0x53
        // 0x587870B1: push ebp
        __asm _emit 0x55
        // 0x587870B2: push esi
        __asm _emit 0x56
        // 0x587870B3: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587870B7: push edi
        __asm _emit 0x57
        // 0x587870B8: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587870BC: mov eax, dword ptr [edi + 0x1264]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x64
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587870C2: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587870C7: add eax, dword ptr [esi + 8]
        __asm _emit 0x03
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587870CA: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x587870CC: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587870D1: mov dword ptr [edi + 0x1264], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x64
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587870D7: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x587870DA: imul ecx, ecx, 0x16
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x16
        // 0x587870DD: push ecx
        __asm _emit 0x51
        // 0x587870DE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587870E0: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587870E2: call 0x588dcdd0
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0x5C
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587870E7: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x587870EA: push edx
        __asm _emit 0x52
        // 0x587870EB: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587870ED: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587870EF: call 0x588dcdd0
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0x5C
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587870F4: movzx eax, byte ptr [edi + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x87
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587870FB: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58787101: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58787104: add dword ptr [ecx + eax*4 + 0x10a6c], edx
        __asm _emit 0x01
        __asm _emit 0x94
        __asm _emit 0x81
        __asm _emit 0x6C
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5878710B: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58787110: cmp edi, dword ptr [eax + 4]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x58787113: jne 0x5878714c
        __asm _emit 0x75
        __asm _emit 0x37
        // 0x58787115: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5878711A: mov ecx, dword ptr [eax + 0x10bd4]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xD4
        __asm _emit 0x0B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58787120: mov edx, dword ptr [ecx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x64
        // 0x58787123: add edx, dword ptr [esi + 8]
        __asm _emit 0x03
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58787126: lea ebp, [eax + 0x10bd4]
        __asm _emit 0x8D
        __asm _emit 0xA8
        __asm _emit 0xD4
        __asm _emit 0x0B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5878712C: push edx
        __asm _emit 0x52
        // 0x5878712D: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58787131: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0x02
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x58787136: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58787139: mov ecx, dword ptr [eax + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x64
        // 0x5878713C: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58787140: push ecx
        __asm _emit 0x51
        // 0x58787141: mov ecx, dword ptr [edx + 0x10be8]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58787147: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x5878714C: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58787151: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58787154: mov dl, byte ptr [edi + 0x354]
        __asm _emit 0x8A
        __asm _emit 0x97
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878715A: cmp dl, byte ptr [ecx + 0x354]
        __asm _emit 0x3A
        __asm _emit 0x91
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58787160: jne 0x587871b1
        __asm _emit 0x75
        __asm _emit 0x4F
        // 0x58787162: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58787167: mov ecx, dword ptr [eax + 0x10be0]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xE0
        __asm _emit 0x0B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5878716D: lea edi, [eax + 0x10be0]
        __asm _emit 0x8D
        __asm _emit 0xB8
        __asm _emit 0xE0
        __asm _emit 0x0B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58787173: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x58787175: mov eax, dword ptr [ecx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x64
        // 0x58787178: add eax, dword ptr [esi + 8]
        __asm _emit 0x03
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5878717B: push eax
        __asm _emit 0x50
        // 0x5878717C: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0x01
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x58787181: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58787183: mov edx, dword ptr [ecx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x64
        // 0x58787186: mov ecx, dword ptr [ebp + 0x10bf4]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xF4
        __asm _emit 0x0B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5878718C: push edx
        __asm _emit 0x52
        // 0x5878718D: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0x01
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x58787192: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58787195: add dword ptr [ebx + 0x91c], eax
        __asm _emit 0x01
        __asm _emit 0x83
        __asm _emit 0x1C
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878719B: mov ecx, dword ptr [ebx + 0x91c]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x1C
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587871A1: mov eax, dword ptr [ebx + 0x918]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x18
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587871A7: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x587871A9: jbe 0x587871b1
        __asm _emit 0x76
        __asm _emit 0x06
        // 0x587871AB: mov dword ptr [ebx + 0x91c], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x1C
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587871B1: pop edi
        __asm _emit 0x5F
        // 0x587871B2: pop esi
        __asm _emit 0x5E
        // 0x587871B3: pop ebp
        __asm _emit 0x5D
        // 0x587871B4: pop ebx
        __asm _emit 0x5B
        // 0x587871B5: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
