// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851E890 .. +0xE6 bytes.
extern "C" __declspec(naked) void FUN_5851e890_5851E890() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov eax, dword ptr [ebp + 18h]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 77 0B: ja 0x5851e8a9
        __asm _emit 0x77
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp + 0ch]
        sub ecx, dword ptr [ebp + 18h]
        cmp dword ptr [ebp + 10h], ecx
        ; Exact mapped bytes 76 08: jbe 0x5851e8b1
        __asm _emit 0x76
        __asm _emit 0x08
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 C3 00 00 00: jmp 0x5851e974
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 75 08: jne 0x5851e8bf
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes E9 B5 00 00 00: jmp 0x5851e974
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 AC 11 FB FF: call 0x584cfa70
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x11
        __asm _emit 0xfb
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 75 3E: jne 0x5851e909
        __asm _emit 0x75
        __asm _emit 0x3e
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 84 FF FF FF: call 0x5851e870
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 0A: je 0x5851e904
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 0ch]
        sub eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 72: jmp 0x5851e974
        __asm _emit 0xeb
        __asm _emit 0x72
        ; Exact mapped bytes EB 05: jmp 0x5851e909
        __asm _emit 0xeb
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 6B: jmp 0x5851e974
        __asm _emit 0xeb
        __asm _emit 0x6b
        mov eax, dword ptr [ebp + 0ch]
        sub eax, dword ptr [ebp + 18h]
        mov ecx, dword ptr [ebp + 8]
        lea edx, [ecx + eax + 1]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 09: jmp 0x5851e92d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        sub eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 5F 13 FB FF: call 0x584cfca0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x13
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 05: jne 0x5851e952
        __asm _emit 0x75
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 22: jmp 0x5851e974
        __asm _emit 0xeb
        __asm _emit 0x22
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 0D BD F8 FF: call 0x584aa670
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xbd
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 08: jne 0x5851e972
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 4]
        sub eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 02: jmp 0x5851e974
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB B0: jmp 0x5851e924
        __asm _emit 0xeb
        __asm _emit 0xb0
        mov esp, ebp
    }
}
