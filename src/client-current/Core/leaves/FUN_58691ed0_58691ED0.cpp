// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58691ED0 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_58691ed0_58691ED0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + eax*4 + 604h], edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*4 + 604h]
        push eax
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BC BE EB FF: call 0x5854ddc0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xbe
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
