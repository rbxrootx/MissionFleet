// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055E06B .. +0x71 bytes.
extern "C" __declspec(naked) void FUN_0055e06b_0055E06B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        push 3eh
        push 5cff18h
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 DC D0 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xd0
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 02: jne 0x55e08f
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 49: jmp 0x55e0d8
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
