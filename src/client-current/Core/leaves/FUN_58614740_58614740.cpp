// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58614740 .. +0x5F bytes.
extern "C" __declspec(naked) void FUN_58614740_58614740() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 74h]
        ; Exact mapped bytes E8 63 C4 1A 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xc4
        __asm _emit 0x1a
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 74 19: je 0x5861477b
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8ch]
        mov dword ptr [ebp - 8], ecx
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 68 16 E7 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x16
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 17: jmp 0x58614792
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8ch]
        mov dword ptr [ebp - 0ch], eax
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 4F 16 E7 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x16
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C6 12 E7 FF: call 0x58485a60
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x12
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
