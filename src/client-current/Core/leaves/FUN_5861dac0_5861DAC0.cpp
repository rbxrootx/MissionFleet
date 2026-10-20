// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5861DAC0 .. +0xD3 bytes.
extern "C" __declspec(naked) void FUN_5861dac0_5861DAC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        push 594h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0d2ch
        push ecx
        ; Exact mapped bytes E8 AF ED 22 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xed
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 12c4h], 0
        ; Exact mapped bytes 74 18: je 0x5861db08
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 12c4h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 46 35 21 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x35
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        movzx eax, word ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 12c0h], eax
        movzx edx, word ptr [ebp + 8]
        test edx, edx
        ; Exact mapped bytes 7E 2D: jle 0x5861db4a
        __asm _emit 0x7e
        __asm _emit 0x2d
        movzx eax, word ptr [ebp + 8]
        mov ecx, 1ch
        mul ecx
        mov edx, 0ffffffffh
        cmovb eax, edx
        push eax
        ; Exact mapped bytes E8 0C 35 21 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x35
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 12c4h], ecx
        ; Exact mapped bytes EB 0D: jmp 0x5861db57
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 12c4h], 0
        mov eax, dword ptr [ebp - 4]
        imul ecx, dword ptr [eax + 12c0h], 1ch
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, 594h
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 12c4h]
        push ecx
        ; Exact mapped bytes E8 15 ED 22 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xed
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0dch]
        ; Exact mapped bytes E8 64 57 04 00: call 0x586632f0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x57
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
