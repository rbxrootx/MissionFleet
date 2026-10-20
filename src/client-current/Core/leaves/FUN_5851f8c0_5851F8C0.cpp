// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851F8C0 .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_5851f8c0_5851F8C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ecx + 4]
        mov ecx, edx
        ; Exact mapped bytes E8 05 C4 FE FF: call 0x5850bce0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 75 09: jne 0x5851f8f1
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 07: jmp 0x5851f8f8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [ebp - 8]
        mov byte ptr [eax + 4], cl
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 5], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
