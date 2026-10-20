// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DA3E9 .. +0x7F bytes.
extern "C" __declspec(naked) void FUN_004da3e9_004DA3E9() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58cd30h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], esp
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 75 17: jne 0x4da42e
        __asm _emit 0x75
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        push edx
        push 673d58h
        ; Exact mapped bytes E8 EE 61 FC FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x61
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes EB 62: jmp 0x4da490
        __asm _emit 0xeb
        __asm _emit 0x62
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes EB 39: jmp 0x4da486
        __asm _emit 0xeb
        __asm _emit 0x39
        push 636e20h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 36 FD FF FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4da472
        __asm _emit 0x75
        __asm _emit 0x14
        push 8eh
        push 673c70h
    }
}
