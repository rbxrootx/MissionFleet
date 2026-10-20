// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876BBB0 .. +0xD5 bytes.
extern "C" __declspec(naked) void FUN_5876bbb0_5876BBB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2F 09 00 00: call 0x5876c4f0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5f34h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5eb8h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 61 3C D3 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x3c
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 12cch]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5eb8h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 43 3C D3 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x3c
        __asm _emit 0xd3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 12d0h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5eb8h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 E5 42 D9 FF: call 0x584fff00
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x42
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5876bc2e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 A4 8D D1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x8d
        __asm _emit 0xd1
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E1 07: and cx, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x07
        movzx edx, cx
        cmp dword ptr [ebp - 8], edx
        ; Exact mapped bytes 73 35: jae 0x5876bc81
        __asm _emit 0x73
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 5f38h], 0
        ; Exact mapped bytes 74 23: je 0x5876bc7f
        __asm _emit 0x74
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 5f38h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5eb8h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 C2 3B D3 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x3b
        __asm _emit 0xd3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB A4: jmp 0x5876bc25
        __asm _emit 0xeb
        __asm _emit 0xa4
        mov esp, ebp
        pop ebp
        ret
    }
}
