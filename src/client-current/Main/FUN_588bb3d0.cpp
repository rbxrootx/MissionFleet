// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 99 bytes in 1 exact ranges.
// Source symbol alias: FUN_588bb3d0.

// Ghidra body range 0x588BB3D0..0x588BB433; 99 mapped bytes.
extern "C" __declspec(naked) void FUN_588bb3d0_segment_00() {
    __asm {
        // 0x588BB3D0: push ebp
        __asm _emit 0x55
        // 0x588BB3D1: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x588BB3D3: mov cl, byte ptr [esp + 8]
        __asm _emit 0x8A
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588BB3D7: cmp cl, byte ptr [ebp + 0x13a5]
        __asm _emit 0x3A
        __asm _emit 0x8D
        __asm _emit 0xA5
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB3DD: jae 0x588bb42d
        __asm _emit 0x73
        __asm _emit 0x4E
        // 0x588BB3DF: movzx edx, byte ptr [ebp + 0xa0]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x95
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB3E6: push ebx
        __asm _emit 0x53
        // 0x588BB3E7: push esi
        __asm _emit 0x56
        // 0x588BB3E8: push edi
        __asm _emit 0x57
        // 0x588BB3E9: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588BB3EB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BB3ED: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588BB3EF: jle 0x588bb40c
        __asm _emit 0x7E
        __asm _emit 0x1B
        // 0x588BB3F1: lea esi, [ebp + 0xfa4]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0xA4
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB3F7: cmp dword ptr [esi], 0
        __asm _emit 0x83
        __asm _emit 0x3E
        __asm _emit 0x00
        // 0x588BB3FA: je 0x588bb404
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588BB3FC: movzx ebx, cl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD9
        // 0x588BB3FF: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588BB401: je 0x588bb415
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x588BB403: inc edi
        __asm _emit 0x47
        // 0x588BB404: inc eax
        __asm _emit 0x40
        // 0x588BB405: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588BB408: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x588BB40A: jl 0x588bb3f7
        __asm _emit 0x7C
        __asm _emit 0xEB
        // 0x588BB40C: pop edi
        __asm _emit 0x5F
        // 0x588BB40D: pop esi
        __asm _emit 0x5E
        // 0x588BB40E: pop ebx
        __asm _emit 0x5B
        // 0x588BB40F: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x588BB411: pop ebp
        __asm _emit 0x5D
        // 0x588BB412: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BB415: mov eax, dword ptr [ebp + eax*4 + 0xda4]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0xA4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB41C: mov ax, word ptr [eax + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x5E
        // 0x588BB420: pop edi
        __asm _emit 0x5F
        // 0x588BB421: pop esi
        __asm _emit 0x5E
        // 0x588BB422: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x588BB426: pop ebx
        __asm _emit 0x5B
        // 0x588BB427: xor al, 0xaa
        __asm _emit 0x34
        __asm _emit 0xAA
        // 0x588BB429: pop ebp
        __asm _emit 0x5D
        // 0x588BB42A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BB42D: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x588BB42F: pop ebp
        __asm _emit 0x5D
        // 0x588BB430: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
