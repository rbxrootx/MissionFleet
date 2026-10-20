// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5862E3C0 .. +0xC7 bytes.
extern "C" __declspec(naked) void FUN_5862e3c0_5862E3C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 8], ecx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B4 7B E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x7b
        __asm _emit 0xe5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0cch]
        mov dword ptr [ebp - 0ch], eax
        push 0fh
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 9E 7B E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x7b
        __asm _emit 0xe5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 148h]
        mov dword ptr [ebp - 10h], edx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 88 7B E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x7b
        __asm _emit 0xe5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 220h]
        mov dword ptr [ebp - 14h], ecx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 72 7B E5 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x7b
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 0F BF 15 38 05 96 58: movsx edx, word ptr [0x58960538]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        cmp edx, 6
        ; Exact mapped bytes 75 19: jne 0x5862e444
        __asm _emit 0x75
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 130h]
        mov dword ptr [ebp - 18h], ecx
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 9F 79 E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x79
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 17: jmp 0x5862e45b
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 130h]
        mov dword ptr [ebp - 1ch], eax
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 86 79 E5 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x79
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 140h]
        test edx, edx
        ; Exact mapped bytes 75 1A: jne 0x5862e483
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BC FB F4 FF: call 0x5857e030
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xfb
        __asm _emit 0xf4
        __asm _emit 0xff
        mov eax, 1f4h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 40 01 00 00: mov word ptr [ecx + 0x140], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
