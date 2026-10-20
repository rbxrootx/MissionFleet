// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C95C0 .. +0x30 bytes.
extern "C" __declspec(naked) void FUN_004c95c0_004C95C0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov cl, byte ptr [eax]
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx], cl
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 25 44 F9 FF: call 0x45da00
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x44
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 39 43 F9 FF: call 0x45d920
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x43
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
