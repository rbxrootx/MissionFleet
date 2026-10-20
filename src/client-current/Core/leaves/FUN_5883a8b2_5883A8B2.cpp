// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883A8B2 .. +0x124 bytes.
extern "C" __declspec(naked) void FUN_5883a8b2_5883A8B2() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 4]
        cmp eax, 3fffffeh
        ; Exact mapped bytes 0F 83 FC 00 00 00: jae 0x5883a9c4
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp + 18h]
        inc eax
        mov dword ptr [edi + 4], eax
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebx + 4], eax
        mov ecx, dword ptr [edi]
        cmp eax, ecx
        ; Exact mapped bytes 75 0E: jne 0x5883a8e9
        __asm _emit 0x75
        __asm _emit 0x0e
        mov dword ptr [ecx + 4], ebx
        mov eax, dword ptr [edi]
        mov dword ptr [eax], ebx
        mov eax, dword ptr [edi]
        mov dword ptr [eax + 8], ebx
        ; Exact mapped bytes EB 1F: jmp 0x5883a908
        __asm _emit 0xeb
        __asm _emit 0x1f
        cmp byte ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 0C: je 0x5883a8fb
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [eax], ebx
        mov ecx, dword ptr [edi]
        cmp eax, dword ptr [ecx]
        ; Exact mapped bytes 75 11: jne 0x5883a908
        __asm _emit 0x75
        __asm _emit 0x11
        mov dword ptr [ecx], ebx
        ; Exact mapped bytes EB 0D: jmp 0x5883a908
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov dword ptr [eax + 8], ebx
        mov ecx, dword ptr [edi]
        cmp eax, dword ptr [ecx + 8]
        ; Exact mapped bytes 75 03: jne 0x5883a908
        __asm _emit 0x75
        __asm _emit 0x03
        mov dword ptr [ecx + 8], ebx
        mov eax, dword ptr [ebx + 4]
        mov esi, ebx
        ; Exact mapped bytes E9 93 00 00 00: jmp 0x5883a9a5
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        mov edx, dword ptr [eax + 4]
        mov ecx, dword ptr [edx]
        cmp eax, ecx
        ; Exact mapped bytes 75 38: jne 0x5883a956
        __asm _emit 0x75
        __asm _emit 0x38
        mov ecx, dword ptr [edx + 8]
        cmp byte ptr [ecx + 0ch], 0
        ; Exact mapped bytes 74 35: je 0x5883a95c
        __asm _emit 0x74
        __asm _emit 0x35
        cmp esi, dword ptr [eax + 8]
        ; Exact mapped bytes 75 0A: jne 0x5883a936
        __asm _emit 0x75
        __asm _emit 0x0a
        mov esi, eax
        mov ecx, edi
        push esi
        ; Exact mapped bytes E8 CD 09 00 00: call 0x5883b303
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        mov ecx, edi
        mov byte ptr [eax + 0ch], 1
        mov eax, dword ptr [esi + 4]
        mov eax, dword ptr [eax + 4]
        mov byte ptr [eax + 0ch], 0
        mov eax, dword ptr [esi + 4]
        push dword ptr [eax + 4]
        ; Exact mapped bytes E8 F3 09 00 00: call 0x5883b347
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 4C: jmp 0x5883a9a2
        __asm _emit 0xeb
        __asm _emit 0x4c
        cmp byte ptr [ecx + 0ch], 0
        ; Exact mapped bytes 75 1A: jne 0x5883a976
        __asm _emit 0x75
        __asm _emit 0x1a
        mov byte ptr [eax + 0ch], 1
        mov byte ptr [ecx + 0ch], 1
        mov eax, dword ptr [esi + 4]
        mov eax, dword ptr [eax + 4]
        mov byte ptr [eax + 0ch], 0
        mov eax, dword ptr [esi + 4]
        mov esi, dword ptr [eax + 4]
        ; Exact mapped bytes EB 2C: jmp 0x5883a9a2
        __asm _emit 0xeb
        __asm _emit 0x2c
        cmp esi, dword ptr [eax]
        ; Exact mapped bytes 75 0A: jne 0x5883a984
        __asm _emit 0x75
        __asm _emit 0x0a
        mov esi, eax
        mov ecx, edi
        push esi
        ; Exact mapped bytes E8 C3 09 00 00: call 0x5883b347
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        mov ecx, edi
        mov byte ptr [eax + 0ch], 1
        mov eax, dword ptr [esi + 4]
        mov eax, dword ptr [eax + 4]
        mov byte ptr [eax + 0ch], 0
        mov eax, dword ptr [esi + 4]
        push dword ptr [eax + 4]
        ; Exact mapped bytes E8 61 09 00 00: call 0x5883b303
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        cmp byte ptr [eax + 0ch], 0
        ; Exact mapped bytes 0F 84 63 FF FF FF: je 0x5883a912
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [edi]
        pop edi
        pop esi
        mov eax, dword ptr [eax + 4]
        mov byte ptr [eax + 0ch], 1
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax], ebx
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
        push dword ptr [ebp + 18h]
        ; Exact mapped bytes E8 38 08 00 00: call 0x5883b204
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push 588c1da4h
        ; Exact mapped bytes E8 B7 3D FF FF: call 0x5882e78d
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x3d
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
