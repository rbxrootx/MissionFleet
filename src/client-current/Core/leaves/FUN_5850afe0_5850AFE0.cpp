// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850AFE0 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_5850afe0_5850AFE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CF B9 F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xb9
        __asm _emit 0xf7
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 86 C6 FF FF: call 0x58507680
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x5850b017
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 27 CA F7 FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xca
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 09: jne 0x5850b017
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x5850b01e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        movzx eax, byte ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
