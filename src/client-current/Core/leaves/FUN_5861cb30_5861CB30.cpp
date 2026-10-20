// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5861CB30 .. +0xF2 bytes.
extern "C" __declspec(naked) void FUN_5861cb30_5861CB30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 12d4h], 0
        ; Exact mapped bytes 74 31: je 0x5861cb76
        __asm _emit 0x74
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 12d4h], 0
        ; Exact mapped bytes 74 25: je 0x5861cb76
        __asm _emit 0x74
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 12d4h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 E5 44 21 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x44
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 12d4h], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 12cch], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 12d0h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 12c8h], 1
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 12d8h], 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 12cch]
        mov ecx, 4
        mul ecx
        mov edx, 0ffffffffh
        cmovb eax, edx
        push eax
        ; Exact mapped bytes E8 7E 44 21 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x44
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax + 12d4h], ecx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5861cbe8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [eax + 12cch]
        ; Exact mapped bytes 73 26: jae 0x5861cc1c
        __asm _emit 0x73
        __asm _emit 0x26
        push 4
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 0ch]
        lea ecx, [eax + edx*4]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 12d4h]
        mov ecx, dword ptr [ebp - 8]
        lea edx, [eax + ecx*4]
        push edx
        ; Exact mapped bytes E8 79 FC 22 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xfc
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB C3: jmp 0x5861cbdf
        __asm _emit 0xeb
        __asm _emit 0xc3
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
