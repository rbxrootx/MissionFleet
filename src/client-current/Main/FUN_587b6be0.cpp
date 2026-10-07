// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B6BE0 .. +0x74 bytes.
// Source symbol alias: FUN_587b6be0.
extern "C" __declspec(naked) void FUN_587b6be0() {
    __asm {
        // 0x587B6BE0: mov eax, dword ptr [ecx + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x78
        // 0x587B6BE3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587B6BE5: jne 0x587b6c24
        __asm _emit 0x75
        __asm _emit 0x3D
        // 0x587B6BE7: mov al, byte ptr [ecx + 0x61]
        __asm _emit 0x8A
        __asm _emit 0x41
        __asm _emit 0x61
        // 0x587B6BEA: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x587B6BEC: jne 0x587b6c07
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x587B6BEE: mov edx, dword ptr [ecx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x64
        // 0x587B6BF1: mov eax, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x6C
        // 0x587B6BF4: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587B6BF6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587B6BF8: jle 0x587b6c53
        __asm _emit 0x7E
        __asm _emit 0x59
        // 0x587B6BFA: add eax, dword ptr [ecx + 4]
        __asm _emit 0x03
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x587B6BFD: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587B6BFF: jle 0x587b6c03
        __asm _emit 0x7E
        __asm _emit 0x02
        // 0x587B6C01: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587B6C03: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587B6C06: ret
        __asm _emit 0xC3
        // 0x587B6C07: cmp al, 2
        __asm _emit 0x3C
        __asm _emit 0x02
        // 0x587B6C09: jne 0x587b6c53
        __asm _emit 0x75
        __asm _emit 0x48
        // 0x587B6C0B: mov edx, dword ptr [ecx + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x68
        // 0x587B6C0E: mov eax, dword ptr [ecx + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x70
        // 0x587B6C11: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587B6C13: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587B6C15: jle 0x587b6c53
        __asm _emit 0x7E
        __asm _emit 0x3C
        // 0x587B6C17: add eax, dword ptr [ecx + 8]
        __asm _emit 0x03
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x587B6C1A: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587B6C1C: jle 0x587b6c20
        __asm _emit 0x7E
        __asm _emit 0x02
        // 0x587B6C1E: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587B6C20: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x587B6C23: ret
        __asm _emit 0xC3
        // 0x587B6C24: mov dl, byte ptr [ecx + 0x61]
        __asm _emit 0x8A
        __asm _emit 0x51
        __asm _emit 0x61
        // 0x587B6C27: push esi
        __asm _emit 0x56
        // 0x587B6C28: cmp dl, 1
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x01
        // 0x587B6C2B: jne 0x587b6c3e
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x587B6C2D: mov esi, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x04
        // 0x587B6C30: mov edx, dword ptr [ecx + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x7C
        // 0x587B6C33: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xF0
        // 0x587B6C35: cmp esi, edx
        __asm _emit 0x3B
        __asm _emit 0xF2
        // 0x587B6C37: jl 0x587b6c52
        __asm _emit 0x7C
        __asm _emit 0x19
        // 0x587B6C39: mov dword ptr [ecx + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x50
        // 0x587B6C3C: pop esi
        __asm _emit 0x5E
        // 0x587B6C3D: ret
        __asm _emit 0xC3
        // 0x587B6C3E: cmp dl, 2
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x587B6C41: jne 0x587b6c52
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x587B6C43: mov esi, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x08
        // 0x587B6C46: mov edx, dword ptr [ecx + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x7C
        // 0x587B6C49: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xF0
        // 0x587B6C4B: cmp esi, edx
        __asm _emit 0x3B
        __asm _emit 0xF2
        // 0x587B6C4D: jl 0x587b6c52
        __asm _emit 0x7C
        __asm _emit 0x03
        // 0x587B6C4F: mov dword ptr [ecx + 0x54], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x54
        // 0x587B6C52: pop esi
        __asm _emit 0x5E
        // 0x587B6C53: ret
        __asm _emit 0xC3
    }
}
