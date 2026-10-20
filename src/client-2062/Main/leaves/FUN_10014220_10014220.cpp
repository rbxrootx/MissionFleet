// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10014220 .. +0x25B bytes.
extern "C" __declspec(naked) void FUN_10014220_10014220() {
    __asm {
        push -1
        push 1016d2beh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov eax, dword ptr [esp + 28h]
        mov edx, dword ptr [esp + 20h]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 30h]
        push edi
        push eax
        mov eax, dword ptr [esp + 30h]
        push ecx
        mov ecx, dword ptr [esp + 30h]
        push edx
        mov edx, dword ptr [esp + 30h]
        push eax
        push ecx
        push edx
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 4B A7 0E 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xa7
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 66 24 FF 7F: and word ptr [esi + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        lea ecx, [esi + 54h]
        xor eax, eax
        mov dword ptr [esi], 101753b4h
        mov dword ptr [ecx], eax
        xor edx, edx
        xor ebx, ebx
        lea ebp, [esi + 0b0h]
        mov dword ptr [ecx + 4], eax
        lea eax, [esi + 5ch]
        lea ecx, [esi + 64h]
        mov dword ptr [esp + 1ch], ebx
        mov dword ptr [eax], edx
        mov dword ptr [esp + 38h], ebp
        mov dword ptr [esp + 34h], 20h
        mov dword ptr [eax + 4], edx
        xor eax, eax
        mov dword ptr [ecx], eax
        mov dword ptr [ecx + 4], eax
        lea eax, [esi + 6ch]
        lea ecx, [esi + 74h]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 4], edx
        xor eax, eax
        mov dword ptr [ecx], eax
        mov dword ptr [ecx + 4], eax
        lea eax, [esi + 9ch]
        xor ecx, ecx
        mov dword ptr [eax], edx
        mov dword ptr [eax + 4], edx
        lea edx, [esi + 7ch]
        xor eax, eax
        mov dword ptr [edx], ecx
        mov dword ptr [edx + 4], ecx
        lea ecx, [esi + 8ch]
        mov dword ptr [esi + 8ch], eax
        mov dword ptr [ecx + 4], eax
        push 54h
        ; Exact mapped bytes E8 BA 84 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 6F: je 0x10014367
        __asm _emit 0x74
        __asm _emit 0x6f
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 15h
        ; Exact mapped bytes 7E 0F: jle 0x10014315
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 05: je 0x10014315
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 54h]
        ; Exact mapped bytes EB 02: jmp 0x10014317
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push 190h
        push ebx
        push ebx
        push ebx
        push ebx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 88 A6 0E 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xa6
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x1001435f
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], eax
        mov edx, dword ptr [ebp]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ebp, dword ptr [esp + 38h]
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x10014369
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 101h
        mov byte ptr [esp + 20h], bl
        mov dword ptr [ebp], ecx
        ; Exact mapped bytes E8 E6 AD 0E 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xad
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp]
        add ebp, 4
        mov dword ptr [esp + 38h], ebp
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [esp + 34h]
        dec eax
        mov dword ptr [esp + 34h], eax
        ; Exact mapped bytes 0F 85 46 FF FF FF: jne 0x100142df
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 90h
        ; Exact mapped bytes E8 FD 83 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x83
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 40: je 0x100143f3
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 8B 15 A4 57 1C 10: mov edx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [edx + 160h], 1
        ; Exact mapped bytes 7E 0F: jle 0x100143d1
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov edx, dword ptr [edx + 190h]
        cmp edx, ebx
        ; Exact mapped bytes 74 05: je 0x100143d1
        __asm _emit 0x74
        __asm _emit 0x05
        lea edi, [edx + 40h]
        ; Exact mapped bytes EB 02: jmp 0x100143d3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 7d0h
        push ebx
        push ebx
        mov edx, dword ptr [ecx + 104e0h]
        push edi
        push edx
        push 10h
        mov ecx, eax
        ; Exact mapped bytes E8 8F EB 00 00: call 0x10022f80
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100143f5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 3b4h], eax
        ; Exact mapped bytes E8 55 AD 0E 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xad
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [esi + 3b4h]
        pop edi
        mov dword ptr [edx + 80h], 101h
        mov eax, dword ptr [esi + 5ch]
        mov dword ptr [esi + 0a8h], ebx
        mov dword ptr [esi + 0a4h], ebx
        lea eax, [eax + eax*4]
        mov dword ptr [esi + 98h], ebx
        mov dword ptr [esi + 94h], ebx
        mov dword ptr [esi + 3b0h], ebx
        lea eax, [eax + eax*4]
        mov dword ptr [esi + 50h], 0ffffffffh
        lea eax, [eax + eax*4]
        shl eax, 3
        mov dword ptr [esi + 6ch], eax
        mov eax, dword ptr [esi + 60h]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        lea ecx, [eax + eax*4]
        mov eax, esi
        shl ecx, 3
        mov dword ptr [esi + 70h], ecx
        mov ecx, dword ptr [esp + 10h]
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
