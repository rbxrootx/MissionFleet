// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584918F0 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_584918f0_584918F0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 8
        ; Exact mapped bytes E8 81 60 FF FF: call 0x58487980
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 A2 59 FF FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x59
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx], edx
        mov dword ptr [ecx + 4], eax
        mov esp, ebp
        pop ebp
        ret
    }
}
