// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005610EB .. +0x71 bytes.
extern "C" __declspec(naked) void FUN_005610eb_005610EB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        push 3eh
        push 67c6f0h
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 5C 91 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x91
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 02: jne 0x56110f
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 49: jmp 0x561158
        __asm _emit 0xeb
        __asm _emit 0x49
        lea edx, [ebp - 10h]
        push edx
        push 1
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 1ch]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 1ch]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 E0 00 00 00: call dword ptr [edx + 0xe0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 24h]
        mov edx, dword ptr [ecx + 5ch]
        xor eax, eax
        cmp edx, dword ptr [ebp - 14h]
        sete al
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 40h
        push ecx
        lea edx, [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 20h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 20h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 20: call dword ptr [edx + 0x20]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x20
        mov esp, ebp
        pop ebp
        ret
    }
}
