// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047DC10 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_0047dc10_0047DC10() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 87 FA FF FF: call 0x47d6b0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [eax]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ebp - 4]
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 A0 AB 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xab
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
