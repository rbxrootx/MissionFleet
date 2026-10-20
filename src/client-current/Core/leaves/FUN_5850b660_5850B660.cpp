// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850B660 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_5850b660_5850B660() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        ; Exact mapped bytes E8 85 F1 F9 FF: call 0x584aa7f0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xf1
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 74 08: je 0x5850b678
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 1F: jmp 0x5850b697
        __asm _emit 0xeb
        __asm _emit 0x1f
        ; Exact mapped bytes E8 73 F1 F9 FF: call 0x584aa7f0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xf1
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x5850b68a
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x5850b691
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
