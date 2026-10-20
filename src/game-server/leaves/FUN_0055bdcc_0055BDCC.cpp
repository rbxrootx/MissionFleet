// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055BDCC .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_0055bdcc_0055BDCC() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 38ah
        push 5cebe0h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 7A F3 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xf3
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0b4h
        push ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 84h
        push edx
        ; Exact mapped bytes E8 91 09 F4 FF: call 0x49c790
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x09
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x55be2e
        __asm _emit 0x74
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        and ecx, 8
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x55be1a
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 16: jmp 0x55be30
        __asm _emit 0xeb
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 64h]
        and eax, 10h
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x55be2e
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 2
        ; Exact mapped bytes EB 02: jmp 0x55be30
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
