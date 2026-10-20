// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00421FF5 .. +0x7B bytes.
extern "C" __declspec(naked) void FUN_00421ff5_00421FF5() {
    __asm {
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 20h], 0
        push ebx
        mov ebx, dword ptr [ebp + 1ch]
        push esi
        push edi
        mov edi, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 10: je 0x422017
        __asm _emit 0x74
        __asm _emit 0x10
        push dword ptr [ebp + 20h]
        push ebx
        push edi
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A1 01 00 00: call 0x4221b5
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        cmp dword ptr [ebp + 2ch], 0
        push dword ptr [ebp + 8]
        ; Exact mapped bytes 75 03: jne 0x422023
        __asm _emit 0x75
        __asm _emit 0x03
        push edi
        ; Exact mapped bytes EB 03: jmp 0x422026
        __asm _emit 0xeb
        __asm _emit 0x03
        push dword ptr [ebp + 2ch]
        ; Exact mapped bytes E8 A4 C3 FF FF: call 0x41e3cf
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [ebp + 24h]
        push dword ptr [esi]
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
        push edi
        ; Exact mapped bytes E8 05 FF FF FF: call 0x421f41
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 4]
        push 100h
        push dword ptr [ebp + 28h]
        inc eax
        mov dword ptr [edi + 8], eax
        push dword ptr [ebx + 0ch]
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 10h]
        push edi
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 13 00 00 00: call 0x422070
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 2ch
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x42206b
        __asm _emit 0x74
        __asm _emit 0x07
        push edi
        push eax
        ; Exact mapped bytes E8 22 C3 FF FF: call 0x41e38d
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
