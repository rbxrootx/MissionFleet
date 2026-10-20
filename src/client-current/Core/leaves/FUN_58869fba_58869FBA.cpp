// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58869FBA .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_58869fba_58869FBA() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        and dword ptr [ebp - 4], 0
        lea eax, [ebp - 4]
        push 2
        push eax
        push 20001004h
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E1 57 00 00: call 0x5886f7b8
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x57
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x58869fe2
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, dword ptr [ebp - 4]
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x58869fe7
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, 0fde9h
        leave
        ret
    }
}
