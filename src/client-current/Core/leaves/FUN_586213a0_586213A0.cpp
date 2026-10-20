// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586213A0 .. +0x106 bytes.
extern "C" __declspec(naked) void FUN_586213a0_586213A0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 EB 00 00 00: jne 0x5862149d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 0c84h]
        ; Exact mapped bytes 75 0B: jne 0x586213cb
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A8 12 00 00: call 0x58622670
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1E: jmp 0x586213e9
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 0c88h]
        ; Exact mapped bytes 75 10: jne 0x586213e9
        __asm _emit 0x75
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes 8B 0D 18 06 96 58: mov ecx, dword ptr [0x58960618]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C8 7B E9 FF: call 0x584b8fb0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x7b
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 0c8ch]
        ; Exact mapped bytes 75 27: jne 0x5862141e
        __asm _emit 0x75
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0c7ch]
        ; Exact mapped bytes E8 FB FF 19 00: call 0x587c1400
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0x19
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0c80h]
        ; Exact mapped bytes E8 ED FF 19 00: call 0x587c1400
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 45 07 00 00: call 0x58621b60
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 7F: jmp 0x5862149d
        __asm _emit 0xeb
        __asm _emit 0x7f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 0c90h]
        ; Exact mapped bytes 75 71: jne 0x5862149d
        __asm _emit 0x75
        __asm _emit 0x71
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0c7ch]
        ; Exact mapped bytes E8 36 F8 19 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xf8
        __asm _emit 0x19
        __asm _emit 0x00
        mov esi, eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c7ch]
        ; Exact mapped bytes E8 A6 82 F0 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x82
        __asm _emit 0xf0
        __asm _emit 0xff
        sub eax, 0ah
        cmp esi, eax
        ; Exact mapped bytes 7D 0F: jge 0x58621460
        __asm _emit 0x7d
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0c7ch]
        ; Exact mapped bytes E8 21 FF 19 00: call 0x587c1380
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xff
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0c80h]
        ; Exact mapped bytes E8 02 F8 19 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xf8
        __asm _emit 0x19
        __asm _emit 0x00
        mov esi, eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c80h]
        ; Exact mapped bytes E8 72 82 F0 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x82
        __asm _emit 0xf0
        __asm _emit 0xff
        sub eax, 0ah
        cmp esi, eax
        ; Exact mapped bytes 7D 0F: jge 0x58621494
        __asm _emit 0x7d
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0c80h]
        ; Exact mapped bytes E8 ED FE 19 00: call 0x587c1380
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xfe
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C4 06 00 00: call 0x58621b60
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        xor eax, eax
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
