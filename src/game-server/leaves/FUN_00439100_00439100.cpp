// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00439100 .. +0x130 bytes.
extern "C" __declspec(naked) void FUN_00439100_00439100() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 118h
        push esi
        push edi
        lea edi, [ebp - 118h]
        mov ecx, 46h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        push 5b5ee0h
        ; Exact mapped bytes E8 22 03 00 00: call 0x439449
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push 5b5ef0h
        ; Exact mapped bytes E8 15 03 00 00: call 0x439449
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0b8h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0b4h]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes 8A 0D 68 32 5D 00: mov cl, byte ptr [0x5d3268]
        __asm _emit 0x8a
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x32
        __asm _emit 0x5d
        __asm _emit 0x00
        mov byte ptr [ebp - 114h], cl
        mov ecx, 40h
        xor eax, eax
        lea edi, [ebp - 113h]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        ; Exact mapped bytes AA: stosb byte ptr es:[edi], al
        __asm _emit 0xaa
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 118h], 0
        lea edx, [ebp - 118h]
        push edx
        lea eax, [ebp - 10h]
        push eax
        push 104h
        lea ecx, [ebp - 114h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 2C FE FF FF: call 0x438fca
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        lea eax, [ebp - 114h]
        push eax
        mov ecx, dword ptr [ebp - 118h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        push 5b5f1ch
        ; Exact mapped bytes E8 84 02 00 00: call 0x439449
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        and ecx, 3
        test ecx, ecx
        ; Exact mapped bytes 74 02: je 0x4391eb
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 32: jmp 0x43921d
        __asm _emit 0xeb
        __asm _emit 0x32
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 77 02: ja 0x4391f5
        __asm _emit 0x77
        __asm _emit 0x02
        ; Exact mapped bytes EB 28: jmp 0x43921d
        __asm _emit 0xeb
        __asm _emit 0x28
        mov esi, esp
        push 8
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 34 24 5E 00: call dword ptr [0x5e2434]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D6 F5 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xf5
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x439210
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 0D: jmp 0x43921d
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 0F 85 32 FF FF FF: jne 0x43914f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x32
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        add esp, 118h
        cmp ebp, esp
        ; Exact mapped bytes E8 B4 F5 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xf5
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
