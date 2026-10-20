// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042F818 .. +0xC6 bytes.
extern "C" __declspec(naked) void FUN_0042f818_0042F818() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        mov eax, dword ptr [ebp + 8]
        push esi
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp + 1ch]
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp + 20h]
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp + 24h]
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp + 28h]
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp + 2ch]
        mov esi, ecx
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes E8 51 64 00 00: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 8]
        lea ecx, [ebp - 30h]
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp + 30h]
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [esi]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes FF 50 5C: call dword ptr [eax + 0x5c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x5c
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x42f88b
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 90 A4 00 00 00: call dword ptr [eax + 0xa4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 4E: jmp 0x42f8d9
        __asm _emit 0xeb
        __asm _emit 0x4e
        push edi
        push esi
        ; Exact mapped bytes E8 F8 FE FF FF: call 0x42f78a
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [ebp - 30h]
        push dword ptr [ebp - 2ch]
        push dword ptr [ebp - 28h]
        push dword ptr [ebp - 24h]
        push dword ptr [ebp - 20h]
        push dword ptr [ebp - 1ch]
        push dword ptr [ebp - 18h]
        push dword ptr [ebp - 14h]
        push dword ptr [ebp - 10h]
        push dword ptr [ebp - 0ch]
        push dword ptr [ebp - 8]
        push dword ptr [ebp - 4]
        ; Exact mapped bytes FF 15 50 C4 43 00: call dword ptr [0x43c450]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes E8 13 FF FF FF: call 0x42f7d6
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x42f8d1
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 90 A4 00 00 00: call dword ptr [eax + 0xa4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        test edi, edi
        setne al
        pop edi
        pop esi
        leave
        ; Exact mapped bytes C2 2C 00: ret 0x2c
        __asm _emit 0xc2
        __asm _emit 0x2c
        __asm _emit 0x00
    }
}
