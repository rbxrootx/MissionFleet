// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58791A20 .. +0xBD bytes.
extern "C" __declspec(naked) void FUN_58791a20_58791A20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58791a3b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0ah
        ; Exact mapped bytes 0F 8D 90 00 00 00: jge 0x58791ad5
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 64h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C2 3E CF FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x3e
        __asm _emit 0xcf
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 74 21: je 0x58791a84
        __asm _emit 0x74
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 8ch]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 A1 3E CF FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x3e
        __asm _emit 0xcf
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 4C: jne 0x58791ad0
        __asm _emit 0x75
        __asm _emit 0x4c
        mov eax, dword ptr [ebp - 8]
        mov eax, dword ptr [eax + 60h]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov dword ptr [ebp - 18h], edx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 60h]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 09: jne 0x58791ab5
        __asm _emit 0x75
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        sub edx, 1
        mov dword ptr [ebp - 0ch], edx
        imul eax, dword ptr [ebp - 0ch], 0ah
        mov ecx, dword ptr [ebp - 4]
        lea edx, [eax + ecx + 1]
        push edx
        ; Exact mapped bytes 8B 0D 58 06 96 58: mov ecx, dword ptr [0x58960658]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 14 E4 FF FF: call 0x5878fee0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        mov al, 1
        ; Exact mapped bytes EB 07: jmp 0x58791ad7
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes E9 5D FF FF FF: jmp 0x58791a32
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor al, al
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
