// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878C0F0 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_5878c0f0_5878C0F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BF B3 CF FF: call 0x584874c0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xb3
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C0 FF FF FF: call 0x5878c0d0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
