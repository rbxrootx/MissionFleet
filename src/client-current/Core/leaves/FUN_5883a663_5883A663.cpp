// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883A663 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_5883a663_5883A663() {
    __asm {
        push ebp
        mov ebp, esp
        push dword ptr [ebp + 1ch]
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 83 6E C7 FF: call 0x584b1500
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x6e
        __asm _emit 0xc7
        __asm _emit 0xff
        push dword ptr [eax + 4]
        push dword ptr [eax]
        ; Exact mapped bytes E8 34 BC 01 00: call 0x588562bb
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0x00
        or ecx, 0ffffffffh
        add esp, 20h
        test eax, eax
        cmovs eax, ecx
        pop ebp
        ret
    }
}
