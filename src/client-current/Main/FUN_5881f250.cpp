// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 156 bytes in 1 exact ranges.
// Source symbol alias: FUN_5881f250.

// Ghidra body range 0x5881F250..0x5881F2EC; 156 mapped bytes.
extern "C" __declspec(naked) void FUN_5881f250_segment_00() {
    __asm {
        // 0x5881F250: push ebx
        __asm _emit 0x53
        // 0x5881F251: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5881F253: push esi
        __asm _emit 0x56
        // 0x5881F254: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5881F256: mov eax, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F25C: mov dword ptr [esi + 0xcc], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F262: mov dword ptr [esi + 0x60], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x60
        // 0x5881F265: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x5881F268: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F26E: mov dword ptr [ecx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x50
        // 0x5881F271: mov edx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F277: mov dword ptr [edx + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x50
        // 0x5881F27A: mov eax, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F280: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x5881F283: mov eax, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F289: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F28E: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5881F292: mov eax, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F298: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5881F29A: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5881F29E: mov eax, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F2A4: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5881F2A8: mov eax, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F2AE: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5881F2B2: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F2B8: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5881F2BD: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0x2A
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x5881F2C2: mov eax, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F2C8: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F2CD: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5881F2D1: push 0x400
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F2D6: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5881F2D8: mov byte ptr [esi + 0x9c], bl
        __asm _emit 0x88
        __asm _emit 0x9E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F2DE: mov byte ptr [esi + 0xd0], bl
        __asm _emit 0x88
        __asm _emit 0x9E
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5881F2E4: call 0x5881e430
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0xF1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5881F2E9: pop esi
        __asm _emit 0x5E
        // 0x5881F2EA: pop ebx
        __asm _emit 0x5B
        // 0x5881F2EB: ret
        __asm _emit 0xC3
    }
}
