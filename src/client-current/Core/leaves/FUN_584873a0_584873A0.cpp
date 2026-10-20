// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584873A0 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_584873a0_584873A0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 4
        ; Exact mapped bytes E8 D1 05 00 00: call 0x58487980
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 F2 FE FF FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [eax]
        mov dword ptr [edx], eax
        mov esp, ebp
        pop ebp
        ret
    }
}
