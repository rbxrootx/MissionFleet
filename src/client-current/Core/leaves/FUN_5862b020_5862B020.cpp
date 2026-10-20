// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5862B020 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_5862b020_5862B020() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 26ch]
        test ecx, ecx
        ; Exact mapped bytes 7E 14: jle 0x5862b049
        __asm _emit 0x7e
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [edx + 26ch]
        sub al, 1
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 26ch], al
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3F FE FF FF: call 0x5862ae90
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
