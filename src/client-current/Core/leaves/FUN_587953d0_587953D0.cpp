// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587953D0 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_587953d0_587953D0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        movzx eax, word ptr [ebp + 10h]
        push eax
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A0 F5 01 00: call 0x587b4990
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx], 588b6c34h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 50h], ecx
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
