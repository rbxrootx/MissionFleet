// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851DDA0 .. +0x69 bytes.
extern "C" __declspec(naked) void FUN_5851dda0_5851DDA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 8F 7F FA FF: call 0x584c5d40
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x7f
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 84 7F FA FF: call 0x584c5d40
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x7f
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 79 7F FA FF: call 0x584c5d40
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x7f
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6E 7F FA FF: call 0x584c5d40
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x7f
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes FF 15 10 41 89 58: call dword ptr [0x58894110]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x5851ddf8
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x5851ddff
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        movzx eax, byte ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
