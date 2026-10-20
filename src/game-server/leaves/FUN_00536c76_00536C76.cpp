// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00536C76 .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_00536c76_00536C76() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 3ch]
        push eax
        mov ecx, dword ptr [ebp + 38h]
        and ecx, 0ffh
        push ecx
        mov edx, dword ptr [ebp + 34h]
        and edx, 0ffh
        push edx
        mov eax, dword ptr [ebp + 30h]
        and eax, 0ffh
        push eax
        mov ecx, dword ptr [ebp + 2ch]
        and ecx, 0ffh
        push ecx
        mov edx, dword ptr [ebp + 28h]
        and edx, 0ffh
        push edx
        mov eax, dword ptr [ebp + 24h]
        and eax, 0ffh
        push eax
        mov ecx, dword ptr [ebp + 20h]
        and ecx, 0ffh
        push ecx
        mov edx, dword ptr [ebp + 1ch]
        and edx, 0ffh
        push edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 98 21 5E 00: call dword ptr [0x5e2198]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 18 D0 FC FF: call 0x503d0a
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xd0
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 38 00: ret 0x38
        __asm _emit 0xc2
        __asm _emit 0x38
        __asm _emit 0x00
    }
}
