// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58522900 .. +0xA6 bytes.
extern "C" __declspec(naked) void FUN_58522900_58522900() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 62: je 0x5852297a
        __asm _emit 0x74
        __asm _emit 0x62
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 18h], edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8A 97 F6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x97
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 7D 02 00 00: call 0x58522bb0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 75 97 F6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x97
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DD 50 F6 FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x50
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 0F: je 0x58522971
        __asm _emit 0x74
        __asm _emit 0x0f
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F4 FD FF FF: call 0x58522760
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58522978
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 98: jmp 0x58522912
        __asm _emit 0xeb
        __asm _emit 0x98
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0ch], 0
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 10h], 0
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 8], 0
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 4], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
