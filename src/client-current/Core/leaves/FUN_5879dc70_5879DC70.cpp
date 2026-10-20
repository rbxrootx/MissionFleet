// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879DC70 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_5879dc70_5879DC70() {
    __asm {
        lea eax, [esp + 10h]
        push eax
        push 0
        push dword ptr [esp + 14h]
        push dword ptr [esp + 14h]
        push dword ptr [esp + 14h]
        ; Exact mapped bytes E8 78 38 D1 FF: call 0x584b1500
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x38
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        push dword ptr [eax + 4]
        or ecx, 2
        push ecx
        ; Exact mapped bytes E8 69 86 0B 00: call 0x588562ff
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x86
        __asm _emit 0x0b
        __asm _emit 0x00
        or ecx, 0ffffffffh
        add esp, 1ch
        test eax, eax
        cmovs eax, ecx
        ret
    }
}
