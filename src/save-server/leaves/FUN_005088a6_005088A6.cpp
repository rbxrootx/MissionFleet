// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005088A6 .. +0x79 bytes.
extern "C" __declspec(naked) void FUN_005088a6_005088A6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5088c8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 7ch
        ; Exact mapped bytes E8 D7 DA 01 00: call 0x5263aa
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 7D 40: jge 0x508918
        __asm _emit 0x7d
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 97 15 00 00: call 0x509e7b
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 636f08h
        ; Exact mapped bytes E8 36 19 FD FF: call 0x4da225
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x19
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 1B: je 0x508916
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 90 D0 00 00 00: call dword ptr [eax + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x508916
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB A7: jmp 0x5088bf
        __asm _emit 0xeb
        __asm _emit 0xa7
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
