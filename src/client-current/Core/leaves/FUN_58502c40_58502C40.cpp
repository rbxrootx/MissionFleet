// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58502C40 .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_58502c40_58502C40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0ch], ecx
        lea edx, [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes E8 5E 41 F8 FF: call 0x58486dc0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x41
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 8
        lea edx, [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, 4
        push ecx
        ; Exact mapped bytes E8 48 41 F8 FF: call 0x58486dc0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x41
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx + 4], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
