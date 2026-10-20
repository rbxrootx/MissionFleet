// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586C2A40 .. +0xC6 bytes.
extern "C" __declspec(naked) void FUN_586c2a40_586C2A40() {
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
        ; Exact mapped bytes E8 20 56 DC FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x56
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0E: jmp 0x586c2a71
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 1
        lea edx, [ebp - 4]
        push edx
        ; Exact mapped bytes E8 D2 5B FF FF: call 0x586b8640
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x5b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 8]
        add eax, 98h
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 08 57 DC FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0xdc
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 3F 4F DC FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x4f
        __asm _emit 0xdc
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 63: je 0x586c2afb
        __asm _emit 0x74
        __asm _emit 0x63
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 90 4F DC FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x4f
        __asm _emit 0xdc
        __asm _emit 0xff
        movzx eax, word ptr [eax + 4]
        movzx ecx, word ptr [ebp + 8]
        cmp eax, ecx
        ; Exact mapped bytes 75 4A: jne 0x586c2af6
        __asm _emit 0x75
        __asm _emit 0x4a
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 7C 4F DC FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x4f
        __asm _emit 0xdc
        __asm _emit 0xff
        movzx edx, word ptr [eax + 6]
        movzx eax, word ptr [ebp + 0ch]
        cmp edx, eax
        ; Exact mapped bytes 75 36: jne 0x586c2af6
        __asm _emit 0x75
        __asm _emit 0x36
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 68 4F DC FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x4f
        __asm _emit 0xdc
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 8]
        test ecx, ecx
        ; Exact mapped bytes 7E 20: jle 0x586c2af0
        __asm _emit 0x7e
        __asm _emit 0x20
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 58 4F DC FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x4f
        __asm _emit 0xdc
        __asm _emit 0xff
        add eax, 8
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E8 01: sub ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 89 01: mov word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x01
        ; Exact mapped bytes EB 04: jmp 0x586c2af4
        __asm _emit 0xeb
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 0C: jmp 0x586c2b00
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes EB 05: jmp 0x586c2afb
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 68 FF FF FF: jmp 0x586c2a63
        __asm _emit 0xe9
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
