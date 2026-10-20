// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041A056 .. +0x7A bytes.
extern "C" __declspec(naked) void FUN_0041a056_0041A056() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        lea ebx, [ecx + 2ch]
        push edi
        mov esi, ebx
        lea edi, [ebp - 14h]
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        mov edi, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 8B 35 BC C4 43 00: mov esi, dword ptr [0x43c4bc]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xbc
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        add eax, edi
        push eax
        mov eax, dword ptr [ebp + 8]
        add ecx, eax
        push ecx
        push edi
        push eax
        push ebx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 53 ED FF FF: call 0x418de6
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 29: je 0x41a0c0
        __asm _emit 0x74
        __asm _emit 0x29
        mov eax, dword ptr [ebx + 0ch]
        sub eax, dword ptr [ebx + 4]
        add eax, edi
        push eax
        mov eax, dword ptr [ebx + 8]
        sub eax, dword ptr [ebx]
        add eax, dword ptr [ebp + 8]
        push eax
        push edi
        push dword ptr [ebp + 8]
        push ebx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov eax, dword ptr [ebp - 4]
        push ebx
        push ebx
        mov eax, dword ptr [eax + 50h]
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 1C: call dword ptr [ecx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x1c
        ; Exact mapped bytes EB 09: jmp 0x41a0c9
        __asm _emit 0xeb
        __asm _emit 0x09
        lea esi, [ebp - 14h]
        mov edi, ebx
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
