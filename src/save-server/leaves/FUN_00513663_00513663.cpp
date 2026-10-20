// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00513663 .. +0xB6 bytes.
extern "C" __declspec(naked) void FUN_00513663_00513663() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 114h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 114h], ecx
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 64 8E 01 00: call 0x52c4e4
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        push 0
        push -1
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 F4 BB 68 00: call dword ptr [0x68bbf4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E8 D8 E3 01 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xe3
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x5136b5
        __asm _emit 0x75
        __asm _emit 0x14
        push 422h
        push 673dc0h
        ; Exact mapped bytes E8 90 56 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5136b5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x51369b
        __asm _emit 0x75
        __asm _emit 0xe0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5136cd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 73 31: jae 0x513706
        __asm _emit 0x73
        __asm _emit 0x31
        push 104h
        lea ecx, [ebp - 110h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 F4 BB 68 00: call dword ptr [0x68bbf4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x00
        lea ecx, [ebp - 110h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 90 84 00 00 00: call dword ptr [eax + 0x84]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB BE: jmp 0x5136c4
        __asm _emit 0xeb
        __asm _emit 0xbe
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 F8 BB 68 00: call dword ptr [0x68bbf8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
