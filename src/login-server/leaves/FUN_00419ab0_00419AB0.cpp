// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00419AB0 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_00419ab0_00419AB0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ecx + 4ch]
        and dword ptr [ebp - 4], 0
        lea edx, [ebp - 4]
        mov ecx, dword ptr [eax]
        push edx
        push 440408h
        push eax
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        test eax, eax
        ; Exact mapped bytes 7C 15: jl 0x419ae2
        __asm _emit 0x7c
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 4]
        push dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 51 18: call dword ptr [ecx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
