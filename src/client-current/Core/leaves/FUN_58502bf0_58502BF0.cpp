// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58502BF0 .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_58502bf0_58502BF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 0F 53 F8 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x53
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1E 53 F8 FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x53
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 4F E9 FF FF: call 0x58501570
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 8D E9 FF FF: call 0x585015c0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov esp, ebp
        pop ebp
        ret
    }
}
