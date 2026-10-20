// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047253C .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_0047253c_0047253C() {
    __asm {
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 31: jne 0x472573
        __asm _emit 0x75
        __asm _emit 0x31
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x47254f
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp + 0ch], 1
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0fh
        and al, 0f0h
        mov dword ptr [ebp + 0ch], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        push 10h
        ; Exact mapped bytes A1 88 89 68 00: mov eax, dword ptr [0x688988]
        __asm _emit 0xa1
        __asm _emit 0x88
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 5C B8 68 00: call dword ptr [0x68b85c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes E9 11 01 00 00: jmp 0x472689
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
