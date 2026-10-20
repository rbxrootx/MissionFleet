// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588BCB50 .. +0x132 bytes.
extern "C" __declspec(naked) void FUN_588bcb50() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 3d4h]
        cmp dword ptr [ecx + 88h], 0
        ; Exact mapped bytes 75 1E: jne 0x588bcb80
        __asm _emit 0x75
        __asm _emit 0x1e
        mov eax, dword ptr [esi + 74h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        test cl, 1
        ; Exact mapped bytes 0F 84 0E 01 00 00: je 0x588bcc80
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esi + 74h]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 56 24: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        pop esi
        ret
        push edi
        ; Exact mapped bytes E8 EA B5 04 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xb5
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 3d4h]
        mov edi, eax
        ; Exact mapped bytes E8 2D B6 04 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xb6
        __asm _emit 0x04
        __asm _emit 0x00
        cmp edi, eax
        ; Exact mapped bytes 0F 8F CC 00 00 00: jg 0x588bcc67
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 3d4h]
        ; Exact mapped bytes E8 CA B5 04 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xb5
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 3d4h]
        lea edi, [eax + 7]
        ; Exact mapped bytes E8 0C B6 04 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xb6
        __asm _emit 0x04
        __asm _emit 0x00
        cmp edi, eax
        ; Exact mapped bytes 0F 8E AB 00 00 00: jle 0x588bcc67
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, 24h
        cmp dword ptr [eax + 170h], edi
        ; Exact mapped bytes 7E 17: jle 0x588bcbe5
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0E: je 0x588bcbe5
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 194h]
        mov ecx, dword ptr [eax + 90h]
        ; Exact mapped bytes EB 02: jmp 0x588bcbe7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 F8 48 A2 58: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 9D AD 04 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xad
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], edi
        ; Exact mapped bytes 7E 17: jle 0x588bcc17
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0E: je 0x588bcc17
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 194h]
        mov ecx, dword ptr [eax + 90h]
        ; Exact mapped bytes EB 02: jmp 0x588bcc19
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push ebx
        push 0
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 3d4h]
        mov edi, dword ptr [ecx + 8]
        ; Exact mapped bytes E8 8F B5 04 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xb5
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 3d4h]
        mov ebx, eax
        ; Exact mapped bytes E8 32 B5 04 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xb5
        __asm _emit 0x04
        __asm _emit 0x00
        sub ebx, eax
        imul ebx, ebx, 0dh
        lea ecx, [ebx + edi - 2]
        push ecx
        mov ecx, dword ptr [esi + 74h]
        ; Exact mapped bytes E8 10 67 04 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x67
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [esi + 74h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        pop ebx
        test al, 1
        ; Exact mapped bytes 75 23: jne 0x588bcc7f
        __asm _emit 0x75
        __asm _emit 0x23
        mov esi, dword ptr [esi + 74h]
        ; Exact mapped bytes 66 83 4E 24 01: or word ptr [esi + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x01
        pop edi
        pop esi
        ret
        mov ecx, dword ptr [esi + 74h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 74 0C: je 0x588bcc7f
        __asm _emit 0x74
        __asm _emit 0x0c
        mov esi, dword ptr [esi + 74h]
        mov eax, 0fffeh
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        pop edi
        pop esi
        ret
    }
}
