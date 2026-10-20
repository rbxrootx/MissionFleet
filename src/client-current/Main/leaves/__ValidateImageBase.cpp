// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897D8A0 .. +0x35 bytes.
extern "C" __declspec(naked) void __ValidateImageBase() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov ecx, dword ptr [ebp + 8]
        mov eax, 5a4dh
        ; Exact mapped bytes 66 39 01: cmp word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x01
        ; Exact mapped bytes 74 04: je 0x5897d8b6
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        pop ebp
        ret
        mov eax, dword ptr [ecx + 3ch]
        add eax, ecx
        cmp dword ptr [eax], 4550h
        ; Exact mapped bytes 75 EF: jne 0x5897d8b2
        __asm _emit 0x75
        __asm _emit 0xef
        xor edx, edx
        mov ecx, 10bh
        ; Exact mapped bytes 66 39 48 18: cmp word ptr [eax + 0x18], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x48
        __asm _emit 0x18
        sete dl
        mov eax, edx
        pop ebp
        ret
    }
}
