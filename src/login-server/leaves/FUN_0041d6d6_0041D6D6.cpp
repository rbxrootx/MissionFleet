// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041D6D6 .. +0x115 bytes.
extern "C" __declspec(naked) void FUN_0041d6d6_0041D6D6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov eax, dword ptr [ebp + 8]
        push ebx
        push esi
        push edi
        push 7
        lea esi, [eax - 0d8h]
        mov eax, dword ptr [ebp + 1ch]
        pop edi
        xor ebx, ebx
        push 4
        sub eax, ebx
        mov dword ptr [ebp - 4], esi
        mov dword ptr [ebp + 8], ebx
        pop edx
        ; Exact mapped bytes 74 28: je 0x41d725
        __asm _emit 0x74
        __asm _emit 0x28
        dec eax
        ; Exact mapped bytes 74 20: je 0x41d720
        __asm _emit 0x74
        __asm _emit 0x20
        dec eax
        ; Exact mapped bytes 74 14: je 0x41d717
        __asm _emit 0x74
        __asm _emit 0x14
        dec eax
        ; Exact mapped bytes 74 08: je 0x41d70e
        __asm _emit 0x74
        __asm _emit 0x08
        dec eax
        ; Exact mapped bytes 75 23: jne 0x41d72c
        __asm _emit 0x75
        __asm _emit 0x23
        mov dword ptr [ebp + 8], edi
        ; Exact mapped bytes EB 1E: jmp 0x41d72c
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov dword ptr [ebp + 8], 5
        ; Exact mapped bytes EB 15: jmp 0x41d72c
        __asm _emit 0xeb
        __asm _emit 0x15
        mov dword ptr [ebp + 8], 6
        ; Exact mapped bytes EB 0C: jmp 0x41d72c
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov dword ptr [ebp + 8], edx
        ; Exact mapped bytes EB 07: jmp 0x41d72c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp + 8], 1
        mov eax, dword ptr [ebp + 18h]
        push 2
        sub eax, edx
        pop ecx
        ; Exact mapped bytes 74 1A: je 0x41d750
        __asm _emit 0x74
        __asm _emit 0x1a
        sub eax, ecx
        ; Exact mapped bytes 74 12: je 0x41d74c
        __asm _emit 0x74
        __asm _emit 0x12
        sub eax, ecx
        ; Exact mapped bytes 74 09: je 0x41d747
        __asm _emit 0x74
        __asm _emit 0x09
        sub eax, 5
        ; Exact mapped bytes 75 0F: jne 0x41d752
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ebx, ecx
        ; Exact mapped bytes EB 0B: jmp 0x41d752
        __asm _emit 0xeb
        __asm _emit 0x0b
        push 5
        pop ebx
        ; Exact mapped bytes EB 06: jmp 0x41d752
        __asm _emit 0xeb
        __asm _emit 0x06
        push 3
        ; Exact mapped bytes EB F9: jmp 0x41d749
        __asm _emit 0xeb
        __asm _emit 0xf9
        mov ebx, edi
        mov esi, dword ptr [esi + 88h]
        test esi, esi
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x41d7e2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, ecx
        ; Exact mapped bytes 75 0E: jne 0x41d772
        __asm _emit 0x75
        __asm _emit 0x0e
        cmp dword ptr [ebp + 8], edx
        ; Exact mapped bytes 75 13: jne 0x41d77c
        __asm _emit 0x75
        __asm _emit 0x13
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        ; Exact mapped bytes EB 4A: jmp 0x41d7bc
        __asm _emit 0xeb
        __asm _emit 0x4a
        cmp ebx, edi
        ; Exact mapped bytes 75 06: jne 0x41d77c
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [ebp + 10h], 1
        ; Exact mapped bytes 74 0B: je 0x41d787
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp dword ptr [ebp + 8], 6
        ; Exact mapped bytes 75 36: jne 0x41d7b8
        __asm _emit 0x75
        __asm _emit 0x36
        cmp ebx, 5
        ; Exact mapped bytes 75 31: jne 0x41d7b8
        __asm _emit 0x75
        __asm _emit 0x31
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        mov ecx, dword ptr [ebp + 14h]
        mov eax, dword ptr [esi + 50h]
        mov ecx, dword ptr [ecx]
        mov dword ptr [eax + 0ch], ecx
        mov edi, dword ptr [esi + 44h]
        mov ecx, esi
        mov dword ptr [esi + 44h], 1
        ; Exact mapped bytes E8 16 E5 FF FF: call 0x41bcc0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        test edi, edi
        mov dword ptr [esi + 44h], edi
        ; Exact mapped bytes 75 07: jne 0x41d7b8
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 10: call dword ptr [eax + 0x10]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x10
        test ebx, ebx
        ; Exact mapped bytes 74 26: je 0x41d7e2
        __asm _emit 0x74
        __asm _emit 0x26
        push 3
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 DA 00 00 00: call 0x41d8a0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], eax
        lea eax, [ebp - 28h]
        push eax
        mov dword ptr [ebp - 8], ebx
        ; Exact mapped bytes E8 96 C3 FF FF: call 0x419b71
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        test eax, eax
        ; Exact mapped bytes 7C 02: jl 0x41d7e4
        __asm _emit 0x7c
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
