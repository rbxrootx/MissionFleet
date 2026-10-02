// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584AA480 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_584aa480() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B9 FF FF FF: call 0x584aa450
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x584aa4af
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 07 CE FD FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xce
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
