// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005330CE .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_005330ce_005330CE() {
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
        ; Exact mapped bytes FF 15 A0 B6 68 00: call dword ptr [0x68b6a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 74 5B FB FF: call 0x4e8cbe
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x5b
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 38 00: ret 0x38
        __asm _emit 0xc2
        __asm _emit 0x38
        __asm _emit 0x00
    }
}
