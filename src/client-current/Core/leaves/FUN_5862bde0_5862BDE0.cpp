// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5862BDE0 .. +0x44 bytes.
extern "C" __declspec(naked) void FUN_5862bde0_5862BDE0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 9dh]
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 8ch]
        sub eax, 1
        cmp ecx, eax
        ; Exact mapped bytes 7D 1E: jge 0x5862be20
        __asm _emit 0x7d
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ecx + 9dh]
        add dl, 1
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 9dh], dl
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 81 FF FF FF: call 0x5862bda0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
