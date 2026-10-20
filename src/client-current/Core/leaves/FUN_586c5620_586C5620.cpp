// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586C5620 .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_586c5620_586C5620() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 274h]
        mov dword ptr [ebp - 8], ecx
        movzx edx, byte ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 9E 08 DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x08
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 278h]
        mov dword ptr [ebp - 0ch], ecx
        movzx edx, byte ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 85 08 DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0xdc
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
