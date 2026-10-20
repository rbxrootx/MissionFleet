// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886CA67 .. +0x83 bytes.
extern "C" __declspec(naked) void FUN_5886ca67_5886CA67() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push esi
        push edi
        push dword ptr [ebp + 0ch]
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 A9 FD FF FF: call 0x5886c826
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        lea edi, [ebp - 10h]
        pop ecx
        pop ecx
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        cmp byte ptr [ebp - 8], 0
        pop edi
        pop esi
        ; Exact mapped bytes 74 57: je 0x5886cae6
        __asm _emit 0x74
        __asm _emit 0x57
        push 180h
        push dword ptr [ebp + 10h]
        lea eax, [ebp - 4]
        push dword ptr [ebp - 10h]
        push dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 36 C8 00 00: call 0x588792dc
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        test eax, eax
        ; Exact mapped bytes 75 39: jne 0x5886cae6
        __asm _emit 0x75
        __asm _emit 0x39
        mov eax, dword ptr [ebp + 14h]
        ; Exact mapped bytes FF 05 1C 96 96 58: inc dword ptr [0x5896961c]
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0x1c
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x58
        add eax, 0ch
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes F0 09 08: lock or dword ptr [eax], ecx
        __asm _emit 0xf0
        __asm _emit 0x09
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 14h]
        xor ecx, ecx
        mov dword ptr [eax + 8], ecx
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [eax + 1ch], ecx
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [eax + 4], ecx
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [ebp + 14h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10h], eax
        mov eax, dword ptr [ebp + 14h]
        leave
        ret
        xor eax, eax
        leave
        ret
    }
}
