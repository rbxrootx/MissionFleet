// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040A86A .. +0xEF bytes.
extern "C" __declspec(naked) void FUN_0040a86a_0040A86A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 130h
        mov dword ptr [ebp - 130h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 130h]
        add ecx, 124h
        ; Exact mapped bytes E8 12 09 00 00: call 0x40b1a0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], 1
        mov dword ptr [ebp - 10h], 3ch
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 12ch], ecx
        ; Exact mapped bytes EB 0F: jmp 0x40a8b6
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 12ch]
        add edx, 1
        mov dword ptr [ebp - 12ch], edx
        mov ecx, dword ptr [ebp - 130h]
        add ecx, 124h
        ; Exact mapped bytes E8 19 08 00 00: call 0x40b0e0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 12ch], eax
        ; Exact mapped bytes 7D 7F: jge 0x40a94e
        __asm _emit 0x7d
        __asm _emit 0x7f
        mov eax, dword ptr [ebp - 12ch]
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 12ch]
        push ecx
        mov edx, dword ptr [ebp - 12ch]
        push edx
        mov ecx, dword ptr [ebp - 130h]
        add ecx, 124h
        ; Exact mapped bytes E8 5E 25 02 00: call 0x42ce5c
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x25
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 9B 9B FF FF: call 0x4044a0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F4 B6 FF FF: call 0x406000
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 12ch]
        add eax, 1
        push eax
        push 4494b8h
        lea ecx, [ebp - 128h]
        push ecx
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 0ch
        lea edx, [ebp - 128h]
        mov dword ptr [ebp - 14h], edx
        lea eax, [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 130h]
        add ecx, 124h
        ; Exact mapped bytes E8 C7 07 00 00: call 0x40b110
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 59 FF FF FF: jmp 0x40a8a7
        __asm _emit 0xe9
        __asm _emit 0x59
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
