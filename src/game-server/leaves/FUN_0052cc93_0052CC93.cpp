// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052CC93 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_0052cc93_0052CC93() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24h]
        and ecx, 40h
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x52ccab
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 15: jmp 0x52ccc0
        __asm _emit 0xeb
        __asm _emit 0x15
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 362h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 19 EF 00 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
