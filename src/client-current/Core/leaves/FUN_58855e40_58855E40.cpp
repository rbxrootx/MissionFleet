// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58855E40 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_58855e40_58855E40() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ecx]
        dec eax
        mov dword ptr [ecx], eax
        mov cl, byte ptr [ebp + 8]
        test cl, cl
        ; Exact mapped bytes 74 14: je 0x58855e65
        __asm _emit 0x74
        __asm _emit 0x14
        cmp byte ptr [eax], cl
        ; Exact mapped bytes 74 10: je 0x58855e65
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes E8 15 C6 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 46 B1 FF FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x46
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
