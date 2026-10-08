// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 401 bytes in 1 exact ranges.
// Source symbol alias: FUN_58827070.

// Ghidra body range 0x58827070..0x58827201; 401 mapped bytes.
extern "C" __declspec(naked) void FUN_58827070_segment_00() {
    __asm {
        // 0x58827070: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58827074: push ebx
        __asm _emit 0x53
        // 0x58827075: push ebp
        __asm _emit 0x55
        // 0x58827076: push esi
        __asm _emit 0x56
        // 0x58827077: push edi
        __asm _emit 0x57
        // 0x58827078: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5882707A: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x5882707D: jne 0x5882716a
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827083: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58827087: cmp ebx, dword ptr [esi + 0x25c]
        __asm _emit 0x3B
        __asm _emit 0x9E
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882708D: jne 0x588270ad
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x5882708F: mov al, byte ptr [esi + 0x26c]
        __asm _emit 0x8A
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827095: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x58827097: jbe 0x588270a1
        __asm _emit 0x76
        __asm _emit 0x08
        // 0x58827099: dec al
        __asm _emit 0xFE
        __asm _emit 0xC8
        // 0x5882709B: mov byte ptr [esi + 0x26c], al
        __asm _emit 0x88
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588270A1: call 0x58826f60
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588270A6: pop edi
        __asm _emit 0x5F
        // 0x588270A7: pop esi
        __asm _emit 0x5E
        // 0x588270A8: pop ebp
        __asm _emit 0x5D
        // 0x588270A9: pop ebx
        __asm _emit 0x5B
        // 0x588270AA: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588270AD: cmp ebx, dword ptr [esi + 0x260]
        __asm _emit 0x3B
        __asm _emit 0x9E
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588270B3: jne 0x588270e2
        __asm _emit 0x75
        __asm _emit 0x2D
        // 0x588270B5: mov al, byte ptr [esi + 0x26c]
        __asm _emit 0x8A
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588270BB: movzx ecx, byte ptr [esi + 0x264]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x8E
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588270C2: movzx edx, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD0
        // 0x588270C5: sub ecx, 2
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x02
        // 0x588270C8: cmp edx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x588270CA: jge 0x588270d4
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x588270CC: inc al
        __asm _emit 0xFE
        __asm _emit 0xC0
        // 0x588270CE: mov byte ptr [esi + 0x26c], al
        __asm _emit 0x88
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588270D4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588270D6: call 0x58826f60
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588270DB: pop edi
        __asm _emit 0x5F
        // 0x588270DC: pop esi
        __asm _emit 0x5E
        // 0x588270DD: pop ebp
        __asm _emit 0x5D
        // 0x588270DE: pop ebx
        __asm _emit 0x5B
        // 0x588270DF: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588270E2: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588270E4: lea ebp, [esi + 0x250]
        __asm _emit 0x8D
        __asm _emit 0xAE
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588270EA: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588270F0: cmp ebx, dword ptr [ebp - 8]
        __asm _emit 0x3B
        __asm _emit 0x5D
        __asm _emit 0xF8
        // 0x588270F3: jne 0x58827120
        __asm _emit 0x75
        __asm _emit 0x2B
        // 0x588270F5: movzx eax, byte ptr [esi + 0x26c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588270FC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588270FE: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x58827100: mov dword ptr [esi + 0x278], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827106: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882710C: lea eax, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x40
        // 0x5882710F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58827111: lea edx, [ecx + eax*8 + 0xfc0]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827118: push edx
        __asm _emit 0x52
        // 0x58827119: push 0x140
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882711E: jmp 0x5882714e
        __asm _emit 0xEB
        __asm _emit 0x2E
        // 0x58827120: cmp ebx, dword ptr [ebp]
        __asm _emit 0x3B
        __asm _emit 0x5D
        __asm _emit 0x00
        // 0x58827123: jne 0x5882715a
        __asm _emit 0x75
        __asm _emit 0x35
        // 0x58827125: movzx eax, byte ptr [esi + 0x26c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882712C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882712E: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x58827130: mov dword ptr [esi + 0x278], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827136: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882713C: lea eax, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x40
        // 0x5882713F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58827141: lea edx, [ecx + eax*8 + 0xfc0]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0xC1
        __asm _emit 0xC0
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827148: push edx
        __asm _emit 0x52
        // 0x58827149: push 0x141
        __asm _emit 0x68
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882714E: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0x49
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58827153: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58827155: call 0x5876a570
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0x34
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5882715A: inc edi
        __asm _emit 0x47
        // 0x5882715B: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x5882715E: cmp edi, 2
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x02
        // 0x58827161: jl 0x588270f0
        __asm _emit 0x7C
        __asm _emit 0x8D
        // 0x58827163: pop edi
        __asm _emit 0x5F
        // 0x58827164: pop esi
        __asm _emit 0x5E
        // 0x58827165: pop ebp
        __asm _emit 0x5D
        // 0x58827166: pop ebx
        __asm _emit 0x5B
        // 0x58827167: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5882716A: cmp eax, 0xf230
        __asm _emit 0x3D
        __asm _emit 0x30
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882716F: jne 0x588271fa
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827175: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882717B: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5882717F: cmp eax, dword ptr [ecx + 0xdc]
        __asm _emit 0x3B
        __asm _emit 0x81
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827185: jne 0x588271fa
        __asm _emit 0x75
        __asm _emit 0x73
        // 0x58827187: mov ebx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5882718B: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5882718D: lea ebp, [esi + 0x250]
        __asm _emit 0x8D
        __asm _emit 0xAE
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827193: mov eax, dword ptr [esi + 0x278]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827199: cmp eax, dword ptr [ebp - 8]
        __asm _emit 0x3B
        __asm _emit 0x45
        __asm _emit 0xF8
        // 0x5882719C: jne 0x588271b5
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x5882719E: movzx eax, byte ptr [esi + 0x26c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588271A5: lea edx, [eax + edi]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x38
        // 0x588271A8: mov edx, dword ptr [ecx + edx*4 + 0xf20]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x91
        __asm _emit 0x20
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588271AF: push ebx
        __asm _emit 0x53
        // 0x588271B0: push edx
        __asm _emit 0x52
        // 0x588271B1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588271B3: jmp 0x588271cf
        __asm _emit 0xEB
        __asm _emit 0x1A
        // 0x588271B5: cmp eax, dword ptr [ebp]
        __asm _emit 0x3B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x588271B8: jne 0x588271f1
        __asm _emit 0x75
        __asm _emit 0x37
        // 0x588271BA: movzx eax, byte ptr [esi + 0x26c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588271C1: lea edx, [eax + edi]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x38
        // 0x588271C4: mov edx, dword ptr [ecx + edx*4 + 0xf20]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x91
        __asm _emit 0x20
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588271CB: push ebx
        __asm _emit 0x53
        // 0x588271CC: push edx
        __asm _emit 0x52
        // 0x588271CD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588271CF: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x588271D1: movzx ax, byte ptr [eax + edi + 0xfa0]
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x84
        __asm _emit 0x38
        __asm _emit 0xA0
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588271DA: dec ax
        __asm _emit 0x66
        __asm _emit 0x48
        // 0x588271DC: movzx ecx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC8
        // 0x588271DF: push ecx
        __asm _emit 0x51
        // 0x588271E0: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588271E6: call 0x587b9cb0
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0x2A
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x588271EB: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588271F1: inc edi
        __asm _emit 0x47
        // 0x588271F2: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x588271F5: cmp edi, 2
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x02
        // 0x588271F8: jl 0x58827193
        __asm _emit 0x7C
        __asm _emit 0x99
        // 0x588271FA: pop edi
        __asm _emit 0x5F
        // 0x588271FB: pop esi
        __asm _emit 0x5E
        // 0x588271FC: pop ebp
        __asm _emit 0x5D
        // 0x588271FD: pop ebx
        __asm _emit 0x5B
        // 0x588271FE: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
