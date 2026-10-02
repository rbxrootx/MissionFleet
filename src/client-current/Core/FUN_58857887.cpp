// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58857887 .. +0xC4 bytes.
extern "C" __declspec(naked) void FUN_58857887() {
    __asm {
        // 0x58857887: push 0x14
        __asm _emit 0x6A
        __asm _emit 0x14
        // 0x58857889: push 0x588ed100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0xD1
        __asm _emit 0x8E
        __asm _emit 0x58
        // 0x5885788E: call 0x58832760
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0xAE
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x58857893: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58857895: cmp byte ptr [0x5896960c], 0
        __asm _emit 0x80
        __asm _emit 0x3D
        __asm _emit 0x0C
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x5885789C: jne 0x5885793b
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588578A2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588578A4: inc eax
        __asm _emit 0x40
        // 0x588578A5: mov ecx, 0x58969604
        __asm _emit 0xB9
        __asm _emit 0x04
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x588578AA: xchg dword ptr [ecx], eax
        __asm _emit 0x87
        __asm _emit 0x01
        // 0x588578AC: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588578AE: mov dword ptr [ebp - 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0xFC
        // 0x588578B1: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x588578B3: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x588578B5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588578B7: jne 0x588578e8
        __asm _emit 0x75
        __asm _emit 0x2F
        // 0x588578B9: mov eax, dword ptr [0x58906040]
        __asm _emit 0xA1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x588578BE: mov dword ptr [ebp - 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xE0
        // 0x588578C1: mov ecx, dword ptr [0x58969608]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x08
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x588578C7: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588578C9: je 0x588578e1
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x588578CB: push ecx
        __asm _emit 0x51
        // 0x588578CC: call 0x5885786c
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588578D1: pop ecx
        __asm _emit 0x59
        // 0x588578D2: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x588578D4: push ebx
        __asm _emit 0x53
        // 0x588578D5: push ebx
        __asm _emit 0x53
        // 0x588578D6: push ebx
        __asm _emit 0x53
        // 0x588578D7: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588578D9: call dword ptr [0x5889459c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x588578DF: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x588578E1: push 0x589698a8
        __asm _emit 0x68
        __asm _emit 0xA8
        __asm _emit 0x98
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x588578E6: jmp 0x588578f2
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x588578E8: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x588578EB: jne 0x588578f8
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x588578ED: push 0x589698b4
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0x98
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x588578F2: call 0x58865c2b
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0xE3
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588578F7: pop ecx
        __asm _emit 0x59
        // 0x588578F8: mov dword ptr [ebp - 4], 0xfffffffe
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588578FF: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58857901: cmp dword ptr [eax], ebx
        __asm _emit 0x39
        __asm _emit 0x18
        // 0x58857903: jne 0x58857916
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x58857905: push 0x5889466c
        __asm _emit 0x68
        __asm _emit 0x6C
        __asm _emit 0x46
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x5885790A: push 0x5889465c
        __asm _emit 0x68
        __asm _emit 0x5C
        __asm _emit 0x46
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x5885790F: call 0x58865e63
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857914: pop ecx
        __asm _emit 0x59
        // 0x58857915: pop ecx
        __asm _emit 0x59
        // 0x58857916: push 0x58894674
        __asm _emit 0x68
        __asm _emit 0x74
        __asm _emit 0x46
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x5885791B: push 0x58894670
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x46
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x58857920: call 0x58865e63
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857925: pop ecx
        __asm _emit 0x59
        // 0x58857926: pop ecx
        __asm _emit 0x59
        // 0x58857927: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x5885792A: cmp dword ptr [eax], ebx
        __asm _emit 0x39
        __asm _emit 0x18
        // 0x5885792C: jne 0x5885793b
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x5885792E: mov byte ptr [0x5896960c], 1
        __asm _emit 0xC6
        __asm _emit 0x05
        __asm _emit 0x0C
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        // 0x58857935: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x58857938: mov byte ptr [eax], 1
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x5885793B: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF0
        // 0x5885793E: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58857945: pop ecx
        __asm _emit 0x59
        // 0x58857946: pop edi
        __asm _emit 0x5F
        // 0x58857947: pop esi
        __asm _emit 0x5E
        // 0x58857948: pop ebx
        __asm _emit 0x5B
        // 0x58857949: leave
        __asm _emit 0xC9
        // 0x5885794A: ret
        __asm _emit 0xC3
    }
}
