// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5862DB40 .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_5862db40_5862DB40() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 13ch], 0
        ; Exact mapped bytes 7E 1E: jle 0x5862db71
        __asm _emit 0x7e
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 13ch]
        sub edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 13ch], edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F0 FD FF FF: call 0x5862d960
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
