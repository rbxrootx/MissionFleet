// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58793A50 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_58793a50_58793A50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        movzx ecx, byte ptr [ebp + 0ch]
        push ecx
        movzx edx, byte ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C4 73 FF FF: call 0x5878ae40
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
