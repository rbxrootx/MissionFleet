// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A254F .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_004a254f_004A254F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 20h], ecx
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 A0 B9 68 00: call dword ptr [0x68b9a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0B: jne 0x4a2575
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx], 0
        ; Exact mapped bytes EB 39: jmp 0x4a25ae
        __asm _emit 0xeb
        __asm _emit 0x39
        lea eax, [ebp - 1ch]
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 A4 B9 68 00: call dword ptr [0x68b9a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0B: jne 0x4a2592
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx], 0
        ; Exact mapped bytes EB 1C: jmp 0x4a25ae
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 1ch]
        push ecx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 17 FF FF FF: call 0x4a24b9
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea edx, [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 EA 2E 08 00: call 0x525498
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x2e
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
