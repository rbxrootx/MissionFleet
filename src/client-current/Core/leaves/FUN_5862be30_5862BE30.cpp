// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5862BE30 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_5862be30_5862BE30() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 9dh]
        test ecx, ecx
        ; Exact mapped bytes 7E 1D: jle 0x5862be62
        __asm _emit 0x7e
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [edx + 9dh]
        sub al, 1
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 9dh], al
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3F FF FF FF: call 0x5862bda0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
