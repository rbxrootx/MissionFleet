// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885C9A8 .. +0xF9 bytes.
extern "C" __declspec(naked) void FUN_5885c9a8() {
    __asm {
        // 0x5885C9A8: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885C9AA: push ebp
        __asm _emit 0x55
        // 0x5885C9AB: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885C9AD: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5885C9B0: cmp eax, 9
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x5885C9B3: ja 0x5885ca62
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xA9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C9B9: jmp dword ptr [eax*4 + 0x5885caa4]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xA4
        __asm _emit 0xCA
        __asm _emit 0x85
        __asm _emit 0x58
        // 0x5885C9C0: push dword ptr [ebp + 0x10]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x5885C9C3: push dword ptr [ebp + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x5885C9C6: call 0x5885b86f
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0xEE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885C9CB: pop ecx
        __asm _emit 0x59
        // 0x5885C9CC: pop ecx
        __asm _emit 0x59
        // 0x5885C9CD: pop ebp
        __asm _emit 0x5D
        // 0x5885C9CE: ret
        __asm _emit 0xC3
        // 0x5885C9CF: push dword ptr [ebp + 0x10]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x5885C9D2: push dword ptr [ebp + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x5885C9D5: call 0x5885b8b1
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0xEE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885C9DA: jmp 0x5885c9cb
        __asm _emit 0xEB
        __asm _emit 0xEF
        // 0x5885C9DC: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x5885C9DF: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5885C9E1: cmp byte ptr [eax + 0x308], cl
        __asm _emit 0x38
        __asm _emit 0x88
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885C9E7: setne cl
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC1
        // 0x5885C9EA: shl ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x5885C9ED: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x5885C9F0: and dword ptr [eax], 0
        __asm _emit 0x83
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5885C9F3: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5885C9F6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885C9F8: pop ebp
        __asm _emit 0x5D
        // 0x5885C9F9: ret
        __asm _emit 0xC3
        // 0x5885C9FA: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x5885C9FD: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5885C9FF: cmp byte ptr [eax + 0x308], cl
        __asm _emit 0x38
        __asm _emit 0x88
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885CA05: setne cl
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC1
        // 0x5885CA08: shl ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x5885CA0B: or ecx, 0x7ff00000
        __asm _emit 0x81
        __asm _emit 0xC9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xF0
        __asm _emit 0x7F
        // 0x5885CA11: jmp 0x5885c9ed
        __asm _emit 0xEB
        __asm _emit 0xDA
        // 0x5885CA13: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x5885CA16: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5885CA18: cmp byte ptr [eax + 0x308], cl
        __asm _emit 0x38
        __asm _emit 0x88
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885CA1E: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x5885CA21: setne cl
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC1
        // 0x5885CA24: shl ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x5885CA27: or ecx, 0x7fffffff
        __asm _emit 0x81
        __asm _emit 0xC9
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5885CA2D: or dword ptr [eax], 0xffffffff
        __asm _emit 0x83
        __asm _emit 0x08
        __asm _emit 0xFF
        // 0x5885CA30: jmp 0x5885c9f3
        __asm _emit 0xEB
        __asm _emit 0xC1
        // 0x5885CA32: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x5885CA35: push dword ptr [ebp + 0x10]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x5885CA38: movzx eax, byte ptr [eax + 0x308]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x80
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885CA3F: push eax
        __asm _emit 0x50
        // 0x5885CA40: call 0x5885b6f8
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0xEC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885CA45: pop ecx
        __asm _emit 0x59
        // 0x5885CA46: pop ecx
        __asm _emit 0x59
        // 0x5885CA47: jmp 0x5885c9f6
        __asm _emit 0xEB
        __asm _emit 0xAD
        // 0x5885CA49: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x5885CA4C: and dword ptr [eax], 0
        __asm _emit 0x83
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5885CA4F: mov dword ptr [eax + 4], 0xfff80000
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5885CA56: jmp 0x5885c9f6
        __asm _emit 0xEB
        __asm _emit 0x9E
        // 0x5885CA58: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x5885CA5B: and dword ptr [eax], 0
        __asm _emit 0x83
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5885CA5E: and dword ptr [eax + 4], 0
        __asm _emit 0x83
        __asm _emit 0x60
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5885CA62: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885CA64: inc eax
        __asm _emit 0x40
        // 0x5885CA65: pop ebp
        __asm _emit 0x5D
        // 0x5885CA66: ret
        __asm _emit 0xC3
        // 0x5885CA67: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x5885CA6A: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5885CA6C: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x5885CA6E: cmp byte ptr [eax + 0x308], cl
        __asm _emit 0x38
        __asm _emit 0x88
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885CA74: setne cl
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC1
        // 0x5885CA77: shl ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x5885CA7A: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x5885CA7D: and dword ptr [eax], 0
        __asm _emit 0x83
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5885CA80: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5885CA83: pop eax
        __asm _emit 0x58
        // 0x5885CA84: pop ebp
        __asm _emit 0x5D
        // 0x5885CA85: ret
        __asm _emit 0xC3
        // 0x5885CA86: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x5885CA89: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5885CA8B: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x5885CA8D: cmp byte ptr [eax + 0x308], cl
        __asm _emit 0x38
        __asm _emit 0x88
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885CA93: setne cl
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC1
        // 0x5885CA96: shl ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x5885CA99: or ecx, 0x7ff00000
        __asm _emit 0x81
        __asm _emit 0xC9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xF0
        __asm _emit 0x7F
        // 0x5885CA9F: jmp 0x5885ca7a
        __asm _emit 0xEB
        __asm _emit 0xD9
    }
}
