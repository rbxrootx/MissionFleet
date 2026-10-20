// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055974F .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_0055974f_0055974F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 72 77 F9 FF: call 0x4f0ed4
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x77
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5ch]
        push edx
        push 5cea64h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A5 B3 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xb3
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4E B5 FD FF: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xb5
        __asm _emit 0xfd
        __asm _emit 0xff
        push 5cea74h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 91 B3 FD FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xb3
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
