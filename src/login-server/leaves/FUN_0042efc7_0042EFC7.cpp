// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042EFC7 .. +0x79 bytes.
extern "C" __declspec(naked) void FUN_0042efc7_0042EFC7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        test byte ptr [ebp + 13h], 10h
        push esi
        ; Exact mapped bytes 75 67: jne 0x42f03b
        __asm _emit 0x75
        __asm _emit 0x67
        mov esi, dword ptr [ebp + 8]
        mov ecx, esi
        ; Exact mapped bytes E8 14 F2 FF FF: call 0x42e1f2
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, 50000000h
        ; Exact mapped bytes 75 56: jne 0x42f03b
        __asm _emit 0x75
        __asm _emit 0x56
        lea eax, [ebp - 10h]
        push eax
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes FF 15 90 C4 43 00: call dword ptr [0x43c490]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        cmp ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 75 3F: jne 0x42f03b
        __asm _emit 0x75
        __asm _emit 0x3f
        mov eax, dword ptr [eax + 4]
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 75 37: jne 0x42f03b
        __asm _emit 0x75
        __asm _emit 0x37
        push 4
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes FF 15 78 C4 43 00: call dword ptr [0x43c478]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 C3 02 00 00: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x42f024
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, eax
        ; Exact mapped bytes E8 2E F3 FF FF: call 0x42e34e
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 17: jne 0x42f03b
        __asm _emit 0x75
        __asm _emit 0x17
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 90 AC 00 00 00: call dword ptr [eax + 0xac]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x42f03b
        __asm _emit 0x74
        __asm _emit 0x09
        push 0
        mov ecx, esi
        ; Exact mapped bytes E8 55 20 00 00: call 0x431090
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        leave
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
