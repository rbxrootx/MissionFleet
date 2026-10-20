// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58585090 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_58585090_58585090() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588aab80h
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 74 21: je 0x585850cc
        __asm _emit 0x74
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 8], eax
        push 4
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 75 BF 2A 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xbf
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
