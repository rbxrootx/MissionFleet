// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58622670 .. +0xB1 bytes.
extern "C" __declspec(naked) void FUN_58622670_58622670() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58622692
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 80h
        ; Exact mapped bytes 7D 43: jge 0x586226de
        __asm _emit 0x7d
        __asm _emit 0x43
        mov ecx, 18h
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 64h]
        test ecx, ecx
        ; Exact mapped bytes 74 2E: je 0x586226dc
        __asm _emit 0x74
        __asm _emit 0x2e
        imul edx, dword ptr [ebp - 8], 18h
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 64h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7E FD FF FF: call 0x58622440
        __asm _emit 0xe8
        __asm _emit 0x7e
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
        ; Exact mapped bytes 75 02: jne 0x586226dc
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x586226de
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB AB: jmp 0x58622689
        __asm _emit 0xeb
        __asm _emit 0xab
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 30h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 FD 75 E9 FF: call 0x584b9cf0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x75
        __asm _emit 0xe9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0c7ch]
        ; Exact mapped bytes E8 BF E1 19 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xe1
        __asm _emit 0x19
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c80h]
        ; Exact mapped bytes E8 B1 E1 19 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xe1
        __asm _emit 0x19
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
