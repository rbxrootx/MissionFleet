// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58504290 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_58504290_58504290() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        movzx eax, word ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6C E0 F7 FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xe0
        __asm _emit 0xf7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx], 588a3a68h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 54h], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
