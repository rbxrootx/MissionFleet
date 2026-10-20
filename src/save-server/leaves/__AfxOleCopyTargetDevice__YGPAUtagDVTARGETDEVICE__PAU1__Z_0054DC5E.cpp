// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054DC5E .. +0x46 bytes.
extern "C" __declspec(naked) void __AfxOleCopyTargetDevice__YGPAUtagDVTARGETDEVICE__PAU1__Z_0054DC5E() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 04: jne 0x54dc6c
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 32: jmp 0x54dc9e
        __asm _emit 0xeb
        __asm _emit 0x32
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 15 20 C3 68 00: call dword ptr [0x68c320]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 04: jne 0x54dc85
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 19: jmp 0x54dc9e
        __asm _emit 0xeb
        __asm _emit 0x19
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 68 76 F1 FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x76
        __asm _emit 0xf1
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
