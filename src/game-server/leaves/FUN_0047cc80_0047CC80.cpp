// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047CC80 .. +0xD5 bytes.
extern "C" __declspec(naked) void FUN_0047cc80_0047CC80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        push 0
        lea eax, [ebp - 8]
        push eax
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 B3 0A 00 00: call 0x47d760
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 5C 0A 00 00: call 0x47d710
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 F0 09 00 00: call 0x47d6b0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov esi, eax
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 F2 09 00 00: call 0x47d6c0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 D7 09 00 00: call 0x47d6b0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [esi]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 D7 09 00 00: call 0x47d6c0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov esi, eax
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 B9 09 00 00: call 0x47d6b0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 BE 09 00 00: call 0x47d6c0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [esi]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 BE 09 00 00: call 0x47d6d0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 C2 09 00 00: call 0x47d6e0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 56 09 00 00: call 0x47d680
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 8]
        sub eax, 1
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 8], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ebp + 8]
        pop esi
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 91 BA 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xba
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
