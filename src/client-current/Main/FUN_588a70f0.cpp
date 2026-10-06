// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588A70F0 .. +0xD8 bytes.
// Source symbol alias: FUN_588a70f0.
extern "C" __declspec(naked) void FUN_588a70f0() {
    __asm {
        // 0x588A70F0: push ebx
        __asm _emit 0x53
        // 0x588A70F1: push ebp
        __asm _emit 0x55
        // 0x588A70F2: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x588A70F4: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588A70F6: push esi
        __asm _emit 0x56
        // 0x588A70F7: push edi
        __asm _emit 0x57
        // 0x588A70F8: cmp byte ptr [ebp + 0x1dc], bl
        __asm _emit 0x38
        __asm _emit 0x9D
        __asm _emit 0xDC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A70FE: jne 0x588a7134
        __asm _emit 0x75
        __asm _emit 0x34
        // 0x588A7100: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x588A7102: lea edi, [ebp + 0x1bc]
        __asm _emit 0x8D
        __asm _emit 0xBD
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A7108: cmp esi, 3
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x03
        // 0x588A710B: jle 0x588a7112
        __asm _emit 0x7E
        __asm _emit 0x05
        // 0x588A710D: mov ebx, 8
        __asm _emit 0xBB
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A7112: lea eax, [esi + esi*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xF6
        // 0x588A7115: lea ecx, [ebx + eax*2 + 0x101]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A711C: movzx edx, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD1
        // 0x588A711F: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588A7121: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x588A7123: push edx
        __asm _emit 0x52
        // 0x588A7124: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0xC1
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A7129: inc esi
        __asm _emit 0x46
        // 0x588A712A: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588A712D: cmp esi, 8
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x08
        // 0x588A7130: jl 0x588a7108
        __asm _emit 0x7C
        __asm _emit 0xD6
        // 0x588A7132: jmp 0x588a7190
        __asm _emit 0xEB
        __asm _emit 0x5C
        // 0x588A7134: mov esi, 4
        __asm _emit 0xBE
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A7139: lea edi, [ebp + 0x1cc]
        __asm _emit 0x8D
        __asm _emit 0xBD
        __asm _emit 0xCC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A713F: nop
        __asm _emit 0x90
        // 0x588A7140: lea eax, [esi + esi*8 - 0x24]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0xF6
        __asm _emit 0xDC
        // 0x588A7144: lea ecx, [eax + eax + 0x101]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A714B: movzx edx, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD1
        // 0x588A714E: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588A7150: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x588A7152: push edx
        __asm _emit 0x52
        // 0x588A7153: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0xC1
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A7158: inc esi
        __asm _emit 0x46
        // 0x588A7159: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588A715C: cmp esi, 8
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x08
        // 0x588A715F: jl 0x588a7140
        __asm _emit 0x7C
        __asm _emit 0xDF
        // 0x588A7161: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x588A7163: lea edi, [ebp + 0x1bc]
        __asm _emit 0x8D
        __asm _emit 0xBD
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A7169: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A7170: lea eax, [esi + esi*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xF6
        // 0x588A7173: lea ecx, [eax + eax + 0x151]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A717A: movzx edx, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD1
        // 0x588A717D: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588A717F: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x588A7181: push edx
        __asm _emit 0x52
        // 0x588A7182: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0xC1
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A7187: inc esi
        __asm _emit 0x46
        // 0x588A7188: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588A718B: cmp esi, 4
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x04
        // 0x588A718E: jl 0x588a7170
        __asm _emit 0x7C
        __asm _emit 0xE0
        // 0x588A7190: mov eax, dword ptr [ebp + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A7196: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x588A719B: mov ecx, dword ptr [ebp + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A71A1: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A71A6: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0xBB
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588A71AB: mov eax, dword ptr [ebp + 0x15c]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A71B1: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x588A71B6: mov eax, dword ptr [ebp + 0x15c]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A71BC: pop edi
        __asm _emit 0x5F
        // 0x588A71BD: pop esi
        __asm _emit 0x5E
        // 0x588A71BE: pop ebp
        __asm _emit 0x5D
        // 0x588A71BF: mov byte ptr [eax + 0x100], 1
        __asm _emit 0xC6
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x588A71C6: pop ebx
        __asm _emit 0x5B
        // 0x588A71C7: ret
        __asm _emit 0xC3
    }
}
