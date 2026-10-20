// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584AA3A0 .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_584aa3a0_584AA3A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 8]
        or eax, 0fh
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 76 05: jbe 0x584aa3bc
        __asm _emit 0x76
        __asm _emit 0x05
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes EB 31: jmp 0x584aa3ed
        __asm _emit 0xeb
        __asm _emit 0x31
        mov edx, dword ptr [ebp + 0ch]
        shr edx, 1
        mov eax, dword ptr [ebp + 10h]
        sub eax, edx
        cmp dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 76 05: jbe 0x584aa3d0
        __asm _emit 0x76
        __asm _emit 0x05
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes EB 1D: jmp 0x584aa3ed
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp + 0ch]
        shr ecx, 1
        add ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], ecx
        lea edx, [ebp - 8]
        push edx
        lea eax, [ebp - 4]
        push eax
        ; Exact mapped bytes E8 38 F5 FF FF: call 0x584a9920
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [eax]
        mov esp, ebp
        pop ebp
        ret
    }
}
