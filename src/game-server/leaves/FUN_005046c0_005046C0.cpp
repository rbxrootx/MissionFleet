// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005046C0 .. +0xAE bytes.
extern "C" __declspec(naked) void FUN_005046c0_005046C0() {
    __asm {
        push ebp
        mov ebp, esp
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 EE C7 02 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x00
        cmp dword ptr [eax + 4], 0ffh
        ; Exact mapped bytes 7D 16: jge 0x5046ea
        __asm _emit 0x7d
        __asm _emit 0x16
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 DD C7 02 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x00
        mov al, byte ptr [eax + 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DB D3 02 00: call 0x531ac3
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xd3
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 63: jmp 0x50474d
        __asm _emit 0xeb
        __asm _emit 0x63
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 C7 C7 02 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x00
        cmp dword ptr [eax + 4], 0fffeh
        ; Exact mapped bytes 7D 24: jge 0x50471f
        __asm _emit 0x7d
        __asm _emit 0x24
        push 0ffh
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BB D3 02 00: call 0x531ac3
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xd3
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 A9 C7 02 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E9 D3 02 00: call 0x531b06
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xd3
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 2E: jmp 0x50474d
        __asm _emit 0xeb
        __asm _emit 0x2e
        push 0ffh
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 97 D3 02 00: call 0x531ac3
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xd3
        __asm _emit 0x02
        __asm _emit 0x00
        push 0ffffh
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CD D3 02 00: call 0x531b06
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xd3
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 78 C7 02 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [eax + 4]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 41 D4 02 00: call 0x531b8e
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xd4
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 64 C7 02 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [eax + 4]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 79 0C 00 00: call 0x5053e0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
