// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00572494 .. +0x47 bytes.
extern "C" __declspec(naked) void FUN_00572494_00572494() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov eax, dword ptr [ebp + 8]
        sub eax, 6ch
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], 0
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 3A E4 FF FF: call 0x5708f2
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes FF 51 3C: call dword ptr [ecx + 0x3c]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x3c
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 E8 29 5E 00: call dword ptr [0x5e29e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
