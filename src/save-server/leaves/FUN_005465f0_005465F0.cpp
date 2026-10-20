// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005465F0 .. +0x7F bytes.
extern "C" __declspec(naked) void FUN_005465f0_005465F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 04: jne 0x546603
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 63: jmp 0x546666
        __asm _emit 0xeb
        __asm _emit 0x63
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 74 2A F2 FF: call 0x469080
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x2a
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 4
        lea ecx, [eax + eax + 2]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 20 C3 68 00: call dword ptr [0x68c320]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 3A: je 0x546663
        __asm _emit 0x74
        __asm _emit 0x3a
        push 0
        push 0
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        push -1
        mov edx, dword ptr [ebp + 8]
        push edx
        push 0
        push 0
        ; Exact mapped bytes FF 15 1C BA 68 00: call dword ptr [0x68ba1c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x54665d
        __asm _emit 0x75
        __asm _emit 0x14
        push 0a6h
        push 6792d4h
        ; Exact mapped bytes E8 E8 26 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54665d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C6: jne 0x546629
        __asm _emit 0x75
        __asm _emit 0xc6
        mov eax, dword ptr [ebp - 8]
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
