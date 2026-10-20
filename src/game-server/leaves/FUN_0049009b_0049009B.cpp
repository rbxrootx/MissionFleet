// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049009B .. +0x24E bytes.
extern "C" __declspec(naked) void FUN_0049009b_0049009B() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57e219h
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
        sub esp, 9ch
        mov dword ptr [ebp - 0a0h], ecx
        mov dword ptr [ebp - 9ch], 0
        mov dword ptr [ebp - 3ch], 0
        mov dword ptr [ebp - 38h], 0
        mov dword ptr [ebp - 98h], 0
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 32 6B 0A 00: call 0x536c1b
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x6b
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 09: je 0x4900ff
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 45: jne 0x490144
        __asm _emit 0x75
        __asm _emit 0x45
        push 11h
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 0E 67 0A 00: call 0x536817
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x67
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x49011b
        __asm _emit 0x75
        __asm _emit 0x0e
        push 0dh
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 00 67 0A 00: call 0x536817
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x67
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x490123
        __asm _emit 0x74
        __asm _emit 0x08
        lea ecx, [ebp - 34h]
        mov dword ptr [ebp + 8], ecx
        ; Exact mapped bytes EB 21: jmp 0x490144
        __asm _emit 0xeb
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 0a0h]
        mov dword ptr [edx + 44h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 FB 6A 0A 00: call 0x536c3a
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x6a
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes E9 8F 01 00 00: jmp 0x4902d3
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 94h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A5 6B 0A 00: call 0x536cf8
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x6b
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], 20h
        lea ecx, [ebp - 78h]
        mov dword ptr [ebp - 98h], ecx
        cmp dword ptr [ebp - 98h], 0
        ; Exact mapped bytes 75 0C: jne 0x490178
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 0a4h], 0
        ; Exact mapped bytes EB 4E: jmp 0x4901c6
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov edx, dword ptr [ebp - 98h]
        push edx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 9ch], eax
        mov eax, dword ptr [ebp - 9ch]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 20 96 01 00: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 0a8h], esp
        mov eax, dword ptr [ebp - 9ch]
        push eax
        mov ecx, dword ptr [ebp - 98h]
        push ecx
        mov edx, dword ptr [ebp - 0a8h]
        push edx
        ; Exact mapped bytes E8 00 0E 00 00: call 0x490fc0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0a4h], eax
        mov eax, dword ptr [ebp - 0a4h]
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes 66 8B 8D 7C FF FF FF: mov cx, word ptr [ebp - 0x84]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 4D E4: mov word ptr [ebp - 0x1c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes 66 0F B6 55 83: movzx dx, byte ptr [ebp - 0x7d]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x55
        __asm _emit 0x83
        ; Exact mapped bytes 66 89 55 E6: mov word ptr [ebp - 0x1a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xe6
        mov eax, dword ptr [ebp - 80h]
        and eax, 0ffh
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 7fh]
        and ecx, 0ffh
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 7eh]
        and edx, 0ffh
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 58h], eax
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 7D 08: jge 0x49021d
        __asm _emit 0x7d
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 58h]
        neg ecx
        mov dword ptr [ebp - 58h], ecx
        mov edx, dword ptr [ebp - 0a0h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        lea ecx, [ebp - 54h]
        ; Exact mapped bytes E8 76 35 07 00: call 0x5037a5
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x35
        __asm _emit 0x07
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        push 5ah
        lea ecx, [ebp - 54h]
        ; Exact mapped bytes E8 DF 77 0A 00: call 0x537a1c
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x77
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], eax
        mov eax, dword ptr [ebp - 58h]
        imul eax, eax, 0afc80h
        cdq
        idiv dword ptr [ebp - 40h]
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 0a0h]
        cmp dword ptr [ecx + 44h], 0
        ; Exact mapped bytes 74 25: je 0x490288
        __asm _emit 0x74
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 0a0h]
        mov eax, dword ptr [edx + 44h]
        mov ecx, dword ptr [ebp - 0a0h]
        mov edx, dword ptr [ecx + 44h]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 0a0h]
        mov dword ptr [edx + 44h], 0
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C9: jne 0x490257
        __asm _emit 0x75
        __asm _emit 0xc9
        mov ecx, dword ptr [ebp - 0a0h]
        add ecx, 44h
        push ecx
        push 58d620h
        lea edx, [ebp - 2ch]
        push edx
        ; Exact mapped bytes FF 15 08 25 5E 00: call dword ptr [0x5e2508]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7D 0D: jge 0x4902b8
        __asm _emit 0x7d
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 0a0h]
        mov dword ptr [eax + 44h], 0
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 54h]
        ; Exact mapped bytes E8 93 35 07 00: call 0x503857
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x35
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 67 69 0A 00: call 0x536c3a
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x69
        __asm _emit 0x0a
        __asm _emit 0x00
        lea esp, [ebp - 0a8h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
