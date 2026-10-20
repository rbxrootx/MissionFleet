// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588304A2 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_588304a2_588304A2() {
    __asm {
        push ebp
        mov ebp, esp
        mov ecx, dword ptr [ebp + 8]
        mov eax, 588c1140h
        cmp dword ptr [eax], ecx
        ; Exact mapped bytes 74 11: je 0x588304c2
        __asm _emit 0x74
        __asm _emit 0x11
        add eax, 8
        cmp eax, 588c13b8h
        ; Exact mapped bytes 75 F2: jne 0x588304ad
        __asm _emit 0x75
        __asm _emit 0xf2
        mov eax, 588c19e4h
        pop ebp
        ret
        mov eax, dword ptr [eax + 4]
        pop ebp
        ret
    }
}
