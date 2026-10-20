// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5862DAF0 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_5862daf0_5862DAF0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov esi, dword ptr [eax + 13ch]
        add esi, 8
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0f8h]
        ; Exact mapped bytes E8 DE BB EF FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xbb
        __asm _emit 0xef
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 7F 1E: jg 0x5862db34
        __asm _emit 0x7f
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 13ch]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 13ch], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2D FE FF FF: call 0x5862d960
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
