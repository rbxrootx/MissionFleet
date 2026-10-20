// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00445820 .. +0x112 bytes.
extern "C" __declspec(naked) void FUN_00445820_00445820() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        mov dword ptr [ebp - 34h], ecx
        mov al, byte ptr [ebp - 8]
        mov byte ptr [ebp - 4], al
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 2ch], edx
        mov al, byte ptr [ebp - 14h]
        mov byte ptr [ebp - 10h], al
        mov ecx, dword ptr [ebp - 30h]
        sub ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        mov eax, 0fffffffeh
        add eax, 1
        cmp dword ptr [ebp - 18h], eax
        ; Exact mapped bytes 77 67: ja 0x4458c7
        __asm _emit 0x77
        __asm _emit 0x67
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 76 61: jbe 0x4458c7
        __asm _emit 0x76
        __asm _emit 0x61
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 31: je 0x44589d
        __asm _emit 0x74
        __asm _emit 0x31
        cmp dword ptr [ebp - 18h], 80h
        ; Exact mapped bytes 76 11: jbe 0x445886
        __asm _emit 0x76
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 E2 6B 08 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x6b
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 0F: jmp 0x445895
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 31 E7 FE FF: call 0x433fc0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x4458a4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax]
        add ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [edx + 8], ecx
        ; Exact mapped bytes EB 0D: jmp 0x4458d4
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 2F 07 FF FF: call 0x436000
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x07
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 20h]
        cmp ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 75 08: jne 0x4458f8
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 40h], edx
        ; Exact mapped bytes EB 22: jmp 0x44591a
        __asm _emit 0xeb
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 20h]
        sub eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes E8 54 03 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 20h]
        sub ecx, dword ptr [ebp - 1ch]
        add eax, ecx
        mov dword ptr [ebp - 40h], eax
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [edx + 4], eax
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx + 4]
        mov byte ptr [edx], 0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
