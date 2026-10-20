// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585E6D70 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_585e6d70_585E6D70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [ebp + 8]
        mov byte ptr [eax + 57ch], cl
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 57ch]
        and eax, 40h
        ; Exact mapped bytes 75 17: jne 0x585e6dab
        __asm _emit 0x75
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 21e84h]
        mov dword ptr [ebp - 8], edx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 36 F1 E9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xf1
        __asm _emit 0xe9
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
