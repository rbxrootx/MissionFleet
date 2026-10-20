// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883A7FB .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_5883a7fb_5883A7FB() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push dword ptr [ebp + 0ch]
        lea eax, [ebp - 8]
        push eax
        ; Exact mapped bytes E8 14 00 00 00: call 0x5883a820
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
