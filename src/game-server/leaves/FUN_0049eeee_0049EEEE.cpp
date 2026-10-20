// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049EEEE .. +0xF4 bytes.
extern "C" __declspec(naked) void FUN_0049eeee_0049EEEE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 97 D8 0A 00: call 0x54c796
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xd8
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 2A D9 0A 00: call 0x54c831
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xd9
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 74 0D: je 0x49ef19
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 1D D9 0A 00: call 0x54c831
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xd9
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 75 1E: jne 0x49ef37
        __asm _emit 0x75
        __asm _emit 0x1e
        push 2
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 1F D9 0A 00: call 0x54c842
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xd9
        __asm _emit 0x0a
        __asm _emit 0x00
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BA D8 0A 00: call 0x54c7e9
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xd8
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 A5 00 00 00: jmp 0x49efdc
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F2 D8 0A 00: call 0x54c831
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xd8
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 74 0D: je 0x49ef51
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 E5 D8 0A 00: call 0x54c831
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xd8
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 1B: jne 0x49ef6c
        __asm _emit 0x75
        __asm _emit 0x1b
        push 1
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 E7 D8 0A 00: call 0x54c842
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xd8
        __asm _emit 0x0a
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 82 D8 0A 00: call 0x54c7e9
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xd8
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 70: jmp 0x49efdc
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
        ; Exact mapped bytes 76 09: jbe 0x49ef9b
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
        ; Exact mapped bytes 75 1C: jne 0x49efcd
        __asm _emit 0x75
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        xor eax, dword ptr [ebp - 8]
        and eax, 80000000h
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x49efcd
        __asm _emit 0x74
        __asm _emit 0x0a
        push 1
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 75 D8 0A 00: call 0x54c842
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xd8
        __asm _emit 0x0a
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 10 D8 0A 00: call 0x54c7e9
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xd8
        __asm _emit 0x0a
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
