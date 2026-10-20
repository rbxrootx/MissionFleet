// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045B602 .. +0xF4 bytes.
extern "C" __declspec(naked) void FUN_0045b602_0045B602() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 F3 FB 0E 00: call 0x54b206
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xfb
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 86 FC 0E 00: call 0x54b2a1
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xfc
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 74 0D: je 0x45b62d
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 79 FC 0E 00: call 0x54b2a1
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xfc
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 75 1E: jne 0x45b64b
        __asm _emit 0x75
        __asm _emit 0x1e
        push 2
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 7B FC 0E 00: call 0x54b2b2
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xfc
        __asm _emit 0x0e
        __asm _emit 0x00
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 16 FC 0E 00: call 0x54b259
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xfc
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 A5 00 00 00: jmp 0x45b6f0
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 4E FC 0E 00: call 0x54b2a1
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xfc
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 74 0D: je 0x45b665
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 41 FC 0E 00: call 0x54b2a1
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xfc
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 1B: jne 0x45b680
        __asm _emit 0x75
        __asm _emit 0x1b
        push 1
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 43 FC 0E 00: call 0x54b2b2
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xfc
        __asm _emit 0x0e
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DE FB 0E 00: call 0x54b259
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xfb
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 70: jmp 0x45b6f0
        __asm _emit 0xeb
        __asm _emit 0x70
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [edx + 4]
        sub ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [edx]
        sub ecx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 73 09: jae 0x45b6af
        __asm _emit 0x73
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        sub ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [edx + 4]
        xor ecx, dword ptr [eax + 4]
        and ecx, 80000000h
        test ecx, ecx
        ; Exact mapped bytes 74 1C: je 0x45b6e1
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        xor eax, dword ptr [ebp - 8]
        and eax, 80000000h
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x45b6e1
        __asm _emit 0x74
        __asm _emit 0x0a
        push 1
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 D1 FB 0E 00: call 0x54b2b2
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xfb
        __asm _emit 0x0e
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6C FB 0E 00: call 0x54b259
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xfb
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
