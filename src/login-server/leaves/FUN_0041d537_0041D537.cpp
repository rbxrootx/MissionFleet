// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041D537 .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_0041d537_0041D537() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        test byte ptr [ebp + 8], 3
        push esi
        push edi
        lea edi, [ecx - 0d4h]
        ; Exact mapped bytes 74 69: je 0x41d5b4
        __asm _emit 0x74
        __asm _emit 0x69
        xor edx, edx
        cmp dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes 76 62: jbe 0x41d5b4
        __asm _emit 0x76
        __asm _emit 0x62
        mov ecx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ecx]
        dec eax
        cmp eax, 1eh
        ; Exact mapped bytes 77 0E: ja 0x41d56b
        __asm _emit 0x77
        __asm _emit 0x0e
        movzx eax, byte ptr [eax + 41d5dch]
        ; Exact mapped bytes FF 24 85 BC D5 41 00: jmp dword ptr [eax*4 + 0x41d5bc]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xbc
        __asm _emit 0xd5
        __asm _emit 0x41
        __asm _emit 0x00
        inc edx
        add ecx, 24h
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 73 40: jae 0x41d5b4
        __asm _emit 0x73
        __asm _emit 0x40
        ; Exact mapped bytes EB DF: jmp 0x41d555
        __asm _emit 0xeb
        __asm _emit 0xdf
        push 1
        ; Exact mapped bytes EB 16: jmp 0x41d590
        __asm _emit 0xeb
        __asm _emit 0x16
        push 7
        ; Exact mapped bytes EB 12: jmp 0x41d590
        __asm _emit 0xeb
        __asm _emit 0x12
        push 5
        ; Exact mapped bytes EB 0E: jmp 0x41d590
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 4
        ; Exact mapped bytes EB 0A: jmp 0x41d590
        __asm _emit 0xeb
        __asm _emit 0x0a
        push 6
        ; Exact mapped bytes EB 06: jmp 0x41d590
        __asm _emit 0xeb
        __asm _emit 0x06
        push 3
        ; Exact mapped bytes EB 02: jmp 0x41d590
        __asm _emit 0xeb
        __asm _emit 0x02
        push 2
        pop esi
        lea ecx, [ebp - 24h]
        push 3
        ; Exact mapped bytes E8 05 03 00 00: call 0x41d8a0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 14h]
        mov ecx, edi
        mov dword ptr [ebp - 8], eax
        lea eax, [ebp - 24h]
        push eax
        mov dword ptr [ebp - 4], esi
        ; Exact mapped bytes E8 C2 C5 FF FF: call 0x419b71
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes EB 02: jmp 0x41d5b6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        leave
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
