// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58879A70 .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_58879a70() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x58879a96
        __asm _emit 0x74
        __asm _emit 0x1a
        cmp eax, 1
        ; Exact mapped bytes 74 15: je 0x58879a96
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes E8 E9 89 FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 1A 75 FD FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x75
        __asm _emit 0xfd
        __asm _emit 0xff
        or eax, 0ffffffffh
        pop ebp
        ret
        mov ecx, 58969c7ch
        xchg dword ptr [ecx], eax
        pop ebp
        ret
    }
}
