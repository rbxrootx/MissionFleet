// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049345D .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_0049345d_0049345D() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57e30bh
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
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], esp
        lea eax, [ebp + 14h]
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes 66 8B 55 10: mov dx, word ptr [ebp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x10
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 64: call dword ptr [eax + 0x64]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x64
        mov dword ptr [ebp - 14h], 1
        ; Exact mapped bytes EB 46: jmp 0x4934f3
        __asm _emit 0xeb
        __asm _emit 0x46
        push 584850h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 D6 7B 06 00: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x7b
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4934d2
        __asm _emit 0x75
        __asm _emit 0x14
        push 417h
        push 5ca8a4h
        ; Exact mapped bytes E8 33 15 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x15
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
    }
}
