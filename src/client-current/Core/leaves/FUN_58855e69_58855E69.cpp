// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58855E69 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_58855e69_58855E69() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ecx]
        add eax, -2
        mov dword ptr [ecx], eax
        ; Exact mapped bytes 66 8B 4D 08: mov cx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 15: je 0x58855e93
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 66 39 08: cmp word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x08
        ; Exact mapped bytes 74 10: je 0x58855e93
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes E8 E7 C5 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 18 B1 FF FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
