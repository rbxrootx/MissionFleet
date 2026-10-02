// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 166 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5881DC30 .. +0xA6 bytes.
extern "C" __declspec(naked) void FUN_5881dc30_segment_00() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0ch]
        push ebp
        mov ebp, ecx
        mov eax, dword ptr [ebp + 12c4h]
        push esi
        push edi
        lea edi, [ebp + 0d2ch]
        mov ecx, 165h
        mov esi, ebx
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x5881dc5c
        __asm _emit 0x74
        __asm _emit 0x09
        push eax
        ; Exact mapped bytes E8 CD F1 15 00: call 0x5897ce26
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xf1
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes 66 8B 4C 24 14: mov cx, word ptr [esp + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        movzx eax, cx
        mov dword ptr [ebp + 12c0h], eax
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 76 21: jbe 0x5881dc90
        __asm _emit 0x76
        __asm _emit 0x21
        xor ecx, ecx
        mov edx, 1ch
        mul edx
        seto cl
        neg ecx
        or ecx, eax
        push ecx
        ; Exact mapped bytes E8 A9 38 15 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x38
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp + 12c4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5881dc9a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp + 12c4h], 0
        mov eax, dword ptr [ebp + 12c0h]
        mov edx, dword ptr [ebp + 12c4h]
        lea ecx, [eax*8]
        sub ecx, eax
        add ecx, ecx
        add ecx, ecx
        push ecx
        add ebx, 594h
        push ebx
        push edx
        ; Exact mapped bytes E8 8B F0 15 00: call 0x5897cd4c
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xf0
        __asm _emit 0x15
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0dch]
        add esp, 0ch
        ; Exact mapped bytes E8 B1 4C 02 00: call 0x58842980
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
