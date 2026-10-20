// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C7BB0 .. +0x47 bytes.
extern "C" __declspec(naked) void FUN_587c7bb0_587C7BB0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 18 F1 FF FF: call 0x587c6cf0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588be5f4h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 12ch], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
