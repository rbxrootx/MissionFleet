// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040E620 .. +0x13B bytes.
extern "C" __declspec(naked) void FUN_0040e620_0040E620() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 158h
        push ebx
        push esi
        push edi
        lea edi, [ebp - 158h]
        mov ecx, 56h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        push 6337a4h
        ; Exact mapped bytes E8 8D 31 FF FF: call 0x4017d5
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push 633770h
        ; Exact mapped bytes E8 80 31 FF FF: call 0x4017d5
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0b8h]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0b4h]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes 8A 0D 5C 31 63 00: mov cl, byte ptr [0x63315c]
        __asm _emit 0x8a
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x31
        __asm _emit 0x63
        __asm _emit 0x00
        mov byte ptr [ebp - 110h], cl
        mov ecx, 40h
        xor eax, eax
        lea edi, [ebp - 10fh]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        ; Exact mapped bytes AA: stosb byte ptr es:[edi], al
        __asm _emit 0xaa
        mov dword ptr [ebp - 114h], 0
        mov dword ptr [ebp - 118h], 0
        lea edx, [ebp - 118h]
        push edx
        lea eax, [ebp - 114h]
        push eax
        push 104h
        lea ecx, [ebp - 110h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 F6 2C FF FF: call 0x4013bb
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x2c
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        lea eax, [ebp - 110h]
        push eax
        mov ecx, dword ptr [ebp - 118h]
        push ecx
        mov edx, dword ptr [ebp - 114h]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 633750h
        ; Exact mapped bytes E8 E6 30 FF FF: call 0x4017d5
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        and ecx, 3
        test ecx, ecx
        ; Exact mapped bytes 74 02: je 0x40e715
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 32: jmp 0x40e747
        __asm _emit 0xeb
        __asm _emit 0x32
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 77 02: ja 0x40e71f
        __asm _emit 0x77
        __asm _emit 0x02
        ; Exact mapped bytes EB 28: jmp 0x40e747
        __asm _emit 0xeb
        __asm _emit 0x28
        mov esi, esp
        push 8
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 10 B8 68 00: call dword ptr [0x68b810]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 BC 66 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x40e73a
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 0D: jmp 0x40e747
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 0F 85 29 FF FF FF: jne 0x40e670
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x29
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        add esp, 158h
        cmp ebp, esp
        ; Exact mapped bytes E8 99 66 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
