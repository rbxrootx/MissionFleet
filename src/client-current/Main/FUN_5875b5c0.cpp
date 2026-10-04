// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5875B5C0 .. +0x18E bytes.
// Source symbol alias: FUN_5875b5c0.
extern "C" __declspec(naked) void FUN_5875b5c0() {
    __asm {
        // 0x5875B5C0: push ecx
        __asm _emit 0x51
        // 0x5875B5C1: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5875B5C5: push ebx
        __asm _emit 0x53
        // 0x5875B5C6: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x5875B5C8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5875B5CA: jne 0x5875b5d7
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x5875B5CC: cmp dword ptr [ebx + 0x2c], eax
        __asm _emit 0x39
        __asm _emit 0x43
        __asm _emit 0x2C
        // 0x5875B5CF: je 0x5875b74c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x77
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875B5D5: jmp 0x5875b5dd
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x5875B5D7: push eax
        __asm _emit 0x50
        // 0x5875B5D8: call 0x5875b090
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5875B5DD: cmp dword ptr [ebx + 0x2c], 0
        __asm _emit 0x83
        __asm _emit 0x7B
        __asm _emit 0x2C
        __asm _emit 0x00
        // 0x5875B5E1: je 0x5875b74c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875B5E7: push esi
        __asm _emit 0x56
        // 0x5875B5E8: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5875B5EC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5875B5EE: push edi
        __asm _emit 0x57
        // 0x5875B5EF: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5875B5F3: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5875B5F5: jbe 0x5875b630
        __asm _emit 0x76
        __asm _emit 0x39
        // 0x5875B5F7: mov cl, byte ptr [esp + 0x18]
        __asm _emit 0x8A
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5875B5FB: jmp 0x5875b600
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x5875B5FD: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x5875B600: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5875B602: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x5875B605: cmp edx, 3
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x03
        // 0x5875B608: ja 0x5875b623
        __asm _emit 0x77
        __asm _emit 0x19
        // 0x5875B60A: jmp dword ptr [edx*4 + 0x5875b754]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x54
        __asm _emit 0xB7
        __asm _emit 0x75
        __asm _emit 0x58
        // 0x5875B611: mov cl, byte ptr [ebx + 0x29]
        __asm _emit 0x8A
        __asm _emit 0x4B
        __asm _emit 0x29
        // 0x5875B614: jmp 0x5875b623
        __asm _emit 0xEB
        __asm _emit 0x0D
        // 0x5875B616: mov cl, byte ptr [ebx + 0x2b]
        __asm _emit 0x8A
        __asm _emit 0x4B
        __asm _emit 0x2B
        // 0x5875B619: jmp 0x5875b623
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x5875B61B: mov cl, byte ptr [ebx + 0x28]
        __asm _emit 0x8A
        __asm _emit 0x4B
        __asm _emit 0x28
        // 0x5875B61E: jmp 0x5875b623
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x5875B620: mov cl, byte ptr [ebx + 0x2a]
        __asm _emit 0x8A
        __asm _emit 0x4B
        __asm _emit 0x2A
        // 0x5875B623: mov dl, cl
        __asm _emit 0x8A
        __asm _emit 0xD1
        // 0x5875B625: add dl, 7
        __asm _emit 0x80
        __asm _emit 0xC2
        __asm _emit 0x07
        // 0x5875B628: xor byte ptr [eax + edi], dl
        __asm _emit 0x30
        __asm _emit 0x14
        __asm _emit 0x38
        // 0x5875B62B: inc eax
        __asm _emit 0x40
        // 0x5875B62C: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x5875B62E: jb 0x5875b600
        __asm _emit 0x72
        __asm _emit 0xD0
        // 0x5875B630: cmp esi, 3
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x03
        // 0x5875B633: jle 0x5875b64d
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x5875B635: lea ecx, [esi + esi]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x36
        // 0x5875B638: mov eax, 0x55555556
        __asm _emit 0xB8
        __asm _emit 0x56
        __asm _emit 0x55
        __asm _emit 0x55
        __asm _emit 0x55
        // 0x5875B63D: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5875B63F: mov cl, byte ptr [ebx + 0x26]
        __asm _emit 0x8A
        __asm _emit 0x4B
        __asm _emit 0x26
        // 0x5875B642: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5875B644: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5875B647: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5875B649: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5875B64B: xor byte ptr [eax], cl
        __asm _emit 0x30
        __asm _emit 0x08
        // 0x5875B64D: cmp esi, 2
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x02
        // 0x5875B650: jle 0x5875b660
        __asm _emit 0x7E
        __asm _emit 0x0E
        // 0x5875B652: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5875B654: cdq
        __asm _emit 0x99
        // 0x5875B655: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5875B657: mov dl, byte ptr [ebx + 0x25]
        __asm _emit 0x8A
        __asm _emit 0x53
        __asm _emit 0x25
        // 0x5875B65A: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x5875B65C: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x5875B65E: xor byte ptr [eax], dl
        __asm _emit 0x30
        __asm _emit 0x10
        // 0x5875B660: mov al, byte ptr [ebx + 0x24]
        __asm _emit 0x8A
        __asm _emit 0x43
        __asm _emit 0x24
        // 0x5875B663: xor byte ptr [edi], al
        __asm _emit 0x30
        __asm _emit 0x07
        // 0x5875B665: mov eax, dword ptr [ebx + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x24
        // 0x5875B668: push ebp
        __asm _emit 0x55
        // 0x5875B669: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5875B66B: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5875B66D: mov ecx, 0x1b
        __asm _emit 0xB9
        __asm _emit 0x1B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875B672: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5875B674: div ecx
        __asm _emit 0xF7
        __asm _emit 0xF1
        // 0x5875B676: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5875B67A: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5875B67E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5875B680: movzx eax, byte ptr [ebx + ebp + 4]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x44
        __asm _emit 0x2B
        __asm _emit 0x04
        // 0x5875B685: mov ecx, dword ptr [ebx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x30
        // 0x5875B688: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5875B68A: mov edx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x04
        // 0x5875B68D: add eax, esi
        __asm _emit 0x03
        __asm _emit 0xC6
        // 0x5875B68F: add eax, dword ptr [esp + 0x1c]
        __asm _emit 0x03
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5875B693: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5875B695: push eax
        __asm _emit 0x50
        // 0x5875B696: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5875B698: movzx eax, byte ptr [ebx + ebp + 4]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x44
        __asm _emit 0x2B
        __asm _emit 0x04
        // 0x5875B69D: and eax, 0x80000fff
        __asm _emit 0x25
        __asm _emit 0xFF
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x5875B6A2: mov dword ptr [esp + 0x18], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875B6AA: jns 0x5875b6b3
        __asm _emit 0x79
        __asm _emit 0x07
        // 0x5875B6AC: dec eax
        __asm _emit 0x48
        // 0x5875B6AD: or eax, 0xfffff000
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5875B6B2: inc eax
        __asm _emit 0x40
        // 0x5875B6B3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5875B6B5: jle 0x5875b724
        __asm _emit 0x7E
        __asm _emit 0x6D
        // 0x5875B6B7: mov ebp, esi
        __asm _emit 0x8B
        __asm _emit 0xEE
        // 0x5875B6B9: imul ebp, ebp, 0xd
        __asm _emit 0x6B
        __asm _emit 0xED
        __asm _emit 0x0D
        // 0x5875B6BC: add ebp, dword ptr [esp + 0x10]
        __asm _emit 0x03
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5875B6C0: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5875B6C4: and ecx, 0x8000001f
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x5875B6CA: jns 0x5875b6d1
        __asm _emit 0x79
        __asm _emit 0x05
        // 0x5875B6CC: dec ecx
        __asm _emit 0x49
        // 0x5875B6CD: or ecx, 0xffffffe0
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0xE0
        // 0x5875B6D0: inc ecx
        __asm _emit 0x41
        // 0x5875B6D1: mov dl, byte ptr [ecx + ebx + 4]
        __asm _emit 0x8A
        __asm _emit 0x54
        __asm _emit 0x19
        __asm _emit 0x04
        // 0x5875B6D5: xor byte ptr [esi + edi], dl
        __asm _emit 0x30
        __asm _emit 0x14
        __asm _emit 0x3E
        // 0x5875B6D8: mov ecx, dword ptr [ebx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x30
        // 0x5875B6DB: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x5875B6DD: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5875B6DF: div dword ptr [ecx + 4]
        __asm _emit 0xF7
        __asm _emit 0x71
        __asm _emit 0x04
        // 0x5875B6E2: mov eax, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5875B6E5: inc esi
        __asm _emit 0x46
        // 0x5875B6E6: add ebp, 0xd
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x0D
        // 0x5875B6E9: mov cl, byte ptr [eax + edx*4]
        __asm _emit 0x8A
        __asm _emit 0x0C
        __asm _emit 0x90
        // 0x5875B6EC: xor cl, byte ptr [esi + edi - 1]
        __asm _emit 0x32
        __asm _emit 0x4C
        __asm _emit 0x3E
        __asm _emit 0xFF
        // 0x5875B6F0: mov byte ptr [esi + edi - 1], cl
        __asm _emit 0x88
        __asm _emit 0x4C
        __asm _emit 0x3E
        __asm _emit 0xFF
        // 0x5875B6F4: cmp esi, dword ptr [esp + 0x1c]
        __asm _emit 0x3B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5875B6F8: jae 0x5875b749
        __asm _emit 0x73
        __asm _emit 0x4F
        // 0x5875B6FA: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5875B6FE: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5875B702: movzx ecx, byte ptr [edx + ebx + 4]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x4C
        __asm _emit 0x1A
        __asm _emit 0x04
        // 0x5875B707: inc eax
        __asm _emit 0x40
        // 0x5875B708: and ecx, 0x80000fff
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x5875B70E: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5875B712: jns 0x5875b71c
        __asm _emit 0x79
        __asm _emit 0x08
        // 0x5875B714: dec ecx
        __asm _emit 0x49
        // 0x5875B715: or ecx, 0xfffff000
        __asm _emit 0x81
        __asm _emit 0xC9
        __asm _emit 0x00
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5875B71B: inc ecx
        __asm _emit 0x41
        // 0x5875B71C: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x5875B71E: jl 0x5875b6c0
        __asm _emit 0x7C
        __asm _emit 0xA0
        // 0x5875B720: mov ebp, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5875B724: cmp esi, dword ptr [esp + 0x1c]
        __asm _emit 0x3B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5875B728: jae 0x5875b749
        __asm _emit 0x73
        __asm _emit 0x1F
        // 0x5875B72A: inc ebp
        __asm _emit 0x45
        // 0x5875B72B: mov dword ptr [esp + 0x20], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5875B72F: cmp ebp, 0x20
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x20
        // 0x5875B732: jne 0x5875b680
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x48
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5875B738: mov dword ptr [esp + 0x20], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875B740: mov ebp, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5875B744: jmp 0x5875b680
        __asm _emit 0xE9
        __asm _emit 0x37
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5875B749: pop ebp
        __asm _emit 0x5D
        // 0x5875B74A: pop edi
        __asm _emit 0x5F
        // 0x5875B74B: pop esi
        __asm _emit 0x5E
        // 0x5875B74C: pop ebx
        __asm _emit 0x5B
        // 0x5875B74D: pop ecx
        __asm _emit 0x59
    }
}
