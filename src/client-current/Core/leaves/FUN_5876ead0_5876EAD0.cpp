// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876EAD0 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_5876ead0_5876EAD0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 588b5230h
        push 80h
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 115ch]
        ; Exact mapped bytes E8 ED B6 D3 FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xb6
        __asm _emit 0xd3
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 F7 22 D4 FF: call 0x584b0df0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x22
        __asm _emit 0xd4
        __asm _emit 0xff
        add esp, 10h
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
