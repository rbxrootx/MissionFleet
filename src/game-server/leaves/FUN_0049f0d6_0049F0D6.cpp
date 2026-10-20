// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049F0D6 .. +0x8F bytes.
extern "C" __declspec(naked) void FUN_0049f0d6_0049F0D6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 4A D7 0A 00: call 0x54c831
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xd7
        __asm _emit 0x0a
        __asm _emit 0x00
        neg eax
        sbb eax, eax
        inc eax
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x49f106
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E8 D6 0A 00: call 0x54c7e9
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 59: jmp 0x49f15f
        __asm _emit 0xeb
        __asm _emit 0x59
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 88 D6 0A 00: call 0x54c796
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xd6
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 4], 80000000h
        ; Exact mapped bytes 75 12: jne 0x49f12c
        __asm _emit 0x75
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 75 0A: jne 0x49f12c
        __asm _emit 0x75
        __asm _emit 0x0a
        push 1
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 16 D7 0A 00: call 0x54c842
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xd7
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        not ecx
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        neg eax
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 09: jne 0x49f150
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        lea edx, [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8D D6 0A 00: call 0x54c7e9
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xd6
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
