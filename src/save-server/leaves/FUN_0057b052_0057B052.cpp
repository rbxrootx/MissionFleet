// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0057B052 .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_0057b052_0057B052() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov eax, dword ptr [ebp + 8]
        sub eax, 6ch
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx], 0
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 2C E2 FF FF: call 0x5792a2
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xe2
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
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea edx, [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 15 F0 C2 68 00: call dword ptr [0x68c2f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
