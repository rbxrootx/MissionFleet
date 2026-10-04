// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588AEEF0 .. +0x91 bytes.
// Source symbol alias: FUN_588aeef0.
extern "C" __declspec(naked) void FUN_588aeef0() {
    __asm {
        // 0x588AEEF0: push ebx
        __asm _emit 0x53
        // 0x588AEEF1: push ebp
        __asm _emit 0x55
        // 0x588AEEF2: push esi
        __asm _emit 0x56
        // 0x588AEEF3: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588AEEF7: push edi
        __asm _emit 0x57
        // 0x588AEEF8: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x588AEEFA: mov ecx, dword ptr [ebp + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x68
        // 0x588AEEFD: push esi
        __asm _emit 0x56
        // 0x588AEEFE: call 0x58902e60
        __asm _emit 0xE8
        __asm _emit 0x5D
        __asm _emit 0x3F
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AEF03: mov ecx, dword ptr [ebp + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AEF09: push esi
        __asm _emit 0x56
        // 0x588AEF0A: call 0x58902e60
        __asm _emit 0xE8
        __asm _emit 0x51
        __asm _emit 0x3F
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AEF0F: cmp byte ptr [esp + 0x18], 1
        __asm _emit 0x80
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x01
        // 0x588AEF14: jne 0x588aef1f
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x588AEF16: mov ecx, dword ptr [ebp + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x70
        // 0x588AEF19: push esi
        __asm _emit 0x56
        // 0x588AEF1A: call 0x58902e60
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0x3F
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AEF1F: lea edi, [ebp + 0x20f8]
        __asm _emit 0x8D
        __asm _emit 0xBD
        __asm _emit 0xF8
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AEF25: mov ebx, 0x64
        __asm _emit 0xBB
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AEF2A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AEF30: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588AEF32: push esi
        __asm _emit 0x56
        // 0x588AEF33: call 0x58902e60
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0x3F
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AEF38: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588AEF3B: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x588AEF3E: jne 0x588aef30
        __asm _emit 0x75
        __asm _emit 0xF0
        // 0x588AEF40: lea edi, [ebp + 0x8c]
        __asm _emit 0x8D
        __asm _emit 0xBD
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AEF46: mov ebx, 8
        __asm _emit 0xBB
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AEF4B: jmp 0x588aef50
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x588AEF4D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x588AEF50: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588AEF52: push esi
        __asm _emit 0x56
        // 0x588AEF53: call 0x58902e60
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0x3F
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AEF58: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588AEF5B: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x588AEF5E: jne 0x588aef50
        __asm _emit 0x75
        __asm _emit 0xF0
        // 0x588AEF60: lea edi, [ebp + 0x2418]
        __asm _emit 0x8D
        __asm _emit 0xBD
        __asm _emit 0x18
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AEF66: mov ebx, 3
        __asm _emit 0xBB
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AEF6B: jmp 0x588aef70
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x588AEF6D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x588AEF70: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588AEF72: push esi
        __asm _emit 0x56
        // 0x588AEF73: call 0x58902e60
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588AEF78: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588AEF7B: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x588AEF7E: jne 0x588aef70
        __asm _emit 0x75
        __asm _emit 0xF0
        // 0x588AEF80: pop edi
        __asm _emit 0x5F
        // 0x588AEF81: pop esi (mapped epilogue beyond the indexed extent)
        __asm _emit 0x5E
        // 0x588AEF82: pop ebp
        __asm _emit 0x5D
        // 0x588AEF83: pop ebx
        __asm _emit 0x5B
        // 0x588AEF84: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
