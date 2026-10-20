// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004185F3 .. +0x5A bytes.
extern "C" __declspec(naked) void FUN_004185f3_004185F3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov eax, dword ptr [ecx + 2ch]
        neg eax
        sbb eax, eax
        test eax, eax
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes 74 42: je 0x418649
        __asm _emit 0x74
        __asm _emit 0x42
        push esi
        lea esi, [ecx + 20h]
        lea eax, [ebp - 4]
        mov ecx, esi
        push eax
        lea eax, [ebp - 0ch]
        push eax
        lea eax, [ebp - 8]
        push eax
        ; Exact mapped bytes E8 42 52 01 00: call 0x42d860
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        push dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 4]
        add eax, 2ch
        push dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 80 C4 43 00: call dword ptr [0x43c480]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 50h]
        add ecx, 2ch
        push ecx
        push ecx
        mov edx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 52 1C: call dword ptr [edx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x1c
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 C3: jne 0x41860b
        __asm _emit 0x75
        __asm _emit 0xc3
        pop esi
        leave
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
