// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042D7AC .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_0042d7ac_0042D7AC() {
    __asm {
        push ebp
        mov ebp, esp
        lea eax, [ebp + 8]
        push eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8C FF FF FF: call 0x42d747
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x42d7ca
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [eax + 8]
        push 1
        mov dword ptr [ecx], eax
        pop eax
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
