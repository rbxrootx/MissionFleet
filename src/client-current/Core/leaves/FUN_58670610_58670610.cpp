// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58670610 .. +0xBF bytes.
extern "C" __declspec(naked) void FUN_58670610_58670610() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5867062b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 5
        ; Exact mapped bytes 0F 8D 96 00 00 00: jge 0x586706cb
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B6 0D C5 05 96 58: movzx ecx, byte ptr [0x589605c5]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x0d
        __asm _emit 0xc5
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        cmp dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 75 4A: jne 0x5867068b
        __asm _emit 0x75
        __asm _emit 0x4a
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx*4 + 589605ach], -1
        ; Exact mapped bytes 74 3D: je 0x5867068b
        __asm _emit 0x74
        __asm _emit 0x3d
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58670660
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 23: jge 0x58670689
        __asm _emit 0x7d
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx*8 + 94h]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 14h], edx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 BA F1 E2 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xf1
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CE: jmp 0x58670657
        __asm _emit 0xeb
        __asm _emit 0xce
        ; Exact mapped bytes EB 3B: jmp 0x586706c6
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5867069d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 7D 23: jge 0x586706c6
        __asm _emit 0x7d
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 10h]
        lea eax, [edx + ecx*8 + 94h]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 18h], edx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 7D F1 E2 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xf1
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CE: jmp 0x58670694
        __asm _emit 0xeb
        __asm _emit 0xce
        ; Exact mapped bytes E9 57 FF FF FF: jmp 0x58670622
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
