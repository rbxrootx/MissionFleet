// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051E1B0 .. +0x6D bytes.
extern "C" __declspec(naked) void FUN_0051e1b0_0051E1B0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0bch], 0
        ; Exact mapped bytes 75 0A: jne 0x51e1cd
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D7 15 FB FF: call 0x4cf7a2
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x15
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 4A: jmp 0x51e217
        __asm _emit 0xeb
        __asm _emit 0x4a
        ; Exact mapped bytes FF 15 60 BC 68 00: call dword ptr [0x68bc60]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0bch], 0
        lea edx, [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6B DA 00 00: call 0x52bc57
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0F FA FF FF: call 0x51dc0b
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 3
        ; Exact mapped bytes 75 16: jne 0x51e217
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 14 00 00 00: call 0x51e21d
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 10h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 22 D4 00 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
