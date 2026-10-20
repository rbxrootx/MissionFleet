// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5863C750 .. +0xB6 bytes.
extern "C" __declspec(naked) void FUN_5863c750_5863C750() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 21ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 120h]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 30: jne 0x5863c7a2
        __asm _emit 0x75
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C9 19 ED FF: call 0x5850e150
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x19
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0dch]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 F1 E9 17 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 51: jmp 0x5863c7f3
        __asm _emit 0xeb
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 69 18 ED FF: call 0x5850e020
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x18
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 84 19 ED FF: call 0x5850e150
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x19
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 21ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 120h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 2E 18 ED FF: call 0x5850e020
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x18
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c0h], 0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
