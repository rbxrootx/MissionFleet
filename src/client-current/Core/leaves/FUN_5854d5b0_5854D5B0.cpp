// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5854D5B0 .. +0x89 bytes.
extern "C" __declspec(naked) void FUN_5854d5b0_5854D5B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        mov al, byte ptr [ebp + 0ch]
        mov byte ptr [ebp - 8], al
        cmp byte ptr [ebp - 8], 0
        ; Exact mapped bytes 74 3C: je 0x5854d601
        __asm _emit 0x74
        __asm _emit 0x3c
        cmp byte ptr [ebp - 8], 1
        ; Exact mapped bytes 74 02: je 0x5854d5cd
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 66: jmp 0x5854d633
        __asm _emit 0xeb
        __asm _emit 0x66
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 18h]
        mov dword ptr [ebp - 0ch], eax
        push 1eh
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 CC 7F 26 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x7f
        __asm _emit 0x26
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 18h]
        mov dword ptr [ebp - 10h], eax
        push 0ffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 42 7F 26 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x7f
        __asm _emit 0x26
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 32: jmp 0x5854d633
        __asm _emit 0xeb
        __asm _emit 0x32
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 18h]
        mov dword ptr [ebp - 14h], eax
        push -5fh
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 98 7F 26 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x7f
        __asm _emit 0x26
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 18h]
        mov dword ptr [ebp - 18h], eax
        push 96h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 0E 7F 26 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x7f
        __asm _emit 0x26
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
