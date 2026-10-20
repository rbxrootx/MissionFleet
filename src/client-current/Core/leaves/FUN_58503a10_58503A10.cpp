// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58503A10 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_58503a10_58503A10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 8E 38 F8 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x38
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 10 DA FF FF: call 0x58501450
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
