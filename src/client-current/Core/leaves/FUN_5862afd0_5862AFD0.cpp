// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5862AFD0 .. +0x44 bytes.
extern "C" __declspec(naked) void FUN_5862afd0_5862AFD0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 26ch]
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 264h]
        sub eax, 2
        cmp ecx, eax
        ; Exact mapped bytes 7D 15: jge 0x5862b007
        __asm _emit 0x7d
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ecx + 26ch]
        add dl, 1
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 26ch], dl
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 81 FE FF FF: call 0x5862ae90
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
