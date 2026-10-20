// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58502D40 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_58502d40_58502D40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 5E 45 F8 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x45
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CE F3 F9 FF: call 0x584a2140
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xf3
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
