// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58848ED7 .. +0xB0 bytes.
extern "C" __declspec(naked) void FUN_58848ed7_58848ED7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        ; Exact mapped bytes 0F 28 05 B0 25 8C 58: movaps xmm0, xmmword ptr [0x588c25b0]
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0xb0
        __asm _emit 0x25
        __asm _emit 0x8c
        __asm _emit 0x58
        mov edx, ecx
        push esi
        push edi
        push 7
        pop ecx
        ; Exact mapped bytes 0F 11 45 F0: movups xmmword ptr [ebp - 0x10], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xf0
        lea eax, [edx + 9e8h]
        mov dword ptr [ebp - 1ch], edx
        ; Exact mapped bytes 0F 28 05 A0 25 8C 58: movaps xmm0, xmmword ptr [0x588c25a0]
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0xa0
        __asm _emit 0x25
        __asm _emit 0x8c
        __asm _emit 0x58
        lea edi, [edx + 0f7ch]
        mov dword ptr [ebp - 18h], eax
        lea esi, [ebp - 1ch]
        mov dword ptr [ebp - 14h], 588c1e10h
        lea eax, [edx + 8f4h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov dword ptr [ebp - 1ch], eax
        lea edi, [edx + 0f98h]
        push 7
        pop ecx
        lea eax, [edx + 0e68h]
        mov dword ptr [ebp - 14h], 588c1e88h
        mov dword ptr [ebp - 18h], eax
        lea esi, [ebp - 1ch]
        ; Exact mapped bytes 0F 11 45 F0: movups xmmword ptr [ebp - 0x10], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xf0
        lea eax, [edx + 0ee0h]
        ; Exact mapped bytes 0F 28 05 90 25 8C 58: movaps xmm0, xmmword ptr [0x588c2590]
        __asm _emit 0x0f
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x90
        __asm _emit 0x25
        __asm _emit 0x8c
        __asm _emit 0x58
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov dword ptr [ebp - 1ch], eax
        lea edi, [edx + 0fb4h]
        xor eax, eax
        mov dword ptr [ebp - 14h], 588c1f00h
        push 7
        pop ecx
        mov dword ptr [ebp - 18h], eax
        lea esi, [ebp - 1ch]
        ; Exact mapped bytes 0F 11 45 F0: movups xmmword ptr [ebp - 0x10], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xf0
        mov dword ptr [edx + 1af18h], eax
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        pop edi
        mov dword ptr [edx + 1af1ch], eax
        mov dword ptr [edx + 1af20h], eax
        mov eax, edx
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
