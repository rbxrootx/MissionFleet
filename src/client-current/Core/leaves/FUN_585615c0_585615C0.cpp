// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585615C0 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_585615c0_585615C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        push 0f4241h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DA FA FF FF: call 0x585610b0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        movzx eax, byte ptr [ebp + 0ch]
        push eax
        movzx ecx, byte ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 25 ED FF FF: call 0x58560310
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xed
        __asm _emit 0xff
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
