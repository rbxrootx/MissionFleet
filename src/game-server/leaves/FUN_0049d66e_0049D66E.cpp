// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049D66E .. +0xBC bytes.
extern "C" __declspec(naked) void FUN_0049d66e_0049D66E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 0ch], 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 45 EF 0A 00: call 0x54c5e0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xef
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 C7 00 08 00: mov word ptr [eax], 8
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 0C: jne 0x49d6b5
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 8], 0
        ; Exact mapped bytes EB 69: jmp 0x49d71e
        __asm _emit 0xeb
        __asm _emit 0x69
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 09: jne 0x49d6ca
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 36: jmp 0x49d700
        __asm _emit 0xeb
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 D7 C0 00 00: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], esp
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 C3 38 FF FF: call 0x490fc0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes FF 15 F8 24 5E 00: call dword ptr [0x5e24f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 8], eax
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 05: jne 0x49d71e
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 8E 26 03 00: call 0x4cfdac
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x26
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        lea esp, [ebp - 1ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
