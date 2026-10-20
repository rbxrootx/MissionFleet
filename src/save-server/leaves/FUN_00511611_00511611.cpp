// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00511611 .. +0x7F bytes.
extern "C" __declspec(naked) void FUN_00511611_00511611() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes FF 15 DC B9 68 00: call dword ptr [0x68b9dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        and eax, 80000000h
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x511641
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes FF 15 DC B9 68 00: call dword ptr [0x68b9dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        and eax, 0ffffh
        xor ecx, ecx
        cmp eax, 4
        sete cl
        and ecx, 0ffh
        test ecx, ecx
        ; Exact mapped bytes 75 35: jne 0x511676
        __asm _emit 0x75
        __asm _emit 0x35
        ; Exact mapped bytes FF 15 DC B9 68 00: call dword ptr [0x68b9dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        and eax, 80000000h
        test eax, eax
        ; Exact mapped bytes 75 1D: jne 0x51166d
        __asm _emit 0x75
        __asm _emit 0x1d
        ; Exact mapped bytes FF 15 DC B9 68 00: call dword ptr [0x68b9dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        and eax, 0ffffh
        xor edx, edx
        cmp eax, 3
        sete dl
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 75 09: jne 0x511676
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 0E: jmp 0x511684
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 673dcch
        ; Exact mapped bytes FF 15 58 BF 68 00: call dword ptr [0x68bf58]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes A3 08 6D 68 00: mov dword ptr [0x686d08], eax
        __asm _emit 0xa3
        __asm _emit 0x08
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
