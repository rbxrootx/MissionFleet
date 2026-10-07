// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 178 bytes in 2 exact ranges.
// Source symbol alias: FUN_5882c3d0.

// Ghidra body range 0x5882C3D0..0x5882C3ED; 29 mapped bytes.
extern "C" __declspec(naked) void FUN_5882c3d0_segment_00() {
    __asm {
        // 0x5882C3D0: push ebx
        __asm _emit 0x53
        // 0x5882C3D1: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x5882C3D3: cmp dword ptr [ebx + 0x170], 0
        __asm _emit 0x83
        __asm _emit 0xBB
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C3DA: je 0x5882c483
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C3E0: push ebp
        __asm _emit 0x55
        // 0x5882C3E1: push esi
        __asm _emit 0x56
        // 0x5882C3E2: push edi
        __asm _emit 0x57
        // 0x5882C3E3: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5882C3E5: lea esi, [ebx + 0xa0]
        __asm _emit 0x8D
        __asm _emit 0xB3
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C3EB: jmp 0x5882c3f0
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x5882C3F0..0x5882C485; 149 mapped bytes.
extern "C" __declspec(naked) void FUN_5882c3d0_segment_01() {
    __asm {
        // 0x5882C3F0: mov ecx, dword ptr [ebx + 0x114]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C3F6: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0xBD
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882C3FB: mov ecx, dword ptr [ebx + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C401: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5882C403: add edi, ebp
        __asm _emit 0x03
        __asm _emit 0xFD
        // 0x5882C405: call 0x587860f0
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0x9C
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882C40A: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x5882C40C: jae 0x5882c458
        __asm _emit 0x73
        __asm _emit 0x4A
        // 0x5882C40E: mov ecx, dword ptr [ebx + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C414: call 0x587864a0
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0xA0
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882C419: cmp byte ptr [eax + edi*4], 0
        __asm _emit 0x80
        __asm _emit 0x3C
        __asm _emit 0xB8
        __asm _emit 0x00
        // 0x5882C41D: je 0x5882c443
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x5882C41F: mov ecx, dword ptr [ebx + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C425: call 0x587864a0
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0xA0
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882C42A: cmp word ptr [eax + edi*4 + 2], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5882C430: je 0x5882c443
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5882C432: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5882C434: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x5882C439: mov eax, dword ptr [esi - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0xF4
        // 0x5882C43C: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C441: jmp 0x5882c46f
        __asm _emit 0xEB
        __asm _emit 0x2C
        // 0x5882C443: mov eax, dword ptr [esi - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0xF4
        // 0x5882C446: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x5882C44B: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5882C44D: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C452: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5882C456: jmp 0x5882c473
        __asm _emit 0xEB
        __asm _emit 0x1B
        // 0x5882C458: mov eax, dword ptr [esi - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0xF4
        // 0x5882C45B: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882C460: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5882C464: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5882C466: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5882C468: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5882C46C: mov eax, dword ptr [esi + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5882C46F: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5882C473: inc ebp
        __asm _emit 0x45
        // 0x5882C474: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5882C477: cmp ebp, 3
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x03
        // 0x5882C47A: jl 0x5882c3f0
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x70
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882C480: pop edi
        __asm _emit 0x5F
        // 0x5882C481: pop esi
        __asm _emit 0x5E
        // 0x5882C482: pop ebp
        __asm _emit 0x5D
        // 0x5882C483: pop ebx
        __asm _emit 0x5B
        // 0x5882C484: ret
        __asm _emit 0xC3
    }
}
