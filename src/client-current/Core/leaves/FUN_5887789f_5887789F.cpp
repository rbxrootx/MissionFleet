// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887789F .. +0xA3 bytes.
extern "C" __declspec(naked) void FUN_5887789f_5887789F() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 0f4h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push ebx
        push esi
        mov esi, dword ptr [ebp + 8]
        push edi
        ; Exact mapped bytes E8 E1 12 FF FF: call 0x58868ba0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x12
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, eax
        ; Exact mapped bytes E8 DA 12 FF FF: call 0x58868ba0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x12
        __asm _emit 0xff
        __asm _emit 0xff
        push esi
        mov edi, dword ptr [eax + 34ch]
        ; Exact mapped bytes E8 06 05 00 00: call 0x58877dd8
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebx + 64h], 0
        mov esi, eax
        pop ecx
        push 78h
        lea eax, [ebp - 0f4h]
        mov ecx, 1002h
        push eax
        push 7
        pop eax
        cmovne ecx, eax
        push ecx
        push esi
        ; Exact mapped bytes FF 15 AC 41 89 58: call dword ptr [0x588941ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x588778fe
        __asm _emit 0x75
        __asm _emit 0x05
        and dword ptr [edi], eax
        inc eax
        ; Exact mapped bytes EB 33: jmp 0x58877931
        __asm _emit 0xeb
        __asm _emit 0x33
        lea eax, [ebp - 0f4h]
        push eax
        push dword ptr [ebx + 54h]
        ; Exact mapped bytes E8 A3 C3 FF FF: call 0x58873cb0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x58877927
        __asm _emit 0x75
        __asm _emit 0x14
        push esi
        ; Exact mapped bytes E8 F4 05 00 00: call 0x58877f0d
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x58877927
        __asm _emit 0x74
        __asm _emit 0x09
        or dword ptr [edi], 4
        mov dword ptr [edi + 8], esi
        mov dword ptr [edi + 4], esi
        mov eax, dword ptr [edi]
        shr eax, 2
        not eax
        and eax, 1
        mov ecx, dword ptr [ebp - 4]
        pop edi
        pop esi
        xor ecx, ebp
        pop ebx
        ; Exact mapped bytes E8 12 97 FB FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x97
        __asm _emit 0xfb
        __asm _emit 0xff
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
