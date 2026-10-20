// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045B50E .. +0xF4 bytes.
extern "C" __declspec(naked) void FUN_0045b50e_0045B50E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 E7 FC 0E 00: call 0x54b206
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xfc
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 7A FD 0E 00: call 0x54b2a1
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xfd
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 74 0D: je 0x45b539
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 6D FD 0E 00: call 0x54b2a1
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xfd
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 75 1E: jne 0x45b557
        __asm _emit 0x75
        __asm _emit 0x1e
        push 2
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 6F FD 0E 00: call 0x54b2b2
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xfd
        __asm _emit 0x0e
        __asm _emit 0x00
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0A FD 0E 00: call 0x54b259
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xfd
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 A5 00 00 00: jmp 0x45b5fc
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 42 FD 0E 00: call 0x54b2a1
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xfd
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 74 0D: je 0x45b571
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 35 FD 0E 00: call 0x54b2a1
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xfd
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 1B: jne 0x45b58c
        __asm _emit 0x75
        __asm _emit 0x1b
        push 1
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 37 FD 0E 00: call 0x54b2b2
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xfd
        __asm _emit 0x0e
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D2 FC 0E 00: call 0x54b259
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xfc
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 70: jmp 0x45b5fc
        __asm _emit 0xeb
        __asm _emit 0x70
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp + 0ch]
        add eax, dword ptr [ecx + 4]
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 0ch]
        add eax, dword ptr [ecx]
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 76 09: jbe 0x45b5bb
        __asm _emit 0x76
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [edx + 4]
        xor ecx, dword ptr [eax + 4]
        and ecx, 80000000h
        test ecx, ecx
        ; Exact mapped bytes 75 1C: jne 0x45b5ed
        __asm _emit 0x75
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        xor eax, dword ptr [ebp - 8]
        and eax, 80000000h
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x45b5ed
        __asm _emit 0x74
        __asm _emit 0x0a
        push 1
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 C5 FC 0E 00: call 0x54b2b2
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xfc
        __asm _emit 0x0e
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 60 FC 0E 00: call 0x54b259
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xfc
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
