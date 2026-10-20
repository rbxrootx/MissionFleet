// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042E3B1 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_0042e3b1_0042E3B1() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 38h]
        test ecx, ecx
        ; Exact mapped bytes 74 18: je 0x42e3d6
        __asm _emit 0x74
        __asm _emit 0x18
        lea edx, [ebp + 20h]
        mov eax, dword ptr [ecx]
        push edx
        push dword ptr [ebp + 1ch]
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes FF 50 58: call dword ptr [eax + 0x58]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x58
        pop ebp
        ret
    }
}
