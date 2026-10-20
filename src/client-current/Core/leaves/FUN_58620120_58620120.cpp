// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58620120 .. +0xB1 bytes.
extern "C" __declspec(naked) void FUN_58620120_58620120() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58620142
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 80h
        ; Exact mapped bytes 7D 43: jge 0x5862018e
        __asm _emit 0x7d
        __asm _emit 0x43
        mov ecx, 18h
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 64h]
        test ecx, ecx
        ; Exact mapped bytes 74 2E: je 0x5862018c
        __asm _emit 0x74
        __asm _emit 0x2e
        imul edx, dword ptr [ebp - 8], 18h
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 64h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4E FD FF FF: call 0x5861fec0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 88 98 0C 00 00: movsx ecx, word ptr [eax + 0xc98]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0x98
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 75 02: jne 0x5862018c
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x5862018e
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB AB: jmp 0x58620139
        __asm _emit 0xeb
        __asm _emit 0xab
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 30h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 6D 99 04 00: call 0x58669b10
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x99
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0c7ch]
        ; Exact mapped bytes E8 0F 07 1A 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x07
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c80h]
        ; Exact mapped bytes E8 01 07 1A 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x07
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
