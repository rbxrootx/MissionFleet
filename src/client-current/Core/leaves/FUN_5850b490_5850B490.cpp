// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850B490 .. +0xB2 bytes.
extern "C" __declspec(naked) void FUN_5850b490_5850B490() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 45 45 FC FF: call 0x584cf9f0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 10h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 14h]
        sub edx, dword ptr [ebp - 0ch]
        cmp dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes 77 57: ja 0x5850b519
        __asm _emit 0x77
        __asm _emit 0x57
        mov eax, dword ptr [ebp - 0ch]
        add eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 10h], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AA EF F9 FF: call 0x584aa480
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xef
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 18h]
        add edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 0ch]
        sub eax, dword ptr [ebp + 8]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 F4 F1 F9 FF: call 0x584aa6f0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xf1
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 0ch
        movzx eax, byte ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 AF EB FF FF: call 0x5850a0c0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 23: jmp 0x5850b53c
        __asm _emit 0xeb
        __asm _emit 0x23
        xor eax, eax
        mov byte ptr [ebp - 1], al
        movzx ecx, byte ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        movzx ecx, byte ptr [ebp - 1]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F4 A0 FF FF: call 0x58505630
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xa0
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
