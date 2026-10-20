// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58585880 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_58585880_58585880() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        movzx edx, byte ptr [ebp - 1]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 50 BA F1 FF: call 0x584a12f0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xba
        __asm _emit 0xf1
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 33 FB FF FF: call 0x585853e0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
