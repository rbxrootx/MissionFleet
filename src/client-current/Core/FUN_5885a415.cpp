// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885A415 .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_5885a415() {
    __asm {
        // 0x5885A415: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885A417: push ebp
        __asm _emit 0x55
        // 0x5885A418: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885A41A: push ebx
        __asm _emit 0x53
        // 0x5885A41B: mov ebx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0x08
        // 0x5885A41E: sub ebx, dword ptr [ebp + 0x10]
        __asm _emit 0x2B
        __asm _emit 0x5D
        __asm _emit 0x10
        // 0x5885A421: push esi
        __asm _emit 0x56
        // 0x5885A422: push edi
        __asm _emit 0x57
        // 0x5885A423: mov edi, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x0C
        // 0x5885A426: sbb edi, dword ptr [ebp + 0x14]
        __asm _emit 0x1B
        __asm _emit 0x7D
        __asm _emit 0x14
        // 0x5885A429: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5885A42B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885A42D: inc ecx
        __asm _emit 0x41
        // 0x5885A42E: cmp dword ptr [ebp + 0xc], eax
        __asm _emit 0x39
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x5885A431: jg 0x5885a43e
        __asm _emit 0x7F
        __asm _emit 0x0B
        // 0x5885A433: jl 0x5885a43a
        __asm _emit 0x7C
        __asm _emit 0x05
        // 0x5885A435: cmp dword ptr [ebp + 8], eax
        __asm _emit 0x39
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5885A438: jae 0x5885a43e
        __asm _emit 0x73
        __asm _emit 0x04
        // 0x5885A43A: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5885A43C: jmp 0x5885a440
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5885A43E: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5885A440: cmp dword ptr [ebp + 0x14], eax
        __asm _emit 0x39
        __asm _emit 0x45
        __asm _emit 0x14
        // 0x5885A443: jg 0x5885a450
        __asm _emit 0x7F
        __asm _emit 0x0B
        // 0x5885A445: jl 0x5885a44c
        __asm _emit 0x7C
        __asm _emit 0x05
        // 0x5885A447: cmp dword ptr [ebp + 0x10], eax
        __asm _emit 0x39
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x5885A44A: jae 0x5885a450
        __asm _emit 0x73
        __asm _emit 0x04
        // 0x5885A44C: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5885A44E: jmp 0x5885a452
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5885A450: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5885A452: cmp esi, edx
        __asm _emit 0x3B
        __asm _emit 0xF2
        // 0x5885A454: je 0x5885a488
        __asm _emit 0x74
        __asm _emit 0x32
        // 0x5885A456: cmp dword ptr [ebp + 0xc], eax
        __asm _emit 0x39
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x5885A459: jg 0x5885a466
        __asm _emit 0x7F
        __asm _emit 0x0B
        // 0x5885A45B: jl 0x5885a462
        __asm _emit 0x7C
        __asm _emit 0x05
        // 0x5885A45D: cmp dword ptr [ebp + 8], eax
        __asm _emit 0x39
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5885A460: jae 0x5885a466
        __asm _emit 0x73
        __asm _emit 0x04
        // 0x5885A462: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5885A464: jmp 0x5885a468
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5885A466: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5885A468: or edx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCA
        __asm _emit 0xFF
        // 0x5885A46B: cmp edi, 0x7fffffff
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5885A471: jb 0x5885a479
        __asm _emit 0x72
        __asm _emit 0x06
        // 0x5885A473: ja 0x5885a47b
        __asm _emit 0x77
        __asm _emit 0x06
        // 0x5885A475: cmp ebx, edx
        __asm _emit 0x3B
        __asm _emit 0xDA
        // 0x5885A477: ja 0x5885a47b
        __asm _emit 0x77
        __asm _emit 0x02
        // 0x5885A479: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5885A47B: cmp esi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF1
        // 0x5885A47D: je 0x5885a488
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5885A47F: mov eax, 0x80070216
        __asm _emit 0xB8
        __asm _emit 0x16
        __asm _emit 0x02
        __asm _emit 0x07
        __asm _emit 0x80
        // 0x5885A484: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x5885A486: jmp 0x5885a48a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5885A488: mov edx, ebx
        __asm _emit 0x8B
        __asm _emit 0xD3
        // 0x5885A48A: mov ecx, dword ptr [ebp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x18
        // 0x5885A48D: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5885A48F: mov dword ptr [ecx + 4], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x04
        // 0x5885A492: pop edi
        __asm _emit 0x5F
        // 0x5885A493: pop esi
        __asm _emit 0x5E
        // 0x5885A494: pop ebx
        __asm _emit 0x5B
        // 0x5885A495: pop ebp
        __asm _emit 0x5D
        // 0x5885A496: ret
        __asm _emit 0xC3
    }
}
