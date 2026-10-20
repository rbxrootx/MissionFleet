// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004180E7 .. +0xAA bytes.
extern "C" __declspec(naked) void FUN_004180e7_004180E7() {
    __asm {
        mov eax, 43acc4h
        ; Exact mapped bytes E8 17 75 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 10h
        and dword ptr [ebp - 18h], 0
        and dword ptr [ebp - 4], 0
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 10h], esp
        ; Exact mapped bytes E8 A9 DB 01 00: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xdb
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 1038h]
        push dword ptr [ebp - 14h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        mov esi, eax
        ; Exact mapped bytes EB 11: jmp 0x41812d
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 02 A6 01 00: call 0x432726
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xa6
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, 41812ah
        ret
        mov esi, dword ptr [ebp - 18h]
        or dword ptr [ebp - 4], 0ffffffffh
        test esi, esi
        ; Exact mapped bytes 75 04: jne 0x418139
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 58: jmp 0x418191
        __asm _emit 0xeb
        __asm _emit 0x58
        push dword ptr [ebp + 2ch]
        mov ecx, esi
        push dword ptr [ebp + 28h]
        push dword ptr [ebp + 24h]
        push dword ptr [ebp + 20h]
        push dword ptr [ebp + 1ch]
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 30 0D 00 00: call 0x418e8e
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        test eax, eax
        setge cl
        mov edi, ecx
        test edi, edi
        ; Exact mapped bytes 74 1B: je 0x418186
        __asm _emit 0x74
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 14h]
        push dword ptr [esi + 20h]
        lea ecx, [eax + 20h]
        ; Exact mapped bytes E8 55 56 01 00: call 0x42d7ce
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [eax], esi
        mov eax, dword ptr [ebp + 30h]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x41818f
        __asm _emit 0x74
        __asm _emit 0x0d
        mov dword ptr [eax], esi
        ; Exact mapped bytes EB 09: jmp 0x41818f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [esi]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov eax, edi
    }
}
