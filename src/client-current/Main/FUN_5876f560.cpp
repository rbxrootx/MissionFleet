// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 177 bytes in 1 exact ranges.
// Source symbol alias: FUN_5876f560.

// Ghidra body range 0x5876F560..0x5876F611; 177 mapped bytes.
extern "C" __declspec(naked) void FUN_5876f560_segment_00() {
    __asm {
        // 0x5876F560: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876F566: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x5876F569: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5876F56B: je 0x5876f589
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x5876F56D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x5876F570: mov edx, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F576: cmp byte ptr [edx + 0x35c], 0
        __asm _emit 0x80
        __asm _emit 0xBA
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F57D: jne 0x5876f5c8
        __asm _emit 0x75
        __asm _emit 0x49
        // 0x5876F57F: mov eax, dword ptr [eax + 0xce4]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xE4
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F585: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5876F587: jne 0x5876f570
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x5876F589: push ebp
        __asm _emit 0x55
        // 0x5876F58A: push esi
        __asm _emit 0x56
        // 0x5876F58B: mov esi, dword ptr [ecx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x14
        // 0x5876F58E: push edi
        __asm _emit 0x57
        // 0x5876F58F: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5876F591: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5876F593: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5876F595: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5876F597: je 0x5876f5e1
        __asm _emit 0x74
        __asm _emit 0x48
        // 0x5876F599: push ebx
        __asm _emit 0x53
        // 0x5876F59A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F5A0: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x5876F5A3: mov eax, dword ptr [ecx + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F5A9: movzx ecx, word ptr [ecx + 0x5e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x49
        __asm _emit 0x5E
        // 0x5876F5AD: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x5876F5AF: shr ebx, 4
        __asm _emit 0xC1
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5876F5B2: xor bl, 0xaa
        __asm _emit 0x80
        __asm _emit 0xF3
        __asm _emit 0xAA
        // 0x5876F5B5: shr eax, 1
        __asm _emit 0xD1
        __asm _emit 0xE8
        // 0x5876F5B7: cmp bl, 0xc
        __asm _emit 0x80
        __asm _emit 0xFB
        __asm _emit 0x0C
        // 0x5876F5BA: jb 0x5876f5cb
        __asm _emit 0x72
        __asm _emit 0x0F
        // 0x5876F5BC: test cl, 0xf
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x0F
        // 0x5876F5BF: jne 0x5876f5cb
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x5876F5C1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5876F5C3: jne 0x5876f5cb
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x5876F5C5: inc edi
        __asm _emit 0x47
        // 0x5876F5C6: jmp 0x5876f5d9
        __asm _emit 0xEB
        __asm _emit 0x11
        // 0x5876F5C8: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x5876F5CA: ret
        __asm _emit 0xC3
        // 0x5876F5CB: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x5876F5CE: jne 0x5876f5d3
        __asm _emit 0x75
        __asm _emit 0x03
        // 0x5876F5D0: inc ebp
        __asm _emit 0x45
        // 0x5876F5D1: jmp 0x5876f5d9
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x5876F5D3: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x5876F5D6: jne 0x5876f5d9
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x5876F5D8: inc edx
        __asm _emit 0x42
        // 0x5876F5D9: mov esi, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x08
        // 0x5876F5DC: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5876F5DE: jne 0x5876f5a0
        __asm _emit 0x75
        __asm _emit 0xC0
        // 0x5876F5E0: pop ebx
        __asm _emit 0x5B
        // 0x5876F5E1: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x5876F5E3: cmp edi, 1
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x01
        // 0x5876F5E6: jl 0x5876f601
        __asm _emit 0x7C
        __asm _emit 0x19
        // 0x5876F5E8: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5876F5EA: jne 0x5876f5f2
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x5876F5EC: pop edi
        __asm _emit 0x5F
        // 0x5876F5ED: pop esi
        __asm _emit 0x5E
        // 0x5876F5EE: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x5876F5F0: pop ebp
        __asm _emit 0x5D
        // 0x5876F5F1: ret
        __asm _emit 0xC3
        // 0x5876F5F2: cmp ebp, 1
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x01
        // 0x5876F5F5: jl 0x5876f60d
        __asm _emit 0x7C
        __asm _emit 0x16
        // 0x5876F5F7: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5876F5F9: jne 0x5876f601
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x5876F5FB: pop edi
        __asm _emit 0x5F
        // 0x5876F5FC: pop esi
        __asm _emit 0x5E
        // 0x5876F5FD: mov al, 2
        __asm _emit 0xB0
        __asm _emit 0x02
        // 0x5876F5FF: pop ebp
        __asm _emit 0x5D
        // 0x5876F600: ret
        __asm _emit 0xC3
        // 0x5876F601: cmp ebp, 1
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x01
        // 0x5876F604: jl 0x5876f60d
        __asm _emit 0x7C
        __asm _emit 0x07
        // 0x5876F606: cmp edx, 2
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x5876F609: jl 0x5876f60d
        __asm _emit 0x7C
        __asm _emit 0x02
        // 0x5876F60B: mov al, 3
        __asm _emit 0xB0
        __asm _emit 0x03
        // 0x5876F60D: pop edi
        __asm _emit 0x5F
        // 0x5876F60E: pop esi
        __asm _emit 0x5E
        // 0x5876F60F: pop ebp
        __asm _emit 0x5D
        // 0x5876F610: ret
        __asm _emit 0xC3
    }
}
