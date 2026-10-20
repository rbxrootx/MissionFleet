// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586C0A40 .. +0xB4 bytes.
extern "C" __declspec(naked) void FUN_586c0a40_586C0A40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        add eax, 98h
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 20 76 DC FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x76
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0E: jmp 0x586c0a71
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 1
        lea edx, [ebp - 4]
        push edx
        ; Exact mapped bytes E8 D2 7B FF FF: call 0x586b8640
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 8]
        add eax, 98h
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 08 77 DC FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x77
        __asm _emit 0xdc
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 3F 6F DC FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x6f
        __asm _emit 0xdc
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 54: je 0x586c0aec
        __asm _emit 0x74
        __asm _emit 0x54
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 90 6F DC FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x6f
        __asm _emit 0xdc
        __asm _emit 0xff
        movzx eax, word ptr [eax + 4]
        movzx ecx, word ptr [ebp + 8]
        cmp eax, ecx
        ; Exact mapped bytes 75 3B: jne 0x586c0ae7
        __asm _emit 0x75
        __asm _emit 0x3b
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 7C 6F DC FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x6f
        __asm _emit 0xdc
        __asm _emit 0xff
        movzx edx, word ptr [eax + 6]
        movzx eax, word ptr [ebp + 0ch]
        cmp edx, eax
        ; Exact mapped bytes 75 27: jne 0x586c0ae7
        __asm _emit 0x75
        __asm _emit 0x27
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 68 6F DC FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x6f
        __asm _emit 0xdc
        __asm _emit 0xff
        add eax, 8
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 0F BF 4D 10: movsx ecx, word ptr [ebp + 0x10]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, word ptr [edx]
        add eax, ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 89 01: mov word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x01
        mov eax, 1
        ; Exact mapped bytes EB 07: jmp 0x586c0aee
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes E9 77 FF FF FF: jmp 0x586c0a63
        __asm _emit 0xe9
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
