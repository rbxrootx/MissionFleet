// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042FEB5 .. +0xB4 bytes.
extern "C" __declspec(naked) void FUN_0042feb5_0042FEB5() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push ebx
        push esi
        push edi
        ; Exact mapped bytes E8 C3 5B 00 00: call 0x435a86
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        add esi, 58h
        ; Exact mapped bytes E8 E6 5D 00 00: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp + 0ch]
        mov edi, dword ptr [eax + 8]
        test ebx, ebx
        ; Exact mapped bytes 75 1F: jne 0x42fef6
        __asm _emit 0x75
        __asm _emit 0x1f
        cmp dword ptr [ebp + 10h], ebx
        ; Exact mapped bytes 75 1A: jne 0x42fef6
        __asm _emit 0x75
        __asm _emit 0x1a
        cmp dword ptr [ebp + 14h], ebx
        ; Exact mapped bytes 75 15: jne 0x42fef6
        __asm _emit 0x75
        __asm _emit 0x15
        push dword ptr [ebp + 8]
        push edi
        push 43dde0h
        push esi
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes EB 1A: jmp 0x42ff10
        __asm _emit 0xeb
        __asm _emit 0x1a
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push ebx
        push dword ptr [ebp + 8]
        push edi
        push 43ddcch
        push esi
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 1ch
        lea eax, [ebp - 28h]
        push eax
        push esi
        push edi
        ; Exact mapped bytes FF 15 30 C4 43 00: call dword ptr [0x43c430]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 40: jne 0x42ff60
        __asm _emit 0x75
        __asm _emit 0x40
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes A1 4C C4 43 00: mov eax, dword ptr [0x43c44c]
        __asm _emit 0xa1
        __asm _emit 0x4c
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        xor eax, eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 14h], ecx
        mov ecx, dword ptr [ebp + 10h]
        lea eax, [ebp - 28h]
        push eax
        mov dword ptr [ebp - 18h], edi
        mov dword ptr [ebp - 10h], ebx
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 4], esi
        ; Exact mapped bytes E8 BD FE FF FF: call 0x42fe14
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x42ff60
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 DB 44 00 00: call 0x43443b
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
