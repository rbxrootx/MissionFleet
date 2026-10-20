// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58704540 .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_58704540_58704540() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 88h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 88h]
        mov ecx, 2
        imul edx, ecx, 0
        movzx eax, word ptr [eax + edx + 8]
        xor eax, 55h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 84h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 31 00 00 00: call 0x587045b0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 8], eax
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AE B2 D9 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xb2
        __asm _emit 0xd9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C6 12 0B 00: call 0x587b5860
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x12
        __asm _emit 0x0b
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
